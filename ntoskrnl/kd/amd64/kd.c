/*
 * PROJECT:         Kernel
 * LICENSE:         GPL - See COPYING in the top level directory
 * FILE:            ntoskrnl/kd/amd64/kd.c
 * PURPOSE:         Routines for CPU-level support
 * PROGRAMMERS:     Timo Kreuzer (timo.kreuzer@reactos.org)
 */

/* INCLUDES ******************************************************************/

#include <ntoskrnl.h>
#define NDEBUG
#include <debug.h>

/* FUNCTIONS *****************************************************************/

VOID
NTAPI
KdpGdbStubInit(PKD_DISPATCH_TABLE WrapperTable,
               ULONG BootPhase)
{
    UNIMPLEMENTED;
}
