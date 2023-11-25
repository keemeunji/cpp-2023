// 예제 8-6 상속이 중첩될 때 접근 지정 사례
#include <iostream>
using namespace std;

class Base {
  int a;
protected:
  void setA(int a) { this->a = a; }
public:
  void showA() { cout << a; }
};

class Derived : private Base {
  int b;
protected:
  void setB(int b) { this->b = b; }
public:
  void showB() {
    setA(5);
    showA();
    cout << b;
  }
};

class GrandDerived : private Derived {
  int c;
protected:
  void setAB(int x) {
    setB(x);
  }
};
