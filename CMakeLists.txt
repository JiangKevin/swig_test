#/* File : CMakeLists.txt */
#指定CMake的最小版本
cmake_minimum_required(VERSION 3.17)
project(all)
set(swig_com_name uselib)
set(app_name demo)
# 
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY $ENV{FmDev}/web)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY lib)
set(LIBRARY_OUTPUT_PATH lib)

# 
file(GLOB Cplus_src
    src/com/*.cpp
)
MESSAGE(STATUS "Cplus_src IS:"
    ${Cplus_src}
)
# 
file(GLOB swig_src
    src/swig/*.i
)
MESSAGE(STATUS "swig_src IS:"
    ${swig_src}
)
file(GLOB app_src
    src/*.cpp
    src/com/*.cpp
)
MESSAGE(STATUS "app_src IS:"
    ${app_src}
)

# #寻找PYTHONHOME的环境变量
# find_package (Python3 COMPONENTS Interpreter Development)
# include_directories(${Python3_INCLUDE_DIRS})
# link_libraries(${Python3_LIBRARIES})


# find_package(lua REQUIRED)
# target_include_directories(main PRIVATE ${LUA_INCLUDE_DIR})
# target_link_libraries(main PRIVATE ${LUA_LIBRARIES})

#指定你的.cxx等文件的目录
include_directories(${PROJECT_SOURCE_DIR}/src)
include_directories(${PROJECT_SOURCE_DIR}/src/com)
include_directories(${PROJECT_SOURCE_DIR}/libs/lua/include)

#寻找安装好的swig,其实就是去电脑中找你安装好的Swig环境，所以我们需要提前安装环境。
find_package(SWIG REQUIRED)
include(${SWIG_USE_FILE})
#Python文件输出目录 -outdir
set(CMAKE_SWIG_OUTDIR ${CMAKE_CURRENT_BINARY_DIR}/cmake_lua)
#指定一个输出目录名，用于放置生成的源文件。例如输出的examplePTYHON_wrap.cxx文件等的位置
set(SWIG_OUTFILE_DIR ${CMAKE_CURRENT_BINARY_DIR}/swig_lua)
#c ++模式
set_property(SOURCE 
    ${swig_src}
    PROPERTY CPLUSPLUS ON
)
#开始生成
swig_add_library(${swig_com_name} LANGUAGE Lua SOURCES 
    ${swig_src}
    ${app_src}
)
# link flag
set(CMAKE_EXE_LINKER_FLAGS ${CMAKE_EXE_LINKER_FLAGS}

    $ENV{fm_links_exe_flags}
)

#
set(CMAKE_EXECUTABLE_SUFFIX ".html")

# 生成
add_executable(${app_name}
    ${app_src}
)
# link oflib
target_link_libraries(${app_name} PUBLIC
    
    $ENV{FmDev}/libs/lua/lib/liblua_static.a
    $ENV{FmDev}/build/em/lib/uselib.a
)