#include <iostream>
#include <cstring>
using namespace std;

// Employeeクラスの定義
class Employee {
    public:
    int number;
    char name[80];
    int salary;
    void showData();
};

// Employeeクラス所有のメンバ関数の実装
void Employee::showData() {
    cout << number << "\n";
    cout << name << "\n";
    cout << salary << "\n";
}

/*==========================================================
関数の引数や戻り値にオブジェクトを渡す時に、オブジェクトのポインタを使う
===========================================================*/

// MySampleクラスの定義 
// 関数の引数や戻り値にオブジェクトのポインタを渡す
class MySample {
    public:
        // オブジェクトのポインタを引数とするメンバ関数
        // Employee *obj がEmployeeクラスのオブジェクトのポインタ、それを引数とするメンバ関数がuseObject()
        void useObject(Employee *obj);

        // オブジェクトのポインタを戻り値とするメンバ関数retObject()
        Employee* retObject();
};

// MySampleメンバ関数の実装
void MySample::useObject(Employee *obj) {
    obj->showData();
}

// MySampleメンバ関数の実装
Employee* MySample::retObject() {
    // static宣言しないとメンバ関数の処理を抜けた時点でオブジェクトが破棄される
    static Employee obj;
    obj.number = 1234;
    strcpy(obj.name, "田中一郎");
    obj.salary = 200000;

    return &obj;
}

// クラスを使う側のコード (main()関数)
int main() {

    // Employeeクラスのポインタsomeone を宣言
    Employee *someone;
    // MySampleクラスのオブジェクトmsを宣言    
    MySample ms;

    // オブジェクトのポインタを取得する(代入)
    someone = ms.retObject();

    // オブジェクトのポインタを関数に渡す
    // someoneの値(オブジェクトのポインタ)がuseObject()に渡される
    ms.useObject(someone);

    return 0;
}