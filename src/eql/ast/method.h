#ifndef _eql_ast_method_h
#define _eql_ast_method_h

#include "../../bstring.h"
#include "access.h"

//==============================================================================
//
// Definitions
//
//==============================================================================

// Forward declarations.
struct eql_ast_node;

// Represents a method in the AST.
typedef struct {
    eql_ast_access_e access;
    struct eql_ast_node *function;
} eql_ast_method;


//==============================================================================
//
// Functions
//
//==============================================================================

int eql_ast_method_create(eql_ast_access_e access,
    struct eql_ast_node *function, struct eql_ast_node **ret);

void eql_ast_method_free(struct eql_ast_node *node);

#endif