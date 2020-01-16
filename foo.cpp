/**
 * @cond
 * Filename: foo.cpp
 * ----------------------------------------------------------------------------
 * "THE BEER-WARE LICENSE" (Revision 42):
 * <giri@nwrk.biz> wrote this file. As long as you retain this notice you
 * can do whatever you want with this stuff. If we meet some day, and you think
 * this stuff is worth it, you can buy me a beer in return Daniel Giritzer
 * ----------------------------------------------------------------------------
 * @endcond
 */
#include "foo.h"

foo::foo(std::string fooTxt)
{
	m_Foo = fooTxt;
}

std::string foo::GetFoo() const
{
	return m_Foo;
}

void foo::SetFoo(std::string newFoo)
{
	m_Foo = newFoo;
}
