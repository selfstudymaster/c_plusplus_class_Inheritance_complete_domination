#include <iostream>
#include <cstring>
using namespace std;

// クラスを定義
class Employee {
    public:
        int number;
        char name[80];
        int salary;
        void showData();
};

// メンバ関数の実装
void Employee::showData() {
    cout << number << "\n";
    cout << name << "\n";
    cout << salary << "\n";
}

// クラスを使う側のコード
int main() {
    // オブジェクトtanakaを宣言
    Employee tanaka;
    // オブジェクトのポインタの宣言
    Employee *someone;

    // オブジェクトのポインタを取得する
    someone = &tanaka;

    // オブジェクトのメンバを設定する
    // ポインタのアドレスはアロー演算子->で取り出す
    someone->number = 1234;
    strcpy(someone->name, "田中一郎");
    someone->salary = 200000;

    // オブジェクトのメンバを表示する
    someone->showData();

    return 0;
}