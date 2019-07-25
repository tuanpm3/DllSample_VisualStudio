#include <DllExport.h>
#include "stdio.h"
#include <conio.h>
#include <stdio.h>

void main()
{
	//
	printf("FUNCTION %s \n", __FUNCTION__);

	//
	CDllExport cDllExportObj;
	cDllExportObj.CDllExportMethod();

	//
	fnDllExport();

	_getch();

	return;
}