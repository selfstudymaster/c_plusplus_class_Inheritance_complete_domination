// 静的メンバ変数はクラス内とは別に、グローバル関数としても定義する必要がある
#include "practice_Employee.h"

// 静的メンバ変数の実体となるグローバル変数
const char *Employee::companyName = "技術評論社";