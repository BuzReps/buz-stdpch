cmake_minimum_required(VERSION 4.0)

project(buz-stdpch VERSION 1.0.0 LANGUAGES CXX)

include(GNUInstallDirs)

add_library(stdpch INTERFACE)
set_target_properties(
	stdpch PROPERTIES
	EXPORT_NAME stdpch
)
target_sources(
	stdpch INTERFACE
	FILE_SET HEADERS
	BASE_DIRS include
	FILES
		include/buz/stdpch.h
)
target_precompile_headers(
	stdpch INTERFACE
	$<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include/buz/stdpch.h>
	$<INSTALL_INTERFACE:buz/stdpch.h>
)

install(
	TARGETS stdpch
	EXPORT stdpch-targets
	FILE_SET HEADERS DESTINATION "${CMAKE_INSTALL_INCLUDEDIR}"
)
set(package_name buz-stdpch)
install(
	EXPORT stdpch-targets
	FILE "${package_name}Targets.cmake"
	NAMESPACE buz::
	DESTINATION "${CMAKE_INSTALL_LIBDIR}/cmake/${package_name}"
)
file(
	WRITE
	"${CMAKE_CURRENT_BINARY_DIR}/${package_name}Config.cmake.in"
	[[
@PACKAGE_INIT@

include("${CMAKE_CURRENT_LIST_DIR}/@package_name@Targets.cmake")
]]
)

include(CMakePackageConfigHelpers)
configure_package_config_file(
	"${CMAKE_CURRENT_BINARY_DIR}/${package_name}Config.cmake.in"
	"${CMAKE_CURRENT_BINARY_DIR}/${package_name}Config.cmake"
	INSTALL_DESTINATION "${CMAKE_INSTALL_LIBDIR}/cmake/${package_name}"
)
install(
	FILES "${CMAKE_CURRENT_BINARY_DIR}/${package_name}Config.cmake"
	DESTINATION "${CMAKE_INSTALL_LIBDIR}/cmake/${package_name}"
)
