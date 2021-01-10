// クラスの定義は.hファイル(ヘッダーファイル)に記述し、メンバ関数の実装は.cppファイル(C++のソースファイル)に記述する
class Employee {
    public: // アクセス指定子
        int number; // メンバ変数
        char name[80]; // メンバ変数
        int salary; // メンバ変数
        void showData(); // メンバ関数
};