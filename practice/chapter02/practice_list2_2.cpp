#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// じゃんけんの手を表す定数
#define GU 0
#define CHOKI 1
#define PA 2

// 判定を表す定数
#define WIN 0
#define LOSE 1
#define DRAW 2

// ユーザーを表すクラス
class User {
    private: // アクセス指定子
        int hand; // データ型 メンバ変数 を宣言 手
    public: //アクセス指定子
        void setHand(); // 戻り値のデータ型 メンバ関数 を定義 手を選択する
        int getHand(); // 戻り値のデータ型 メンバ関数 を定義 手を返す
};

// ユーの手を選択するメンバ関数
void User::setHand() {
    cout << "0:グー、1:チョキ、2:パー\n";
    cout << "ユーザの手を選んでください=";
    cin >> hand;
}

//ユーザの手を返すメンバ関数
int User::getHand() {
    return hand;
}

// コンピュータを表すクラス
class Computer {
    private:
        int hand;
    public:
        void setHand();
        int getHand();
};

// コンピュータの手を選択するメンバ関数
void Computer::setHand() {
    hand = rand() % 3;
}

// コンピュータの手を返すメンバ
int Computer::getHand() {
    cout << "コンピュータの手=" << hand << "\n";
    return hand;
}

// ジャッジを表すクラス
class Judge {
    private:
        int judge;
    public:
        void doJudge(User u, Computer c);
        void showJudge();
};

// ジャッジが勝敗を判定するメンバ関数
void Judge::doJudge(User u,  Computer c) {
    int user, computer;

    user = u.getHand();
    computer = c.getHand();
    if (user == computer) {
        judge = DRAW;
    }
    else if (user == GU && computer == CHOKI ||
             user == CHOKI && computer == PA ||
             user == PA && computer == GU) {
        judge = WIN;
    } 
    else {
        judge = LOSE;
    }
}

// ジャッジが勝敗を表示するメンバ関数
void Judge::showJudge() {
    if (judge == WIN) {
        cout << "ユーザの勝ちです!\n";
    }
    else if (judge == LOSE) {
        cout << "ユーザの負けです!\n";
    }
    else if (judge == DRAW) {
        cout << "引き分けです!\n";
    }
}

// プログラムのメイン関数
int main() {
    User user;
    Computer computer;
    Judge judge;

    // 乱数を初期化する
    srand(time(NULL));

    // ユーザが手を選択する
    user.setHand();

    // コンピュータが手を選択する
    computer.setHand();

    // 勝敗を判定する
    judge.doJudge(user, computer);

    // 勝敗を表示する
    judge.showJudge();

    return 0;
}