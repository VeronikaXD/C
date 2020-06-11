//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include "Unit2.h"
#include <mmsystem.h>
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;

Piano P;

int midiport = 0, click = 0;
HMIDIOUT device;

int KeyWhite[10] = {90, 88, 67, 86, 66, 78, 77, 188, 190, 191};
int KeyLightBlue[6] = {83, 70, 71, 74, 75, 76};
int pausa = 0;
bool open = false;
union {
   public:
   unsigned long word;
   unsigned char data[4];
} message;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::FormCreate(TObject *Sender)
{
	Keyboard->Canvas->Pen->Color = clWebPlum;
	Keyboard->Canvas->Brush->Color = clWebPlum;
	Keyboard->Canvas->Rectangle(0, 0, Keyboard->Width, Keyboard->Height);

	message.data[0] = 0x90;
	message.data[2] = 100;
	midiOutOpen(&device, midiport, 0, 0, CALLBACK_NULL);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::FormKeyDown(TObject *Sender, WORD &Key, TShiftState Shift)

{
	if (open)
	{	 // Белые клавиши:
		for (int i = 0; i < 10; i++)
		{
			if (Key == KeyWhite[i])
			{
				message.data[0] = 0x90;
				if (KeyWhite[i] == 188)
				{
					P.PressKeyWhite(Keyboard, 73);
                    message.data[1] = 73;
				}
				else if (KeyWhite[i] == 190)
				{
					P.PressKeyWhite(Keyboard, 79);
					message.data[1] = 79;
				}
				else if (KeyWhite[i] == 191)
				{
					P.PressKeyWhite(Keyboard, 81);
					message.data[1] = 81;
				}
				else
				{
					P.PressKeyWhite(Keyboard, KeyWhite[i]);
					message.data[1] = KeyWhite[i];
				}
				midiOutShortMsg(device, message.word);
			}
		}

	   // Голубые клавиши:
		for (int i = 0; i < 6; i++)
		{
			if (Key == KeyLightBlue[i])
			{
				message.data[0] = 0x90;
				message.data[1] = KeyLightBlue[i];
				P.PressKeyLightBlue(Keyboard, KeyLightBlue[i]);
				midiOutShortMsg(device, message.word);
			}
		}
	}
}
//---------------------------------------------------------------------------


void __fastcall TForm1::FormKeyUp(TObject *Sender, WORD &Key, TShiftState Shift)
{
	Pausa->Enabled = true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::PausaTimer(TObject *Sender)
{
	if(pausa != 10)
	{
		pausa++;
	}
	else
	{
		P.CreatKeyboard(Keyboard);
		pausa = 0;
        Pausa->Enabled = false;
    }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::KeyboardClick(TObject *Sender)
{
	if (click % 2 == 0)
	{
		P.CreatKeyboard(Keyboard);
		open = true;
	}
	else
	{
		Keyboard->Canvas->Pen->Color = clWebPlum;
		Keyboard->Canvas->Brush->Color = clWebPlum;
		Keyboard->Canvas->Rectangle(0, 0, Keyboard->Width, Keyboard->Height);
		open = false;
	}
    click++;
}
//---------------------------------------------------------------------------

