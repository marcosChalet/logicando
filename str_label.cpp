#include "str_label.hh"
#include <iomanip>

string output_formula(const string formula){

    string output;
    list<string> lst;
    int lines, columns, columns_atoms;

    if(is_valid(formula)){
        output = "\n\t[ " + formula + " ] is WWF\n\n";
    }else{
        output = "\n\t[ " + formula + " ] is invalid\n\n";
        return output;
    }

    separate_formulas(lst, formula, formula.length(), 0);
    lst.push_back(formula);
    auto matrix = make_table(lst);

    lines = calc_lines(lst);
    columns = calc_columns(lst);
    columns_atoms = calc_columns_atoms(lst);

    for(auto const &i: lst){
        output += (i + ' ');
    }
    output += '\n';

    auto a = lst.begin();
    for(int i = 0; i < lines; i++){
        a = lst.begin();
        for(int j = 0; j < columns; j++) {
            if(j < columns_atoms) {
                if(matrix[i][j] == 0)
                    output += 'F';
                else
                    output += 'V';

                output.insert(output.length(), (*a).length(), ' ');
            }else{
                if(matrix[i][j] == 0)
                    output += 'F';
                else
                    output += 'V';

                output.insert(output.length(), (*a).length()+1, ' ');

            }
           a++;
        }
        output += '\n';
    }

    return output;
}
