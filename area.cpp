#include <iostream>
using namespace std;

     
int main() {
	cout << "Welcome to C++ calculator \n";
	
     
  int x, y;
  int sub;
  int multiply;
  cout << "Type the length: ";
  cin >> x;
  cout << "Type the breadth: ";
  cin >> y;
  sub = x * y;
  multiply = 2*x + 2*y;
  cout << "Shape of rectangle is:\n";
  draw_rectangle(y,x);
  cout << "Area is: " << sub << "\n";
  cout << "Perimeter is: " << multiply << "\n";
  return 0;
}


