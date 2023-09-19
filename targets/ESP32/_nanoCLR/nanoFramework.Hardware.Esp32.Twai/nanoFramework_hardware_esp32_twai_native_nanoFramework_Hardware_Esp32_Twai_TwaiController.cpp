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

#include "nanoFramework_hardware_esp32_twai_native.h"
#include <twai.h>
#include <hal/twai_types.h>


HRESULT Library_nanoFramework_hardware_esp32_twai_native_nanoFramework_Hardware_Esp32_Twai_TwaiController::NativeDriverInstall___STATIC__I4__nanoFrameworkHardwareEsp32TwaiTwaiGeneralConfig__nanoFrameworkHardwareEsp32TwaiTwaiTimingConfig__nanoFrameworkHardwareEsp32TwaiTwaiFilterConfig( CLR_RT_StackFrame &stack )
{
    NANOCLR_HEADER();
    
    CLR_RT_HeapBlock *pGeneralConfig = NULL;
    twai_general_config_t g_config;

    CLR_RT_HeapBlock *pTimingConfig = NULL;
    twai_timing_config_t t_config;

    CLR_RT_HeapBlock *pFilterConfig = NULL;
    twai_filter_config_t f_config;

    int result;

    CLR_RT_HeapBlock* pThis = stack.This();
    FAULT_ON_NULL(pThis);

    pGeneralConfig = stack.Arg0().Dereference();
    g_config.mode = (twai_mode_t)(pGeneralConfig[Library_nanoFramework_hardware_esp32_twai_native_nanoFramework_Hardware_Esp32_Twai_TwaiGeneralConfig::FIELD___mode].NumericByRef().s4);
    g_config.tx_io = (gpio_num_t)(pGeneralConfig[Library_nanoFramework_hardware_esp32_twai_native_nanoFramework_Hardware_Esp32_Twai_TwaiGeneralConfig::FIELD___pinNumberTx].NumericByRef().s4);
    g_config.rx_io = (gpio_num_t)(pGeneralConfig[Library_nanoFramework_hardware_esp32_twai_native_nanoFramework_Hardware_Esp32_Twai_TwaiGeneralConfig::FIELD___pinNumberRx].NumericByRef().s4);
    g_config.clkout_io = (gpio_num_t)(pGeneralConfig[Library_nanoFramework_hardware_esp32_twai_native_nanoFramework_Hardware_Esp32_Twai_TwaiGeneralConfig::FIELD___pinNumberClockOut].NumericByRef().s4);
    g_config.bus_off_io = (gpio_num_t)(pGeneralConfig[Library_nanoFramework_hardware_esp32_twai_native_nanoFramework_Hardware_Esp32_Twai_TwaiGeneralConfig::FIELD___pinNumberBusOff].NumericByRef().s4);
    g_config.tx_queue_len = (uint32_t)(pGeneralConfig[Library_nanoFramework_hardware_esp32_twai_native_nanoFramework_Hardware_Esp32_Twai_TwaiGeneralConfig::FIELD___txQueueLength].NumericByRef().u4);
    g_config.rx_queue_len = (uint32_t)(pGeneralConfig[Library_nanoFramework_hardware_esp32_twai_native_nanoFramework_Hardware_Esp32_Twai_TwaiGeneralConfig::FIELD___rxQueueLength].NumericByRef().u4);
    g_config.alerts_enabled = (uint32_t)(pGeneralConfig[Library_nanoFramework_hardware_esp32_twai_native_nanoFramework_Hardware_Esp32_Twai_TwaiGeneralConfig::FIELD___alertsMask].NumericByRef().u4);
    g_config.clkout_divider = (uint32_t)(pGeneralConfig[Library_nanoFramework_hardware_esp32_twai_native_nanoFramework_Hardware_Esp32_Twai_TwaiGeneralConfig::FIELD___clockOutDivider].NumericByRef().u4);
    g_config.intr_flags = (int)(pGeneralConfig[Library_nanoFramework_hardware_esp32_twai_native_nanoFramework_Hardware_Esp32_Twai_TwaiGeneralConfig::FIELD___interruptFlags].NumericByRef().s4);

    pTimingConfig = stack.Arg1().Dereference();
    //t_config.clk_src = (twai_clock_source_t)(pTimingConfig[Library_nanoFramework_hardware_esp32_twai_native_nanoFramework_Hardware_Esp32_Twai_TwaiTimingConfig::FIELD___clockSource].NumericByRef().s4);
    //t_config.quanta_resolution_hz = (uint32_t)(pTimingConfig[Library_nanoFramework_hardware_esp32_twai_native_nanoFramework_Hardware_Esp32_Twai_TwaiTimingConfig::FIELD___quantaResolutionHz].NumericByRef().u4);
    t_config.brp = (uint32_t)(pTimingConfig[Library_nanoFramework_hardware_esp32_twai_native_nanoFramework_Hardware_Esp32_Twai_TwaiTimingConfig::FIELD___baudratePrescale].NumericByRef().u4);
    t_config.tseg_1 = (uint8_t)(pTimingConfig[Library_nanoFramework_hardware_esp32_twai_native_nanoFramework_Hardware_Esp32_Twai_TwaiTimingConfig::FIELD___timingSegment1].NumericByRef().u1);
    t_config.tseg_2 = (uint8_t)(pTimingConfig[Library_nanoFramework_hardware_esp32_twai_native_nanoFramework_Hardware_Esp32_Twai_TwaiTimingConfig::FIELD___timingSegment2].NumericByRef().u1);
    t_config.sjw = (uint8_t)(pTimingConfig[Library_nanoFramework_hardware_esp32_twai_native_nanoFramework_Hardware_Esp32_Twai_TwaiTimingConfig::FIELD___synchronizationJumpWidth].NumericByRef().u1);
    t_config.triple_sampling = (bool)(pTimingConfig[Library_nanoFramework_hardware_esp32_twai_native_nanoFramework_Hardware_Esp32_Twai_TwaiTimingConfig::FIELD___enableTripleSampling].NumericByRef().u1);

    pFilterConfig = stack.Arg2().Dereference();
    f_config.acceptance_code = (uint32_t)(pFilterConfig[Library_nanoFramework_hardware_esp32_twai_native_nanoFramework_Hardware_Esp32_Twai_TwaiFilterConfig::FIELD___acceptanceCode].NumericByRef().u4);
    f_config.acceptance_mask = (uint32_t)(pFilterConfig[Library_nanoFramework_hardware_esp32_twai_native_nanoFramework_Hardware_Esp32_Twai_TwaiFilterConfig::FIELD___acceptanceMask].NumericByRef().u4);
    f_config.single_filter = (uint32_t)(pFilterConfig[Library_nanoFramework_hardware_esp32_twai_native_nanoFramework_Hardware_Esp32_Twai_TwaiFilterConfig::FIELD___singleFilterMode].NumericByRef().u1);

    result = twai_driver_install(&g_config, &t_config, &f_config);
    stack.SetResult_I4((CLR_INT32)result);

    NANOCLR_NOCLEANUP();
}

HRESULT Library_nanoFramework_hardware_esp32_twai_native_nanoFramework_Hardware_Esp32_Twai_TwaiController::NativeDriverUninstall___STATIC__I4( CLR_RT_StackFrame &stack )
{
    NANOCLR_HEADER();

    int result;

    CLR_RT_HeapBlock* pThis = stack.This();
    FAULT_ON_NULL(pThis);

    result = twai_driver_uninstall();
    stack.SetResult_I4((CLR_INT32)result);

    NANOCLR_NOCLEANUP();
}

HRESULT Library_nanoFramework_hardware_esp32_twai_native_nanoFramework_Hardware_Esp32_Twai_TwaiController::NativeStart___STATIC__I4( CLR_RT_StackFrame &stack )
{
    NANOCLR_HEADER();

    int result;

    CLR_RT_HeapBlock* pThis = stack.This();
    FAULT_ON_NULL(pThis);

    result = twai_start();
    stack.SetResult_I4((CLR_INT32)result);

    NANOCLR_NOCLEANUP();
}

HRESULT Library_nanoFramework_hardware_esp32_twai_native_nanoFramework_Hardware_Esp32_Twai_TwaiController::NativeStop___STATIC__I4( CLR_RT_StackFrame &stack )
{
    NANOCLR_HEADER();

    int result;

    CLR_RT_HeapBlock* pThis = stack.This();
    FAULT_ON_NULL(pThis);

    result = twai_stop();
    stack.SetResult_I4((CLR_INT32)result);

    NANOCLR_NOCLEANUP();
}

HRESULT Library_nanoFramework_hardware_esp32_twai_native_nanoFramework_Hardware_Esp32_Twai_TwaiController::NativeTransmit___STATIC__I4__nanoFrameworkHardwareEsp32TwaiTwaiMessage__SystemTimeSpan( CLR_RT_StackFrame &stack )
{
    NANOCLR_HEADER();
    
    CLR_RT_HeapBlock *pMessage = NULL;
    CLR_RT_HeapBlock_Array *data = NULL;
    uint8_t *buffer;
    uint32_t bufferLength;

    twai_message_t message;
    CLR_INT64 *timespan;
    CLR_INT32 waitMs;
    int result;

    CLR_RT_HeapBlock* pThis = stack.This();
    FAULT_ON_NULL(pThis);

    pMessage = stack.Arg0().Dereference();
    message.extd = (bool)(pMessage[Library_nanoFramework_hardware_esp32_twai_native_nanoFramework_Hardware_Esp32_Twai_TwaiMessage::FIELD___extendedId].NumericByRef().u1);
    message.rtr = (bool)(pMessage[Library_nanoFramework_hardware_esp32_twai_native_nanoFramework_Hardware_Esp32_Twai_TwaiMessage::FIELD___remoteRequest].NumericByRef().u1);
    message.ss = (bool)(pMessage[Library_nanoFramework_hardware_esp32_twai_native_nanoFramework_Hardware_Esp32_Twai_TwaiMessage::FIELD___singleShot].NumericByRef().u1);
    message.self = (bool)(pMessage[Library_nanoFramework_hardware_esp32_twai_native_nanoFramework_Hardware_Esp32_Twai_TwaiMessage::FIELD___selfReception].NumericByRef().u1);
    message.dlc_non_comp = (bool)(pMessage[Library_nanoFramework_hardware_esp32_twai_native_nanoFramework_Hardware_Esp32_Twai_TwaiMessage::FIELD___dlcNonCompliant].NumericByRef().u1);
    message.identifier = (uint32_t)(pMessage[Library_nanoFramework_hardware_esp32_twai_native_nanoFramework_Hardware_Esp32_Twai_TwaiMessage::FIELD___id].NumericByRef().u4);
    message.data_length_code = (uint8_t)(pMessage[Library_nanoFramework_hardware_esp32_twai_native_nanoFramework_Hardware_Esp32_Twai_TwaiMessage::FIELD___dataLength].NumericByRef().u1);
    data = pMessage[Library_nanoFramework_hardware_esp32_twai_native_nanoFramework_Hardware_Esp32_Twai_TwaiMessage::FIELD___data].DereferenceArray();
    buffer = (uint8_t *)data->GetFirstElement();
    bufferLength = data->m_numOfElements;
    message.data_length_code = min(bufferLength, message.data_length_code); // take the lower as might only want to send a few bytes of a larger buffer. But dont want to send more than what the buffer has.
    memcpy(message.data, buffer, message.data_length_code);

    // Timespan in 100ns ticks
    timespan = Library_corlib_native_System_TimeSpan::GetValuePtr(stack.Arg1());
    // Convert to milli-secs for wait
    waitMs = (CLR_INT32)(*timespan / TIME_CONVERSION__TO_MILLISECONDS);

    result = twai_transmit(&message, pdMS_TO_TICKS(waitMs));
    stack.SetResult_I4((CLR_INT32)result);

    NANOCLR_NOCLEANUP();
}

HRESULT Library_nanoFramework_hardware_esp32_twai_native_nanoFramework_Hardware_Esp32_Twai_TwaiController::NativeReceive___STATIC__I4__nanoFrameworkHardwareEsp32TwaiTwaiMessage__SystemTimeSpan( CLR_RT_StackFrame &stack )
{
    NANOCLR_HEADER();

    CLR_INT64 *timespan;
    CLR_INT32 waitMs;
    twai_message_t message;
    int result;
    CLR_RT_HeapBlock *pMessage;
    pMessage = stack.Arg0().Dereference();
    CLR_RT_HeapBlock_Array *data = NULL;
    uint8_t *buffer;

    CLR_RT_HeapBlock* pThis = stack.This();
    FAULT_ON_NULL(pThis);

    // Timespan in 100ns ticks
    timespan = Library_corlib_native_System_TimeSpan::GetValuePtr(stack.Arg1());
    // Convert to milli-secs for wait
    waitMs = (CLR_INT32)(*timespan / TIME_CONVERSION__TO_MILLISECONDS);

    result = twai_receive(&message, pdMS_TO_TICKS(waitMs));

    stack.SetResult_I4((CLR_INT32)result);

    pMessage[Library_nanoFramework_hardware_esp32_twai_native_nanoFramework_Hardware_Esp32_Twai_TwaiMessage::FIELD___extendedId].NumericByRef().u1 = (bool)message.extd;
    pMessage[Library_nanoFramework_hardware_esp32_twai_native_nanoFramework_Hardware_Esp32_Twai_TwaiMessage::FIELD___remoteRequest].NumericByRef().u1 =(bool)message.rtr;
    pMessage[Library_nanoFramework_hardware_esp32_twai_native_nanoFramework_Hardware_Esp32_Twai_TwaiMessage::FIELD___dlcNonCompliant].NumericByRef().u1 = (bool)message.dlc_non_comp;
    pMessage[Library_nanoFramework_hardware_esp32_twai_native_nanoFramework_Hardware_Esp32_Twai_TwaiMessage::FIELD___id].NumericByRef().u4 = (uint32_t)message.identifier;
    pMessage[Library_nanoFramework_hardware_esp32_twai_native_nanoFramework_Hardware_Esp32_Twai_TwaiMessage::FIELD___dataLength].NumericByRef().u1 = (uint8_t)message.data_length_code;
    data = pMessage[Library_nanoFramework_hardware_esp32_twai_native_nanoFramework_Hardware_Esp32_Twai_TwaiMessage::FIELD___data].DereferenceArray();
    buffer = (uint8_t *)data->GetFirstElement();
    memcpy(buffer, message.data, message.data_length_code);

    NANOCLR_NOCLEANUP();
}

HRESULT Library_nanoFramework_hardware_esp32_twai_native_nanoFramework_Hardware_Esp32_Twai_TwaiController::NativeReadAlerts___STATIC__I4__BYREF_U4__SystemTimeSpan( CLR_RT_StackFrame &stack )
{
    NANOCLR_HEADER();
    
    CLR_INT64 *timespan;
    CLR_INT32 waitMs;
    uint32_t alerts;
    int result;

    CLR_RT_HeapBlock* pThis = stack.This();
    FAULT_ON_NULL(pThis);

    // Timespan in 100ns ticks
    timespan = Library_corlib_native_System_TimeSpan::GetValuePtr(stack.Arg1());
    // Convert to milli-secs for wait
    waitMs = (CLR_INT32)(*timespan / TIME_CONVERSION__TO_MILLISECONDS);

    // TODO: alerts needs to be returned as parameter
    result = twai_read_alerts(&alerts, pdMS_TO_TICKS(waitMs));
    CLR_RT_HeapBlock alertsRef;
    alertsRef.SetInteger(alerts);
    NANOCLR_CHECK_HRESULT(alertsRef.StoreToReference(stack.Arg0(), 0));

    stack.SetResult_I4((CLR_INT32)result);

    NANOCLR_NOCLEANUP();
}

HRESULT Library_nanoFramework_hardware_esp32_twai_native_nanoFramework_Hardware_Esp32_Twai_TwaiController::NativeReconfigureAlerts___STATIC__I4__U4__BYREF_U4( CLR_RT_StackFrame &stack )
{
    NANOCLR_HEADER();
    
    uint32_t alerts_enabled;
    uint32_t current_alerts;
    int result;

    CLR_RT_HeapBlock* pThis = stack.This();
    FAULT_ON_NULL(pThis);

    alerts_enabled = stack.Arg0().NumericByRef().u4;

    result = twai_reconfigure_alerts(alerts_enabled, &current_alerts);
    CLR_RT_HeapBlock currentAlertsRef;
    currentAlertsRef.SetInteger(current_alerts);
    NANOCLR_CHECK_HRESULT(currentAlertsRef.StoreToReference(stack.Arg1(), 0));

    stack.SetResult_I4((CLR_INT32)result);


    NANOCLR_NOCLEANUP();
}

HRESULT Library_nanoFramework_hardware_esp32_twai_native_nanoFramework_Hardware_Esp32_Twai_TwaiController::NativeInitiateRecovery___STATIC__I4( CLR_RT_StackFrame &stack )
{
    NANOCLR_HEADER();

    int result;

    CLR_RT_HeapBlock* pThis = stack.This();
    FAULT_ON_NULL(pThis);

    result = twai_initiate_recovery();
    stack.SetResult_I4((CLR_INT32)result);

    NANOCLR_NOCLEANUP();
}

HRESULT Library_nanoFramework_hardware_esp32_twai_native_nanoFramework_Hardware_Esp32_Twai_TwaiController::NativeGetStatusInfo___STATIC__I4__nanoFrameworkHardwareEsp32TwaiTwaiStausInfo( CLR_RT_StackFrame &stack )
{
    NANOCLR_HEADER();
    
    twai_status_info_t status_info;
    int result;
    CLR_RT_HeapBlock *pStatusInfo;
    pStatusInfo = stack.Arg0().Dereference();

    CLR_RT_HeapBlock* pThis = stack.This();
    FAULT_ON_NULL(pThis);

    result = twai_get_status_info(&status_info);
    stack.SetResult_I4((CLR_INT32)result);

    pStatusInfo[Library_nanoFramework_hardware_esp32_twai_native_nanoFramework_Hardware_Esp32_Twai_TwaiStausInfo::FIELD___state].NumericByRef().s4 = status_info.state;
    pStatusInfo[Library_nanoFramework_hardware_esp32_twai_native_nanoFramework_Hardware_Esp32_Twai_TwaiStausInfo::FIELD___messagesToTx].NumericByRef().u4 = status_info.msgs_to_tx;
    pStatusInfo[Library_nanoFramework_hardware_esp32_twai_native_nanoFramework_Hardware_Esp32_Twai_TwaiStausInfo::FIELD___messagesToRx].NumericByRef().u4 = status_info.msgs_to_rx;
    pStatusInfo[Library_nanoFramework_hardware_esp32_twai_native_nanoFramework_Hardware_Esp32_Twai_TwaiStausInfo::FIELD___txErrorCounter].NumericByRef().u4 = status_info.tx_error_counter;
    pStatusInfo[Library_nanoFramework_hardware_esp32_twai_native_nanoFramework_Hardware_Esp32_Twai_TwaiStausInfo::FIELD___rxErrorCounter].NumericByRef().u4 = status_info.rx_error_counter;
    pStatusInfo[Library_nanoFramework_hardware_esp32_twai_native_nanoFramework_Hardware_Esp32_Twai_TwaiStausInfo::FIELD___txFailedCount].NumericByRef().u4 = status_info.tx_failed_count;
    pStatusInfo[Library_nanoFramework_hardware_esp32_twai_native_nanoFramework_Hardware_Esp32_Twai_TwaiStausInfo::FIELD___rxMissedCount].NumericByRef().u4 = status_info.rx_missed_count;
    pStatusInfo[Library_nanoFramework_hardware_esp32_twai_native_nanoFramework_Hardware_Esp32_Twai_TwaiStausInfo::FIELD___rxOverrunCount].NumericByRef().u4 = status_info.rx_overrun_count;
    pStatusInfo[Library_nanoFramework_hardware_esp32_twai_native_nanoFramework_Hardware_Esp32_Twai_TwaiStausInfo::FIELD___arbitrationLostCount].NumericByRef().u4 = status_info.arb_lost_count;
    pStatusInfo[Library_nanoFramework_hardware_esp32_twai_native_nanoFramework_Hardware_Esp32_Twai_TwaiStausInfo::FIELD___busErrorCount].NumericByRef().u4 = status_info.bus_error_count;

    NANOCLR_NOCLEANUP();
}

HRESULT Library_nanoFramework_hardware_esp32_twai_native_nanoFramework_Hardware_Esp32_Twai_TwaiController::NativeClearTransmitQueue___STATIC__I4( CLR_RT_StackFrame &stack )
{
    NANOCLR_HEADER();

    int result;

    CLR_RT_HeapBlock* pThis = stack.This();
    FAULT_ON_NULL(pThis);

    result = twai_clear_transmit_queue();
    stack.SetResult_I4((CLR_INT32)result);

    NANOCLR_NOCLEANUP();
}

HRESULT Library_nanoFramework_hardware_esp32_twai_native_nanoFramework_Hardware_Esp32_Twai_TwaiController::NativeClearReceiveQueue___STATIC__I4( CLR_RT_StackFrame &stack )
{
    NANOCLR_HEADER();

    int result;

    CLR_RT_HeapBlock* pThis = stack.This();
    FAULT_ON_NULL(pThis);

    result = twai_clear_receive_queue();
    stack.SetResult_I4((CLR_INT32)result);

    NANOCLR_NOCLEANUP();
}
