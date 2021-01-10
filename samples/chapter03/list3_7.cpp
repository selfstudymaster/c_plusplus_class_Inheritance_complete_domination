#include <iostream>
using namespace std;

// クラスの定義
class MyMath {
public:
  int twice(int a);		// int型のメンバ関数
  double twice(double a);	// double型のメンバ関数
};

// int型のメンバ関数の実装
int MyMath::twice(int a) {
  return a * 2;
}

// double型のメンバ関数の実装
double MyMath::twice(double a) {
  return a * 2;
}

// クラスを使う側のコード
int main() {
  MyMath obj;
  int a;
  double b;

  a = obj.twice(123);
  cout << a << "\n";
  b = obj.twice(3.14);
  cout << b << "\n";

  return 0;
}
