// p155 List 6-3
// Employeeクラスの定義
class Employee {
public:
  int number;			// 社員番号
  char name[80];		// 氏名
  int salary;			// 給与
  virtual void showData();	// メンバ変数の値を表示する
  Employee();			// 引数のないコンストラクタ
  Employee(int nu, const char *na, int sa); // 引数を持つコンストラクタ
};

// Directorクラスの定義
class Director : public Employee {
public:
  int stock;			// 株式保有数
  void showData();		// メンバ変数の値を表示する
  Director();			// 引数のないコンストラクタ
  Director(int nu, const char *na, int sa, int st); // 引数を持つコンストラクタ
};

// Managerクラスの定義
class Manager : public Employee {
public:
  int travelAllowance;		// 出張費
  void showData();		// メンバ変数の値を表示する
  Manager();			// 引数のないコンストラクタ
  Manager(int nu, const char *na, int sa, int tr); // 引数を持つコンストラクタ
};

// Salesmanクラスの定義
class Salesman : public Employee {
public:
  int sales;			// 売上
  void showData();		// メンバ変数の値を表示する
  Salesman();			// 引数のないコンストラクタ
  Salesman(int nu, const char *na, int sa, int ss); // 引数を持つコンストラクタ
};
