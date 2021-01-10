#include <iostream>
#include <string>
using namespace std;

int main() {
  // •¶Žš—ñ‚ðì¬‚·‚é
  std::string s1("Apple");
  std::string s2("Orange");
  std::string s3;

  // •¶Žš—ñ‚ð‘ã“ü‚·‚é
  s3 = s2;

  // •¶Žš—ñ‚ð”äŠr‚·‚é
  if (s3 > s1) {
    cout << s3 << "‚Í" << s1 << "‚æ‚è‘å‚«‚¢I\n";
  }

  return 0;
}
