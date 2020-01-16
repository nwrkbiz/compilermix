/**
 * @cond
 * Filename: main.cpp
 * ----------------------------------------------------------------------------
 * "THE BEER-WARE LICENSE" (Revision 42):
 * <giri@nwrk.biz> wrote this file. As long as you retain this notice you
 * can do whatever you want with this stuff. If we meet some day, and you think
 * this stuff is worth it, you can buy me a beer in return Daniel Giritzer
 * ----------------------------------------------------------------------------
 * @endcond
 */
#include "foo.h"
#include "so/foo_manip.h" // Compiled using CLANG (C++17)
#include <string>
#include <iostream>

int main()
{
	foo* fooObj = new foo("foo");
	FOO_MANIP_SayFoo(fooObj);
	FOO_MANIP_SetFoo(fooObj, "newFoo");
	FOO_MANIP_SayFoo(fooObj);
        std::cout << "fooObj->GetFoo(): " << fooObj->GetFoo() << std::endl;


	// Use foo_manip.so to set m_Foo back to 'foo'
	FOO_MANIP_ResetFoo(fooObj);
        FOO_MANIP_SayFoo(fooObj);

	std::cout << "fooObj->GetFoo(): " << fooObj->GetFoo() << std::endl;

	FOO_MANIP_SetFoo(fooObj, "Schinkenstangerl");
	std::string fooStr(FOO_MANIP_GetFoo(fooObj));
	std::cout << fooStr << std::endl;

	return 0;
}
