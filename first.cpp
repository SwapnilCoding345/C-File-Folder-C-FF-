#include <iostream>
using namespace std;

int main() {
	cout << "Welcome to C++ calculator \n";
  int x, y;
  int sum;
  int sub;
  int multiply;
  cout << "Type a number: ";
  cin >> x;
  cout << "Type another number: ";
  cin >> y;
  sum = x + y;
  sub = x - y;
  multiply = x * y;
  cout << "Sum is: " << sum << "\n";
  cout << "Difference is: " << sub << "\n";
  cout << "Product is: " << multiply << "\n";
  return 0;
}


