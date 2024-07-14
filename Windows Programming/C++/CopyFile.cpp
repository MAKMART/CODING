#include <iostream>
#include <windows.h>
using namespace std;
//https://learn.microsoft.com/en-us/windows/win32/api/winbase/nf-winbase-copyfile
int main(){

  //CopyFile(EXISTING FILE NAME, NEW FILE NAME, FAIL IF EXISTS) 
  //FAIL IF EXISTS = If this parameter is TRUE and the new file specified by lpNewFileName already exists, the function fails.
  //If this parameter is FALSE and the new file already exists, the function overwrites the existing file and succeeds.

  BOOL bFile = CopyFile("C:\\Users\\Marco Martin\\Desktop\\CODING\\Windows Programming\\OldFile.txt", 
                        "C:\\Users\\Marco Martin\\Desktop\\CODING\\Windows Programming\\NewFile.txt", TRUE);
  if (!bFile)
  {
    wcout << "File copy failed with error: -" << GetLastError() << endl;
  }
  else
  {
    wcout << "File copy successful" << endl;
  }
  system("PAUSE");
  return 0;
}