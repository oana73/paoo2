add_library(socks STATIC socks.cpp)

target_include_directories(socks PUBLIC "${PROJECT_SOURCE_DIR}" "${PROJECT_SOURCE_DIR}/clothes"
)

