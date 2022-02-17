#include "validate.hh"

/*
 *      checks if given a string it is WFF.
 *
 *  We assume:
 *
 * implication: '>'
 * and: '&'
 * or:  '#'
 * not: '-'
 *
 * Atoms are lowercase letters.
 *
 * */



bool is_atom(const string &formula){
    if(formula.length() == 1)
        return true;
    return false;
}


// lowcase valid atom.
bool is_letter(const string &formula, int x) {
    if(formula[x] >= 'a' && formula[x] <= 'z') {
        return true;
    }
    return false;
}


// valid atom and logical operator.
bool valid_character(const string &formula, int x) {
    if(formula[x] < 97 or formula[x] > 122)
        if(formula[x] != '(' && formula[x] != ')' && formula[x] != '>' &&
           formula[x] != '&' && formula[x] != '#' && formula[x] != '-')
            return false;
    return true;
}


bool is_binary_operator(const string &formula, int x) {
    if(formula[x] == '&' || formula[x] == '#' || formula[x] == '>')
        return true;
    return false;
}


bool is_unary_operator(const string &formula, int x) {
    if(formula[x] == '-')
        return true;
    return false;
}


// check only if '(' is equal to ')'.
bool equal_num_parenthesis(const string &formula) {
    int diference = 0;
    for(int i = 0; i < formula.length(); i++)
        if(formula[i] == '(')
            diference++;
        else if(formula[i] == ')')
            diference--;

    if(diference == 0)
        return true;
    return false;
}

// WFF check
bool is_valid(const string &formula) {

    if( !equal_num_parenthesis(formula) )
        return false;

    if(formula[0] != '(' && formula[formula.length()] != ')')
        if(formula[0] != '-')
            return false;

    for(int i = 0; i < formula.length(); i++) {

        if( !valid_character(formula, i) )
            return false;

        if(is_letter(formula, i)){
            if (is_letter(formula, i+1))
                return false;

            if(!is_binary_operator(formula, i-1) && !is_binary_operator(formula, i+1))
                if(!is_unary_operator(formula, i-1) && !is_unary_operator(formula, i+1))
                    return false;
        }

        if(formula[i] == '(' && formula[i+1] == ')')
            return false;

        if(formula[i] == ')' && is_letter(formula, i+1))
            return false;

        if(is_binary_operator(formula, i)) {
            if(is_binary_operator(formula, i+1))
                return false;

            if(formula[i+1] == ')')
                return false;
        }

        if(is_unary_operator(formula, i)){
            if(formula[i+1] == ')')
                return false;

            if(is_binary_operator(formula, i+1))
                return false;
        }
    }
    return true;
}
