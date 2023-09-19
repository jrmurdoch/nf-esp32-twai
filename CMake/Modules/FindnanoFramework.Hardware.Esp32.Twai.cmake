#
# Copyright (c) .NET Foundation and Contributors
# See LICENSE file in the project root for full license information.
#

# native code directory
set(BASE_PATH_FOR_THIS_MODULE ${BASE_PATH_FOR_CLASS_LIBRARIES_MODULES}/nanoFramework.Hardware.Esp32.Twai)


# set include directories
list(APPEND nanoFramework.Hardware.Esp32.Twai_INCLUDE_DIRS ${PROJECT_SOURCE_DIR}/src/CLR/Core)
list(APPEND nanoFramework.Hardware.Esp32.Twai_INCLUDE_DIRS ${PROJECT_SOURCE_DIR}/src/CLR/Include)
list(APPEND nanoFramework.Hardware.Esp32.Twai_INCLUDE_DIRS ${PROJECT_SOURCE_DIR}/src/HAL/Include)
list(APPEND nanoFramework.Hardware.Esp32.Twai_INCLUDE_DIRS ${PROJECT_SOURCE_DIR}/src/PAL/Include)
list(APPEND nanoFramework.Hardware.Esp32.Twai_INCLUDE_DIRS ${BASE_PATH_FOR_THIS_MODULE})
list(APPEND nanoFramework.Hardware.Esp32.Twai_INCLUDE_DIRS ${PROJECT_SOURCE_DIR}/src/nanoFramework.Hardware.Esp32.Twai)

# source files
set(nanoFramework.Hardware.Esp32.Twai_SRCS

    nanoFramework_hardware_esp32_twai_native.cpp


    nanoFramework_hardware_esp32_twai_native_nanoFramework_Hardware_Esp32_Twai_TwaiController.cpp

)

foreach(SRC_FILE ${nanoFramework.Hardware.Esp32.Twai_SRCS})

    set(nanoFramework.Hardware.Esp32.Twai_SRC_FILE SRC_FILE-NOTFOUND)

    find_file(nanoFramework.Hardware.Esp32.Twai_SRC_FILE ${SRC_FILE}
        PATHS
	        ${BASE_PATH_FOR_THIS_MODULE}
	        ${TARGET_BASE_LOCATION}
            ${PROJECT_SOURCE_DIR}/src/nanoFramework.Hardware.Esp32.Twai

	    CMAKE_FIND_ROOT_PATH_BOTH
    )

    if (BUILD_VERBOSE)
        message("${SRC_FILE} >> ${nanoFramework.Hardware.Esp32.Twai_SRC_FILE}")
    endif()

    list(APPEND nanoFramework.Hardware.Esp32.Twai_SOURCES ${nanoFramework.Hardware.Esp32.Twai_SRC_FILE})

endforeach()

include(FindPackageHandleStandardArgs)

FIND_PACKAGE_HANDLE_STANDARD_ARGS(nanoFramework.Hardware.Esp32.Twai DEFAULT_MSG nanoFramework.Hardware.Esp32.Twai_INCLUDE_DIRS nanoFramework.Hardware.Esp32.Twai_SOURCES)
