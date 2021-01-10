#include <iostream>
using namespace std;

// 基本クラスの定義
class MyClass {
public:
  MyClass();	// コンストラクタ
  ~MyClass();	// デストラクタ
};

// 基本クラスのコンストラクタの実装
MyClass::MyClass() {
  cout << "基本クラスのコンストラクタが呼び出されました！\n";
}

// 基本クラスのデストラクタの実装
MyClass::~MyClass() {
  cout << "基本クラスのデストラクタが呼び出されました！\n";
}

// 派生クラスの定義
class NewClass : public MyClass {
public:
  NewClass();	// コンストラクタ
  ~NewClass();	// デストラクタ
};

// 派生クラスのコンストラクタの実装
NewClass::NewClass() {
  cout << "派生クラスのコンストラクタが呼び出されました！\n";
}

// 派生クラスのデストラクタの実装
NewClass::~NewClass() {
  cout << "派生クラスのデストラクタが呼び出されました！\n";
}

// クラスを使う側のコード
int main() {
  NewClass obj;	// ここでコンストラクタが呼び出される

  cout << "********************\n";

  return 0;	// ここでデストラクタが呼び出される
}
