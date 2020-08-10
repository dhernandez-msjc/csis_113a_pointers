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

void fillVector(NumberList &list, const function<int (void)>& rng);
void displayNumbers(unique_ptr<NumberList> list);

int main() {
  // create random number generator
  default_random_engine generator{random_device{}()};
  uniform_int_distribution<int> distribution(1, 100);
  auto getRandomNumber = [&]() {return distribution(generator);};

  // create two vectors, one of size 5, another of size 10
  NumberList small(5);
  NumberList large(10);

  // fill the vectors
  fillVector(small, getRandomNumber);
  fillVector(large, getRandomNumber);

  // display the vectors
  displayNumbers(make_unique<NumberList>(small));
  displayNumbers(make_unique<NumberList>(large));
  return 0;
}

void fillVector(NumberList &list, const function<int (void)>& rng) {
  for (auto & number : list) {
    number = rng();
  }
}

void displayNumbers(unique_ptr<NumberList> list) {
  for (auto number : *list) {
    cout << number << " ";
  }
  cout << endl;
}