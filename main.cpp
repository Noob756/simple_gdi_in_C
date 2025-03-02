#include <windows.h>

int main() {
	while(true){
		HWND hwnd = FindWindow(NULL, "Untitled - Notepad");
if (hwnd != NULL) {
SetWindowPos(hwnd, HWND_TOPMOST, 120, 100, 200, 29, SWP_SHOWWINDOW);
SetWindowPos(hwnd, HWND_TOPMOST, 12240, 1123, 440, 29, SWP_SHOWWINDOW);
}
return 0;
	}
}