#include <iostream>
using namespace std;

// 基本クラスの定義
class MyClass {
public:
  void func1(int a);
  virtual void func2(const char *s);
};

// 基本クラスのメンバ関数の実装
void MyClass::func1(int a) {
  cout << a << "\n";
}

void MyClass::func2(const char *s) {
  cout << s << "\n";
}

// 派生クラスの定義
class NewClass : public MyClass {
public:
  void func2(const char *s);
};

// 派生クラスのメンバ関数の実装
void NewClass::func2(const char *s) {
  cout << "文字列データ：";
  MyClass::func2(s);
}

// クラスを使う側のコード
int main() {
  // 派生クラスのオブジェクトを使う
  NewClass obj;

  // 継承したメンバ関数を呼び出す
  obj.func1(123);

  // オーバーライドしたメンバ関数を呼び出す
  obj.func2("技術評論社");

  // 基本クラスのオブジェクトを作成する
  MyClass mc;

  // 仮想関数を呼び出す
  mc.func2("基本クラスの仮想関数");

  return 0;
}
