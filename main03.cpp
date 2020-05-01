// Name: David C Hernandez, MSW, MBA
// Associate Faculty CSIS MSJC
// GitHub Link: https://github.com/dhernandez-msjc/csis_113a_pointers
// Pointers 03 -
#include <iostream>
#include <array>
#include <string>

using namespace std;

// function prototypes =================================
void displayArray(const array<int, 6> * list);
void displayArray(const array<string, 3> & list);

int main() {
    // using a pointer to a modern array of integers
    array<int, 6> list {1, 2, 4, 5, 9, 12};
    displayArray(&list);

    // using an alias to a modern array of strings
    array<string, 3> names {"Barry Allen", "Cisco Ramon", "Joe West"};
    displayArray(names);

    return 0;
}

// function utilizes
// array passed in as a pointer
void displayArray(const array<int, 6> * list) {
    cout << "[";
    for (auto  p = list->begin(); p < list->end(); ++p) {
        cout << *p;

        if (p + 1 != list->end()) {
            cout << ", ";
        }
    }
    cout << "]" << endl;
}

void displayArray(const array<string, 3> & list) {
    cout << "[";
    for (auto p = list.begin(); p < list.end(); ++p) {
        cout << *p;

        if (p + 1 != list.end()) {
            cout << ", ";
        }
    }
    cout << "]" << endl;
}
