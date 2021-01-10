#include <cstring>
#include <iostream>
using namespace std;

struct Employee {
    int number;
    char name[80];
    int salary;
};

int main(){
    
    // 構造体の実体を宣言する
    struct Employee tanaka;

    // 構造体のメンバに代入を行う
    tanaka.number = 1234;
    strcpy(tanaka.name, "田中一郎");
    tanaka.salary = 200000;

    // 構造体のポインタを宣言する
    struct Employee *p;

    // 構造体のポインタに構造体の実態のアドレスを代入する
    p = &tanaka;

    // 構造体のポインタを使ってメンバを表示する
    cout << p->number << "\n";
    cout << p->name << "\n";
    cout << p->salary << "\n";

    return 0;
}