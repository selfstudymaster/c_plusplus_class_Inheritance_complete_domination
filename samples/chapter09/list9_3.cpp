#include <iostream>
#include <cstring>
using namespace std;

// �N���X�̒�`
class Employee {
public:
  int number;	// �Ј��ԍ�
  char *name;	// �����i�|�C���^�j
  int salary;	// ���^
  Employee();	// �R���X�g���N�^
  ~Employee();	// �f�X�g���N�^
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

// �f�X�g���N�^�̎���
Employee::~Employee() {
  // name�̂��߂̗̈�𓮓I�ɉ������
  delete [] name;
  cout << "�f�X�g���N�^���Ăяo����܂����I\n";
}

// �֐��̃v���g�^�C�v�錾
void show(Employee *ptr);

// �N���X���g�����̃R�[�h
int main() {
  // �I�u�W�F�N�g���쐬����
  Employee tanaka;

  // �����o�ϐ��ɒl��ݒ肷��
  tanaka.number = 1234;
  strcpy(tanaka.name, "�c����Y");
  tanaka.salary = 200000;

  // �I�u�W�F�N�g�̃|�C���^�������ɓn���Ċ֐����Ăяo��
  cout << "show()���Ăяo���܂��I\n";
  show(&tanaka);
  cout << "show()�𔲂��܂����I\n";

  // name��\������
  cout << "�����F" << tanaka.name << "\n";

  return 0;
}

// �I�u�W�F�N�g�̃|�C���^�������Ƃ���֐�
void show(Employee *ptr) {
  cout << "�Ј��ԍ��F" << ptr->number << "\n";
  cout << "�����F" << ptr->name << "\n";
  cout << "���^�F" << ptr->salary << "\n";
}
