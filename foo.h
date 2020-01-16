/**
 * @cond
 * Filename: foo.h
 * ----------------------------------------------------------------------------
 * "THE BEER-WARE LICENSE" (Revision 42):
 * <giri@nwrk.biz> wrote this file. As long as you retain this notice you
 * can do whatever you want with this stuff. If we meet some day, and you think
 * this stuff is worth it, you can buy me a beer in return Daniel Giritzer
 * ----------------------------------------------------------------------------
 * @endcond
 */
#ifndef FOO_H
#define FOO_H
#include <string>

class foo
{
public:
	foo(std::string fooTxt);
	std::string GetFoo() const;
	void SetFoo(std::string newFoo);
	virtual ~foo() = default;
private:
	std::string m_Foo = "foo";
};

#endif //FOO_H
