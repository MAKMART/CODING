#include <windows.h>

void OnSize(HWND hwnd, UINT flag, int width, int height);
LRESULT CALLBACK WindowProcedure(HWND, UINT, WPARAM, LPARAM);
HWND textfield;
int WINAPI WinMain(HINSTANCE hInst, HINSTANCE hPrevInst, LPSTR args, int ncmdshow)
{
  WNDCLASSW wc = {0};

  wc.hbrBackground = (HBRUSH)COLOR_WINDOW;
  wc.hCursor = LoadCursor(nullptr, IDC_ARROW);
  wc.hInstance = hInst;
  wc.lpszClassName = L"myWindowClass";
  wc.lpfnWndProc = WindowProcedure;

  if (!RegisterClassW(&wc))
  {
    return -1;
  }
  CreateWindowW(L"myWindowClass", L"My Window", WS_OVERLAPPEDWINDOW | WS_VISIBLE, 100, 100, 500, 500, nullptr, nullptr, nullptr, nullptr);

  MSG msg = {0};
  while (GetMessage(&msg, nullptr, NULL, NULL))
  {
    TranslateMessage(&msg);
    DispatchMessage(&msg);
  }
  MessageBox(NULL, "You have been hacked!", "ERROR 404", MB_ICONWARNING);
  return 0;
}
LRESULT CALLBACK WindowProcedure(HWND hWnd, UINT msg, WPARAM wp, LPARAM lp){

  switch (msg)
  {
  case WM_DESTROY:
    PostQuitMessage(0);   //Makes the GetMessage() return 1
  break;
  case WM_CREATE:
    textfield = CreateWindow("Static", "HELLLLLLLLLLLLLOOOOOOOOOOOOO", WS_VISIBLE | WS_CHILD | WS_BORDER, 20, 20, 300, 25, hWnd, nullptr, nullptr, nullptr);
  break;
  default:
    return DefWindowProcW(hWnd, msg, wp, lp);
  break;
  }
  return 0;
}