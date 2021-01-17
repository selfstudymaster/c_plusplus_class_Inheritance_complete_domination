// 演算子のオーバーロードとは、演算子の機能をクラスで独自に定義し直すこと
// C++では . :: ? .* などの演算子のオーバーロードはできない
#include <iostream>
#include <cstring>
using namespace std;

// クラスの定義
class Employee {
    public:
        int number;
        char *name; // ポインタ
        int salary;
        Employee();
        ~Employee();
        Employee &operator=(Employee &obj); // 代入演算子=のオーバーロード
};

// コンストラクタの実装
Employee::Employee() {
    // nameのための領域を動的に確保
    name = new char [80];
}

// デストラクタの実装
Employee::~Employee() {
    // nameのための領域を動的に確保する
    delete [] name;
}

// 代入演算子のオーバーロードの実装
Employee &Employee::operator=(Employee &obj) {
    // ポインタでないメンバ変数の値はそのまま代入する
    this->number = obj.number;
    this->salary = obj.salary;

    // ポインタが指すメモリ領域をコピーする
    strcpy(this->name, obj.name);

    // 代入されたオブジェクト自体を返す
    return *this;
}

// クラスを使う側のコード
int main() {
    // オブジェクトの作成
    Employee tanaka, someone;

    // tanakaのメンバ変数だけを設定する
    tanaka.number = 1234;
    strcpy(tanaka.name, "田中一郎");
    tanaka.salary = 200000;

    // オブジェクトを代入する
    someone = tanaka;

    // someoneのnameを表示する
    cout << "someone:" << someone.name << "\n";

    // someoneのnameを変更する
    strcpy(someone.name, "技術太郎");
    cout << "someone:" << someone.name << "\n";

    // tanakaのnameは変わらない
    cout << "tanaka:" << tanaka.name << "\n";

    return 0;
}