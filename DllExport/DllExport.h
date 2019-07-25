// The following ifdef block is the standard way of creating macros which make exporting 
// from a DLL simpler. All files within this DLL are compiled with the DLLEXPORT_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see 
// DLLEXPORT_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#ifdef DLLEXPORT_EXPORTS
#define DLLEXPORT_API __declspec(dllexport)
#else
#define DLLEXPORT_API __declspec(dllimport)
#endif

// This class is exported from the DllExport.dll
class DLLEXPORT_API CDllExport {
public:
	CDllExport(void);
	void CDllExportMethod();
};

// This global variable is exported from the DllExport.dll
extern DLLEXPORT_API int nDllExport;

// This function is exported from the DllExport.dll
DLLEXPORT_API int fnDllExport(void);
