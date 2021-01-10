#include <iostream>
using namespace std;

// クラスの定義(オーバーロードの活用1)
// 引数のデータ型だけが異なるメンバ関数のオーバーロード
class MyMessage {
    public:
        void showMessage(); // 引数のないメンバ関数
        void showMessage(const char *s); // 引数1個のメンバ関数
        void showMessage(const char *s, int n); // 引数2個のメンバ関数
};

// 引数のないメンバ関数の実装
void MyMessage::showMessage() {
    cout << "こんにちは。" << "\n";
}

// 引数1個のメンバ関数の実装
void MyMessage::showMessage(const char *s) {
    cout << s << "\n";
}

// 引数2個のメンバ関数の実装
void MyMessage::showMessage(const char *s, int n) {
    for (int i = 0; i < n; i++) {
        cout << s << "\n";
    }
}

/*
// メンバ関数の実装 改良した書き方
void MyMessage::showMessage() {
    showMessage("こんにちは", 1);
}

void MyMessage::showMessage(const char *s) {
    showMessage(s, 1);
}

void MyMessage::showMessage(const char *s, int n) {
    for (int i= 0; i < n; i++) {
        cout << "Message:"; // 敢えて改行しない
        cout << s << "\n";
    }
}
*/

// クラスを使う側のコード
int main() {
    MyMessage obj;

    obj.showMessage(); // 引数がない
    obj.showMessage("お元気ですか？"); // 引数が1個
    obj.showMessage("技術評論社", 3); // 引数が2個

    return 0;
}