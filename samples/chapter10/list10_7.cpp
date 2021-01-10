#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// �v���C���[��\���N���X�̒�`�i��{�N���X�j
class Player {
protected:
  char mark;			// �g�ɏ������ދL��
  int number;			// �I�񂾎�i1�`9�j
public:
  virtual void select() = 0;	// ���I�ԁi�������z�֐��j
  char getMark();		// �L����Ԃ�
  int getNumber();		// ���Ԃ�
  Player(char mark);		// �R���X�g���N�^
};

// ���[�U�[��\���N���X�̒�`�i�h���N���X�j
class User : public Player {
public:
  void select();		// ���I��
  User(char mark);		// �R���X�g���N�^
};

// �R���s���[�^��\���N���X�̒�`�i�h���N���X�j
class Computer : public Player {
public:
  void select();		// ���I��
  Computer(char mark);		// �R���X�g���N�^
};

// �Ֆʂ�\���N���X�̒�`
class Board {
private:
  char cell[3][3];		// 3�~3�̘g
public:
  void show();			// �Ֆʂ�\������
  bool setCell(Player *player);	// �g�ɋL������������
  bool judge(Player *player);	// ���s�𔻒肷��
  Board();			// �R���X�g���N�^
};

// �v���C���[��\���N���X�̎����i�L����Ԃ��j
char Player::getMark() {
  return mark;
}

// �v���C���[��\���N���X�̎����i���Ԃ��j
int Player::getNumber() {
  return number;
}

// �v���C���[��\���N���X�̎����i�R���X�g���N�^�j
Player::Player(char mark) {
  this->mark = mark;
}

// ���[�U�[��\���N���X�̎����i���I�ԁj
void User::select() {
  int n;

  do {
    cout << mark << "�̎��I��ł������� = ";
    cin >> n;
  } while (n < 1 || n > 9);
  number = n;
}

// ���[�U�[��\���N���X�̎����i�R���X�g���N�^�j
User::User(char mark) : Player(mark) {
}

// �R���s���[�^��\���N���X�̎����i���I�ԁj
void Computer::select() {
  number = rand() % 9 + 1;
  cout << mark << "�̎��I��ł������� = " << number << "\n";
}

// �R���s���[�^��\���N���X�̎����i�R���X�g���N�^�j
Computer::Computer(char mark) : Player(mark) {
}

// �Ֆʂ�\���N���X�̎����i�Ֆʂ�\������j
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

// �Ֆʂ�\���N���X�̎����i�g�ɋL�����������ށj
bool Board::setCell(Player *player) {
  int number = player->getNumber();
  int v = (number - 1) / 3;
  int h = (number - 1) % 3;

  if (cell[v][h] >= '1' && cell[v][h] <= '9') {
    // �������߂���true��Ԃ�
    cell[v][h] = player->getMark();
    return true;
  }
  else {
    // �������߂Ȃ��Ȃ�false��Ԃ�
    cout << "�����ɂ͏������߂܂���I\n";
    return false;
  }
}

// �Ֆʂ�\���N���X�̎����i���s�𔻒肷��j
bool Board::judge(Player *player) {
  // �v���C���[�������Ȃ�true��Ԃ�
  char mark = player->getMark();
  if (cell[0][0] == mark && cell[0][1] == mark && cell[0][2] == mark ||
    cell[1][0] == mark && cell[1][1] == mark && cell[1][2] == mark ||
    cell[2][0] == mark && cell[2][1] == mark && cell[2][2] == mark ||
    cell[0][0] == mark && cell[1][0] == mark && cell[2][0] == mark ||
    cell[0][1] == mark && cell[1][1] == mark && cell[2][1] == mark ||
    cell[0][2] == mark && cell[1][2] == mark && cell[2][2] == mark ||
    cell[0][0] == mark && cell[1][1] == mark && cell[2][2] == mark ||
    cell[2][0] == mark && cell[1][1] == mark && cell[0][2] == mark) {
    cout << "\n�Q�[���I���F" << mark << "�̏����ł��I\n";
    return true;
  }

  // ���������Ȃ�true��Ԃ�
  bool draw = true;
  for (int v = 0; v < 3 && draw; v++) {
    for (int h = 0; h < 3 && draw; h++) {
      if (cell[v][h] >= '1' && cell[v][h] <= '9') {
        draw = false;
      }
    }
  }
  if (draw) {
    cout << "\n�Q�[���I���F" << "���������ł��I\n";
    return true;
  }

  // ���s���m�肵�Ă��Ȃ����false��Ԃ�
  return false;
}

// �Ֆʂ�\���N���X�̎����i�R���X�g���N�^�j
Board::Board() {
  for (int v = 0; v < 3; v++) {
    for (int h = 0; h < 3; h++) {
      cell[v][h] = (v * 3 + h + 1) + '0';
    }
  }
}

// ���C���֐�
int main() {
  Player *player[2];		// 2�l�̃v���C���[�i��{�N���X�̔z��j
  User user('o');		// ���[�U�[�i�L����o�j
  Computer computer('x');	// �R���s���[�^�i�L����x�j
  player[0] = &computer;	// ���̃v���C���[�i�R���s���[�^�j
  player[1] = &user;		// ���̃v���C���[�i���[�U�[�j
  Board board;			// �Ֆ�
  int turn = 0;			// ���ԁi0��1�Ō��݂ɐ؂�ւ���j

  // ����������������
  srand(time(NULL));

  // ���s�����܂�܂ŌJ��Ԃ�
  while (true) {
    // �Ֆʂ�\������
    board.show();

    // �v���C���[�����I��
    do {
      player[turn]->select();
    } while (board.setCell(player[turn]) == false);

    // ���s�𔻒肷��
    if (board.judge(player[turn])) {
      // ���s���m�肵����Q�[�����I������
      break;
    }

    // �v���C���[�����݂ɐ؂�ւ���
    if (turn == 0) {
      turn = 1;
    }
    else {
      turn = 0;
    }
  }

  // �Ֆʂ�\������
  board.show();

  return 0;
}
