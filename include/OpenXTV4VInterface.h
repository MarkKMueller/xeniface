

/*! \file OpenXTV4VInterface.h
    \brief OpenXT V4V Interface

    This interface provides access to OpenXT V4V
*/

#ifndef _OPENXTV4VINTERFACE_H
#define _OPENXTV4VINTERFACE_H

NTSTATUS V4VInitialize(PCHAR aBuffer, ULONG aInLen, PIO_STACK_LOCATION aStack, PIRP aIrp);
NTSTATUS V4VBind(void *aDeviceExtension, PCHAR aBuffer, ULONG aInLen, PIO_STACK_LOCATION aStack);
NTSTATUS V4VListen(PCHAR aBuffer, ULONG aInLen, PIO_STACK_LOCATION aStack);
NTSTATUS V4VAccept(void *aDeviceExtension, PCHAR aBuffer, ULONG aInLen, PIO_STACK_LOCATION aStack, PIRP aIrp);
NTSTATUS V4VConnect(void *aDeviceExtension, PCHAR aBuffer, ULONG aInLen, PIO_STACK_LOCATION aStack, PIRP aIrp);
NTSTATUS V4VConnectWait(void *aDeviceExtension, PCHAR aBuffer, ULONG aInLen, PIO_STACK_LOCATION aStack, PIRP aIrp);
NTSTATUS V4VGetInfo(PCHAR aBuffer, ULONG aInLen, PIO_STACK_LOCATION aStack);
NTSTATUS V4VDisconnect(void *aDeviceExtension, PIO_STACK_LOCATION aStack);
NTSTATUS V4VDumpRing(PIO_STACK_LOCATION aStack);

#endif  // _OPENXTV4VINTERFACE_H
