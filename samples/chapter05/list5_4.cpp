#include "MyClass.h"

class NewClass : public MyClass {
public:
  void myFunc();
};

// �����o�֐��̎���
void NewClass::myFunc() {
  // �p�����ꂽ�����o���g��
  pub_data = 123;
  pri_data = 456;
  pro_data = 789;
}
