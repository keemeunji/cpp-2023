// 디폴트 매개 변수를 가진 함수 만들기 연습
#include <iostream>
using namespace std;

void f (char c = ' ', int l = 1) {
	for (int i = 0; i < l; i++) {
		for (int j = 0; j < 10; j++)
		{
			cout << c;
		}
		cout << endl;
	}
}

int main() {
	f();
  	f('%');
  	f('@', 5);
}
