#include <iostream>
#include <string>

using std::cin; using std::cout; using std::endl;
using std::string;

int main(){
    //ct记录出现两两相邻相等的次数，cct记录总次数
    unsigned ct = 0, cct = 0;
    //word负责读入每一个string，stepword负责记录上一个读入
    //ctword记录当前出现次数多的word
    string word, stepword, ctword;

    cout << "Please type the text: " << endl;

    while (cin >> word){
        if (word == stepword) {
            ++ct;
        } else if (ct > 0 && ct > cct){
            cct = ct;
            ctword = stepword;
            ct = 0;
        } else {
            ct = 0;
        }
        stepword = word;
    }

    if (cct == 0){
        cout << "There is no word repeatlly appearence." << endl;
    } else {
        cout << "The word " << ctword << " repeat "
             //ct忽略了第一次出现的word次数，补上1
             << (cct > ct ? (cct + 1) : (ct + 1)) << " times" << endl;
    }
}