#include <iostream>
#include "Company.h"
using namespace std;

// �N���X���g�����̃R�[�h
int main() {
  // ��{�N���X�̃|�C���^�̔z����쐬����
  Employee *p[6];

  // �h���N���X�̃I�u�W�F�N�g���쐬���A��{�N���X�̃|�C���^�ɑ������
  Director y(1111, "������Y", 500000, 1000);
  p[0] = &y;
  Manager b1(2222, "�ے���Y", 350000, 10000);
  p[1] = &b1;
  Manager b2(3333, "�ے����Y", 300000, 5000);
  p[2] = &b2;
  Salesman e1(4444, "�c�ƈ�Y", 230000, 1235);
  p[3] = &e1;
  Salesman e2(5555, "�c�Ǝ��Y", 250000, 4567);
  p[4] = &e2;
  Salesman e3(6666, "�c�ƎO�Y", 270000, 6789);
  p[5] = &e3;

  // �����o�֐����Ăяo��
  for (int i = 0; i < 6; i++) {
    p[i]->showData();
    cout << "********************\n";
  }

  return 0;
}
