#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "Lua::lua_shared" for configuration ""
set_property(TARGET Lua::lua_shared APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(Lua::lua_shared PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_NOCONFIG "C"
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/liblua_shared.a"
  )

list(APPEND _cmake_import_check_targets Lua::lua_shared )
list(APPEND _cmake_import_check_files_for_Lua::lua_shared "${_IMPORT_PREFIX}/lib/liblua_shared.a" )

# Import target "Lua::lua_static" for configuration ""
set_property(TARGET Lua::lua_static APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(Lua::lua_static PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_NOCONFIG "C"
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/liblua_static.a"
  )

list(APPEND _cmake_import_check_targets Lua::lua_static )
list(APPEND _cmake_import_check_files_for_Lua::lua_static "${_IMPORT_PREFIX}/lib/liblua_static.a" )

# Import target "Lua::lua" for configuration ""
set_property(TARGET Lua::lua APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(Lua::lua PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/bin/lua.js"
  )

list(APPEND _cmake_import_check_targets Lua::lua )
list(APPEND _cmake_import_check_files_for_Lua::lua "${_IMPORT_PREFIX}/bin/lua.js" )

# Import target "Lua::luac" for configuration ""
set_property(TARGET Lua::luac APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(Lua::luac PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/bin/luac.js"
  )

list(APPEND _cmake_import_check_targets Lua::luac )
list(APPEND _cmake_import_check_files_for_Lua::luac "${_IMPORT_PREFIX}/bin/luac.js" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
