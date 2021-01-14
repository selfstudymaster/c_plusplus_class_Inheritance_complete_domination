#include <iostream>
using namespace std;

// クラスの定義
class MyClass {
public:
  int myVal;	// メンバ変数
  MyClass();	// 引数のないコンストラクタ
  MyClass(int m);	// 引数を持つコンストラクタ
  ~MyClass();	// デストラクタ
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

// グローバル変数として宣言されたポインタ
MyClass *gPtr;

// プログラムの実行開始位置となる関数
int main() {
  // プログラムが起動したことを知らせる
  cout << "プログラムが起動しました！\n";

  // 動的オブジェクトを作成する
  gPtr = new MyClass(123);

  // 動的オブジェクトを使う
  cout << gPtr->myVal << "\n";

  // func()を呼び出す
  func();

  // 動的オブジェクトを破棄する
  delete gPtr;

  // プログラムが終了することを知らせる
  cout << "プログラムが終了します！\n";

  return 0;
}

// main()関数から呼び出される関数
void func() {
  // ローカル変数として宣言されたポインタ
  MyClass *ptr;

  // 関数が呼び出されたことを知らせる
  cout << "func()が呼び出されました！\n";

  for (int i = 1; i <= 3; i++) {
    // 動的オブジェクトを作成する
    ptr = new MyClass(i);

    // 動的オブジェクトを使う
    cout << ptr->myVal << "\n";

    // 動的オブジェクトを破棄する
    delete ptr;
  }

  // 関数を抜けることを知らせる
  cout << "func()を抜けます！\n";
}
