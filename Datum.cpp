#include <iostream>
#include <string>
using namespace std;
typedef unsigned short int usint;

const string days[] = {"Wednesday", "Thursday", "Friday",
                       "Saturday", "Sunday", "Monday", "Tuesday"};
const usint months[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
usint a, b, c;

int main() {
  cin >> a >> b;

  c = b-1;

  for(usint i=0; i<c; ++i) {
    a += months[i];
  }

  cout << days[a % 7] << endl;
}