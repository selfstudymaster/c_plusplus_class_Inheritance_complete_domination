#include <iostream>
using namespace std;

// クラスの定義
class MyClass {
    public:
        int myVal;
        MyClass();
        MyClass(int m);
        ~MyClass();
};

// 引数のないコンストラクタの実装
MyClass::MyClass() {
    myVal = 0;
    cout << "コンストラクタが呼び出されました！\n"; // (呼び出し順5) // (呼び出し順10)
}

// 引数を持つコンストラクタの実装
MyClass::MyClass(int m) {
    myVal = m;
    cout << "コンストラクタが呼び出されました！\n"; // (呼び出し順1)
}

// デストラクタの実装
MyClass::~MyClass() {
    cout << "デストラクタが呼び出されました！\n"; // (呼び出し順8) // (呼び出し順13) // (呼び出し順15)
}

// 関数のプロトタイプ宣言
void func();

// グローバルオブジェクトの作成　プログラムの起動と同時に作成される
MyClass g(123);

// プログラムの実行開始位置となる関数
int main() {
    // プログラムが起動したことを知らせる
    cout << "プログラムが起動しました！\n"; // (呼び出し順2)

    // グローバルオブジェクトのメンバ変数の値を表示する
    cout << "g.myValの値:" << g.myVal << "\n"; // (呼び出し順3)

    // func() を2回呼び出す
    func();
    func();

    // プログラムが終了することを知らせる
    cout << "プログラムが終了します！\n"; // (呼び出し順14)

    return 0;
}

// main()関数から呼び出される関数
void func() {
    // 関数が呼び出されたことを知らせる
    cout << "func()が呼び出されました！\n"; // (呼び出し順4) // (呼び出し順9)

    // ローカルオブジェクトの作成
    MyClass a;

    // ローカルオブジェクトのメンバ変数の値を表示する
    // 引数のないコンストラクタが使われているのでmyValの値は初期値の0
    cout << "a.myValの値:" << a.myVal << "\n"; // (呼び出し順6) // (呼び出し順11)

    // ローカルオブジェクトのメンバ変数に値を代入する
    // 関数を抜ける直前に値の代入をしているが、関数を抜ける時にローカル変数は破棄されるため
    // main()関数から2回目のfunc()呼び出しを行ってもデフォルト値の0が表示される
    a.myVal = 456;

    // 関数を抜けることを知らせる
    cout << "func()を抜けます！\n"; // (呼び出し順7) // (呼び出し順12)
}