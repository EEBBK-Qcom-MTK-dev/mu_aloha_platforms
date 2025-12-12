#include <Library/BaseLib.h>
#include <Library/PlatformConfigurationMapLib.h>


static CONFIGURATION_DESCRIPTOR_EX gDeviceConfigurationDescriptorEx[] = {
// Configuration Map
    {"NumCpusFuseAddr", 0x5c04c},
    {"EnableShell", 0x1},
    {"SharedIMEMBaseAddr", 0x146aa000},
    {"DloadCookieAddr", 0x1fd3000},
    {"DloadCookieValue", 0x10},
    {"NumCpus", 0x4},
    {"NumActiveCores", 0x8},
    {"MaxLogFileSize", 0x400000},
    {"USBHS1_Config", 0x0},
    {"UsbFnIoRevNum", 0x10001},
    {"PwrBtnShutdownFlag", 0x0},
    {"Sdc1GpioConfigOn", 0x1e92},
    {"Sdc2GpioConfigOn", 0x1e92},
    {"Sdc1GpioConfigOff", 0xa00},
    {"Sdc2GpioConfigOff", 0xa00},
    {"EnableSDHCSwitch", 0x1},
    {"SecurityFlag", 0xc4},
    {"TzAppsRegnAddr", 0x86d00000},
    {"TzAppsRegnSize", 0x2200000},
    {"EnableLogFsSyncInRetail", 0x1},
    {"DetectRetailUserAttentionHotkey", 0x0},
    {"DetectRetailUserAttentionHotkeyCode", 0x17},
    {"EnableOEMSetupAppInRetail", 0x0},
    {"EnableMultiThreading", 0x1},
    {"MaxCoreCnt", 8},
    {"EarlyInitCoreCnt", 1},
    {"EnableDisplayThread", 0},
    {"AllowNonPersistentVarsInRetail", 0x1},
    {"EnableUefiSecAppDebugLogDump", 0x0},
    {"DDRInfoNotifyFlag", 0x1},
  // Terminator
    {"Terminator", 0xFFFFFFFF}};

CONFIGURATION_DESCRIPTOR_EX *GetPlatformConfigurationMap()
{
  return gDeviceConfigurationDescriptorEx;
}
