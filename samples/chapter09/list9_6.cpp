#include <iostream>
#include <cstring>
using namespace std;

// �N���X�̒�`
class Employee {
public:
  int number;			// �Ј��ԍ�
  char *name;			// �����i�|�C���^�j
  int salary;			// ���^
  void showData();		// �����o�ϐ��̒l��\������
  Employee();			// �R���X�g���N�^
  Employee(const Employee &obj); // �R�s�[�R���X�g���N�^
  ~Employee();			// �f�X�g���N�^
};

// �R���X�g���N�^�̎���
Employee::Employee() {
  // name�̂��߂̗̈�𓮓I�Ɋm�ۂ���
  name = new char [80];

  // �����o�ϐ����f�t�H���g�l�ŏ���������
  number = 0;
  strcpy(name, "���ݒ�");
  salary = 150000;
  cout << "�R���X�g���N�^���Ăяo����܂����I\n";
}

// �R�s�[�R���X�g���N�^�̎���
Employee::Employee(const Employee &obj) {
  // name�̂��߂̗̈�𓮓I�Ɋm�ۂ���
  name = new char [80];

  // �f�[�^���R�s�[����
  number = obj.number;
  strcpy(name, obj.name);
  salary = obj.salary;
  cout << "�R�s�[�R���X�g���N�^���Ăяo����܂����I\n";
}

// �f�X�g���N�^�̎���
Employee::~Employee() {
  // name�̂��߂̗̈�𓮓I�ɉ������
  delete [] name;
  cout << "�f�X�g���N�^���Ăяo����܂����I\n";
}

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
  someone.number = 1111;
  strcpy(someone.name, "�Z�p���Y");
  someone.salary = 150000;

  // �����o�ϐ��̒l��\������
  tanaka.showData();
  someone.showData();

  return 0;
}
