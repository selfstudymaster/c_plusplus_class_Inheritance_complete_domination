#include <iostream>
using namespace std;

// クラスの定義
class MyClass {
    public:
        int number; // メンバ関数
        MyClass(); // コンストラクタ
        ~MyClass(); // デストラクタ
};

// コンストラクタの実装
MyClass::MyClass() {
    cout << "コンストラクタが呼び出されました！\n";
}

// デストラクタの実装
MyClass::~MyClass() {
    cout << "オブジェクト" << number;
    cout << "のデストラクタが呼び出されました！\n";
}

// クラスを使う側のコード
void myFunc() {
    MyClass obj1; // ここでオブジェクトが作成される
    obj1.number = 1;
    
    // ここでオブジェクトが破棄される
}

int main() {
    myFunc();
    MyClass obj2; // ここでオブジェクトが作成される
    obj2.number = 2;

    return 0; // ここでオブジェクトが破棄される
}