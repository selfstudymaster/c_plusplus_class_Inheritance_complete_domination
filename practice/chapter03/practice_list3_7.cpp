#include <iostream>
using namespace std;

// クラスの定義(オーバーロード:同じクラスの中に型の異なる同じ名前のメンバ関数を複数定義できる)
class MyMath {
    public:
        int twice(int a);
        double twice(double a);
        // 注意! 名前と引数が同じで戻り値のデータ型だけが異なるメンバ関数を定義することはできない
        // int twice(char *s);
        // double twice(char *s);
};


// int型のメンバ関数の実装
int MyMath::twice(int a) {
    return a * 2;
}

// double型のメンバ関数の実装
double MyMath::twice(double a) {
    return a * 2;
}

// クラスを使う側のコード(main()関数)
int main() {
    MyMath obj;
    int a;
    double b;

    a = obj.twice(123);
    cout << a << "\n";
    b = obj.twice(3.14);
    cout << b << "\n";

    return 0;
}