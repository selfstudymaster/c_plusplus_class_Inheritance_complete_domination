#include <iostream>
#include <cstring>
using namespace std;

// �N���X�̒�`
class Employee {
public:
  int number;		// �Ј��ԍ�
  char name[80];	// ����
  int salary;		// ���^
  void showData();	// �����o�ϐ��̒l��\������
};

// �����o�֐��̎���
void Employee::showData() {
  cout << "�Ј��ԍ��F" << number << "\n";
  cout << "�����F" << name << "\n";
  cout << "���^�F" << salary << "\n";
}

// �N���X���g�����̃R�[�h
int main() {
  // �I�u�W�F�N�g���쐬����
  Employee tanaka, someone;

  // �����o�ϐ��ɒl��ݒ肷��
  tanaka.number = 1234;
  strcpy(tanaka.name, "�c����Y");
  tanaka.salary = 200000;

  // �I�u�W�F�N�g��������
  someone = tanaka;

  // �����o�ϐ��̒l��ύX����
  tanaka.salary = 250000;

  // �����o�ϐ��̒l��\������
  tanaka.showData();
  someone.showData();

  return 0;
}
