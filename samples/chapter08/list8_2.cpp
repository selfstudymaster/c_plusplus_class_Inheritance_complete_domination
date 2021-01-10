#include <iostream>
#include <cstring>
using namespace std;

// CellPhone�N���X�̒�`
class CellPhone {
public:
  char number[20];	// �d�b�ԍ�
  bool smart;		// �X�}�z���ǂ���
};

// Employee�N���X�̒�`
class Employee {
public:
  int number;		// �Ј��ԍ�
  char name[80];	// ����
  int salary;		// ���^
  CellPhone phone;	// �g�ѓd�b�i�����o�I�u�W�F�N�g�j
  void showData();	// �����o�ϐ��̒l��\������
};

// Employee�N���X�̃����o�֐��̎���
void Employee::showData() {
  cout << "�Ј��ԍ��F" << number << "\n";
  cout << "�����F" << name << "\n";
  cout << "���^�F" << salary << "\n";
  cout << "�g�ѓd�b�ԍ��F" << phone.number << "\n";
  cout << "�X�}�z���ǂ����F" << phone.smart << "\n";
}

// �O���[�o���I�u�W�F�N�g
Employee tanaka;

// �N���X���g�����̃R�[�h
int main() {
  // �O���[�o���I�u�W�F�N�g���g��
  tanaka.number = 1234;
  strcpy(tanaka.name, "�c����Y");
  tanaka.salary = 200000;
  strcpy(tanaka.phone.number, "111-1111-1111");
  tanaka.phone.smart = true;
  tanaka.showData();

  // ���[�J���I�u�W�F�N�g���g��
  Employee sato;
  sato.number = 1235;
  strcpy(sato.name, "�������Y");
  sato.salary = 250000;
  strcpy(sato.phone.number, "222-2222-2222");
  sato.phone.smart = true;
  sato.showData();

  // ���I�I�u�W�F�N�g���g��
  Employee *suzuki = new Employee;
  suzuki->number = 1236;
  strcpy(suzuki->name, "��؎O�Y");
  suzuki->salary = 300000;
  strcpy(suzuki->phone.number, "333-3333-3333");
  suzuki->phone.smart = false;
  suzuki->showData();
  delete suzuki;

  return 0;
}
