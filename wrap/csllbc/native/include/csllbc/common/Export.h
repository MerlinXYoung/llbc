// The MIT License (MIT)

// Copyright (c) 2013 lailongwei<lailongwei@126.com>
// 
// Permission is hereby granted, free of charge, to any person obtaining a copy of 
// this software and associated documentation files (the "Software"), to deal in 
// the Software without restriction, including without limitation the rights to 
// use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of 
// the Software, and to permit persons to whom the Software is furnished to do so, 
// subject to the following conditions:
// 
// The above copyright notice and this permission notice shall be included in all 
// copies or substantial portions of the Software.
// 
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR 
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS 
// FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR 
// COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER 
// IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN 
// CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

#ifndef __CSLLBC_COM_EXPORT_H__
#define __CSLLBC_COM_EXPORT_H__

#include "llbc/common/PFConfig.h"

// Define CSLLBC_EXPORT to __declspec(dllexport), win32 platform specific.

// LINUX
#if LLBC_TARGET_PLATFORM_LINUX
 #ifndef CSLLBC_EXPORT
  #define CSLLBC_EXPORTING 1
  #define CSLLBC_EXPORT __attribute__ ((__visibility__("default")))
 #endif
 #ifndef CSLLBC_HIDDEN
  #define CSLLBC_HIDDEN __attribute__ ((__visibility__("hidden")))
 #endif
#endif // LLBC_TARGET_PLATFORM_LINUX

// WIN32
#if LLBC_TARGET_PLATFORM_WIN32
 #ifndef CSLLBC_EXPORT
  #define CSLLBC_EXPORTING 1
  #define CSLLBC_EXPORT __declspec(dllexport)
 #endif
 #ifndef CSLLBC_HIDDEN
  #define CSLLBC_HIDDEN
 #endif
#endif // LLBC_TARGET_PLATFORM_WIN32

// IPHONE
#if LLBC_TARGET_PLATFORM_IPHONE
 #ifndef CSLLBC_EXPORT
  #define CSLLBC_EXPORTING 1
  #define CSLLBC_EXPORT __attribute__ ((__visibility__("default")))
 #endif
 #ifndef CSLLBC_HIDDEN
  #define CSLLBC_HIDDEN __attribute__ ((__visibility__("hidden")))
 #endif
#endif // LLBC_TARGET_PLATFORM_IPHONE

// MAC
#if LLBC_TARGET_PLATFORM_MAC
 #ifndef CSLLBC_EXPORT
  #define CSLLBC_EXPORTING 1
  #define CSLLBC_EXPORT __attribute__ ((__visibility__("default")))
 #endif
 #ifndef CSLLBC_HIDDEN
  #define CSLLBC_HIDDEN __attribute__ ((__visibility__("hidden")))
 #endif
#endif // LLBC_TARGET_PLATFORM_MAC

// ANDROID
#if LLBC_TARGET_PLATFORM_ANDROID
 #ifndef CSLLBC_EXPORT
  #define CSLLBC_EXPORTING 1
  #define CSLLBC_EXPORT __attribute__ ((__visibility__("default")))
 #endif
 #ifndef CSLLBC_HIDDEN
  #define CSLLBC_HIDDEN __attribute__ ((__visibility__("hidden")))
 #endif
#endif // LLBC_TARGET_PLATFORM_ANDROID

#endif // !__CSLLBC_COM_EXPORT_H__
