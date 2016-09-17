#include <tchar.h>
#include <iostream>
using namespace std;
//This is used to import the static functions we export from the C# dll
extern "C"
{
	__declspec(dllimport) void CSFunction();
}
//The release directory isn't right, but you get the idea.  Make sure the C++ app links with the DLL's lib file that lives inside the C# output directory.
#ifdef _DEBUG
#pragma comment(lib, "C:/Users/jswick/Documents/visual studio 2015/Projects/UnmanagedExportsBlankSlate/UnmanagedExportsBlankSlate/bin/x64/Debug/UnmanagedExportsBlankSlate.lib")
#else
#pragma comment(lib, "../NativeExports/bin/x64/Release/NativeExports.lib")
#endif

int _tmain(int argc, _TCHAR* argv[])
{
	CSFunction();
	char t;
	cin >> t;
	return 0;
}