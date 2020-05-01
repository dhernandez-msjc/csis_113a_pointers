// Name: David C Hernandez, MSW, MBA
// Associate Faculty CSIS MSJC
// GitHub Link: https://github.com/dhernandez-msjc/csis_113a_pointers
// Pointers 03 -
#include <iostream>
#include <vector>
#include <memory>
#include <random>
#include <functional>

using namespace std;

using NumberList = vector<int>;

void fillVector(shared_ptr<NumberList> list);
void displayNumbers(const shared_ptr<NumberList> list);

int main() {
    // create random number generator
    default_random_engine generator {random_device{}()};
    uniform_int_distribution<int> distribution(1, 100);
    auto get_random_number = bind(distribution, generator);

    // create two vectors, one of size 5, another of size 10
    NumberList small {5};
    NumberList large {10};

    // fill the vectors
    fillVector(make_shared<NumberList>(small), bind(distribution, generator));


    // display the vectors

    return 0;
}

void fillVector(shared_ptr<NumberList> list);

void displayNumbers(const shared_ptr<NumberList> list) {
    for (auto number : *list) {
        cout << number << " ";
    }

    cout << endl;
}