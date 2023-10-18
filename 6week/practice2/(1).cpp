// 실습문제 2 - (1) big() 함수를 2개 중복하여 작성하고 프로그램을 완성하라.
// 함수 big()을 호출하는 경우는 다음과 같다.
#include <iostream>
using namespace std;

int big(int a, int b){
    int max = 100;
    int big = a;
    if (big < b) 
        big = b;
    if (big > max) 
        big = max;
    return big;
}
int big(int a, int b, int c){
    int max = c;
    int big = a;
    if (big < b) 
        big = b;
    if (big > max) 
        big = max;
    return big;
}

int main() {
  int x = big(3, 5);
  int y = big(300, 60);
  int z = big(30, 60, 50);
  cout << x << ' ' << y << ' ' << z << endl;
}
