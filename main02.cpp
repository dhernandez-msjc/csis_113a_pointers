// Name: David C Hernandez, MSW, MBA
// Associate Faculty CSIS MSJC
// GitHub Link: https://github.com/dhernandez-msjc/csis_113a_pointers
// Pointers 02 -
#include <iostream>

using namespace std;

// function prototypes =================================
void display_variable_information(const string && variable_name, const int & variable);
void display_variable_information(const string & variable_name, const int & variable);

void display_variable_information(const string && variable_name, const int * variable);
void display_variable_information(const string & variable_name, const int * variable);

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

    // declaring a pointer variable that points to int types, initialized with the address of number
    int * p_number {&number};
    cout << "================================================" << endl;
    cout << "Pointer address: " << &p_number << endl << endl;
    display_variable_information("p_number", p_number);
    display_variable_information("address to number", &number);
    display_variable_information("dereferenced pointer", *p_number);

    return 0;
}

void display_variable_information(const string & variable_name, const int & variable) {
    cout << "Variable name   : " << variable_name << endl;
    cout << "Variable value  : " << variable << endl;
    cout << "Variable address: " << &variable << endl << endl;
}

void display_variable_information(const string && variable_name, const int & variable) {
    display_variable_information(variable_name, variable);
}

void display_variable_information(const string & variable_name, const int * variable) {
    display_variable_information(variable_name, *variable);
}

void display_variable_information(const string && variable_name, const int * variable) {
    display_variable_information(variable_name, *variable);
}

//void display_variable_information(const string && variable_name, const int * variable) {
//    cout << "Variable name   : " << variable_name << endl;
//    cout << "Variable value  : " << variable << endl;
//    cout << "Variable address: " << &variable << endl;
//    cout << "Value at address: " << *variable << endl << endl;
//}
