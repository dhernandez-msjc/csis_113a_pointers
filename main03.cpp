// Name: David C Hernandez, MSW, MBA
// Associate Faculty CSIS MSJC
// GitHub Link: https://github.com/dhernandez-msjc/csis_113a_pointers
// Pointers 02 -
#include <iostream>
#include <array>
#include <ctime>
#include <random>

#include <string>

using namespace std;

// function prototypes =================================


int main() {
    // seed the random generator
    array<int, 6> array {1, 2, 4, 5, 9, 12};

    for (int * p = array.begin(); p != array.end(); ++p) {
        cout << *p << endl;
    }



    return 0;
}
