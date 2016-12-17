#pragma once
#include <dinput.h>

class CKeyInput {
public:
	CString GetDInputDevices();
	bool KeyPressed(int key);
	bool KeyPressedOnce(int key);
	BYTE* KeyPressedAll();
	bool Create(CWnd* wnd);
	CKeyInput();
	virtual ~CKeyInput();
private:
	LPDIRECTINPUT8 lpDI; // DirectInput-Interface
	LPDIRECTINPUTDEVICE8 lpDIKey; // Tastatur-Interface
};

