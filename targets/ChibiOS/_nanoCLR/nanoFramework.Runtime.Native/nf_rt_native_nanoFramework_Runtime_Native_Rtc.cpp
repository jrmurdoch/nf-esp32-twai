//
// Copyright (c) .NET Foundation and Contributors
// See LICENSE file in the project root for full license information.
//

#include <ch.h>
#include <hal.h>
#include <cmsis_os.h>
#include "nf_rt_native.h"


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// these functions are the real implementation of the 'weak' ones declared at src\CLR\Runtime.Native\nf_rt_native_nanoFramework_Runtime_Native_Rtc_stubs.cpp //
// the stubs for this class are generated by nanoFramework.Runtime.Native                                                                                    //
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// for all these to work we need the RTC to be enabled 
#if !defined(HAL_USE_RTC) 
    #error "Need the RTC to be enabled. Please set CMake option NF_FEATURE_RTC to ON."
#endif

HRESULT Library_nf_rt_native_nanoFramework_Runtime_Native_Rtc::Native_RTC_SetSystemTime___STATIC__BOOLEAN__I4__U1__U1__U1__U1__U1__U1( CLR_RT_StackFrame& stack )
{
    NANOCLR_HEADER();

      #if (HAL_USE_RTC == TRUE)

        RTCDateTime newTime;

        newTime.year = stack.Arg0().NumericByRef().s4 - 1980;  // ChibiOS time base is 1980-01-01
        newTime.month = (uint8_t)stack.Arg1().NumericByRef().u1;
        newTime.day = stack.Arg2().NumericByRef().u1;
        newTime.dayofweek = stack.Arg3().NumericByRef().u1;
        newTime.millisecond = ((((uint32_t)stack.Arg4().NumericByRef().u1 * 3600) + 
                                ((uint32_t)stack.Arg5().NumericByRef().u1 * 60) + 
                                (uint32_t)stack.Arg6().NumericByRef().u1) * 1000);

        // set RTC time
        rtcSetTime(&RTCD1, &newTime);
        
        // Return value to the managed application
        stack.SetResult_Boolean(true);

        NANOCLR_NOCLEANUP_NOLABEL();

      #else

        (void)stack;

        NANOCLR_SET_AND_LEAVE(CLR_E_NOT_SUPPORTED);

        NANOCLR_NOCLEANUP();

      #endif // (HAL_USE_RTC == TRUE)

}