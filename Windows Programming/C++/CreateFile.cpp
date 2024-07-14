#include <iostream>
#include <windows.h>
using namespace std;
//https://learn.microsoft.com/en-us/windows/win32/api/fileapi/nf-fileapi-createfilea
//https://learn.microsoft.com/en-us/windows/win32/api/handleapi/nf-handleapi-closehandle
int main(){
  HANDLE hFile = CreateFile("C:\\Users\\Marco Martin\\Desktop\\CODING\\Windows Programming\\TestFile.txt", GENERIC_READ|GENERIC_WRITE, 
                            FILE_SHARE_READ, nullptr, CREATE_NEW, FILE_ATTRIBUTE_NORMAL, nullptr);
  if (!hFile)
  {
    wcout << "File creation failed with error: -" << GetLastError() << endl;
  }
  else
  {
    wcout << "File creation succesful" << endl;
  }
  CloseHandle(hFile);
  system("PAUSE");
  return 0;
}