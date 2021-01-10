#include <iostream>
using namespace std;

// 基本クラスを定義
class MyClass {
    public:
        // コンストラクタ
        MyClass();
        // デストラクタ
        ~MyClass();
};

// 基本クラスのコンストラクタの実装
MyClass::MyClass() {
    cout << "基本クラスのコンストラクタが呼び出されました！\n";
}

// 基本クラスのデストラクタの実装
MyClass::~MyClass() {
    cout << "基本クラスのデストラクタが呼び出されました！\n";
}

// 派生クラスの定義
class NewClass : public MyClass {
    public:
        // コンストラクタ
        NewClass();
        // デストラクタ
        ~NewClass();
};

// 派生クラスのコンストラクタの実装
NewClass::NewClass() {
    cout << "派生クラスのコンストラクタが呼び出されました！\n";
}

// 派生クラスのデストラクタの実装
NewClass::~NewClass() {
    cout << "派生クラスのデストラクタが呼び出されました！\n";
}

// クラスを使う側のコード
int main() {
    
    NewClass obj; // ここでコンストラクタが呼び出される

    cout << "**********************\n";

    return 0; // ここでデストラクタが呼び出される
}