// 디폴트 매개 변수를 가진 함수 만들기 연습
#include <iostream>
using namespace std;

void f(char c = ' ', int l = 1) {
  for(int j=0; j<l; j++) {
    for(int i=0; i<10; i++)
      cout << c;
    cout << endl;
  }
}

int main() {
	f();
  	f('%');
  	f('@', 5);
}
