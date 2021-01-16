#include <iostream>
#include <cstring>
using namespace std;

// クラスの定義
class Employee {
    public:
        int number;
        char *name;
        int salary;
        Employee();
        ~Employee();
};

// コンストラクタの実装
Employee::Employee() {
    // nameのための領域を動的に確保する
    name = new char [80];

    // メンバ変数をデフォルト値で初期化する
    number = 0;
    strcpy(name, "未設定");
    salary = 150000;
    cout << "コンストラクタが呼び出されました！\n";
}

// デストラクタの実装
Employee::~Employee() {
    // nameのための領域を動的に解放する
    delete [] name;
    cout << "デストラクタが呼び出されました！\n";
}

// 関数のプロトタイプ宣言
void show(Employee *ptr);

// クラスを使う側のコード
int main() {
    // オブジェクトを作成する
    Employee tanaka;

    // メンバ変数に値を設定する
    tanaka.number = 1234;
    strcpy(tanaka.name, "田中一郎");
    tanaka.salary = 200000;

    // オブジェクトのポインタを引数に渡して関数を呼び出す
    // show()の呼び出し時に新たなオブジェクトが作成されず、コンストラクタもデストラクタも呼び出されない。
    // なぜならshow(&tanaka)はmain()関数の中で作成されたオブジェクトtanakaのアドレスを引数に渡すものだから。
    cout << "show()を呼び出します！\n";
    show(&tanaka);
    cout << "show()を抜けました！\n";

    // nameを表示する
    cout << "氏名:" << tanaka.name << "\n";

    return 0;
}

// オブジェクトのポインタを引数とする関数
void show(Employee *ptr) {
    cout << "社員番号:" << ptr->number << "\n";
    cout << "氏名:" << ptr->name << "\n";
    cout << "給与:" << ptr->salary << "\n";
}