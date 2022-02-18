#ifndef _TRUTH_TABLE_H
#define _TRUTH_TABLE_H

#include "subformulas.hh"
#include <iomanip>
#include <vector>
#include <cmath>

vector<vector<int>> make_table(list<string> &);
int calc_columns_atoms(list<string> &);
int calc_columns(list<string> &);
int calc_lines(list<string> &);

#endif
