#include <iostream>
using namespace std;

// クラスの定義
class Book {
// メンバ変数をカプセル化
private:
    int page;

// メンバ関数はpublic
public:
    int getPage();
    void setPage(int p);
};

// メンバ関数の実装
// pageの値を返す関数
int Book::getPage() {
    return page;
}

// メンバ関数の実装
// 引数の値p をpage に代入する(条件あり)
void Book::setPage(int p) {
    if ((p >= 1) && (p <= 1000)) {
        page = p;
    }
    else {
        cout << "1 〜 1000を設定してください！" << "\n";
    }
}

// クラスを使う側のコード
int main() {
    // オブジェクトを宣言
    Book bk;

    // メンバ変数に適切な値を代入する
    bk.setPage(123);

    // メンバ変数の値を表示する
    cout << bk.getPage() << "\n";

    // メンバ変数に不適切な値を代入する
    bk.setPage(30000);

    // メンバ変数の値を表示する
    cout << bk.getPage() << "\n";

    return 0;
}