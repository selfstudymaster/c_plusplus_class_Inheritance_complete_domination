#include "MyClass.h"

class NewClass : public MyClass {
public:
  void myFunc();
};

// ƒƒ“ƒoŠÖ”‚ÌÀ‘•
void NewClass::myFunc() {
  // Œp³‚³‚ê‚½ƒƒ“ƒo‚ğg‚¤
  pub_data = 123;
  pri_data = 456;
  pro_data = 789;
}
