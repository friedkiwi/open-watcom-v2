/****************************************************************************
*
*                            Open Watcom Project
*
*    Portions Copyright (c) 1983-2002 Sybase, Inc. All Rights Reserved.
*
*  ========================================================================
*
*    This file contains Original Code and/or Modifications of Original
*    Code as defined in and that are subject to the Sybase Open Watcom
*    Public License version 1.0 (the 'License'). You may not use this file
*    except in compliance with the License. BY USING THIS FILE YOU AGREE TO
*    ALL TERMS AND CONDITIONS OF THE LICENSE. A copy of the License is
*    provided with the Original Code and Modifications, and is also
*    available at www.sybase.com/developer/opensource.
*
*    The Original Code and all software distributed under the License are
*    distributed on an 'AS IS' basis, WITHOUT WARRANTY OF ANY KIND, EITHER
*    EXPRESS OR IMPLIED, AND SYBASE AND ALL CONTRIBUTORS HEREBY DISCLAIM
*    ALL SUCH WARRANTIES, INCLUDING WITHOUT LIMITATION, ANY WARRANTIES OF
*    MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE, QUIET ENJOYMENT OR
*    NON-INFRINGEMENT. Please see the License for the specific language
*    governing rights and limitations under the License.
*
*  ========================================================================
*
* Description:  Alpha exception processing helpers.
*
****************************************************************************/


#ifdef BROKEN
typedef struct _EXCINFO {       // EXCEPTION INFORMATION
    PVOID   ControlPC;
    PVOID   EstablisherFrame;   // - establisher frame
    CONTEXT ContextRecord;      // - context for current function
    int     InFunction;         // - used to figure if in function
    _PDATA  *FunctionEntry;     // - PData for function
} _EXCINFO;
#endif

#define _PDATA  IMAGE_RUNTIME_FUNCTION_ENTRY

_WCRTLINK extern int _ProcSetsFP( _PDATA *pdata );
#ifdef BROKEN
_WCRTLINK extern _EXCINFO *_SetPData( _EXCINFO *info );
_WCRTLINK extern void _NextExcInfo( _EXCINFO *info );
_WCRTLINK extern void _InitExcInfo( _EXCINFO *info );
#endif
