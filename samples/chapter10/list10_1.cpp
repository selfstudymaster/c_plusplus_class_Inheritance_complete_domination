#include <iostream>
#include <cstring>
using namespace std;

// クラスの定義
class Employee {
public:
  int number;	// 社員番号
  char *name;	// 氏名（ポインタ）
  int salary;	// 給与
  Employee();	// コンストラクタ
  ~Employee();	// デストラクタ
  Employee &operator=(Employee &obj); // 代入演算子のオーバーロード
};

// コンストラクタの実装
Employee::Employee() {
  // nameのための領域を動的に確保する
  name = new char [80];
}

// デストラクタの実装
Employee::~Employee() {
  // nameのための領域を動的に解放する
  delete [] name;
}

// 代入演算子のオーバーロードの実装
Employee &Employee::operator=(Employee &obj) {
  // ポインタでないメンバ変数の値は、そのまま代入する
  this->number = obj.number;
  this->salary = obj.salary;

  // ポインタが指すメモリ領域をコピーする
  strcpy(this->name, obj.name);

  // 代入されたオブジェクト自体を返す
  return *this;
}

// クラスを使う側のコード
int main() {
  // オブジェクトを作成する
  Employee tanaka, someone;

  // tanakaのメンバ変数だけを設定する
  tanaka.number = 1234;
  strcpy(tanaka.name, "田中一郎");
  tanaka.salary = 200000;

  // オブジェクトを代入する
  someone = tanaka;

  // someoneのnameを表示する
  cout << "someone：" << someone.name << "\n";

  // someoneのnameを変更する
  strcpy(someone.name, "技術太郎");
  cout << "someone：" << someone.name << "\n";

  // tanakaのnameは変わらない
  cout << "tanaka：" << tanaka.name << "\n";

  return 0;
}
