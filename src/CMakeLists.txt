file(GLOB_RECURSE CPP_SOURCES "*.cpp")
file(GLOB_RECURSE H_HEADERS "../include/*.h")

add_library(KoushiCommon STATIC ${CPP_SOURCES} ${H_HEADERS})
target_include_directories(KoushiCommon PUBLIC ../include)
target_compile_features(KoushiCommon PUBLIC cxx_std_17)
set_target_properties(KoushiCommon PROPERTIES CXX_EXTENSIONS OFF)

source_group (
	TREE "${PROJECT_SOURCE_DIR}/include"
	PREFIX "Header Files"
	FILES ${H_HEADERS})