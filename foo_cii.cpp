/**
 * @cond
 * Filename: foo_cii.cpp
 * ----------------------------------------------------------------------------
 * "THE BEER-WARE LICENSE" (Revision 42):
 * <giri@nwrk.biz> wrote this file. As long as you retain this notice you
 * can do whatever you want with this stuff. If we meet some day, and you think
 * this stuff is worth it, you can buy me a beer in return Daniel Giritzer
 * ----------------------------------------------------------------------------
 * @endcond
 */
// Compiled with GCC here we know how to handle foo objects
#include "foo_cii.h"
#include "foo.h"
#include <string>
#include <cstring>

CII_MANGLE const char* CII_CALLCONV CII_FOO_GetFoo(void * fooObj)
{
	std::string str = static_cast<foo*>(fooObj)->GetFoo();
	char* cstr = new char [str.length()+1];
  	std::strcpy (cstr, str.c_str());
	return cstr; // passing str.c_str() directly is forbidden here, because std::string manages its memory
	// pass char* allocated here directly to a std::string ctor to make memory managed again! Otherwise -> memleak
}

CII_MANGLE void CII_CALLCONV CII_FOO_SetFoo(void * fooObj, const char* newFoo)
{
        static_cast<foo*>(fooObj)->SetFoo(newFoo);
}
