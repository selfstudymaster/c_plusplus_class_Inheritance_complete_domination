// 三目並べゲームを作る
#include <iostream>
#include <cstring>
#include <ctime>
using namespace std;

// プレイヤーを表すクラスの定義(基本クラス)
class Player {
    protected: // プロテクテッドにして派生クラスのUserクラスとComputerクラスのselect()関数でmarkとnumberを利用する
        char mark; // 枠に書き込む記号
        int number; // 選んだ手(1~9)
    public:
        virtual void select() = 0; // 手を選ぶ(純粋仮想関数)
        char getMark(); // 記号を返す
        int getNumber(); // 手を返す
        Player(char mark); // コンストラクタ
};

// ユーザーを表すUserクラスの定義(Playerクラスの派生クラス)
class User : public Player {
    public:
        void select(); // 手を選ぶ
        User(char mark); // コンストラクタ
};

// コンピュータを表すComputerクラスの定義(Playerクラスの派生クラス)
class Computer : public Player {
    public:
        void select(); // 手を選ぶ
        Computer(char mark); // コンストラクタ
};

// 盤面を表すクラスの定義
class Board {
    private:
        char cell[3][3]; // 3x3の枠(マス)
    public:
        void show(); // 盤面を表示する
        bool setCell(Player *Player); // 枠に記号を書き込む
        bool judge(Player *Player); // 勝敗を判定する
        Board(); // コンストラクタ
};

// プレイヤーを表すクラスの実装(記号を返す)
char Player::getMark() {
    return mark;
}

// プレイヤーを表すクラスの実装(手を返す)
int Player::getNumber() {
    return number;
}

// プレイヤーを表すクラスの実装(コンストラクタ)
Player::Player(char mark) {
    this->mark = mark;
}

// ユーザーを表すクラスの実装(手を選ぶ)
void User::select() {
    int n;

    do {
        cout << mark << "の手を選んでください = ";
        cin >> n;
    } while (n < 1 || n >9);
    number = n;
}

// ユーザーを表すクラスの実装(コンストラクタ)
User::User(char mark) : Player(mark) {
    // なにもしない
}

// コンピュータを表すクラスの実装(手を選ぶ)
void Computer::select() {
    number = rand() % 9 + 1; // 乱数で選ぶ
    cout << mark << "の手を選んでください = " << number << "\n";
}

// コンピュータを表すクラスの実装(コンストラクタ)
Computer::Computer(char mark) : Player(mark) {
    // なにもしない
}

// 盤面を表すクラスの実装(盤面を表示する)
void Board::show() {
    cout << "\n";
    for (int v = 0; v < 3; v++) {
        cout << "+-+-+-+\n";
        for (int h = 0; h < 3; h++) {
            cout << "|" << cell[v][h];
        }
        cout << "|\n";
    }
    cout << "+-+-+-+\n";
}

// 盤面を表すクラスの実装(枠に記号を書き込む)
bool Board::setCell(Player *player) {
    int number = player->getNumber();
    int v = (number - 1) / 3;
    int h = (number -1) % 3;

    if (cell[v][h] >= '1' && cell[v][h] <= '9') {
        // 書き込めたらtrueを返す
        cell[v][h] = player->getMark();
        return true;
    }
    else {
        // 書き込めないならfalseを返す
        cout << "そこには書き込めません！\n";
        return false;
    }
}

// 盤面を表すクラスの実装(勝敗を判定する)
bool Board::judge(Player *player) {
    // プレイヤーが勝ちならtrueを返す
    char mark = player->getMark();
    if ((cell[0][0] == mark && cell[0][1] == mark && cell[0][2] == mark) ||
        (cell[1][0] == mark && cell[1][1] == mark && cell[1][2] == mark) ||
        (cell[2][0] == mark && cell[2][1] == mark && cell[2][2] == mark) ||
        (cell[0][0] == mark && cell[1][0] == mark && cell[2][0] == mark) ||
        (cell[0][1] == mark && cell[1][1] == mark && cell[2][1] == mark) ||
        (cell[0][2] == mark && cell[1][2] == mark && cell[2][2] == mark) ||
        (cell[0][0] == mark && cell[1][1] == mark && cell[2][2] == mark) ||
        (cell[2][0] == mark && cell[1][1] == mark && cell[0][2] == mark)) {
        cout << "\nゲーム終了:" << mark << "の勝ちです！\n";
        return true;
    }

    // 引き分けならtrueを返す
    bool draw = true;
    for (int v = 0; v < 3 && draw; v++) {
        for (int h = 0; h < 3 && draw; h++) {
            if (cell[v][h] >= '1' && cell[v][h] <= '9') {
                draw = false;
            }
        }
    }
    if (draw) {
        cout << "\nゲーム終了:" << "引き分けです！\n";
        return true;
    }

    // 勝敗が確定していなければfalseを返す
    return false;
}

// 盤面を表すクラスの実装(コンストラクタ)
Board::Board() {
    for (int v = 0; v < 3; v++) {
        for (int h = 0; h < 3; h++) {
            cell[v][h] = (v * 3 + h + 1) + '0';
        }
    }
}

// メイン関数
int main() {
    Player *Player[2]; // 2人のプレイヤー(基本クラスの配列)
    User user('o'); // ユーザー(記号はo)
    Computer computer('x'); // コンピュータ(記号はx)
    Player[0] = &computer; // 先手のプレイヤー(コンピュータ)
    Player[1] = &user; // 後手のプレイヤー(ユーザー)
    Board board; // 盤面
    int turn = 0; // 順番(0と1で交互に切り替える)

    // 乱数を初期化する
    srand(time(NULL));

    // 勝敗が決まるまで繰り返す
    while (true) {
        // 盤面を表示する
        board.show();

        // プレイヤーが手を選ぶ
        do {
            Player[turn]->select();
        } while (board.setCell(Player[turn]) == false);

        // 勝敗を判定する
        if (board.judge(Player[turn])) {
            // 勝敗が確定したらゲームを終了する
            break;
        }

        // プレイヤーを交互に切り替える
        if (turn == 0) {
            turn =1;
        }
        else {
            turn = 0;
        }
    }
    
    // 盤面を表示する
    board.show();

    return 0;
}