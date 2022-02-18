#include "strlabel.hh"
#include <iomanip>

void insert_operator(string formula, string &output, int x){
    if(formula[x] >= 'a' && formula[x] <= 'z')
        output += (formula[x]-32+' ');
    else if(formula[x] == '>')
        output.append("→");
    else if(formula[x] == '&')
        output.append("∧");
    else if(formula[x] == '#')
        output.append("∨");
    else if(formula[x] == '-')
        output.append("¬");
    else
        output += (formula[x]);
}

string output_formula(const string formula){

    string output;
    list<string> lst;
    int lines, columns, columns_atoms;


    output = "\n\t[ ";
    for(int i = 0; i < formula.length(); i++){
        insert_operator(formula, output, i);
    }

    if(is_valid(formula)){
        output += " ] is WWF\n\n";
    }else{
        output += " ] is invalid\n\n";
        return output;
    }

    separate_formulas(lst, formula, formula.length(), 0);
    lst.push_back(formula);
    auto matrix = make_table(lst);

    lines = calc_lines(lst);
    columns = calc_columns(lst);
    columns_atoms = calc_columns_atoms(lst);

    for(auto const &i: lst){
        for(int j = 0; j < i.length(); j++){
            insert_operator(i, output, j);
        }
        output.append("  ");
    }
    output += '\n';

    auto a = lst.begin();
    for(int i = 0; i < lines; i++){
        a = lst.begin();
        for(int j = 0; j < columns; j++) {
            if(j < columns_atoms-1) {
                if(matrix[i][j] == 0)
                    output += 'F';
                else
                    output += 'V';

                output.insert(output.length(), (*a).length()+1, ' ');
            }else{
                if(matrix[i][j] == 0)
                    output += 'F';
                else
                    output += 'V';

                output.insert(output.length(), 2*(*a).length()+1, ' ');
            }
           a++;
        }
        output += '\n';
    }

    return output;
}
