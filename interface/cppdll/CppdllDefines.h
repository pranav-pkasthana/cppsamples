#pragma once
#ifndef cppdll
#define cppdllImpExp __declspec(dllexport)
#else
#define cppdllImpExp __declspec(dllimport)
#endif // !cppdll

