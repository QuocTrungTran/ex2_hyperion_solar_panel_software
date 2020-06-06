/* AUTOGENERATED FILE. DO NOT EDIT. */
#ifndef _MOCK_SPI_H
#define _MOCK_SPI_H

#include "unity.h"
#include "spi.h"

/* Ignore the following warnings, since we are copying code */
#if defined(__GNUC__) && !defined(__ICC) && !defined(__TMS470__)
#if __GNUC__ > 4 || (__GNUC__ == 4 && (__GNUC_MINOR__ > 6 || (__GNUC_MINOR__ == 6 && __GNUC_PATCHLEVEL__ > 0)))
#pragma GCC diagnostic push
#endif
#if !defined(__clang__)
#pragma GCC diagnostic ignored "-Wpragmas"
#endif
#pragma GCC diagnostic ignored "-Wunknown-pragmas"
#pragma GCC diagnostic ignored "-Wduplicate-decl-specifier"
#endif

void mock_spi_Init(void);
void mock_spi_Destroy(void);
void mock_spi_Verify(void);




#define spiInit_Ignore() spiInit_CMockIgnore()
void spiInit_CMockIgnore(void);
#define spiInit_StopIgnore() spiInit_CMockStopIgnore()
void spiInit_CMockStopIgnore(void);
#define spiInit_Expect() spiInit_CMockExpect(__LINE__)
void spiInit_CMockExpect(UNITY_LINE_TYPE cmock_line);
typedef void (* CMOCK_spiInit_CALLBACK)(int cmock_num_calls);
void spiInit_AddCallback(CMOCK_spiInit_CALLBACK Callback);
void spiInit_Stub(CMOCK_spiInit_CALLBACK Callback);
#define spiInit_StubWithCallback spiInit_Stub
#define spiSetFunctional_Ignore() spiSetFunctional_CMockIgnore()
void spiSetFunctional_CMockIgnore(void);
#define spiSetFunctional_StopIgnore() spiSetFunctional_CMockStopIgnore()
void spiSetFunctional_CMockStopIgnore(void);
#define spiSetFunctional_ExpectAnyArgs() spiSetFunctional_CMockExpectAnyArgs(__LINE__)
void spiSetFunctional_CMockExpectAnyArgs(UNITY_LINE_TYPE cmock_line);
#define spiSetFunctional_Expect(spi, port) spiSetFunctional_CMockExpect(__LINE__, spi, port)
void spiSetFunctional_CMockExpect(UNITY_LINE_TYPE cmock_line, spiBASE_t* spi, uint32 port);
typedef void (* CMOCK_spiSetFunctional_CALLBACK)(spiBASE_t* spi, uint32 port, int cmock_num_calls);
void spiSetFunctional_AddCallback(CMOCK_spiSetFunctional_CALLBACK Callback);
void spiSetFunctional_Stub(CMOCK_spiSetFunctional_CALLBACK Callback);
#define spiSetFunctional_StubWithCallback spiSetFunctional_Stub
#define spiEnableNotification_Ignore() spiEnableNotification_CMockIgnore()
void spiEnableNotification_CMockIgnore(void);
#define spiEnableNotification_StopIgnore() spiEnableNotification_CMockStopIgnore()
void spiEnableNotification_CMockStopIgnore(void);
#define spiEnableNotification_ExpectAnyArgs() spiEnableNotification_CMockExpectAnyArgs(__LINE__)
void spiEnableNotification_CMockExpectAnyArgs(UNITY_LINE_TYPE cmock_line);
#define spiEnableNotification_Expect(spi, flags) spiEnableNotification_CMockExpect(__LINE__, spi, flags)
void spiEnableNotification_CMockExpect(UNITY_LINE_TYPE cmock_line, spiBASE_t* spi, uint32 flags);
typedef void (* CMOCK_spiEnableNotification_CALLBACK)(spiBASE_t* spi, uint32 flags, int cmock_num_calls);
void spiEnableNotification_AddCallback(CMOCK_spiEnableNotification_CALLBACK Callback);
void spiEnableNotification_Stub(CMOCK_spiEnableNotification_CALLBACK Callback);
#define spiEnableNotification_StubWithCallback spiEnableNotification_Stub
#define spiDisableNotification_Ignore() spiDisableNotification_CMockIgnore()
void spiDisableNotification_CMockIgnore(void);
#define spiDisableNotification_StopIgnore() spiDisableNotification_CMockStopIgnore()
void spiDisableNotification_CMockStopIgnore(void);
#define spiDisableNotification_ExpectAnyArgs() spiDisableNotification_CMockExpectAnyArgs(__LINE__)
void spiDisableNotification_CMockExpectAnyArgs(UNITY_LINE_TYPE cmock_line);
#define spiDisableNotification_Expect(spi, flags) spiDisableNotification_CMockExpect(__LINE__, spi, flags)
void spiDisableNotification_CMockExpect(UNITY_LINE_TYPE cmock_line, spiBASE_t* spi, uint32 flags);
typedef void (* CMOCK_spiDisableNotification_CALLBACK)(spiBASE_t* spi, uint32 flags, int cmock_num_calls);
void spiDisableNotification_AddCallback(CMOCK_spiDisableNotification_CALLBACK Callback);
void spiDisableNotification_Stub(CMOCK_spiDisableNotification_CALLBACK Callback);
#define spiDisableNotification_StubWithCallback spiDisableNotification_Stub
#define spiTransmitData_IgnoreAndReturn(cmock_retval) spiTransmitData_CMockIgnoreAndReturn(__LINE__, cmock_retval)
void spiTransmitData_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, uint32 cmock_to_return);
#define spiTransmitData_StopIgnore() spiTransmitData_CMockStopIgnore()
void spiTransmitData_CMockStopIgnore(void);
#define spiTransmitData_ExpectAnyArgsAndReturn(cmock_retval) spiTransmitData_CMockExpectAnyArgsAndReturn(__LINE__, cmock_retval)
void spiTransmitData_CMockExpectAnyArgsAndReturn(UNITY_LINE_TYPE cmock_line, uint32 cmock_to_return);
#define spiTransmitData_ExpectAndReturn(spi, dataconfig_t, blocksize, srcbuff, cmock_retval) spiTransmitData_CMockExpectAndReturn(__LINE__, spi, dataconfig_t, blocksize, srcbuff, cmock_retval)
void spiTransmitData_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, spiBASE_t* spi, spiDAT1_t* dataconfig_t, uint32 blocksize, uint16* srcbuff, uint32 cmock_to_return);
typedef uint32 (* CMOCK_spiTransmitData_CALLBACK)(spiBASE_t* spi, spiDAT1_t* dataconfig_t, uint32 blocksize, uint16* srcbuff, int cmock_num_calls);
void spiTransmitData_AddCallback(CMOCK_spiTransmitData_CALLBACK Callback);
void spiTransmitData_Stub(CMOCK_spiTransmitData_CALLBACK Callback);
#define spiTransmitData_StubWithCallback spiTransmitData_Stub
#define spiSendData_Ignore() spiSendData_CMockIgnore()
void spiSendData_CMockIgnore(void);
#define spiSendData_StopIgnore() spiSendData_CMockStopIgnore()
void spiSendData_CMockStopIgnore(void);
#define spiSendData_ExpectAnyArgs() spiSendData_CMockExpectAnyArgs(__LINE__)
void spiSendData_CMockExpectAnyArgs(UNITY_LINE_TYPE cmock_line);
#define spiSendData_Expect(spi, dataconfig_t, blocksize, srcbuff) spiSendData_CMockExpect(__LINE__, spi, dataconfig_t, blocksize, srcbuff)
void spiSendData_CMockExpect(UNITY_LINE_TYPE cmock_line, spiBASE_t* spi, spiDAT1_t* dataconfig_t, uint32 blocksize, uint16* srcbuff);
typedef void (* CMOCK_spiSendData_CALLBACK)(spiBASE_t* spi, spiDAT1_t* dataconfig_t, uint32 blocksize, uint16* srcbuff, int cmock_num_calls);
void spiSendData_AddCallback(CMOCK_spiSendData_CALLBACK Callback);
void spiSendData_Stub(CMOCK_spiSendData_CALLBACK Callback);
#define spiSendData_StubWithCallback spiSendData_Stub
#define spiReceiveData_IgnoreAndReturn(cmock_retval) spiReceiveData_CMockIgnoreAndReturn(__LINE__, cmock_retval)
void spiReceiveData_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, uint32 cmock_to_return);
#define spiReceiveData_StopIgnore() spiReceiveData_CMockStopIgnore()
void spiReceiveData_CMockStopIgnore(void);
#define spiReceiveData_ExpectAnyArgsAndReturn(cmock_retval) spiReceiveData_CMockExpectAnyArgsAndReturn(__LINE__, cmock_retval)
void spiReceiveData_CMockExpectAnyArgsAndReturn(UNITY_LINE_TYPE cmock_line, uint32 cmock_to_return);
#define spiReceiveData_ExpectAndReturn(spi, dataconfig_t, blocksize, destbuff, cmock_retval) spiReceiveData_CMockExpectAndReturn(__LINE__, spi, dataconfig_t, blocksize, destbuff, cmock_retval)
void spiReceiveData_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, spiBASE_t* spi, spiDAT1_t* dataconfig_t, uint32 blocksize, uint16* destbuff, uint32 cmock_to_return);
typedef uint32 (* CMOCK_spiReceiveData_CALLBACK)(spiBASE_t* spi, spiDAT1_t* dataconfig_t, uint32 blocksize, uint16* destbuff, int cmock_num_calls);
void spiReceiveData_AddCallback(CMOCK_spiReceiveData_CALLBACK Callback);
void spiReceiveData_Stub(CMOCK_spiReceiveData_CALLBACK Callback);
#define spiReceiveData_StubWithCallback spiReceiveData_Stub
#define spiGetData_Ignore() spiGetData_CMockIgnore()
void spiGetData_CMockIgnore(void);
#define spiGetData_StopIgnore() spiGetData_CMockStopIgnore()
void spiGetData_CMockStopIgnore(void);
#define spiGetData_ExpectAnyArgs() spiGetData_CMockExpectAnyArgs(__LINE__)
void spiGetData_CMockExpectAnyArgs(UNITY_LINE_TYPE cmock_line);
#define spiGetData_Expect(spi, dataconfig_t, blocksize, destbuff) spiGetData_CMockExpect(__LINE__, spi, dataconfig_t, blocksize, destbuff)
void spiGetData_CMockExpect(UNITY_LINE_TYPE cmock_line, spiBASE_t* spi, spiDAT1_t* dataconfig_t, uint32 blocksize, uint16* destbuff);
typedef void (* CMOCK_spiGetData_CALLBACK)(spiBASE_t* spi, spiDAT1_t* dataconfig_t, uint32 blocksize, uint16* destbuff, int cmock_num_calls);
void spiGetData_AddCallback(CMOCK_spiGetData_CALLBACK Callback);
void spiGetData_Stub(CMOCK_spiGetData_CALLBACK Callback);
#define spiGetData_StubWithCallback spiGetData_Stub
#define spiTransmitAndReceiveData_IgnoreAndReturn(cmock_retval) spiTransmitAndReceiveData_CMockIgnoreAndReturn(__LINE__, cmock_retval)
void spiTransmitAndReceiveData_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, uint32 cmock_to_return);
#define spiTransmitAndReceiveData_StopIgnore() spiTransmitAndReceiveData_CMockStopIgnore()
void spiTransmitAndReceiveData_CMockStopIgnore(void);
#define spiTransmitAndReceiveData_ExpectAnyArgsAndReturn(cmock_retval) spiTransmitAndReceiveData_CMockExpectAnyArgsAndReturn(__LINE__, cmock_retval)
void spiTransmitAndReceiveData_CMockExpectAnyArgsAndReturn(UNITY_LINE_TYPE cmock_line, uint32 cmock_to_return);
#define spiTransmitAndReceiveData_ExpectAndReturn(spi, dataconfig_t, blocksize, srcbuff, destbuff, cmock_retval) spiTransmitAndReceiveData_CMockExpectAndReturn(__LINE__, spi, dataconfig_t, blocksize, srcbuff, destbuff, cmock_retval)
void spiTransmitAndReceiveData_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, spiBASE_t* spi, spiDAT1_t* dataconfig_t, uint32 blocksize, uint16* srcbuff, uint16* destbuff, uint32 cmock_to_return);
typedef uint32 (* CMOCK_spiTransmitAndReceiveData_CALLBACK)(spiBASE_t* spi, spiDAT1_t* dataconfig_t, uint32 blocksize, uint16* srcbuff, uint16* destbuff, int cmock_num_calls);
void spiTransmitAndReceiveData_AddCallback(CMOCK_spiTransmitAndReceiveData_CALLBACK Callback);
void spiTransmitAndReceiveData_Stub(CMOCK_spiTransmitAndReceiveData_CALLBACK Callback);
#define spiTransmitAndReceiveData_StubWithCallback spiTransmitAndReceiveData_Stub
#define spiSendAndGetData_Ignore() spiSendAndGetData_CMockIgnore()
void spiSendAndGetData_CMockIgnore(void);
#define spiSendAndGetData_StopIgnore() spiSendAndGetData_CMockStopIgnore()
void spiSendAndGetData_CMockStopIgnore(void);
#define spiSendAndGetData_ExpectAnyArgs() spiSendAndGetData_CMockExpectAnyArgs(__LINE__)
void spiSendAndGetData_CMockExpectAnyArgs(UNITY_LINE_TYPE cmock_line);
#define spiSendAndGetData_Expect(spi, dataconfig_t, blocksize, srcbuff, destbuff) spiSendAndGetData_CMockExpect(__LINE__, spi, dataconfig_t, blocksize, srcbuff, destbuff)
void spiSendAndGetData_CMockExpect(UNITY_LINE_TYPE cmock_line, spiBASE_t* spi, spiDAT1_t* dataconfig_t, uint32 blocksize, uint16* srcbuff, uint16* destbuff);
typedef void (* CMOCK_spiSendAndGetData_CALLBACK)(spiBASE_t* spi, spiDAT1_t* dataconfig_t, uint32 blocksize, uint16* srcbuff, uint16* destbuff, int cmock_num_calls);
void spiSendAndGetData_AddCallback(CMOCK_spiSendAndGetData_CALLBACK Callback);
void spiSendAndGetData_Stub(CMOCK_spiSendAndGetData_CALLBACK Callback);
#define spiSendAndGetData_StubWithCallback spiSendAndGetData_Stub
#define spiEnableLoopback_Ignore() spiEnableLoopback_CMockIgnore()
void spiEnableLoopback_CMockIgnore(void);
#define spiEnableLoopback_StopIgnore() spiEnableLoopback_CMockStopIgnore()
void spiEnableLoopback_CMockStopIgnore(void);
#define spiEnableLoopback_ExpectAnyArgs() spiEnableLoopback_CMockExpectAnyArgs(__LINE__)
void spiEnableLoopback_CMockExpectAnyArgs(UNITY_LINE_TYPE cmock_line);
#define spiEnableLoopback_Expect(spi, Loopbacktype) spiEnableLoopback_CMockExpect(__LINE__, spi, Loopbacktype)
void spiEnableLoopback_CMockExpect(UNITY_LINE_TYPE cmock_line, spiBASE_t* spi, loopBackType_t Loopbacktype);
typedef void (* CMOCK_spiEnableLoopback_CALLBACK)(spiBASE_t* spi, loopBackType_t Loopbacktype, int cmock_num_calls);
void spiEnableLoopback_AddCallback(CMOCK_spiEnableLoopback_CALLBACK Callback);
void spiEnableLoopback_Stub(CMOCK_spiEnableLoopback_CALLBACK Callback);
#define spiEnableLoopback_StubWithCallback spiEnableLoopback_Stub
#define spiDisableLoopback_Ignore() spiDisableLoopback_CMockIgnore()
void spiDisableLoopback_CMockIgnore(void);
#define spiDisableLoopback_StopIgnore() spiDisableLoopback_CMockStopIgnore()
void spiDisableLoopback_CMockStopIgnore(void);
#define spiDisableLoopback_ExpectAnyArgs() spiDisableLoopback_CMockExpectAnyArgs(__LINE__)
void spiDisableLoopback_CMockExpectAnyArgs(UNITY_LINE_TYPE cmock_line);
#define spiDisableLoopback_Expect(spi) spiDisableLoopback_CMockExpect(__LINE__, spi)
void spiDisableLoopback_CMockExpect(UNITY_LINE_TYPE cmock_line, spiBASE_t* spi);
typedef void (* CMOCK_spiDisableLoopback_CALLBACK)(spiBASE_t* spi, int cmock_num_calls);
void spiDisableLoopback_AddCallback(CMOCK_spiDisableLoopback_CALLBACK Callback);
void spiDisableLoopback_Stub(CMOCK_spiDisableLoopback_CALLBACK Callback);
#define spiDisableLoopback_StubWithCallback spiDisableLoopback_Stub
#define SpiTxStatus_IgnoreAndReturn(cmock_retval) SpiTxStatus_CMockIgnoreAndReturn(__LINE__, cmock_retval)
void SpiTxStatus_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, SpiDataStatus_t cmock_to_return);
#define SpiTxStatus_StopIgnore() SpiTxStatus_CMockStopIgnore()
void SpiTxStatus_CMockStopIgnore(void);
#define SpiTxStatus_ExpectAnyArgsAndReturn(cmock_retval) SpiTxStatus_CMockExpectAnyArgsAndReturn(__LINE__, cmock_retval)
void SpiTxStatus_CMockExpectAnyArgsAndReturn(UNITY_LINE_TYPE cmock_line, SpiDataStatus_t cmock_to_return);
#define SpiTxStatus_ExpectAndReturn(spi, cmock_retval) SpiTxStatus_CMockExpectAndReturn(__LINE__, spi, cmock_retval)
void SpiTxStatus_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, spiBASE_t* spi, SpiDataStatus_t cmock_to_return);
typedef SpiDataStatus_t (* CMOCK_SpiTxStatus_CALLBACK)(spiBASE_t* spi, int cmock_num_calls);
void SpiTxStatus_AddCallback(CMOCK_SpiTxStatus_CALLBACK Callback);
void SpiTxStatus_Stub(CMOCK_SpiTxStatus_CALLBACK Callback);
#define SpiTxStatus_StubWithCallback SpiTxStatus_Stub
#define SpiRxStatus_IgnoreAndReturn(cmock_retval) SpiRxStatus_CMockIgnoreAndReturn(__LINE__, cmock_retval)
void SpiRxStatus_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, SpiDataStatus_t cmock_to_return);
#define SpiRxStatus_StopIgnore() SpiRxStatus_CMockStopIgnore()
void SpiRxStatus_CMockStopIgnore(void);
#define SpiRxStatus_ExpectAnyArgsAndReturn(cmock_retval) SpiRxStatus_CMockExpectAnyArgsAndReturn(__LINE__, cmock_retval)
void SpiRxStatus_CMockExpectAnyArgsAndReturn(UNITY_LINE_TYPE cmock_line, SpiDataStatus_t cmock_to_return);
#define SpiRxStatus_ExpectAndReturn(spi, cmock_retval) SpiRxStatus_CMockExpectAndReturn(__LINE__, spi, cmock_retval)
void SpiRxStatus_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, spiBASE_t* spi, SpiDataStatus_t cmock_to_return);
typedef SpiDataStatus_t (* CMOCK_SpiRxStatus_CALLBACK)(spiBASE_t* spi, int cmock_num_calls);
void SpiRxStatus_AddCallback(CMOCK_SpiRxStatus_CALLBACK Callback);
void SpiRxStatus_Stub(CMOCK_SpiRxStatus_CALLBACK Callback);
#define SpiRxStatus_StubWithCallback SpiRxStatus_Stub
#define spi3GetConfigValue_Ignore() spi3GetConfigValue_CMockIgnore()
void spi3GetConfigValue_CMockIgnore(void);
#define spi3GetConfigValue_StopIgnore() spi3GetConfigValue_CMockStopIgnore()
void spi3GetConfigValue_CMockStopIgnore(void);
#define spi3GetConfigValue_ExpectAnyArgs() spi3GetConfigValue_CMockExpectAnyArgs(__LINE__)
void spi3GetConfigValue_CMockExpectAnyArgs(UNITY_LINE_TYPE cmock_line);
#define spi3GetConfigValue_Expect(config_reg, type) spi3GetConfigValue_CMockExpect(__LINE__, config_reg, type)
void spi3GetConfigValue_CMockExpect(UNITY_LINE_TYPE cmock_line, spi_config_reg_t* config_reg, config_value_type_t type);
typedef void (* CMOCK_spi3GetConfigValue_CALLBACK)(spi_config_reg_t* config_reg, config_value_type_t type, int cmock_num_calls);
void spi3GetConfigValue_AddCallback(CMOCK_spi3GetConfigValue_CALLBACK Callback);
void spi3GetConfigValue_Stub(CMOCK_spi3GetConfigValue_CALLBACK Callback);
#define spi3GetConfigValue_StubWithCallback spi3GetConfigValue_Stub
#define spiNotification_Ignore() spiNotification_CMockIgnore()
void spiNotification_CMockIgnore(void);
#define spiNotification_StopIgnore() spiNotification_CMockStopIgnore()
void spiNotification_CMockStopIgnore(void);
#define spiNotification_ExpectAnyArgs() spiNotification_CMockExpectAnyArgs(__LINE__)
void spiNotification_CMockExpectAnyArgs(UNITY_LINE_TYPE cmock_line);
#define spiNotification_Expect(spi, flags) spiNotification_CMockExpect(__LINE__, spi, flags)
void spiNotification_CMockExpect(UNITY_LINE_TYPE cmock_line, spiBASE_t* spi, uint32 flags);
typedef void (* CMOCK_spiNotification_CALLBACK)(spiBASE_t* spi, uint32 flags, int cmock_num_calls);
void spiNotification_AddCallback(CMOCK_spiNotification_CALLBACK Callback);
void spiNotification_Stub(CMOCK_spiNotification_CALLBACK Callback);
#define spiNotification_StubWithCallback spiNotification_Stub
#define spiEndNotification_Ignore() spiEndNotification_CMockIgnore()
void spiEndNotification_CMockIgnore(void);
#define spiEndNotification_StopIgnore() spiEndNotification_CMockStopIgnore()
void spiEndNotification_CMockStopIgnore(void);
#define spiEndNotification_ExpectAnyArgs() spiEndNotification_CMockExpectAnyArgs(__LINE__)
void spiEndNotification_CMockExpectAnyArgs(UNITY_LINE_TYPE cmock_line);
#define spiEndNotification_Expect(spi) spiEndNotification_CMockExpect(__LINE__, spi)
void spiEndNotification_CMockExpect(UNITY_LINE_TYPE cmock_line, spiBASE_t* spi);
typedef void (* CMOCK_spiEndNotification_CALLBACK)(spiBASE_t* spi, int cmock_num_calls);
void spiEndNotification_AddCallback(CMOCK_spiEndNotification_CALLBACK Callback);
void spiEndNotification_Stub(CMOCK_spiEndNotification_CALLBACK Callback);
#define spiEndNotification_StubWithCallback spiEndNotification_Stub

#if defined(__GNUC__) && !defined(__ICC) && !defined(__TMS470__)
#if __GNUC__ > 4 || (__GNUC__ == 4 && (__GNUC_MINOR__ > 6 || (__GNUC_MINOR__ == 6 && __GNUC_PATCHLEVEL__ > 0)))
#pragma GCC diagnostic pop
#endif
#endif

#endif
