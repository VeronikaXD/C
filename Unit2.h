//---------------------------------------------------------------------------

#ifndef Unit2H
#define Unit2H
#include <vcl.h>
//---------------------------------------------------------------------------
#endif

class Piano
{
	int x1 = 0, y1 = 0, x2 = 0, y2 = 0;

	public:
		void CreatKeyboard(TImage *Keyboard);
		void PressKeyWhite(TImage *Keyboard, int key);
        void PressKeyLightBlue(TImage *Keyboard, int key);
};
