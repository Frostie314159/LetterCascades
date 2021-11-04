cmake_minimum_required(VERSION 3.14)

project(LetterCascades)

set(SRCS 
    ${CMAKE_CURRENT_SOURCE_DIR}/src/Main.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/src/Question.cpp
)

add_executable(LetterCascades ${SRCS})

target_include_directories(LetterCascades PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include ${CMAKE_CURRENT_SOURCE_DIR}/vendor/nlohmann/)