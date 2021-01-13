#include <iostream>
using namespace std;

// クラスの定義
class MyClass {
public:
  int myVal;
  MyClass();
  MyClass(int m);
  ~MyClass();
};

// 引数のないコンストラクタの実装
MyClass::MyClass() {
  myVal = 0;
  cout << "コンストラクタが呼び出されました！\n";
}

// 引数を持つコンストラクタの実装
MyClass::MyClass(int m) {
  myVal = m;
  cout << "コンストラクタが呼び出されました！\n";
}

// デストラクタの実装
MyClass::~MyClass() {
  cout << "デストラクタが呼び出されました！\n";
}

// 関数のプロトタイプ宣言
void func();

// プログラムの実行開始位置となる関数
int main() {
  // プログラムが起動したことを知らせる
  cout << "プログラムが起動しました！\n";

  // func()を2回呼び出す
  func();
  func();

  // プログラムが終了することを知らせる
  cout << "プログラムが終了します！\n";

  return 0;
}

// main()関数から呼び出される関数
void func() {
  // 関数が呼び出されたことを知らせる
  cout << "func()が呼び出されました！\n";

  // 静的変数の宣言
  static int a = 123;

  // 静的変数の値を表示する
  cout << "静的変数の値：" << a << "\n";

  // 静的変数の値をインクリメントする
  a++;

  // 静的オブジェクトの宣言
  static MyClass obj(456);

  // 静的オブジェクトのメンバ変数の値を表示する
  cout << "メンバ変数の値：" << obj.myVal << "\n";

  // 静的オブジェクトのメンバ変数の値をインクリメントする
  obj.myVal++;

  // 関数を抜けることを知らせる
  cout << "func()を抜けます！\n";
}
