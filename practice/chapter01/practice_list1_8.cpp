#include <cstring>
#include <iostream>
using namespace std;

// 構造体の定義
struct Employee {
    int number;
    char name[80];
    int salary;
};

// 構造体のプロトタイプ宣言
struct Employee *getEmployee();

// プログラムのメイン関数
int main() {
    // 構造体のポインタを宣言する
    struct Employee *p;

    // 構造体のポインタを取得する
    p = getEmployee();

    // 構造体のポインタを使ってメンバを表示する
    cout << p->number << "\n";
    cout << p->name << "\n";
    cout << p->salary << "\n";
    
    return 0;
}

// 構造体のポインタを戻り値とする関数
struct Employee *getEmployee() {

    // 構造体の実体をstaticキーワード付きで宣言する
    // static宣言のないローカル変数は関数を抜けた時点で消滅するため
    static struct Employee tanaka;

    // 構造体のメンバに代入
    tanaka.number = 1234;
    strcpy(tanaka.name, "田中一郎");
    tanaka.salary = 200000;

    // 構造体のポインタを返す
    return &tanaka;
}