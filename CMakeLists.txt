cmake_minimum_required(VERSION 3.0.0 FATAL_ERROR)

set(CXX_STANDARD 17)
set(CXX_STANDARD_REQUIRED ON)

project(SDLCCalculator)


set(SRC ${PROJECT_SOURCE_DIR}/src)
set(LIB ${PROJECT_SOURCE_DIR}/lib)
set(BIN ${PROJECT_BINARY_DIR})


add_subdirectory(${LIB}/wxWidgets-3.2.5/)

set(INCLUDE_DIRECTORIES
  ${LIB}/wxWidgets-3.2.5/include
  ${SRC}/headers
)

set(LIBS
  wx::core
  wx::base
)

set(SOURCES
  ${SRC}/main.cpp
  ${SRC}/MainWindow.cpp
)

add_executable(${PROJECT_NAME} ${SOURCES})

target_link_libraries(${PROJECT_NAME} ${LIBS})
target_include_directories(${PROJECT_NAME} PUBLIC ${INCLUDE_DIRECTORIES})