_add_library(oldnames STATIC EXCLUDE_FROM_ALL ${CMAKE_CURRENT_SOURCE_DIR}/moldname-msvcrt.def)
set_source_files_properties(${CMAKE_CURRENT_SOURCE_DIR}/moldname-msvcrt.def PROPERTIES EXTERNAL_OBJECT TRUE)
set_target_properties(oldnames PROPERTIES LINKER_LANGUAGE "IMPLIB" PREFIX "")
