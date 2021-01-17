// 比較演算子のオーバーロード
#include <iostream>
#include <cmath>
using namespace std;

// クラスの貞吾
class Point {
    public:
        int x;
        int y;
        bool operator==(Point obj); // ==演算子のオーバーロード
        bool operator>(Point obj); // >演算子のオーバーロード
};

// ==演算子のオーバーロードの実装
bool Point::operator==(Point obj) {
    if ((this->x == obj.x) && (this->y == obj.y)) {
        // 対応するメンバが等しければtrueを返す
        return true;
    }
    else {
        // そうでなければfalseを返す
        return false;
    }
}

// >演算子のオーバーロードの実装
bool Point::operator>(Point obj) {
    // ベクトルの長さを求める
    double v1, v2;
    v1 = sqrt(this->x * this->x + this->y * this->y);
    v2 = sqrt(obj.x * obj.x + obj.y * obj.y);
    if (v1 > v2) {
        // ベクトルの長さが大きければtrueを返す
        return true;
    }
    else {
        // そうでなければfalseを返す
        return false;
    }
}

// クラスを使う側のコード
int main() {
    // オブジェクトを作成
    Point a, b;

    // メンバ変数を設定
    a.x = 1;
    a.y = 2;
    b.x = 3;
    b.y = 4;

    // 等しいかどうか判断する
    if (a == b) {
        cout << "aとbは等しい！\n";
    }
    else {
        cout << "aとbは等しくない！\n";
    }

    // 大きいかどうか判断する
    if (a > b) {
        cout << "aはbより大きい！\n";
    }
    else {
        cout << "aはbより大きくない！\n";
    }

    return 0;
}