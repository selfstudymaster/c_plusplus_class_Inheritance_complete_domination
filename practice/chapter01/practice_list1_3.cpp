#include <cstring>
#include <iostream>
using namespace std;

// 構造体の定義
struct Employee {
    int number;
    char name[80];
    int salary;
};

// プログラムのメイン関数
int main() {
    // 構造体をデータ型とした変数を宣言 tanaka someone
    struct Employee tanaka, someone;

    // 構造体のメンバに代入 tanaka
    tanaka.number = 1234;
    strcpy(tanaka.name, "田中一郎");
    tanaka.salary = 200000;

    // 構造体のメンバを一括コピーする tanakaをsomeoneへ
    someone = tanaka;

    // 構造体のメンバを表示する
    cout << someone.number << "\n";
    cout << someone.name << "\n";
    cout << someone.salary << "\n";

    return 0;
}