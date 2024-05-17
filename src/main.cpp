#include <iostream>
#include <stdio.h>
#include <time.h>
//
#include "lua.hpp"
//
#include "lualib.h"
//
#include "lauxlib.h"

extern "C" {
int luaopen_building_construction( lua_State* L );  // declare the wrapped module
};

#define LUA_EXTRALIBS { "building_construction", luaopen_building_construction },

int main()
{
    lua_State* L;
    // if (argc<2)
    // {
    //     printf("%s: <filename.lua>\n",argv[0]);
    //     return 0;
    // }
    char* file_path = "aa.lua";
    L               = luaL_newstate();
    luaopen_base( L );                   // load basic libs (eg. print)
    luaL_openlibs( L );                  // load all the lua libs (gives us math string functions etc.)
    luaopen_building_construction( L );  // load the wrapped module
    //
    if ( ! luaL_loadfile( L, file_path ) )  // load and run the file
    {
        lua_pcall( L, 0, 0, 0 );
        printf( "to load %s\n", file_path );
    }

    //
    lua_close( L );
    return 0;
}