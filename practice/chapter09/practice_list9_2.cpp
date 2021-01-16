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
};

// コンストラクタの実装
Employee::Employee() {
    // nameのための領域を動的に確保する
    name = new char [80];

    // メンバ変数をデフォルト値で初期化
    number = 0;
    strcpy(name, "未設定");
    salary = 150000;
    cout << "コンストラクタが呼び出されました！\n";
}

// デストラクタの実装
Employee::~Employee() {
    // nameのための領域を動的に解放する
    delete[] name;
    cout << "デストラクタが呼び出されました！\n";
}

// 関数のプロトタイプ宣言
void show(Employee obj);

// クラスを使う側のコード
int main() {
    // オブジェクトを作成する
    Employee tanaka;

    // メンバ変数に値を設定する
    tanaka.number = 1234;
    strcpy(tanaka.name, "田中一郎");
    tanaka.salary = 200000;

    // オブジェクトを引数に渡して関数を呼び出す
    cout << "show()を呼び出します！\n";
    show(tanaka);
    cout << "show()を抜けました！\n";

    // nameを表示する
    cout << "氏名:" << tanaka.name << "\n";

    return 0;
}

// オブジェクトを引数とする関数
void show(Employee obj) {
    cout << "社員番号:" << obj.number << "\n";
    cout << "氏名:" << obj.name << "\n";
    cout << "給与:" << obj.salary << "\n";
}

/* error
コンパイル後に実行すると、本来出力されるはずの最後の「デストラクタが呼び出されました！」が表示されず異常終了した
その際に出たエラー文

practice_list9_2(72128,0x10e9e1dc0) malloc: *** error for object 0x7fb64ac05820: pointer being freed was not allocated
practice_list9_2(72128,0x10e9e1dc0) malloc: *** set a breakpoint in malloc_error_break to debug
Abort trap: 6

[memo] ダングリングポインタ:本来有効だったメモリ領域が解放処理などによって無効化されたにもかかわらず、
そのメモリ領域を参照し続けているポインタのことを、ダングリングポインタと呼ぶ。
*/