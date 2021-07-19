cmake_minimum_required(VERSION 3.12)

include(CMakePackageConfigHelpers)

SET(lib_version 1.0)

project(libKoushiCommon VERSION ${lib_version} 
								DESCRIPTION "A library for common stuff in my programs"
								LANGUAGES CXX)
				
add_subdirectory(src)

configure_package_config_file(
	libKoushiCommonConfig.cmake.in
	libKoushiCommonConfig.cmake
	INSTALL_DESTINATION lib/cmake/libKoushiCommon)

write_basic_package_version_file(
	libKoushiCommonConfigVersion.cmake
	VERSION ${lib_version} 
	COMPATIBILITY AnyNewerVersion)
	
install(TARGETS KoushiCommon 
		ARCHIVE DESTINATION lib 
		INCLUDES DESTINATION include
		FILE libKoushiCommonConfig.cmake
		NAMESPACE libKoushiCommon::
		DESTINATION lib/cmake/libKoushiCommon)
	
install(FILES "${CMAKE_CURRENT_BINARY_DIR}/libKoushiCommonConfig.cmake"
			  "${CMAKE_CURRENT_BINARY_DIR}/libKoushiCommonConfigVersion.cmake"
		DESTINATION lib/cmake/libKoushiCommon)