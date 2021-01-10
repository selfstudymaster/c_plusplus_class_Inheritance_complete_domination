#include <iostream>
using namespace std;

// 図形を表す基本クラス（抽象クラス）の定義
class Figure {
public:
  virtual void draw() = 0; // 純粋仮想関数
};

// 円を表す派生クラスの定義
class Circle : public Figure {
public:
  void draw();		// 純粋仮想関数のオーバーライド
};

// Circleクラスのdraw()の実装
void Circle::draw() {
  cout << "○";
}

// 三角を表す派生クラスの定義
class Triangle : public Figure {
public:
  void draw();		// 純粋仮想関数のオーバーライド
};

// Triangleクラスのdraw()の実装
void Triangle::draw() {
  cout << "△";
}

// 四角を表す派生クラスの定義
class Rectangle : public Figure {
public:
  void draw();		// 純粋仮想関数のオーバーライド
};

// Rectangleクラスのdraw()の実装
void Rectangle::draw() {
  cout << "□";
}

// クラスを使う側のコード
int main() {
  // 基本クラス（抽象クラス）のポインタの配列を作成する
  Figure *p[100];

  // 派生クラスのオブジェクトを作成し、基本クラスのポインタに代入する
  Circle c1;
  p[0] = &c1;
  Triangle t1, t2;
  p[1] = &t1;
  p[2] = &t2;
  Rectangle r1, r2, r3;
  p[3] = &r1;
  p[4] = &r2;
  p[5] = &r3;
  p[6] = NULL;

  // 図形を描画する
  int i;
  for (i = 0; p[i] != NULL; i++) {
    p[i]->draw();
  }
  cout << "\n";

  // 先頭から3番目の図形を削除する
  for (i = 2; i < 5; i++) {
    p[i] = p[i + 1];
  }
  p[i] = NULL;

  // 図形を再描画する
  for (i = 0; p[i] != NULL; i++) {
    p[i]->draw();
  }
  cout << "\n";

  return 0;
}
