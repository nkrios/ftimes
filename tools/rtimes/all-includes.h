/*-
 ***********************************************************************
 *
 * $Id: all-includes.h,v 1.9 2014/07/18 06:40:45 mavrik Exp $
 *
 ***********************************************************************
 *
 * Copyright 2008-2014 The FTimes Project, All Rights Reserved.
 *
 ***********************************************************************
 */
#if defined(MINGW32)
#include "config.h"
#endif

#ifdef USE_SDDL
  #ifdef MINGW32
    #define WINVER 0x0500
    #include <windows.h>
    #define SDDL_REVISION_1 1
    WINADVAPI BOOL WINAPI ConvertSecurityDescriptorToStringSecurityDescriptorA(PSECURITY_DESCRIPTOR, DWORD, SECURITY_INFORMATION, LPSTR *, PULONG);
    WINADVAPI BOOL WINAPI ConvertSecurityDescriptorToStringSecurityDescriptorW(PSECURITY_DESCRIPTOR, DWORD, SECURITY_INFORMATION, LPWSTR *, PULONG);
    #ifdef UNICODE
      #define ConvertSecurityDescriptorToStringSecurityDescriptor ConvertSecurityDescriptorToStringSecurityDescriptorW
    #else
      #define ConvertSecurityDescriptorToStringSecurityDescriptor ConvertSecurityDescriptorToStringSecurityDescriptorA
    #endif
  #else
    #define _WIN32_WINNT 0x0500
    #include <windows.h>
  #endif
  #include <sddl.h>
#else
#include <windows.h>
#endif
#include <accctrl.h>
#include <aclapi.h>
#include <ctype.h>
#include <errno.h>
#include <stdio.h>
#include <tchar.h>

typedef char APP_SI8;
typedef unsigned char APP_UI8;
typedef short APP_SI16;
typedef unsigned short APP_UI16;
typedef int APP_SI32;
typedef unsigned int APP_UI32;
typedef __int64 APP_SI64;
typedef unsigned __int64 APP_UI64;

#include "md5.h"
#include "options.h"

#include "rtimes.h"

#ifdef WIN32
#define snprintf _snprintf
#endif

#ifndef MESSAGE_SIZE
#define MESSAGE_SIZE 1024
#endif

