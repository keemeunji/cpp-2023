// sum() 함수 중복 연습
#include <iostream>
using namespace std;

int sum(int a, int b) {
	int res = 0;
	for(int i=a; i<=b; i++) {
		res += i;
	}
	return res;
}

int sum(int b) {
	int res = 0;
	for(int i=0; i<=b; i++) {
		res += i;
	}
	return res;
}

int main() {
	cout << sum(3, 5) << endl;
	cout << sum(3) << endl;
	cout << sum(100) << endl;
}
