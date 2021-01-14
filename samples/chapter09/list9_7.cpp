#include <iostream>
using namespace std;

// MyClassクラスの定義
class MyClass {
private:
  int pri_data;
protected:
  int pro_data;
public:
  int pub_data;
  friend void show(MyClass *ptr); // フレンド関数
  MyClass();			// コンストラクタ
};

// コンストラクタの実装
MyClass::MyClass() {
  pri_data = 123;
  pro_data = 456;
  pub_data = 789;
}

// フレンド関数の実体の定義
void show(MyClass *ptr) {
  // すべてのメンバを利用できる
  cout << ptr->pri_data << "\n";
  cout << ptr->pro_data << "\n";
  cout << ptr->pub_data << "\n";
}

// 通常の関数の実体の定義
void disp(MyClass *ptr) {
  // public:なメンバだけを利用できる
  // cout << ptr->pri_data << "\n";
  // cout << ptr->pro_data << "\n";
  cout << ptr->pub_data << "\n";
}

// クラスと関数を使う側のコード
int main() {
  // オブジェクトを作成する
  MyClass obj;

  // フレンド関数を呼び出す
  cout << "フレンド関数：\n";
  show(&obj);

  // 通常の関数を呼び出す
  cout << "通常の関数：\n";
  disp(&obj);

  return 0;
}
