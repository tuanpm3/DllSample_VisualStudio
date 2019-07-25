// DllExport.cpp : Defines the exported functions for the DLL application.
//

#include "DllExport.h"
#include "stdio.h"
#include <iostream>

// This is an example of an exported variable
DLLEXPORT_API int nDllExport=0;

// This is an example of an exported function.
DLLEXPORT_API int fnDllExport(void)
{
	std::cout << "Fucntion %s" << std::endl;
	return 42;
}

// This is the constructor of a class that has been exported.
// see DllExport.h for the class definition
CDllExport::CDllExport()
{
	printf("FUNCTION %s \n", __FUNCTION__);
	return;
}

DLLEXPORT_API void CDllExport::CDllExportMethod()
{
	printf("FUNCTION %s \n", __FUNCTION__);
}
