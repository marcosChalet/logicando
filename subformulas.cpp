#include "subformulas.hh"

/*
 * slice the formula in half (innermost logical operator in the string)
 * or in [0] position case not operator.
 *
 * E.G.
 *  ((p>q)#(r&q))  have: (p>q), (r&q) and '#' as operator.
 *  -(p&q)  have: (p&q) and '-' as operator.
 *
 * */

void separate_formulas(list<string> &lst, const string &formula, int x, int op);

void slice_formula(list<string> &lst, const string &formula,
                   int x, OPERATOR_TYPE TIPE)
{
    if(TIPE == BINARY){
        string left, right;
        if(formula[0] == '-'){
            left = formula.substr(0,x);
            right = formula.substr(x+1, formula.length()-1);
        }else{
            left = formula.substr(1,x-1);
            right = formula.substr(x+1);
        }

        right.pop_back();
        lst.push_back(left);
        lst.push_back(right);

        separate_formulas(lst, left, left.length(), 0);
        separate_formulas(lst, right, right.length(), 0);
    }else{

        string right = formula.substr(x+1);
        lst.push_back(right);
        separate_formulas(lst, right, right.length(), 0);
    }
}


void separate_formulas(list<string> &lst, const string &formula, int x, int op){

    if(is_atom(formula) || x == 0)
        return;

    if(formula[x] == ')')
        op++;

    else if(formula[x] == '(')
        op--;

    if(is_binary_operator(formula, x) && op == 1)
        slice_formula(lst, formula, x, BINARY);

    else if(is_unary_operator(formula, 0))
        slice_formula(lst, formula, 0, UNARY);

    else{
        x--;
        separate_formulas(lst, formula, x, op);
    }
}
