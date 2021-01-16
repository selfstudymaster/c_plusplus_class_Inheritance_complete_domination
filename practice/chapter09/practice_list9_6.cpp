// オブジェクトの代入ではコピーコンストラクタが呼び出されない
#include <iostream>
#include <cstring>
using namespace std;

// クラスの定義
class Employee {
    public:
        int number;
        char *name; // ポインタ
        int salary;
        void showData();
        Employee(); // コンストラクタ
        Employee(const Employee &obj); // コピーコンストラクタ
        ~Employee(); // デストラクタ
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

// コピーコンストラクタの実装
Employee::Employee(const Employee &obj) {
    // nameのための領域を動的に確保する
    name = new char [80];

    // データをコピーする
    number = obj.number;
    strcpy(name, obj.name);
    salary = obj.salary;
    cout << "コピーコンストラクタが呼び出されました！\n";
}

// デストラクタの実装
Employee::~Employee() {
    // nameのための領域を動的に解放する
    delete [] name;
    cout << "デストラクタが呼び出されした！\n";
}

// メンバ関数の実装
void Employee::showData() {
    cout << "社員番号：" << number << "\n";
    cout << "氏名：" << name << "\n";
    cout << "給与：" << salary << "\n";
}

// クラスを使う側のコード
int main() {
    // オブジェクトを作成
    Employee tanaka, someone; // ここでtanakaとsomeoneのコンストラクタが呼び出される

    // メンバ変数に値を設定する
    tanaka.number = 1234;
    strcpy(tanaka.name, "田中一郎");
    tanaka.salary = 200000;

    // オブジェクトにオブジェクトを代入する
    someone = tanaka; // ここでコピーコンストラクタは呼び出されない

    // メンバ変数の値を変更する
    someone.number = 1111;
    strcpy(someone.name, "技術太郎"); // tanaka のname(ポインタ)の値がsomeoneのnameにコピーされただけとなり、tanakaのnameもsomeoneのnameになってしまう
    someone.salary = 150000;

    // メンバ変数の値を表示する
    tanaka.showData();
    someone.showData();

    return 0;
} // ここでtanaka とsomeone のデストラクタが呼び出される


/* error
コンパイル後に実行すると、本来出力されるはずの最後の「デストラクタが呼び出されました！」が表示されず異常終了した
その際に出たエラー文

practice_list9_6(74934,0x10df50dc0) malloc: *** error for object 0x7f8054c05820: pointer being freed was not allocated
practice_list9_6(74934,0x10df50dc0) malloc: *** set a breakpoint in malloc_error_break to debug
Abort trap: 6

[memo] ダングリングポインタ:本来有効だったメモリ領域が解放処理などによって無効化されたにもかかわらず、
そのメモリ領域を参照し続けているポインタのことを、ダングリングポインタと呼ぶ。
*/