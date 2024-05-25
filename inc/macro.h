#pragma once

#ifndef WINAPI

#ifdef _MSC_VER
#define WINAPI __stdcall
#endif

#ifdef __GNUC__ 
#define WINAPI __attribute__((__stdcall__))
#endif

#endif

#if defined(DLL_EXPORT)
#define VX_LIB_EXPORT __declspec(dllexport)
#else 
#define VX_LIB_EXPORT __declspec(dllimport)
#endif
