add_library(cargoJeans STATIC cargoJeans.cpp)

target_include_directories(cargoJeans PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
target_include_directories(cargoJeans PUBLIC "${PROJECT_SOURCE_DIR}/jeans")
target_include_directories(cargoJeans PUBLIC "${PROJECT_SOURCE_DIR}/clothes")
