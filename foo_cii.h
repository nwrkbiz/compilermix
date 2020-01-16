/**
 * @cond
 * Filename: foo_cii.h
 * ----------------------------------------------------------------------------
 * "THE BEER-WARE LICENSE" (Revision 42):
 * <giri@nwrk.biz> wrote this file. As long as you retain this notice you
 * can do whatever you want with this stuff. If we meet some day, and you think
 * this stuff is worth it, you can buy me a beer in return Daniel Giritzer
 * ----------------------------------------------------------------------------
 * @endcond
 */
// Compiler Independent Binding for foo Object
#ifndef FOO_CII_H
#define FOO_CII_H

#define CII_MANGLE extern "C"
#define CII_CALLCONV __attribute__((stdcall))

CII_MANGLE const char* CII_CALLCONV CII_FOO_GetFoo(void * fooObj);
CII_MANGLE void CII_CALLCONV CII_FOO_SetFoo(void * fooObj, const char* newFoo);

void CII_FOO_ShutDown(); // call this in foo dtor to clear allocated memory

#endif //FOO_CII_H
