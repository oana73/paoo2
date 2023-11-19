add_library(jeans STATIC jeans.cpp cargoJeans/cargoJeans.cpp)

add_subdirectory(cargoJeans)

target_link_libraries(jeans PUBLIC cargoJeans)

target_include_directories(jeans PUBLIC "${PROJECT_SOURCE_DIR}" "${PROJECT_SOURCE_DIR}/jeans/cargoJeans" "${PROJECT_SOURCE_DIR}/clothes")
