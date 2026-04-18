idf_component_register(SRCS 
                    "BleConnectionStatus.cpp" "BleGamepad.cpp" 
                    "BleGamepadConfiguration.cpp" "BleGamepadOutput.cpp"
                    INCLUDE_DIRS "."
                    REQUIRES driver
                    esp_common esp_system
                    esp-nimble-cpp)

target_compile_options(${COMPONENT_LIB} PRIVATE "-Wno-error")

