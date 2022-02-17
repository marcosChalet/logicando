#ifndef _VALIDATE_H
#define _VALIDATE_H

#include <iostream>

using namespace std;

bool is_atom(const string &);
bool is_valid(const string &);
bool is_binary_operator(const string &, int );
bool is_unary_operator(const string &, int );

#endif // !_VALIDATE_H
