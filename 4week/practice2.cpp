// 실습문제 2
// 덧셈(+), 뺄셈(-), 곱셈(*), 나눗셈(/), 나머지(%)의 정수 5칙 연산을 할 수 있는 프로그램을 작성하라.
// 식은 다음과 같은 형식으로 입력된다. 정수와 연산자는 하난의 빈칸으로 분리된다.

#include <iostream>
#include <string>
using namespace std;

int main() {
    int num1;   // 첫번째 숫자 int
    int num2;   // 두번째 숫자 int
    string operat;  // 연산자의 종류 string
    while (true) {
        cout << "? ";
        cin >> num1 >> operat >> num2;  // 분리가 그대로 되어서 숫자와 문자 사이 공백이 있기 때문에 분리가 더 쉬움. getline 안 써도 됨.
       
        if (operat == "+") {
            cout << num1 << ' ' << operat << ' ' << num2 << " = " << num1 + num2 << endl;
        }
        else if (operat == "-") {
            cout << num1 << ' ' << operat <<  ' ' << num2 << " = " << num1 - num2 << endl;
        }
        else if (operat == "*") {
            cout << num1 << ' ' << operat << ' ' << num2 << " = " << num1 * num2 << endl;
        }
        else if (operat == "/") {
            cout << num1 << ' ' << operat << ' ' << num2 << " = " << num1 / num2 << endl;
        }
        else if (operat == "%") {
            cout << num1 << ' ' << operat << ' ' << num2 << " = " << num1 % num2 << endl;
        }
    }
}
