#include <iostream>
#include "Company.h"
using namespace std;

// �N���X���g�����̃R�[�h
int main() {
  // �I�u�W�F�N�g���쐬����
  Director d(1111, "������Y", 500000, 1000);
  Manager m1(2222, "�ے���Y", 350000, 10000);
  Manager m2(3333, "�ے����Y", 300000, 5000);
  Salesman s1(4444, "�c�ƈ�Y", 230000, 1235);
  Salesman s2(5555, "�c�Ǝ��Y", 250000, 4567);
  Salesman s3(6666, "�c�ƎO�Y", 270000, 6789);

  // �����o�֐����Ăяo��
  d.showData();
  cout << "********************\n";
  m1.showData();
  cout << "********************\n";
  m2.showData();
  cout << "********************\n";
  s1.showData();
  cout << "********************\n";
  s2.showData();
  cout << "********************\n";
  s3.showData();
  cout << "********************\n";

  return 0;
}
