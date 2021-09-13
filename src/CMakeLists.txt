add_library(src 
            testeronie.h
            testeronie.cpp
            vec.h
            vec.cpp
            )

target_include_directories(src PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}")

#target_link_libraries(src)