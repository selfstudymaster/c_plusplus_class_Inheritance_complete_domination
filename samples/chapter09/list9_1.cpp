#include <iostream>
#include <cstring>
using namespace std;

// �N���X�̒�`
class Employee {
public:
  int number;		// �Ј��ԍ�
  char name[80];	// ����
  int salary;		// ���^
  Employee();		// �R���X�g���N�^
  ~Employee();		// �f�X�g���N�^
};

// �R���X�g���N�^�̎���
Employee::Employee() {
  // �����o�ϐ����f�t�H���g�l�ŏ���������
  number = 0;
  strcpy(name, "���ݒ�");
  salary = 150000;
  cout << "�R���X�g���N�^���Ăяo����܂����I\n";
}

// �f�X�g���N�^�̎���
Employee::~Employee() {
  cout << "�f�X�g���N�^���Ăяo����܂����I\n";
}

// �֐��̃v���g�^�C�v�錾
void show(Employee obj);

// �N���X���g�����̃R�[�h
int main() {
  // �I�u�W�F�N�g���쐬����
  Employee tanaka;

  // �����o�ϐ��ɒl��ݒ肷��
  tanaka.number = 1234;
  strcpy(tanaka.name, "�c����Y");
  tanaka.salary = 200000;

  // �I�u�W�F�N�g�������ɓn���Ċ֐����Ăяo��
  cout << "show()���Ăяo���܂��I\n";
  show(tanaka);
  cout << "show()�𔲂��܂����I\n";

  return 0;
}

// �I�u�W�F�N�g�������Ƃ���֐�
void show(Employee obj) {
  cout << "�Ј��ԍ��F" << obj.number << "\n";
  cout << "�����F" << obj.name << "\n";
  cout << "���^�F" << obj.salary << "\n";
}
