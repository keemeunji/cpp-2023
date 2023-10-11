#include <iostream>
using namespace std;

#include "Circle.h"

int main() {
  Circle donut;
  double area = donut.getArea();
  cout << "donut의 면적은 " << area << endl;

  Circle pizza;
  area = pizza.getArea();
  cout << "pizza의 면적은 " << area << endl;
}
