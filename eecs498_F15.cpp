#include <iostream>
using namespace std;

int main() {
  // display the sum of the elements in an array
  int vec[3] = {3, 4, 5};
  int sum;
  for (int i = 1; i < 3; i++)
    sum += vec[i];
  cout << sum;

  return 0;
}
