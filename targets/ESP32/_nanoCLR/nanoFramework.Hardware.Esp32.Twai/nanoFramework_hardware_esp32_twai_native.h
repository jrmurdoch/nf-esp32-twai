//-----------------------------------------------------------------------------
//
//                   ** WARNING! ** 
//    This file was generated automatically by a tool.
//    Re-running the tool will overwrite this file.
//    You should copy this file to a custom location
//    before adding any customization in the copy to
//    prevent loss of your changes when the tool is
//    re-run.
//
//-----------------------------------------------------------------------------

#ifndef NANOFRAMEWORK_HARDWARE_ESP32_TWAI_NATIVE_H
#define NANOFRAMEWORK_HARDWARE_ESP32_TWAI_NATIVE_H

#include <nanoCLR_Interop.h>
#include <nanoCLR_Runtime.h>
#include <nanoPackStruct.h>
#include <corlib_native.h>

typedef enum __nfpack TwaiMode
{
    TwaiMode_Normal = 0,
    TwaiMode_NoAck = 1,
    TwaiMode_ListenOnly = 2,
} TwaiMode;

typedef enum __nfpack TwaiState
{
    TwaiState_Stopped = 0,
    TwaiState_Running = 1,
    TwaiState_BusOff = 2,
    TwaiState_Recovering = 3,
} TwaiState;

struct Library_nanoFramework_hardware_esp32_twai_native_nanoFramework_Hardware_Esp32_Twai_TwaiFilterConfig
{
    static const int FIELD___acceptanceCode = 1;
    static const int FIELD___acceptanceMask = 2;
    static const int FIELD___singleFilterMode = 3;

    //--//
};

struct Library_nanoFramework_hardware_esp32_twai_native_nanoFramework_Hardware_Esp32_Twai_TwaiGeneralConfig
{
    static const int FIELD___mode = 1;
    static const int FIELD___pinNumberTx = 2;
    static const int FIELD___pinNumberRx = 3;
    static const int FIELD___pinNumberClockOut = 4;
    static const int FIELD___pinNumberBusOff = 5;
    static const int FIELD___txQueueLength = 6;
    static const int FIELD___rxQueueLength = 7;
    static const int FIELD___alertsMask = 8;
    static const int FIELD___clockOutDivider = 9;
    static const int FIELD___interruptFlags = 10;

    //--//
};

struct Library_nanoFramework_hardware_esp32_twai_native_nanoFramework_Hardware_Esp32_Twai_TwaiTimingConfig
{
    static const int FIELD___baudratePrescale = 1;
    static const int FIELD___timingSegment1 = 2;
    static const int FIELD___timingSegment2 = 3;
    static const int FIELD___synchronizationJumpWidth = 4;
    static const int FIELD___enableTripleSampling = 5;

    //--//
};

struct Library_nanoFramework_hardware_esp32_twai_native_nanoFramework_Hardware_Esp32_Twai_TwaiMessage
{
    static const int FIELD___extendedId = 1;
    static const int FIELD___remoteRequest = 2;
    static const int FIELD___singleShot = 3;
    static const int FIELD___selfReception = 4;
    static const int FIELD___dlcNonCompliant = 5;
    static const int FIELD___id = 6;
    static const int FIELD___dataLength = 7;
    static const int FIELD___data = 8;

    //--//
};

struct Library_nanoFramework_hardware_esp32_twai_native_nanoFramework_Hardware_Esp32_Twai_TwaiStausInfo
{
    static const int FIELD___state = 1;
    static const int FIELD___messagesToTx = 2;
    static const int FIELD___messagesToRx = 3;
    static const int FIELD___txErrorCounter = 4;
    static const int FIELD___rxErrorCounter = 5;
    static const int FIELD___txFailedCount = 6;
    static const int FIELD___rxMissedCount = 7;
    static const int FIELD___rxOverrunCount = 8;
    static const int FIELD___arbitrationLostCount = 9;
    static const int FIELD___busErrorCount = 10;

    //--//
};

struct Library_nanoFramework_hardware_esp32_twai_native_nanoFramework_Hardware_Esp32_Twai_TwaiController
{
    static const int FIELD___generalConfig = 1;
    static const int FIELD___timingConfig = 2;
    static const int FIELD___filterConfig = 3;
    static const int FIELD___txTimeout = 4;
    static const int FIELD___rxTimeout = 5;

    NANOCLR_NATIVE_DECLARE(NativeDriverInstall___STATIC__I4__nanoFrameworkHardwareEsp32TwaiTwaiGeneralConfig__nanoFrameworkHardwareEsp32TwaiTwaiTimingConfig__nanoFrameworkHardwareEsp32TwaiTwaiFilterConfig);
    NANOCLR_NATIVE_DECLARE(NativeDriverUninstall___STATIC__I4);
    NANOCLR_NATIVE_DECLARE(NativeStart___STATIC__I4);
    NANOCLR_NATIVE_DECLARE(NativeStop___STATIC__I4);
    NANOCLR_NATIVE_DECLARE(NativeTransmit___STATIC__I4__nanoFrameworkHardwareEsp32TwaiTwaiMessage__SystemTimeSpan);
    NANOCLR_NATIVE_DECLARE(NativeReceive___STATIC__I4__nanoFrameworkHardwareEsp32TwaiTwaiMessage__SystemTimeSpan);
    NANOCLR_NATIVE_DECLARE(NativeReadAlerts___STATIC__I4__BYREF_U4__SystemTimeSpan);
    NANOCLR_NATIVE_DECLARE(NativeReconfigureAlerts___STATIC__I4__U4__BYREF_U4);
    NANOCLR_NATIVE_DECLARE(NativeInitiateRecovery___STATIC__I4);
    NANOCLR_NATIVE_DECLARE(NativeGetStatusInfo___STATIC__I4__nanoFrameworkHardwareEsp32TwaiTwaiStausInfo);
    NANOCLR_NATIVE_DECLARE(NativeClearTransmitQueue___STATIC__I4);
    NANOCLR_NATIVE_DECLARE(NativeClearReceiveQueue___STATIC__I4);

    //--//
};

struct Library_nanoFramework_hardware_esp32_twai_native_nanoFramework_Hardware_Esp32_Twai_TwaiException
{
    static const int FIELD___espErrorCode = 5;

    //--//
};

extern const CLR_RT_NativeAssemblyData g_CLR_AssemblyNative_nanoFramework_Hardware_Esp32_Twai;

#endif // NANOFRAMEWORK_HARDWARE_ESP32_TWAI_NATIVE_H
