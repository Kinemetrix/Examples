#pragma once
#ifndef __MYCLASS_H
#define __MYCLASS_H

/* _declspec(dllexport) and _declspec(dllimport) are used to tell which methods/classes to expose */
/* if this is not defined, then the DLL will not have a .lib file and you will get a linker error */
#ifdef  MYDLL_EXPORTS 
/*Enabled as "export" while compiling the dll project*/
#define DLLEXPORT __declspec(dllexport)  
#else
/*Enabled as "import" in the Client side for using already created dll file*/
#define DLLEXPORT __declspec(dllimport)  
#endif

class DLLEXPORT MyClass {
private:
	int m_i;
public:
	void int_set(int i);

	int int_get();
};

#endif