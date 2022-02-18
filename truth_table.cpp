#include "truth_table.hh"

/*
 * Make a truth table.
 * */


int complexity(const string &formula){

    int complexity = 0;

    for(int i = 0; i < formula.length(); i++)
        if(formula[i] != '(' && formula[i] != ')')
            complexity++;
    return complexity;
}


int compare_ord(const string &a, const string &b){

    if(is_atom(a) && is_atom(b)){
        return (char)a[0] - (char)b[0];
    }
    return complexity(a) - complexity(b);
}


// remove duplicates, sort list  and remove replicas.
void remove_dupilcates(list<string> &lst){

    auto a = lst.begin();
    auto b = lst.begin();

    for(int i = 0; i < lst.size(); i++) {
        auto b = lst.begin();
        for(int j = 0; j < lst.size()-1; j++) {
            if (compare_ord(*a, *b) < 0)
                (*a).swap((*b));
            b++;
        }
        a++;
    }
    lst.unique();
}


// return the number of lines in matrix.
int calc_lines(list<string> &lst){

    int num_atoms = 0;

    for(auto const &i: lst)
        if(is_atom(i))
            num_atoms++;
    return pow(2, num_atoms);
}


// return the number of columns with only atoms.
int calc_columns_atoms(list<string> &lst){
    int num_atoms = 0;

    for(auto const &i: lst)
        if(is_atom(i))
            num_atoms++;
    return num_atoms;
}


// return total of columns in matrix.
int calc_columns(list<string> &lst){
    return lst.size();
}


// fill the columns of the atoms in matrix.
void insert_value_atoms(vector<vector<int>> &matrix, int lines, int columns_atoms){

    int period=1;
    bool unlocked = false;

    for(int i = columns_atoms-1; i >= 0; i--){
        for(int j = 0; j < lines; j++){
            if(j % period == 0)
                unlocked = !unlocked;
            if(unlocked)
                (matrix)[j][i] = 1;
            else
                (matrix)[j][i] = 0;
        }
        period *= 2;
    }
}


// return a logical operator in middle of the formula.
char get_operator(string formula) {

    int mid = 0;

    if(formula[0] == '-')
        return '-';

    for(int i = 0; i < formula.length(); i++){
        if(formula[i] == '(')
            mid++;
        else if(formula[i] == ')')
            mid--;

        if(mid == 1 && is_binary_operator(formula, i))
            return formula[i];
    }
    return ' ';
}


// return the logical operation between the already calculated columns of
// matrix (columns eith each string subformula).
int value_compost(string formula, list<string> &lst, vector<vector<int>> &matrix, int m_line) {

    char logic_operator = get_operator(formula);
    list<string> new_lst;
    separate_formulas(new_lst, formula, formula.length(), 0);

    auto lst_formula = lst.begin();
    auto l_formula = new_lst.begin();
    auto r_formula = new_lst.begin();
    if(lst.size() > 1)
        r_formula++;

    int index_formula1=0;
    int index_formula2=0;

    for(int i = 0; i < lst.size(); i++){
        if((*lst_formula) == (*l_formula))
            index_formula1 = i;

        else if((*lst_formula) == (*r_formula))
            index_formula2 = i;

        lst_formula++;
    }

    if(logic_operator == '&')
        return matrix[m_line][index_formula1] && matrix[m_line][index_formula2];
    else if(logic_operator == '#')
        return matrix[m_line][index_formula1] || matrix[m_line][index_formula2];
    else if(logic_operator == '>')
        return !matrix[m_line][index_formula1] || matrix[m_line][index_formula2];
    else if(logic_operator == '-')
        return !matrix[m_line][index_formula1];

    return 2;
}


void insert_value_composts(vector<vector<int>> &matrix, list<string> &lst,
                           int lines, int columns)
{

    int col_compost = calc_columns_atoms(lst);

    list<string>::iterator formula = lst.begin();
    advance(formula, col_compost);

    for(int i = col_compost; i < columns; i++){
        for(int j = 0; j < lines; j++)
            matrix[j][i] = value_compost(*formula, lst, matrix, j);

        formula++;
    }
}


vector<vector<int>> make_table(list<string> &lst){

    remove_dupilcates(lst);

    int lines = calc_lines(lst);
    int columns = calc_columns(lst);
    int columns_atoms = calc_columns_atoms(lst);
    auto matrix = vector<vector<int>>(lines, vector<int>(columns));

    insert_value_atoms(matrix, lines, calc_columns_atoms(lst));
    insert_value_composts(matrix, lst, lines, columns);

    return matrix;
}
