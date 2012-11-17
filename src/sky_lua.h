#ifndef _sky_lua_h
#define _sky_lua_h

#include <lua.h>
#include <lualib.h>
#include <lauxlib.h>
#include "lua/lua_cmsgpack.h"

#include "bstring.h"

//==============================================================================
//
// Functions
//
//==============================================================================

//--------------------------------------
// Initialization
//--------------------------------------

int sky_lua_initscript(bstring source, lua_State **L);


//--------------------------------------
// Execution
//--------------------------------------

int sky_lua_pcall_msgpack(lua_State *L, int nargs, bstring *ret);

#endif
