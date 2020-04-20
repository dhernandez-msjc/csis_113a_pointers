// Name: David C Hernandez, MSW, MBA
// Associate Faculty CSIS MSJC
// GitHub Link:
// Pointers 01 - revisiting variable declaration, aliases and address
#include <iostream>

using namespace std;

// function prototypes =================================
void display_variable_information(string && variable_name, const int & variable);

int main() {
    // declaration and initialization of a variable of type int, with value of 7
    int number {7};
    display_variable_information("number", number);

    // declaration and initialization of an alias for an int type, set to the variable number
    int & number_alias {number};
    display_variable_information("number alias", number_alias);

    // using the ability to change the alias, which will change the variable
    number_alias += 3;
    display_variable_information("number", number);

    return 0;
}

void display_variable_information(string && variable_name, const int & variable){
    cout << "Variable name   : " << variable_name << endl;
    cout << "Variable value  : " << variable << endl;
    cout << "Variable address: " << &variable << endl << endl;
}
