#ifndef RT_CONFIG_H__
#define RT_CONFIG_H__

#define SOC_STM32F407VG

/* RT-Thread Kernel */

/* klibc options */

/* rt_vsnprintf options */

/* end of rt_vsnprintf options */

/* rt_vsscanf options */

/* end of rt_vsscanf options */

/* rt_memset options */

/* end of rt_memset options */

/* rt_memcpy options */

/* end of rt_memcpy options */

/* rt_memmove options */

/* end of rt_memmove options */

/* rt_memcmp options */

/* end of rt_memcmp options */

/* rt_strstr options */

/* end of rt_strstr options */

/* rt_strcasecmp options */

/* end of rt_strcasecmp options */

/* rt_strncpy options */

/* end of rt_strncpy options */

/* rt_strcpy options */

/* end of rt_strcpy options */

/* rt_strncmp options */

/* end of rt_strncmp options */

/* rt_strcmp options */

/* end of rt_strcmp options */

/* rt_strlen options */

/* end of rt_strlen options */

/* rt_strnlen options */

/* end of rt_strnlen options */
/* end of klibc options */
#define RT_NAME_MAX 12
#define RT_USING_NANO
#define RT_CPUS_NR 1
#define RT_ALIGN_SIZE 8
#define RT_THREAD_PRIORITY_32
#define RT_THREAD_PRIORITY_MAX 32
#define RT_TICK_PER_SECOND 1000
#define RT_USING_OVERFLOW_CHECK
#define RT_USING_HOOK
#define RT_HOOK_USING_FUNC_PTR
#define RT_USING_IDLE_HOOK
#define RT_IDLE_HOOK_LIST_SIZE 4
#define IDLE_THREAD_STACK_SIZE 256
#define RT_USING_TIMER_SOFT
#define RT_TIMER_THREAD_PRIO 4
#define RT_TIMER_THREAD_STACK_SIZE 512

/* kservice options */

/* end of kservice options */
#define RT_USING_DEBUG
#define RT_DEBUGING_ASSERT
#define RT_DEBUGING_COLOR
#define RT_DEBUGING_CONTEXT

/* Inter-Thread communication */

#define RT_USING_SEMAPHORE
#define RT_USING_MUTEX
#define RT_USING_EVENT
#define RT_USING_MAILBOX
#define RT_USING_MESSAGEQUEUE
/* end of Inter-Thread communication */

/* Memory Management */

#define RT_USING_MEMPOOL
#define RT_USING_SMALL_MEM
#define RT_USING_SMALL_MEM_AS_HEAP
#define RT_USING_HEAP
/* end of Memory Management */
#define RT_USING_CONSOLE
#define RT_CONSOLEBUF_SIZE 128
#define RT_CONSOLE_DEVICE_NAME "uart1"
#define RT_USING_CONSOLE_OUTPUT_CTL
#define RT_VER_NUM 0x50300
#define RT_BACKTRACE_LEVEL_MAX_NR 32
/* end of RT-Thread Kernel */
#define RT_USING_HW_ATOMIC
#define ARCH_USING_HW_ATOMIC_8
#define ARCH_USING_HW_ATOMIC_16
#define RT_USING_CPU_FFS
#define ARCH_ARM
#define ARCH_ARM_CORTEX_M
#define ARCH_ARM_CORTEX_M4

/* RT-Thread Components */

#define RT_USING_COMPONENTS_INIT
#define RT_USING_USER_MAIN
#define RT_MAIN_THREAD_STACK_SIZE 2048
#define RT_MAIN_THREAD_PRIORITY 10
#define RT_USING_MSH
#define RT_USING_FINSH
#define FINSH_USING_MSH
#define FINSH_THREAD_NAME "tshell"
#define FINSH_THREAD_PRIORITY 20
#define FINSH_THREAD_STACK_SIZE 4096
#define FINSH_USING_HISTORY
#define FINSH_HISTORY_LINES 5
#define FINSH_USING_SYMTAB
#define FINSH_CMD_SIZE 80
#define MSH_USING_BUILT_IN_COMMANDS
#define FINSH_USING_DESCRIPTION
#define FINSH_ARG_MAX 10
#define FINSH_USING_OPTION_COMPLETION
#define RT_USING_DFS
#define RT_USING_FAL
#define RT_USING_SYSTEM_WORKQUEUE
#define RT_USING_SDIO
#define RT_USING_SPI
#define RT_USING_WIFI
#define RT_USING_PIN
#define RT_USING_POSIX_FS
#define RT_USING_POSIX_SOCKET
#define RT_USING_SAL
#define RT_USING_LWIP

/* Using USB legacy version */

/* end of Using USB legacy version */
/* end of RT-Thread Components */

/* RT-Thread Utestcases */

/* end of RT-Thread Utestcases */

/* RT-Thread online packages */

/* IoT - internet of things */

#define PKG_USING_WIFI_HOST_DRIVER

/* WHD Configuration */

#define WHD_SET_COUNTRY_FROM_HOST
#define WHD_COUNTRY_CODE "AU"
#define WHD_COUNTRY_CODE_REVISION 0

/* WHD Thread Configuration */

#define CY_WIFI_WHD_THREAD_PRIORITY 8
#define CY_WIFI_WHD_THREAD_STACK_SIZE 5120
/* end of WHD Thread Configuration */

/* WHD Resources Configuration */

#define WHD_RESOURCES_IN_EXTERNAL_STORAGE_FAL
#define WHD_RESOURCES_FIRMWARE_PART_NAME "whd_firmware"
#define WHD_RESOURCES_CLM_PART_NAME "whd_clm"
#define WHD_RESOURCES_NVRAM_PART_NAME "whd_nvram"
#define WHD_RESOURCES_BLOCK_SIZE 1024
/* end of WHD Resources Configuration */
/* end of WHD Configuration */

/* Hardware Configuration */

#define WHD_USING_CHIP_CYW43438
#define WHD_USING_WIFI5

/* Pin Configuration */

#define CYBSP_USING_PIN_NUMBER
#define CYBSP_USING_OOB_INTR
#define CYBSP_REG_ON_PIN -1
#define CYBSP_HOST_WAKE_IRQ_PIN -1
#define CYBSP_HOST_WAKE_IRQ_EVENT_FALL
#define CYBSP_OOB_INTR_PRIORITY 2
/* end of Pin Configuration */
/* end of Hardware Configuration */

/* Porting options */

#define WHD_PORTING_BSP
#define WHD_PORTING_HAL
#define WHD_PORTING_RTOS
#define WHD_USE_CUSTOM_MALLOC_IMPL
/* end of Porting options */
#define WHD_LOG_LEVEL_ERROR
#define PKG_USING_WIFI_HOST_DRIVER_LATEST_VERSION
#define PKG_WIFI_HOST_DRIVER_VER_NUM 0x99999
#define PKG_USING_ESP_HOSTED

/* ESP-Hosted Configure */

#define ESP_HOSTED_SPI_HOST_INTERFACE
#define ESP_HOSTED_SLAVE_CHIPSET_ESP32
#define ESP_HOSTED_MAX_SIMULTANEOUS_SYNC_RPC_REQUESTS 8
#define ESP_HOSTED_MAX_SIMULTANEOUS_ASYNC_RPC_REQUESTS 8
#define ESP_HOSTED_RPC_THREAD_PRIORITY 20
#define ESP_HOSTED_RPC_THREAD_STACK_SIZE 5120
#define ESP_HOSTED_TRANSPORT_THREAD_PRIORITY 20
#define ESP_HOSTED_TRANSPORT_THREAD_STACK_SIZE 1024
#define ESP_HOSTED_TRANSPORT_QUEUE_NUMBER 8
#define ESP_HOSTED_SPI_DEVICE_NAME "esp-hosted"
#define ESP_HOSTED_SPI_BUS_NAME "spi1"
#define ESP_HOSTED_SPI_MODE_3
#define ESP_HOSTED_SPI_MAX_HZ 30000000
#define ESP_HOSTED_USING_PIN_NAME
#define ESP_HOSTED_SPI_CS_PIN_NAME "PA.0"
#define ESP_HOSTED_DATA_READY_PIN_NAME "PA.0"
#define ESP_HOSTED_HANDSHAKE_PIN_NAME "PA.0"
#define ESP_HOSTED_RESET_PIN_NAME "PA.0"
#define ESP_HOSTED_THREAD_INIT
#define ESP_HOSTED_INIT_THREAD_STACK_SIZE 2048
#define ESP_HOSTED_INIT_THREAD_PRIORITY 20
/* end of ESP-Hosted Configure */

/* Wi-Fi Configure */

#define SOC_WIFI_CSI_SUPPORT
#define ESP_WIFI_STATIC_RX_BUFFER_NUM 10
#define ESP_WIFI_DYNAMIC_RX_BUFFER_NUM 32
#define ESP_WIFI_DYNAMIC_TX_BUFFER
#define ESP_WIFI_TX_BUFFER_TYPE 1
#define ESP_WIFI_CACHE_TX_BUFFER_NUM 16
#define ESP_WIFI_DYNAMIC_TX_BUFFER_NUM 32
#define ESP_WIFI_AMPDU_TX_ENABLED
#define ESP_WIFI_TX_BA_WIN 6
#define ESP_WIFI_AMPDU_RX_ENABLED
#define ESP_WIFI_RX_BA_WIN 6
#define ESP_WIFI_SOFTAP_BEACON_MAX_LEN 752
#define ESP_WIFI_MGMT_SBUF_NUM 32
#define ESP_WIFI_ENABLE_WPA3_SAE
#define ESP_WIFI_STA_DISCONNECTED_PM_ENABLE
#define ESP_WIFI_ESPNOW_MAX_ENCRYPT_NUM 7
/* end of Wi-Fi Configure */
#define PKG_USING_ESP_HOSTED_LATEST_VERSION
#define PKG_ESP_HOSTED_VER_NUM 0x99999

/* Wi-Fi */

/* Marvell WiFi */

#define PKG_USING_WLANMARVELL
#define PKG_USING_WLANMARVELL_LATEST_VERSION
#define MARVELLWIFI_USING_STA
#define MARVELLWIFI_STA_REASSOCIATION
/* end of Marvell WiFi */

/* Wiced WiFi */

/* end of Wiced WiFi */
#define PKG_USING_RW007
#define PKG_USING_RW007_V210
#define RW007_USING_STM32_DRIVERS
#define RW007_SPI_MAX_HZ 30000000
#define RW007_SPI_BUS_NAME "spi2"
#define RW007_CS_PIN 102
#define RW007_BOOT0_PIN 175
#define RW007_BOOT1_PIN 102
#define RW007_INT_BUSY_PIN 62
#define RW007_RST_PIN 187

/* CYW43012 WiFi */

#define PKG_USING_WLAN_CYW43012
#define PKG_USING_WLAN_CYW43012_V001
/* end of CYW43012 WiFi */

/* BL808 WiFi */

/* end of BL808 WiFi */

/* CYW43439 WiFi */

/* end of CYW43439 WiFi */
/* end of Wi-Fi */

/* IoT Cloud */

/* end of IoT Cloud */
#define PKG_USING_TCPSERVER
#define TCPSERVER_NAME "tcpserv"
#define TCPSERVER_STACK_SIZE 4096
#define TCPSERVER_PRIO 12
#define TCPSERVER_SOCKET_MAX 512
#define TCPSERVER_CLI_NUM 5
#define PKG_USING_TCPSERVER_LATEST_VERSION
#define PKG_USING_MAVLINK
#define PKG_USING_MAVLINK_LATEST_VERSION
#define PKG_USING_MAVLINK_DIALECT_standard
/* end of IoT - internet of things */

/* security packages */

/* end of security packages */

/* language packages */

/* JSON: JavaScript Object Notation, a lightweight data-interchange format */

/* end of JSON: JavaScript Object Notation, a lightweight data-interchange format */

/* XML: Extensible Markup Language */

/* end of XML: Extensible Markup Language */
/* end of language packages */

/* multimedia packages */

/* LVGL: powerful and easy-to-use embedded GUI library */

/* end of LVGL: powerful and easy-to-use embedded GUI library */

/* u8g2: a monochrome graphic library */

/* end of u8g2: a monochrome graphic library */
/* end of multimedia packages */

/* tools packages */

#define PKG_USING_RVBACKTRACE
#define PKG_USING_RVBACKTRACE_LATEST_VERSION
#define PKG_RVBACKTRACE_VER_NUM 0x99999
/* end of tools packages */

/* system packages */

/* enhanced kernel services */

/* end of enhanced kernel services */

/* acceleration: Assembly language or algorithmic acceleration packages */

/* end of acceleration: Assembly language or algorithmic acceleration packages */

/* CMSIS: ARM Cortex-M Microcontroller Software Interface Standard */

#define PKG_USING_CMSIS_CORE
#define PKG_USING_CMSIS_CORE_LATEST_VERSION
/* end of CMSIS: ARM Cortex-M Microcontroller Software Interface Standard */

/* Micrium: Micrium software products porting for RT-Thread */

/* end of Micrium: Micrium software products porting for RT-Thread */
#define PKG_USING_FREERTOS_WRAPPER
#define PKG_USING_FREERTOS_WRAPPER_LATEST_VERSION
/* end of system packages */

/* peripheral libraries and drivers */

/* HAL & SDK Drivers */

/* STM32 HAL & SDK Drivers */

#define PKG_USING_STM32F4_HAL_DRIVER
#define PKG_USING_STM32F4_HAL_DRIVER_LATEST_VERSION
#define PKG_USING_STM32F4_CMSIS_DRIVER
#define PKG_USING_STM32F4_CMSIS_DRIVER_LATEST_VERSION
/* end of STM32 HAL & SDK Drivers */

/* Infineon HAL Packages */

/* end of Infineon HAL Packages */

/* Kendryte SDK */

/* end of Kendryte SDK */

/* WCH HAL & SDK Drivers */

/* end of WCH HAL & SDK Drivers */

/* AT32 HAL & SDK Drivers */

/* end of AT32 HAL & SDK Drivers */

/* HC32 DDL Drivers */

/* end of HC32 DDL Drivers */

/* NXP HAL & SDK Drivers */

/* end of NXP HAL & SDK Drivers */

/* NUVOTON Drivers */

/* end of NUVOTON Drivers */

/* GD32 Drivers */

/* end of GD32 Drivers */

/* HPMicro SDK */

/* end of HPMicro SDK */

/* FT32 HAL & SDK Drivers */

/* end of FT32 HAL & SDK Drivers */

/* NOVOSNS Drivers */

/* end of NOVOSNS Drivers */
/* end of HAL & SDK Drivers */

/* sensors drivers */

#define PKG_USING_BME680
#define PKG_USING_BME680_LATEST_VERSION
/* end of sensors drivers */

/* touch drivers */

/* end of touch drivers */
/* end of peripheral libraries and drivers */

/* AI packages */

/* end of AI packages */

/* Signal Processing and Control Algorithm Packages */

/* end of Signal Processing and Control Algorithm Packages */

/* miscellaneous packages */

/* project laboratory */

/* end of project laboratory */

/* samples: kernel and components samples */

/* end of samples: kernel and components samples */

/* entertainment: terminal games and other interesting software packages */

/* end of entertainment: terminal games and other interesting software packages */
/* end of miscellaneous packages */

/* Arduino libraries */


/* Projects and Demos */

/* end of Projects and Demos */

/* Sensors */

/* end of Sensors */

/* Display */

/* end of Display */

/* Timing */

/* end of Timing */

/* Data Processing */

/* end of Data Processing */

/* Data Storage */

/* Communication */

/* end of Communication */

/* Device Control */

/* end of Device Control */

/* Other */

/* end of Other */

/* Signal IO */

/* end of Signal IO */

/* Uncategorized */

/* end of Arduino libraries */
/* end of RT-Thread online packages */
#define SOC_FAMILY_STM32
#define SOC_SERIES_STM32F4
#define BSP_USING_SPI

#endif
