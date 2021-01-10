#include <iostream>
using namespace std;

// �}�`��\����{�N���X�i���ۃN���X�j�̒�`
class Figure {
public:
  virtual void draw() = 0; // �������z�֐�
};

// �~��\���h���N���X�̒�`
class Circle : public Figure {
public:
  void draw();		// �������z�֐��̃I�[�o�[���C�h
};

// Circle�N���X��draw()�̎���
void Circle::draw() {
  cout << "��";
}

// �O�p��\���h���N���X�̒�`
class Triangle : public Figure {
public:
  void draw();		// �������z�֐��̃I�[�o�[���C�h
};

// Triangle�N���X��draw()�̎���
void Triangle::draw() {
  cout << "��";
}

// �l�p��\���h���N���X�̒�`
class Rectangle : public Figure {
public:
  void draw();		// �������z�֐��̃I�[�o�[���C�h
};

// Rectangle�N���X��draw()�̎���
void Rectangle::draw() {
  cout << "��";
}

// �N���X���g�����̃R�[�h
int main() {
  // ��{�N���X�i���ۃN���X�j�̃|�C���^�̔z����쐬����
  Figure *p[100];

  // �h���N���X�̃I�u�W�F�N�g���쐬���A��{�N���X�̃|�C���^�ɑ������
  Circle c1;
  p[0] = &c1;
  Triangle t1, t2;
  p[1] = &t1;
  p[2] = &t2;
  Rectangle r1, r2, r3;
  p[3] = &r1;
  p[4] = &r2;
  p[5] = &r3;
  p[6] = NULL;

  // �}�`��`�悷��
  int i;
  for (i = 0; p[i] != NULL; i++) {
    p[i]->draw();
  }
  cout << "\n";

  // �擪����3�Ԗڂ̐}�`���폜����
  for (i = 2; i < 5; i++) {
    p[i] = p[i + 1];
  }
  p[i] = NULL;

  // �}�`���ĕ`�悷��
  for (i = 0; p[i] != NULL; i++) {
    p[i]->draw();
  }
  cout << "\n";

  return 0;
}
