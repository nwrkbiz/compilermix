/**
 * @cond
 * Filename: foo_manip.cpp
 * ----------------------------------------------------------------------------
 * "THE BEER-WARE LICENSE" (Revision 42):
 * <giri@nwrk.biz> wrote this file. As long as you retain this notice you
 * can do whatever you want with this stuff. If we meet some day, and you think
 * this stuff is worth it, you can buy me a beer in return Daniel Giritzer
 * ----------------------------------------------------------------------------
 * @endcond
 */
// this file is compiled and linked completely with CLANG, can be linked combined with other high level CLANG libs
#include "foo_manip.h"
#include "../foo_cii.h" // CII -> Static lib compiled with GCC
#include <string>
#include <iostream>

CII_MANGLE void CII_CALLCONV FOO_MANIP_SayFoo(void * fooObj)
{
	// fooObj is a pointer to a object instance of a class created by an executable 
	// compiled  by GCC.
	// we use the CII binding compiled with the same GCC version to
	// manipulate the object. We can use this function because we avoid
	// name mangeling in the CII lib, and we only use standard C datatypes!
	std::string fooString(CII_FOO_GetFoo(fooObj)); // -> directly passed to std::string CTor to make allocated memory managed again!
	std::cout << fooString << "\n" << std::flush;
}

CII_MANGLE const char* CII_CALLCONV FOO_MANIP_GetFoo(void * fooObj)
{
	return CII_FOO_GetFoo(fooObj);
}

CII_MANGLE void CII_CALLCONV FOO_MANIP_SetFoo(void * fooObj, const char* newFoo)
{
	CII_FOO_SetFoo(fooObj, newFoo);
}

CII_MANGLE void CII_CALLCONV FOO_MANIP_ResetFoo(void * fooObj)
{
	CII_FOO_SetFoo(fooObj, "foo_reset");
}

