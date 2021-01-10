#include <iostream>
#include <cstring>
#include "Company.h"
using namespace std;

// Employee�N���X�̃����o�֐��̎���
void Employee::showData() {
  cout << "�Ј��ԍ��F" << number << "\n";
  cout << "�����F" << name << "\n";
  cout << "���^�F" << salary << "\n";
}

// Employee�N���X�̈����̂Ȃ��R���X�g���N�^�̎���
Employee::Employee() {
  number = 0;
  strcpy(name, "���ݒ�");
  salary = 150000;
}

// Employee�N���X�̈��������R���X�g���N�^�̎���
Employee::Employee(int nu, const char *na, int sa) {
  number = nu;
  strcpy(name, na);
  salary = sa;
}

// Director�N���X�̃����o�֐��̎���
void Director::showData() {
  Employee::showData();
  cout << "�����ۗL���F" << stock << "\n";
}

// Director�N���X�̈����̂Ȃ��R���X�g���N�^�̎���
Director::Director() {
  stock = 100;
}

// Director�N���X�̈��������R���X�g���N�^�̎���
Director::Director(int nu, const char *na, int sa, int st) : Employee(nu, na, sa) {
  stock = st;
}

// Manager�N���X�̃����o�֐��̎���
void Manager::showData() {
  Employee::showData();
  cout << "�o����F" << travelAllowance << "\n";
}

// Manager�N���X�̈����̂Ȃ��R���X�g���N�^�̎���
Manager::Manager() {
  travelAllowance = 10000;
}

// Manager�N���X�̈��������R���X�g���N�^�̎���
Manager::Manager(int nu, const char *na, int sa, int tr) : Employee(nu, na, sa) {
  travelAllowance = tr;
}

// Salesman�N���X�̃����o�֐��̎���
void Salesman::showData() {
  Employee::showData();
  cout << "����F" << sales << "\n";
}

// Salesman�N���X�̈����̂Ȃ��R���X�g���N�^�̎���
Salesman::Salesman() {
  sales = 0;
}

// Salesman�N���X�̈��������R���X�g���N�^�̎���
Salesman::Salesman(int nu, const char *na, int sa, int ss) : Employee(nu, na, sa) {
  sales = ss;
}
