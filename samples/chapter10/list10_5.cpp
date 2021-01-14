#include <iostream>
using namespace std;

// 平面座標の点を取り扱うテンプレートクラスの定義
template <class datatype> class TPoint {
public:
  datatype x;		// x座標
  datatype y;		// y座標
  void showData();	// メンバ変数の値を表示する
  TPoint();		// 引数のないコンストラクタ
  TPoint(datatype x, datatype y); // 引数を持つコンストラクタ
};

// テンプレートクラスのメンバ関数の実装
template <class datatype> void TPoint<datatype>::showData() {
  cout << "x座標：" << x << "\n";
  cout << "y座標：" << y << "\n";
}

// テンプレートクラスの引数のないコンストラクタの実装
template <class datatype> TPoint<datatype>::TPoint() {
  x = 0;
  y = 0;
}

// テンプレートクラスの引数を持つコンストラクタの実装
template <class datatype> TPoint<datatype>::TPoint(datatype x, datatype y) {
  this->x = x;
  this->y = y;
}

// クラスを使う側のコード
int main() {
  // int型用のTPointクラスのオブジェクトを作成する
  TPoint<int> obj1;

  // メンバ変数に値を設定する
  obj1.x = 123;
  obj1.y = 456;

  // メンバ関数を呼び出す
  obj1.showData();

  // double型用のTPointクラスのオブジェクトを作成する
  TPoint<double> obj2(1.23, 3.45);

  // メンバ関数を呼び出す
  obj2.showData();

  return 0;
}
