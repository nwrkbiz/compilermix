/**
 * @cond
 * Filename: foo_manip.h
 * ----------------------------------------------------------------------------
 * "THE BEER-WARE LICENSE" (Revision 42):
 * <giri@nwrk.biz> wrote this file. As long as you retain this notice you
 * can do whatever you want with this stuff. If we meet some day, and you think
 * this stuff is worth it, you can buy me a beer in return Daniel Giritzer
 * ----------------------------------------------------------------------------
 * @endcond
 */
#ifndef FOO_MANIP_H
#define FOO_MANIP_H
#define CII_MANGLE extern "C"
#define CII_CALLCONV __attribute__((stdcall))

CII_MANGLE void CII_CALLCONV FOO_MANIP_SayFoo(void * fooObj);
CII_MANGLE const char* CII_CALLCONV FOO_MANIP_GetFoo(void * fooObj);
CII_MANGLE void CII_CALLCONV FOO_MANIP_SetFoo(void * fooObj, const char*);
CII_MANGLE void CII_CALLCONV FOO_MANIP_ResetFoo(void * fooObj);

#endif //FOO_MANIP_H
