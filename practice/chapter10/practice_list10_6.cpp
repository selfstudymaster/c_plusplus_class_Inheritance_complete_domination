// ダブルディスパッチ(double dispatch)を使ったジャンケンゲーム
#include <iostream>
#include <cstring>
#include <ctime>
using namespace std;

// 基本クラスの定義
class Hand {
    public: // 4つの純粋仮想関数
        // 引数に3つの派生クラスのいずれかのオブジェクトのポインタ*hが与えられる
        virtual void judge(Hand *h) = 0; // 相手に問い合わせる
        // 3つの派生クラス
        virtual void vsGu() = 0; // グーに勝てるかどうかを返す
        virtual void vsChoki() = 0; // チョキに勝てるかどうかを返す
        virtual void vsPa() = 0; // パーに勝てるかどうかを返す
};

// Guクラスの定義
class Gu : public Hand {
    public:
        void judge(Hand *h);
        void vsGu();
        void vsChoki();
        void vsPa();
};

// Guクラスのメンバ関数の実装
void Gu::judge(Hand *h) {
    // ダブルディスパッチ
    h->vsGu(); // (5)
}

void Gu::vsGu() {
    cout << "あいこです！\n"; // (6)
}

void Gu::vsChoki() {
    cout << "グーの勝ちです！\n"; // (2)
}

void Gu::vsPa() {
    cout << "グーの負けです！\n"; // (4)
}

// Chokiクラスの定義
class Choki : public Hand {
    public:
        void judge(Hand *h);
        void vsGu();
        void vsChoki();
        void vsPa();
};

// Chokiクラスのメンバ関数の実装
void Choki::judge(Hand *h) {
    // ダブルディスパッチ
    h->vsChoki(); // (1)
}

void Choki::vsGu() {
    cout << "チョキの負けです！\n";
}

void Choki::vsChoki() {
    cout << "あいこです！\n";
}

void Choki::vsPa() {
    cout << "チョキの勝ちです！\n";
}

// Paクラスの定義
class Pa : public Hand {
    public:
        void judge(Hand *h);
        void vsGu();
        void vsChoki();
        void vsPa();
};

// Paクラスのメンバ関数の実装
void Pa::judge(Hand *h) {
    // ダブルディスパッチ
    h->vsPa(); // (3)
}

void Pa::vsGu() {
    cout << "パーの勝ちです！\n";
}

void Pa::vsChoki() {
    cout << "パーの負けです！\n";
}

void Pa::vsPa() {
    cout << "あいこです！\n";
}

// クラスを使う側のコード
int main() {
    // オブジェクトを作成する
    Gu g;
    Choki c;
    Pa p;

    // グーとチョキを対戦させる
    cout << "グー vs. チョキ...";
    // cがgに勝てるか？(1つ目のメッセージ(1)へ)→gがcに勝てるか？(2つ目のメッセージ(2)へ)で判定
    c.judge(&g);

    // グーとパーを対戦させる
    cout << "グー vs. パー...";
    // (3)→(4)のメッセージパッシング
    p.judge(&g);

    // グーとグーを対戦させる
    cout << "グー vs. グー...";
    // (5)→(6)のメッセージパッシング
    g.judge(&g);

    return 0;
}