// フレンド関数はクラスのメンバ関数ではない

#include <iostream>
using namespace std;

// MyClassクラスの定義
class MyClass {
    private: // プライベート
        int pri_data;
    protected: // プロテクテッド
        int pro_data;
    public: // パブリック
        int pub_data;
        friend void show(MyClass *ptr); // フレンド関数
        MyClass(); // コンストラクタ
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
    // cout << ptr->pri_data << "\n"; // コンパイルエラーになる
    // cout << ptr->pro_data << "\n"; // コンパイルエラーになる
    cout << ptr->pub_data << "\n";
}

// クラスと関数を使う側のコード
int main() {
    // オブジェクトを作成する
    MyClass obj;

    // フレンド関数を呼び出す
    cout << "フレンド関数:\n";
    show(&obj);

    // 通常の関数を呼び出す
    cout << "通常の関数:\n";
    disp(&obj);

    return 0;
}

// コンパイルエラー文
/*
practice_list9_7.cpp:36:18: error: 'pri_data' is a private member of 'MyClass'
    cout << ptr->pri_data << "\n"; // コンパイルエラーになる
                 ^
practice_list9_7.cpp:9:13: note: declared private here
        int pri_data;
            ^
practice_list9_7.cpp:37:18: error: 'pro_data' is a protected member of 'MyClass'
    cout << ptr->pro_data << "\n"; // コンパイルエラーになる
                 ^
practice_list9_7.cpp:11:13: note: declared protected here
        int pro_data;
            ^
2 errors generated.
*/