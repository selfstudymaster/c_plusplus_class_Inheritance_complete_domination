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

// グローバルオブジェクトの作成
MyClass g(123);

// プログラムの実行開始位置となる関数
int main() {
  // プログラムが起動したことを知らせる
  cout << "プログラムが起動しました！\n";

  // グローバルオブジェクトのメンバ変数の値を表示する
  cout << "g.myValの値：" << g.myVal << "\n";

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

  // ローカルオブジェクトの作成
  MyClass a;

  // ローカルオブジェクトのメンバ変数の値を表示する
  cout << "a.myValの値：" << a.myVal << "\n";

  // ローカルオブジェクトのメンバ変数に値を代入する
  a.myVal = 456;

  // 関数を抜けることを知らせる
  cout << "func()を抜けます！\n";
}
