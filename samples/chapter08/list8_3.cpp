#include <iostream>
#include <cstring>
using namespace std;

// CellPhone�N���X�̒�`
class CellPhone {
public:
  char number[20];	// �d�b�ԍ�
  bool smart;		// �X�}�z���ǂ���
  CellPhone();		// �R���X�g���N�^
  ~CellPhone();		// �f�X�g���N�^
};

// CellPhone�N���X�̃R���X�g���N�^�̎���
CellPhone::CellPhone() {
  cout << "CellPhone�N���X�̃R���X�g���N�^���Ăяo����܂����I\n";
}

// CellPhone�N���X�̃f�X�g���N�^�̎���
CellPhone::~CellPhone() {
  cout << "CellPhone�N���X�̃f�X�g���N�^���Ăяo����܂����I\n";
}

// Employee�N���X�̒�`
class Employee {
public:
  int number;		// �Ј��ԍ�
  char name[80];	// ����
  int salary;		// ���^
  CellPhone phone;	// �g�ѓd�b�i�����o�I�u�W�F�N�g�j
  void showData();	// �����o�ϐ��̒l��\������
  Employee();		// �R���X�g���N�^
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

// Employee�N���X�̃R���X�g���N�^�̎���
Employee::Employee() {
  cout << "Employee�N���X�̃R���X�g���N�^���Ăяo����܂����I\n";
}

// Employee�N���X�̃f�X�g���N�^�̎���
Employee::~Employee() {
  cout << "Employee�N���X�̃f�X�g���N�^���Ăяo����܂����I\n";
}

// �N���X���g�����̃R�[�h
int main() {
  // �I�u�W�F�N�g���쐬����
  Employee tanaka;

  // �����o���g��
  tanaka.number = 1234;
  strcpy(tanaka.name, "�c����Y");
  tanaka.salary = 200000;
  strcpy(tanaka.phone.number, "111-1111-1111");
  tanaka.phone.smart = true;
  tanaka.showData();

  // �����ŃI�u�W�F�N�g���j�������
  return 0;
}
