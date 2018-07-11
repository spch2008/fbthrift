/*
 * Copyright 2016-present Facebook, Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#pragma once

#include <map>
#include <queue>
#include <stack>
#include <string>
#include <vector>

/**
 * This module contains all the global variables (slap on the wrist) that are
 * shared throughout the program. The reason for this is to facilitate simple
 * interaction between the parser and the rest of the program. Before calling
 * yyparse(), the main.cc program will make necessary adjustments to these
 * global variables such that the parser does the right thing and puts entries
 * into the right containers, etc.
 *
 */

/**
 * Hooray for forward declaration of types!
 */

class t_program;
class t_scope;
class t_base_type;

/**
 * Expected to be defined by Flex/Bison
 */
extern "C" {
void yyerror(const char* fmt, ...);
}

/**
 * Flex utilities
 */
extern int yylineno;
extern char yytext[];
extern FILE* yyin;

/**
 * A global map that holds a pointer to all programs already cached
 */
extern std::map<std::string, t_program*> program_cache;

/**
 * The scope that holds a cache of all g_scopes for faster compilations
 */
extern t_scope* g_scope_cache;
