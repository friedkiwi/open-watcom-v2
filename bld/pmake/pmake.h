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
* Description:  pmake interfaces
*
****************************************************************************/


#define PMAKE_COMMAND_SIZE  512

typedef enum {
    TARGET_NOT_USED,
    TARGET_USED,
    TARGET_ALL,
    TARGET_OPERATOR_AND,
    TARGET_OPERATOR_OR,
    TARGET_OPERATOR_NOT
} target_flags;

typedef struct pmake_list {
    struct pmake_list   *next;
    unsigned            priority;
    unsigned            depth;
    char                dir_name[1];    /* variable sized */
} pmake_list;

typedef struct target_list {
    struct target_list  *next;
    size_t              len;
    target_flags        flags;
    char                string[1];      /* variable sized */
} target_list;

typedef struct {
    unsigned    verbose : 1;
    unsigned    notargets : 1;
    unsigned    reverse : 1;
    unsigned    batch : 1;
    unsigned    display : 1;
    unsigned    optimize : 1;
    unsigned    want_help : 1;
    unsigned    signaled : 1;
    unsigned    ignore_errors : 1;
    unsigned    levels;
    char        *command;
    char        *cmd_args;
    char        *makefile;
    pmake_list  *dir_list;
    target_list *targ_list;
} pmake_data;

extern pmake_data   *PMakeBuild( const char *cmd );
extern void         PMakeCommand( pmake_data *, char * );
extern void         PMakeCleanup( pmake_data * );

/*
        provided by the client
*/
extern void         PMakeOutput( const char *data );
