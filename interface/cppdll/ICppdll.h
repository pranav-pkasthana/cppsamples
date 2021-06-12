#pragma once

class cppdllImpExp Icppdll {
public:
	Icppdll(){}
	virtual ~Icppdll(){}
	virtual void ExposedFunction() = 0;
};

extern "C" {
	void cppdllImpExp makeCppDllObject(Icppdll** obj);
}
