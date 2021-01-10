#include <iostream>
using namespace std;

// 前方参照（この部分をコメントアウトする）
class YourClass;

// MyClassクラスの定義
class MyClass {
private:
  int val;
  friend void compObj(MyClass *m, YourClass *y); // フレンド関数
public:
  // 引数のないコンストラクタ
  MyClass() {
    val = 0;
  }
  // 引数を持つコンストラクタ
  MyClass(int v) {
    val = v;
  }
};

// YourClassクラスの定義
class YourClass {
private:
  int num;
  friend void compObj(MyClass *m, YourClass *y); // フレンド関数
public:
  // 引数のないコンストラクタ
  YourClass() {
    num = 0;
  }
  // 引数を持つコンストラクタ
  YourClass(int n) {
    num = n;
  }
};

// フレンド関数の実体の定義
void compObj(MyClass *m, YourClass *y) {
  if (m->val > y->num) {
    cout << "valはnumより大きい！\n";
  }
  else if (m->val < y->num) {
    cout << "valはnumより小さい！\n";
  }
  else {
    cout << "valとnumは等しい！\n";
  }
}

// クラスと関数を使う側のコード
int main() {
  // オブジェクトを作成する
  MyClass mc(123);
  YourClass yc(456);

  // フレンド関数を使う
  compObj(&mc, &yc);

  return 0;
}
