//使用条件表达式的版本
auto finalgrade = (grade > 90) ? "high pass"
    					  : (grade < 60) ? "fail"
                              			 : (grade < 75) ? "low pass"
                                             			: "pass";
//使用if语句的版本
if (finalgrade > 90)
    cout << "high pass" << endl;
else if (finalgrade < 60)
    cout << "fail" << endl;
else if (finalgrade < 75)
    cout << "low pass" << endl;
else
    cout << "fail" << endl;