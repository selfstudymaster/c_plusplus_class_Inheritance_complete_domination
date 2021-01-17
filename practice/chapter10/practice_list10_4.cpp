// フレンド関数を使って演算子をオーバーロード
// 代入演算子以外の演算子に限る
#include <iostream>
using namespace std;

// クラスの定義
class Point {
public:
    int x;
    int y;

    // Point+Point (メンバ関数)
    Point operator+(Point obj);

    // Point+int (メンバ関数)
    Point operator+(int a);

    // int+Point (フレンド関数)
    friend Point operator+(int a, Point obj);
};

// Point+Point (メンバ関数)の実装
Point Point::operator+(Point obj) {
    // 演算結果となるオブジェクトを作成する
    Point ans;

    // メンバどうしを加算する
    ans.x = this->x + obj.x;
    ans.y = this->y + obj.y;

    // 演算結果を返す
    return ans;
}

// Point+int (メンバ関数)の実装
Point Point::operator+(int a) {
    // 演算結果となるオブジェクトを作成
    Point ans;

    // xとyに加算する
    ans.x = this->x + a;
    ans.y = this->y + a;

    // 演算結果を返す
    return ans;
}

// int+Point (フレンド関数)をの実体
Point operator+(int a, Point obj2) {
    // 演算結果となるオブジェクトを作成
    Point ans;

    // xとyに加算する
    ans.x = a + obj2.x;
    ans.y = a + obj2.y;

    // 演算結果を返す
    return ans;
}

// クラスを使う側のコード
int main() {
    // オブジェクトを作成
    Point a, b, c;

    // メンバ変数を設定
    a.x = 1;
    a.y = 2;
    b.x = 3;
    b.y = 4;

    // PointとPointを加算する
    c = a + b;

    // 加算結果を表示
    cout << "Point+Point\n";
    cout << "x座標:" << c.x << "\n";
    cout << "y座標:" << c.y << "\n";

    // Pointとintを加算する
    c = a + 10;

    // 加算結果を表示する
    cout << "Point+int\n";
    cout << "x座標:" << c.x << "\n";
    cout << "y座標:" << c.y << "\n";

    // intとPointを加算する
    c = 20 + a;

    // 加算結果を表示する
    cout << "int+Point\n";
    cout << "x座標:" << c.x << "\n";
    cout << "y座標:" << c.y << "\n";

    return 0;
}