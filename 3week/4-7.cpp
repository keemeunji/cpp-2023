//  Circle 객체의 동적 생성 및 반환
#include <iostream>
using namespace std;

class Circle {
  int radius;
public:
  Circle();
  Circle(int r);
  ~Circle();
  void setRadius(int r) { radius = r; }
  double getArea() { return 3.14 * radius * radius; }
};

Circle::Circle() {
  radius = 1;;
  cout << "생성자 실행 radius = " << radius << endl;
}

Circle::Circle(int r) {
  radius = r;
  cout << "생성자 실행 radius = " << radius << endl;
}

Circle::~Circle() {
  cout << "소멸자 실행 radius = " << radius << endl;
}

int main() {
  Circle *p, *q;
  p = new Circle;
  q = new Circle(30);
  cout << p->getArea() << endl << q->getArea() << endl;
  delete p;  // 생성한 순서에 관계없이 원하는 순서대로 delete 할 수 있음
  delete q;
}
