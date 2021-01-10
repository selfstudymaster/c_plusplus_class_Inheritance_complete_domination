#include <iostream>
using namespace std;

// クラスの定義
class Point {
public:
  int x;		// x座標
  int y;		// y座標
  Point operator+(Point obj); // +演算子のオーバーロード
  Point operator-(Point obj); // -演算子のオーバーロード
};

// +演算子のオーバーロードの実装
Point Point::operator+(Point obj) {
  // 演算結果となるオブジェクトを作成する
  Point ans;

  // メンバどうしを加算する
  ans.x = this->x + obj.x;
  ans.y = this->y + obj.y;

  // 演算結果を返す
  return ans;
}

// -演算子のオーバーロードの実装
Point Point::operator-(Point obj) {
  // 演算結果となるオブジェクトを作成する
  Point ans;

  // メンバどうしを減算する
  ans.x = this->x - obj.x;
  ans.y = this->y - obj.y;

  // 演算結果を返す
  return ans;
}

// クラスを使う側のコード
int main() {
  // オブジェクトを作成する
  Point a, b, c;

  // メンバ変数を設定する
  a.x = 1;
  a.y = 2;
  b.x = 3;
  b.y = 4;

  // オブジェクトを加算する
  c = a + b;

  // 加算結果を表示する
  cout << "x座標：" << c.x << "\n";
  cout << "y座標：" << c.y << "\n";

  // オブジェクトを減算する
  c = a - b;

  // 減算結果を表示する
  cout << "x座標：" << c.x << "\n";
  cout << "y座標：" << c.y << "\n";

  return 0;
}
