// static 멤버를 공유의 목적으로 사용하는 예
#include <iostream>
using namespace std;

class Circle {
private:
  static int numOfCircles;
  int radius;
public:
  Circle(int r=1);
  ~Circle() { numOfCircles--; }  // 생성된 원의 개수 감소
  double getArea() { return 3.14 * radius * radius; }
  static int getNumOfCircles() { return numOfCircles; }
};

Circle::Circle(int r) {
  radius = r;
  numOfCircles++;  // 생성된 원의 개수 증가
}

int Circle::numOfCircles = 0;  // 0으로 초기화

int main() {
  Circle *p = new Circle[10];  // 10개의 생성자 실행. NumOfCircles = 10이 됨
  cout << "생존하고 있는 원의 개수 = " << Circle::getNumOfCircles() << endl;

  delete [] p;  // 10개의 소멸자 실행. NumOfCircles = 0이 됨
  cout << "생존하고 있는 원의 개수 = " << Circle::getNumOfCircles() << endl;

  Circle a;  // NumOfCircles = 1이 됨
  cout << "생존하고 있는 원의 개수 = " << Circle::getNumOfCircles() << endl;

  Circle b;  // NumOfCircles = 2가 됨
  cout << "생존하고 있는 원의 개수 = " << Circle::getNumOfCircles() << endl;
}  
