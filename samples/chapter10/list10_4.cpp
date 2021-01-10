#include <iostream>
using namespace std;

// �N���X�̒�`
class Point {
public:
  int x;	// x���W
  int y;	// y���W

  // Point+Point�i�����o�֐��j
  Point operator+(Point obj);

  // Point+int�i�����o�֐��j
  Point operator+(int a);

  // int+Point�i�t�����h�֐��j
  friend Point operator+(int a, Point obj);
};

// Point+Point�i�����o�֐��j�̎���
Point Point::operator+(Point obj) {
  // ���Z���ʂƂȂ�I�u�W�F�N�g���쐬����
  Point ans;

  // �����o�ǂ��������Z����
  ans.x = this->x + obj.x;
  ans.y = this->y + obj.y;

  // ���Z���ʂ�Ԃ�
  return ans;
}

// Point+int�i�����o�֐��j�̎���
Point Point::operator+(int a) {
  // ���Z���ʂƂȂ�I�u�W�F�N�g���쐬����
  Point ans;

  // x��y�ɉ��Z����
  ans.x = this->x + a;
  ans.y = this->y + a;

  // ���Z���ʂ�Ԃ�
  return ans;
}

// int+Point�i�t�����h�֐��j�̎���
Point operator+(int a, Point obj2) {
  // ���Z���ʂƂȂ�I�u�W�F�N�g���쐬����
  Point ans;

  // x��y�ɉ��Z����
  ans.x = a + obj2.x;
  ans.y = a + obj2.y;

  // ���Z���ʂ�Ԃ�
  return ans;
}

// �N���X���g�����̃R�[�h
int main() {
  // �I�u�W�F�N�g���쐬����
  Point a, b, c;

  // �����o�ϐ���ݒ肷��
  a.x = 1;
  a.y = 2;
  b.x = 3;
  b.y = 4;

  // Point��Point�����Z����
  c = a + b;

  // ���Z���ʂ�\������
  cout << "Point+Point\n";
  cout << "x���W�F" << c.x << "\n";
  cout << "y���W�F" << c.y << "\n";

  // Point��int�����Z����
  c = a + 10;

  // ���Z���ʂ�\������
  cout << "Point+int\n";
  cout << "x���W�F" << c.x << "\n";
  cout << "y���W�F" << c.y << "\n";

  // int��Point�����Z����
  c = 20 + a;

  // ���Z���ʂ�\������
  cout << "int+Point\n";
  cout << "x���W�F" << c.x << "\n";
  cout << "y���W�F" << c.y << "\n";

  return 0;
}
