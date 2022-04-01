cmake_minimum_required (VERSION 3.2)
project(bin2ascii)
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_FLAGS "-Os -fno-rtti ")

#Find library to link against 

find_library(XBTLIB 
                    NAMES 
                         xbtbinfileutils

                    HINTS 
                         ${CMAKE_INSTALL_PREFIX}
                    PATHS
                         ${CMAKE_INSTALL_PREFIX}
                    PATH_SUFFIXES
                          "lib"
                          "local/lib" 
                          "xbtbinfileutils" 
                          "local/lib/xbtbinfileutils" 
                          "xbtbinfileutils/lib"
                          "xbtbinfileutils/bin"            
                              
                         )
                         
link_libraries(xbtbinfileutils ${XBTLIB})

# Find header files
#find_path(HDRS xbtbinfileutils/BinDecoder.h)


find_path(HDRS      BinDecoder.h
                    NAMES 
                         BinDecoder.h
                    HINTS 
                         ${CMAKE_INSTALL_PREFIX}
                         ${CMAKE_SYSTEM_PREFIX_PATH}
                    PATHS
                         ${CMAKE_INSTALL_PREFIX}
                         ${CMAKE_SYSTEM_PREFIX_PATH}
                    PATH_SUFFIXES
                          "lib"
                          "local/lib" 
                          "xbtbinfileutils" 
                          "local/lib/xbtbinfileutils" 
                          "xbtbinfileutils/lib"
                          "xbtbinfileutils/bin"
                          "xbtbinfileutils/include/xbtbinfileutils"            
                              
                         )





include_directories(${HDRS}/xbtbinfileutils)
include_directories(${HDRS})



install(FILES ${CMAKE_BINARY_DIR}/${PROJECT_NAME} 
        DESTINATION bin
        PERMISSIONS WORLD_EXECUTE)



#create executable
add_executable(bin2ascii src/bin2ascii.cpp)

# uninstall targetPERMISSIONS
if(NOT TARGET uninstall)
    configure_file(
        "${CMAKE_CURRENT_SOURCE_DIR}/cmake_uninstall.cmake.in"
        "${CMAKE_CURRENT_BINARY_DIR}/cmake_uninstall.cmake"
        IMMEDIATE @ONLY)

    add_custom_target(uninstall
        COMMAND ${CMAKE_COMMAND} -P ${CMAKE_CURRENT_BINARY_DIR}/cmake_uninstall.cmake)
endif()


#message(${CMAKE_SYSTEM_PREFIX_PATH})
message(${XBTLIB})


