// クラスの定義、メンバ関数の実装、クラスを使うコードを1つのソースコードに書く
#include <iostream>
#include <cstring>
using namespace std;

/*==================================================
上から下へ(1)(2)(3)の順で書かないとコンパイルエラーになる 
====================================================*/

// (1)クラスの定義
class Employee {
public:
  int number;		// 社員番号
  char name[80];	// 氏名
  int salary;		// 給与
  void showData();	// メンバ変数の値を表示する
};

// (2)メンバ関数の実装
void Employee::showData() {
  cout << number << "\n";
  cout << name << "\n";
  cout << salary << "\n";
}

// (3)クラスを使う側のコード
int main() {

  // オブジェクトを作成する
  Employee tanaka;

  // メンバ変数にデータを設定する
  tanaka.number = 1234;
  strcpy(tanaka.name, "田中一郎");
  tanaka.salary = 200000;

  // メンバ関数を呼び出す
  tanaka.showData();

  return 0;
}

/* 写経で復習(上記と全く同じコードです)
// Employeeクラスの定義
class Employee {
  public:
    int number; // メンバ変数
    char name[80]; // メンバ変数
    int salary; // メンバ変数
    void showData(); // メンバ関数
};

// Employeeクラスが所有するメンバ関数showData()の実装
void Employee::showData() {
  cout << number << "\n";
  cout << name << "\n";
  cout << salary << "\n";
}

// Employeeクラスを使う側のコード(main()関数)
int main() {

  // オブジェクトを作成する(Employeeクラスから作られたtanakaオブジェクト)
  Employee tanaka;

  // tanakaオブジェクトのメンバ変数にデータを設定
  tanaka.number = 1234;
  strcpy(tanaka.name, "田中一郎");
  tanaka.salary = 200000;

  // メンバ関数を呼び出す
  tanaka.showData();

  return 0;
}
*/