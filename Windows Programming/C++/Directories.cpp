#include <iostream>
#include <windows.h>
using namespace std;
//https://learn.microsoft.com/en-us/windows/win32/api/winbase/nf-winbase-createdirectory
int main(){

  //CreateDirectory(PATH NAME, SECURITY ATTRIBUTES) IF security attributes == NULL then it will use the default ones

  const char* Path = "C:\\Users\\Marco Martin\\Desktop\\CODING\\New";
  BOOL bDir = CreateDirectory(Path, nullptr);
  if(bDir) 
  {
    wcout << L"Directory created successfully." << endl;
  } 
  else 
  {
    wcout << L"Directory failed to create with error code: - " << GetLastError() << endl;
  }
  getchar();
  bDir = RemoveDirectory(Path);
  if(bDir) 
  {
    wcout << L"Directory deleted successfully." << endl;
  } 
  else 
  {
    wcout << L"Directory failed to delete with error code: - " << GetLastError() << endl;
  }
  system("PAUSE");
  return 0;
}