//---------------------------------------------------------------------------

#pragma hdrstop

#include "Unit2.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)

void Piano::CreatKeyboard(TImage *Keyboard)
{
	Keyboard->Canvas->Pen->Width = 2;
	Keyboard->Canvas->Pen->Color = clBlack;
	Keyboard->Canvas->Brush->Color = clWhite;
	x1 = 10, y1 = 30, x2 = 90, y2 = 220;
	int k = 10, space = 2;
	while (k)
	{
		Keyboard->Canvas->Rectangle(x1, y1, x2, y2);
		x1 += 80; x2 += 80;
		k--;
	}

	Keyboard->Canvas->Pen->Width = 2;
	Keyboard->Canvas->Pen->Color = clBlack;
	Keyboard->Canvas->Brush->Color = clWebLightBlue;
	x1 = 60, y1 = 30, x2 = 120, y2 = 130;
	while (k < 6)
	{
		k == 0 || k == 2 ? space = 2 : space = 1;
		Keyboard->Canvas->Rectangle(x1, y1, x2, y2);
		x1 += 80 * space; x2 += 80 * space;
		k++;
	}
}

void Piano::PressKeyWhite(TImage *Keyboard, int key)
{
	Keyboard->Canvas->Pen->Width = 0;
	int n = 80;
	if (key == 90)
	{
		Keyboard->Canvas->Pen->Color = clWebTomato;
		Keyboard->Canvas->Brush->Color = clWebTomato;
		x1 = 10, y1 = 30, x2 = 60, y2 = 220;
		Keyboard->Canvas->Rectangle(x1, y1, x2, y2);
		x1 = 10, y1 = 130, x2 = 90, y2 = 220;
		Keyboard->Canvas->Rectangle(x1, y1, x2, y2);
	}
	if (key == 88)
	{
		Keyboard->Canvas->Pen->Color = clWebDarkOrange;
		Keyboard->Canvas->Brush->Color = clWebDarkOrange;
		x1 = 120, y1 = 30, x2 = 170, y2 = 220;
		Keyboard->Canvas->Rectangle(x1, y1, x2, y2);
		x1 = 10 + n, y1 = 130, x2 = 90 + n, y2 = 220;
		Keyboard->Canvas->Rectangle(x1, y1, x2, y2);
	}
	if (key == 67)
	{
		Keyboard->Canvas->Pen->Color = clWebLemonChiffon;
		Keyboard->Canvas->Brush->Color = clWebLemonChiffon;
		x1 = 10 + n * 2, y1 = 30, x2 = 60 + n * 2, y2 = 220;
		Keyboard->Canvas->Rectangle(x1, y1, x2, y2);
		x1 = 10 + n * 2, y1 = 130, x2 = 90 + n * 2, y2 = 220;
		Keyboard->Canvas->Rectangle(x1, y1, x2, y2);
	}
	if (key == 86)
	{
		Keyboard->Canvas->Pen->Color = clWebPaleGreen;
		Keyboard->Canvas->Brush->Color = clWebPaleGreen;
		x1 = 30 + n * 3, y1 = 30, x2 = 60 + n * 3, y2 = 220;
		Keyboard->Canvas->Rectangle(x1, y1, x2, y2);
		x1 = 10 + n * 3, y1 = 130, x2 = 90 + n * 3, y2 = 220;
		Keyboard->Canvas->Rectangle(x1, y1, x2, y2);
	}
	if (key == 66)
	{
		Keyboard->Canvas->Pen->Color = clWebDeepskyBlue;
		Keyboard->Canvas->Brush->Color = clWebDeepskyBlue;
		x1 = 40 + n * 4, y1 = 30, x2 = 90 + n * 4, y2 = 220;
		Keyboard->Canvas->Rectangle(x1, y1, x2, y2);
		x1 = 10 + n * 4, y1 = 130, x2 = 90 + n * 4, y2 = 220;
		Keyboard->Canvas->Rectangle(x1, y1, x2, y2);
	}
	if (key == 78)
	{
		Keyboard->Canvas->Pen->Color = clWebDodgerBlue;
		Keyboard->Canvas->Brush->Color = clWebDodgerBlue;
		x1 = 10 + n * 5, y1 = 30, x2 = 60 + n * 5, y2 = 220;
		Keyboard->Canvas->Rectangle(x1, y1, x2, y2);
		x1 = 10 + n * 5, y1 = 130, x2 = 90 + n * 5, y2 = 220;
		Keyboard->Canvas->Rectangle(x1, y1, x2, y2);
	}
	if (key == 77)
	{
		Keyboard->Canvas->Pen->Color = clWebMediumPurple;
		Keyboard->Canvas->Brush->Color = clWebMediumPurple;
		x1 = 40 + n * 6, y1 = 30, x2 = 60 + n * 6, y2 = 220;
		Keyboard->Canvas->Rectangle(x1, y1, x2, y2);
		x1 = 10 + n * 6, y1 = 130, x2 = 90 + n * 6, y2 = 220;
		Keyboard->Canvas->Rectangle(x1, y1, x2, y2);
	}
	if (key == 73)
	{
		Keyboard->Canvas->Pen->Color = clWebHotPink;
		Keyboard->Canvas->Brush->Color = clWebHotPink;
		x1 = 40 + n * 7, y1 = 30, x2 = 60 + n * 7, y2 = 220;
		Keyboard->Canvas->Rectangle(x1, y1, x2, y2);
		x1 = 10 + n * 7, y1 = 130, x2 = 90 + n * 7, y2 = 220;
		Keyboard->Canvas->Rectangle(x1, y1, x2, y2);
	}
	if (key == 79)
	{
		Keyboard->Canvas->Pen->Color = clWebGreenYellow;
		Keyboard->Canvas->Brush->Color = clWebGreenYellow;
		x1 = 40 + n *  8, y1 = 30, x2 = 90 + n * 8, y2 = 220;
		Keyboard->Canvas->Rectangle(x1, y1, x2, y2);
		x1 = 10 + n * 8, y1 = 130, x2 = 90 + n * 8, y2 = 220;
		Keyboard->Canvas->Rectangle(x1, y1, x2, y2);
	}
	if (key == 81)
	{
		Keyboard->Canvas->Pen->Color = clWebMediumOrchid;
		Keyboard->Canvas->Brush->Color = clWebMediumOrchid;
		x1 = 10 + n * 9, y1 = 30, x2 = 90 + n * 9, y2 = 220;
		Keyboard->Canvas->Rectangle(x1, y1, x2, y2);
	}
}

void Piano::PressKeyLightBlue(TImage *Keyboard, int key)
{
	Keyboard->Canvas->Pen->Width = 0;
    Keyboard->Canvas->Pen->Color = clWebMagenta;
	Keyboard->Canvas->Brush->Color = clWebMagenta;
	if (key == 83)
	{
		x1 = 60, y1 = 30, x2 = 120, y2 = 130;
		Keyboard->Canvas->Rectangle(x1, y1, x2, y2);
	}
	if (key == 70)
	{
		x1 = 60 + 80 * 2, y1 = 30, x2 = 120 + 80 * 2, y2 = 130;
		Keyboard->Canvas->Rectangle(x1, y1, x2, y2);
	}
	if (key == 71)
	{
		x1 = 60 * 5, y1 = 30, x2 = 60 * 6, y2 = 130;
		Keyboard->Canvas->Rectangle(x1, y1, x2, y2);
	}
	if (key == 74)
	{
		x1 = 60 + 80 * 5, y1 = 30, x2 = 120 + 80 * 5, y2 = 130;
		Keyboard->Canvas->Rectangle(x1, y1, x2, y2);
	}
	if (key == 75)
	{
		x1 = 60 * 9, y1 = 30, x2 = 60 * 10, y2 = 130;
		Keyboard->Canvas->Rectangle(x1, y1, x2, y2);
	}
	if (key == 76)
	{
		x1 = 60 + 80 * 7, y1 = 30, x2 = 120 + 80 * 7, y2 = 130;
		Keyboard->Canvas->Rectangle(x1, y1, x2, y2);
	}
}
