#ifndef _SUBFORMULAS_H
#define _SUBFORMULAS_H

#include "validate.hh"
#include <algorithm>
#include <string>
#include <list>

typedef enum{
    BINARY,
    UNARY
}OPERATOR_TYPE;

void separate_formulas(list<string> &, const string &, int , int );

#endif
