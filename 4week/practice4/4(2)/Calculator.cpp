#include <iostream>
using namespace std;

#include "Calculator.h"

  void Add::setValue(int x, int y) { a = x; b = y; }
  void Sub::setValue(int x, int y) { a = x; b = y; }
  void Mul::setValue(int x, int y) { a = x; b = y; }
  void Div::setValue(int x, int y) { a = x; b = y; }

  int Add::calculate() { return a + b; }
  int Sub::calculate() { return a - b; }
  int Mul::calculate() { return a * b; }
  int Div::calculate() { return a / b; }

int main() {
  Add a;
  Sub s;
  Mul m;
  Div d;
  int num1, num2;
  char oper;
  while(true) {
    cout << "두 정수와 연산자를 입력하세요>> ";
    cin >> num1 >> num2 >> oper;
    if (oper == '+') {
      a.setValue(num1, num2);
      cout << a.calculate() <<endl;
    }
    else if (oper == '-') {
      s.setValue(num1, num2);
      cout << s.calculate() <<endl;
    }
    else if (oper == '*') {
      m.setValue(num1, num2);
      cout << m.calculate() <<endl;
    }
    else if (oper == '/') {
      d.setValue(num1, num2);
      cout << d.calculate() <<endl;
    }
  }
}
