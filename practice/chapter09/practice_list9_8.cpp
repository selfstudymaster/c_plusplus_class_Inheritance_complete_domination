// フレンド関数の活用方法
#include <iostream>
using namespace std;

// 前方参照
class YourClass;

// MyClassクラスの定義
class MyClass {
    private: // プライベート
        int val;
        // 前方参照を先に記入していないと引数YourClassを引数と認識されずコンパイルエラーになる
        friend void compObj(MyClass *m, YourClass *y); //フレンド関数
    public: // パブリック
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
    private: // プライベート
        int num;
        friend void compObj(MyClass *m, YourClass *y); // フレンド関数
    public: // パブリック
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