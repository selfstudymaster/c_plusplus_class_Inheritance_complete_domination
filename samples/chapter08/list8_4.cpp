#include <iostream>
#include <cstring>
using namespace std;

// CellPhone�N���X�̒�`
class CellPhone {
public:
  char number[20];	// �d�b�ԍ�
  bool smart;		// �X�}�z���ǂ���
  CellPhone();		// �����̂Ȃ��R���X�g���N�^
  CellPhone(const char *b, bool i); // ���������R���X�g���N�^
  ~CellPhone();		// �f�X�g���N�^
};

// CellPhone�N���X�̈����̂Ȃ��R���X�g���N�^�̎���
CellPhone::CellPhone() {
  strcpy(number, "���ݒ�");
  smart = false;
}

// CellPhone�N���X�̈��������R���X�g���N�^�̎���
CellPhone::CellPhone(const char *cn, bool cs) {
  strcpy(number, cn);
  smart = cs;
}

// CellPhone�N���X�̃f�X�g���N�^�̎���
CellPhone::~CellPhone() {
  // �������Ȃ�
}

// Employee�N���X�̒�`
class Employee {
public:
  int number;		// �Ј��ԍ�
  char name[80];	// ����
  int salary;		// ���^
  CellPhone phone;	// �g�ѓd�b�i�����o�I�u�W�F�N�g�j
  void showData();	// �����o�ϐ��̒l��\������
  Employee();		// �����̂Ȃ��R���X�g���N�^
  Employee(int nu, const char *na, int sa, const char *cn, bool cs); // ���������R���X�g���N�^
  ~Employee();		// �f�X�g���N�^
};

// Employee�N���X�̃����o�֐��̎���
void Employee::showData() {
  cout << "�Ј��ԍ��F" << number << "\n";
  cout << "�����F" << name << "\n";
  cout << "���^�F" << salary << "\n";
  cout << "�g�ѓd�b�ԍ��F" << phone.number << "\n";
  cout << "�X�}�z���ǂ����F" << phone.smart << "\n";
}

// Employee�N���X�̈����̂Ȃ��R���X�g���N�^�̎���
Employee::Employee() {
  number = 0;
  strcpy(name, "���ݒ�");
  salary = 150000;
}

// Employee�N���X�̈��������R���X�g���N�^�̎���
Employee::Employee(int nu, const char *na, int sa, const char *cn, bool cs) : phone(cn, cs) {
  number = nu;
  strcpy(name, na);
  salary = sa;
}

// Employee�N���X�̃f�X�g���N�^�̎���
Employee::~Employee() {
  // �������Ȃ�
}

// �N���X���g�����̃R�[�h
int main() {
  // �����̂Ȃ��R���X�g���N�^���Ăяo��
  Employee someone;

  // �����o�ϐ��̒l��\������
  someone.showData();

  // ���������R���X�g���N�^���Ăяo��
  Employee tanaka(1234, "�c����Y", 200000, "111-1111-1111", true);

  // �����o�ϐ��̒l��\������
  tanaka.showData();

  return 0;
}
