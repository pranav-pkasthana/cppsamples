#include "stdafx.h"
#include "loaddll.h"

//function pointer for cppdll interface
typedef void (*CREATE_CPP_DLL)(Icppdll** obj);

int main() {

	HMODULE h = LoadLibrary(L"cppdll.DLL");

	if (h) {

		CREATE_CPP_DLL fun = (CREATE_CPP_DLL)GetProcAddress(h, "makeCppDllObject");

		Icppdll* cppdllObj = NULL;

		fun(&cppdllObj);

		if (cppdllObj != NULL) {

			cppdllObj->ExposedFunction();
		}

		FreeLibrary(h);
	}
}