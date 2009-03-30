#ifndef AST_STRUCTS_H
#define AST_STRUCTS_H

struct translation_unit_node {
struct external_declaration_node *external_declaration_node_1;
struct translation_unit_node *translation_unit_node_1;
};

struct external_declaration_node {
struct declaration_node *declaration_node_1;
struct function_definition_node *function_definition_node_1;
};

struct function_definition_node {
struct declarator_node *declarator_node_1;
struct declaration_list_node *declaration_list_node_1;
struct declaration_specifiers_node *declaration_specifiers_node_1;
struct compound_statement_node *compound_statement_node_1;
};

struct declaration_node {
struct init_declarator_list_node *init_declarator_list_node_1;
struct declaration_specifiers_node *declaration_specifiers_node_1;
char *char_lit_1;
};

struct declaration_list_node {
struct declaration_node *declaration_node_1;
struct declaration_list_node *declaration_list_node_1;
};

struct declaration_specifiers_node {
struct storage_class_specifier_node *storage_class_specifier_node_1;
struct declaration_specifiers_node *declaration_specifiers_node_1;
struct type_specifier_node *type_specifier_node_1;
struct type_qualifier_node *type_qualifier_node_1;
};

struct storage_class_specifier_node {
int token_1;
};

struct type_specifier_node {
int token_1;
struct enum_specifier_node *enum_specifier_node_1;
struct struct_or_union_specifier_node *struct_or_union_specifier_node_1;
};

struct type_qualifier_node {
int token_1;
};

struct struct_or_union_specifier_node {
struct struct_declaration_list_node *struct_declaration_list_node_1;
char *char_lit_1;
struct identifier_node *identifier_node_1;
struct struct_or_union_node *struct_or_union_node_1;
char *char_lit_2;
};

struct struct_or_union_node {
int token_1;
};

struct struct_declaration_list_node {
struct struct_declaration_node *struct_declaration_node_1;
struct struct_declaration_list_node *struct_declaration_list_node_1;
};

struct init_declarator_list_node {
struct init_declarator_node *init_declarator_node_1;
char *char_lit_1;
struct init_declarator_list_node *init_declarator_list_node_1;
};

struct init_declarator_node {
struct declarator_node *declarator_node_1;
char *char_lit_1;
struct initializer_node *initializer_node_1;
};

struct struct_declaration_node {
struct specifier_qualifier_list_node *specifier_qualifier_list_node_1;
struct struct_declarator_list_node *struct_declarator_list_node_1;
char *char_lit_1;
};

struct specifier_qualifier_list_node {
struct specifier_qualifier_list_node *specifier_qualifier_list_node_1;
struct type_specifier_node *type_specifier_node_1;
struct type_qualifier_node *type_qualifier_node_1;
};

struct struct_declarator_list_node {
struct struct_declarator_list_node *struct_declarator_list_node_1;
struct struct_declarator_node *struct_declarator_node_1;
char *char_lit_1;
};

struct struct_declarator_node {
struct declarator_node *declarator_node_1;
struct constant_expression_node *constant_expression_node_1;
char *char_lit_1;
};

struct enum_specifier_node {
int token_1;
char *char_lit_1;
struct identifier_node *identifier_node_1;
struct enumerator_list_node *enumerator_list_node_1;
char *char_lit_2;
};

struct enumerator_list_node {
struct enumerator_node *enumerator_node_1;
char *char_lit_1;
struct enumerator_list_node *enumerator_list_node_1;
};

struct enumerator_node {
struct constant_expression_node *constant_expression_node_1;
char *char_lit_1;
struct identifier_node *identifier_node_1;
};

struct declarator_node {
struct direct_declarator_node *direct_declarator_node_1;
struct pointer_node *pointer_node_1;
};

struct direct_declarator_node {
struct parameter_type_list_node *parameter_type_list_node_1;
struct direct_declarator_node *direct_declarator_node_1;
struct constant_expression_node *constant_expression_node_1;
struct identifier_list_node *identifier_list_node_1;
struct declarator_node *declarator_node_1;
char *char_lit_1;
struct identifier_node *identifier_node_1;
char *char_lit_2;
};

struct pointer_node {
struct pointer_node *pointer_node_1;
char *char_lit_1;
struct type_qualifier_list_node *type_qualifier_list_node_1;
};

struct type_qualifier_list_node {
struct type_qualifier_node *type_qualifier_node_1;
struct type_qualifier_list_node *type_qualifier_list_node_1;
};

struct parameter_type_list_node {
int token_1;
struct parameter_list_node *parameter_list_node_1;
char *char_lit_1;
};

struct parameter_list_node {
struct parameter_list_node *parameter_list_node_1;
char *char_lit_1;
struct parameter_declaration_node *parameter_declaration_node_1;
};

struct parameter_declaration_node {
struct declarator_node *declarator_node_1;
struct declaration_specifiers_node *declaration_specifiers_node_1;
struct abstract_declarator_node *abstract_declarator_node_1;
};

struct identifier_list_node {
char *char_lit_1;
struct identifier_node *identifier_node_1;
struct identifier_list_node *identifier_list_node_1;
};

struct initializer_node {
struct initializer_list_node *initializer_list_node_1;
struct assignment_expression_node *assignment_expression_node_1;
char *char_lit_1;
char *char_lit_3;
char *char_lit_2;
};

struct initializer_list_node {
struct initializer_node *initializer_node_1;
char *char_lit_1;
struct initializer_list_node *initializer_list_node_1;
};

struct type_name_node {
struct specifier_qualifier_list_node *specifier_qualifier_list_node_1;
struct abstract_declarator_node *abstract_declarator_node_1;
};

struct abstract_declarator_node {
struct direct_abstract_declarator_node *direct_abstract_declarator_node_1;
struct pointer_node *pointer_node_1;
};

struct direct_abstract_declarator_node {
struct parameter_type_list_node *parameter_type_list_node_1;
struct abstract_declarator_node *abstract_declarator_node_1;
struct constant_expression_node *constant_expression_node_1;
char *char_lit_2;
char *char_lit_1;
struct direct_abstract_declarator_node *direct_abstract_declarator_node_1;
};

struct statement_node {
struct expression_statement_node *expression_statement_node_1;
struct jump_statement_node *jump_statement_node_1;
struct labeled_statement_node *labeled_statement_node_1;
struct compound_statement_node *compound_statement_node_1;
struct iteration_statement_node *iteration_statement_node_1;
struct selection_statement_node *selection_statement_node_1;
};

struct labeled_statement_node {
int token_1;
struct constant_expression_node *constant_expression_node_1;
char *char_lit_1;
struct identifier_node *identifier_node_1;
struct statement_node *statement_node_1;
};

struct expression_statement_node {
struct expression_node *expression_node_1;
char *char_lit_1;
};

struct compound_statement_node {
struct statement_list_node *statement_list_node_1;
struct declaration_list_node *declaration_list_node_1;
char *char_lit_1;
char *char_lit_2;
};

struct statement_list_node {
struct statement_list_node *statement_list_node_1;
struct statement_node *statement_node_1;
};

struct selection_statement_node {
struct statement_node *statement_node_2;
struct statement_node *statement_node_1;
struct expression_node *expression_node_1;
int token_1;
int token_2;
char *char_lit_1;
char *char_lit_2;
};

struct iteration_statement_node {
struct expression_node *expression_node_2;
struct statement_node *statement_node_1;
struct expression_node *expression_node_1;
int token_1;
char *char_lit_4;
struct expression_node *expression_node_3;
int token_2;
char *char_lit_1;
char *char_lit_3;
char *char_lit_2;
};

struct jump_statement_node {
int token_1;
struct expression_node *expression_node_1;
char *char_lit_1;
struct identifier_node *identifier_node_1;
};

struct expression_node {
struct expression_node *expression_node_1;
struct assignment_expression_node *assignment_expression_node_1;
char *char_lit_1;
};

struct assignment_expression_node {
struct conditional_expression_node *conditional_expression_node_1;
struct assignment_operator_node *assignment_operator_node_1;
struct unary_expression_node *unary_expression_node_1;
struct assignment_expression_node *assignment_expression_node_1;
};

struct assignment_operator_node {
int token_1;
char *char_lit_1;
};

struct conditional_expression_node {
struct expression_node *expression_node_1;
struct conditional_expression_node *conditional_expression_node_1;
struct logical_or_expression_node *logical_or_expression_node_1;
char *char_lit_1;
char *char_lit_2;
};

struct constant_expression_node {
struct conditional_expression_node *conditional_expression_node_1;
};

struct logical_or_expression_node {
int token_1;
struct logical_or_expression_node *logical_or_expression_node_1;
struct logical_and_expression_node *logical_and_expression_node_1;
};

struct logical_and_expression_node {
struct inclusive_or_expression_node *inclusive_or_expression_node_1;
int token_1;
struct logical_and_expression_node *logical_and_expression_node_1;
};

struct inclusive_or_expression_node {
struct inclusive_or_expression_node *inclusive_or_expression_node_1;
char *char_lit_1;
struct exclusive_or_expression_node *exclusive_or_expression_node_1;
};

struct exclusive_or_expression_node {
struct and_expression_node *and_expression_node_1;
char *char_lit_1;
struct exclusive_or_expression_node *exclusive_or_expression_node_1;
};

struct and_expression_node {
struct equality_expression_node *equality_expression_node_1;
char *char_lit_1;
struct and_expression_node *and_expression_node_1;
};

struct equality_expression_node {
int token_1;
struct equality_expression_node *equality_expression_node_1;
struct relational_expression_node *relational_expression_node_1;
};

struct relational_expression_node {
int token_1;
struct relational_expression_node *relational_expression_node_1;
char *char_lit_1;
struct shift_expression_node *shift_expression_node_1;
};

struct shift_expression_node {
int token_1;
struct additive_expression_node *additive_expression_node_1;
struct shift_expression_node *shift_expression_node_1;
};

struct additive_expression_node {
struct multiplicative_expression_node *multiplicative_expression_node_1;
char *char_lit_1;
struct additive_expression_node *additive_expression_node_1;
};

struct multiplicative_expression_node {
struct multiplicative_expression_node *multiplicative_expression_node_1;
char *char_lit_1;
struct cast_expression_node *cast_expression_node_1;
};

struct cast_expression_node {
struct cast_expression_node *cast_expression_node_1;
char *char_lit_1;
struct type_name_node *type_name_node_1;
struct unary_expression_node *unary_expression_node_1;
char *char_lit_2;
};

struct unary_expression_node {
struct postfix_expression_node *postfix_expression_node_1;
struct type_name_node *type_name_node_1;
int token_1;
struct unary_operator_node *unary_operator_node_1;
char *char_lit_2;
char *char_lit_1;
struct unary_expression_node *unary_expression_node_1;
struct cast_expression_node *cast_expression_node_1;
};

struct unary_operator_node {
char *char_lit_1;
};

struct postfix_expression_node {
struct postfix_expression_node *postfix_expression_node_1;
struct primary_expression_node *primary_expression_node_1;
int token_1;
struct argument_expression_list_node *argument_expression_list_node_1;
struct expression_node *expression_node_1;
char *char_lit_1;
struct identifier_node *identifier_node_1;
char *char_lit_2;
};

struct primary_expression_node {
struct constant_node *constant_node_1;
struct expression_node *expression_node_1;
struct string_node *string_node_1;
char *char_lit_1;
struct identifier_node *identifier_node_1;
char *char_lit_2;
};

struct argument_expression_list_node {
struct assignment_expression_node *assignment_expression_node_1;
char *char_lit_1;
struct argument_expression_list_node *argument_expression_list_node_1;
};

struct constant_node {
int token_1;
};

struct string_node {
int token_1;
};

struct identifier_node {
int token_1;
};



#endif