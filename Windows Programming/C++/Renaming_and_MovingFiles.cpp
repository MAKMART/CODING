#include <iostream>
#include <windows.h>
using namespace std;
//https://learn.microsoft.com/en-us/windows/win32/api/winbase/nf-winbase-movefile
int main(){
  // SAME THING WITH MOVING TO A DIFFERENT DIRECTORY ↓
  BOOL bFile = MoveFile("C:\\Users\\Marco Martin\\Desktop\\CODING\\Windows Programming\\OldFile.txt", 
                        "C:\\Users\\Marco Martin\\Desktop\\CODING\\Windows Programming\\NewFile.txt");

if (!bFile)
{
  wcout << "Renaming/Copying file has failed with error: -" << GetLastError() << endl;
}
else
{
  wcout << "Renaming/Copying file has succeded" << endl;
}

system("PAUSE");
  return 0;
}