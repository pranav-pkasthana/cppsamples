#include "stdafx.h"
#include "cppdll.h"

Ccppdll::Ccppdll(){}
Ccppdll::~Ccppdll(){}

void Ccppdll::ExposedFunction(){}

extern "C" {
	void cppdllImpExp makeCppDllObject(Icppdll** obj) {
		*obj = new Ccppdll();
	}
}