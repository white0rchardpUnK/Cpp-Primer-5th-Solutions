#include <iostream>
#include <string>
#include <cctype>

using std::cin; using std::cout; using std::endl;
using std::string;

int main(){
    bool repeat_flag = false;
    string word, stepword;

    cout << "Please type the text: " << endl;

    while (cin >> word){
        for (auto i : word){
            if (isupper(i)){
                if (word == stepword){
                    repeat_flag = true;
                    cout << stepword << endl;
                    break;
                } else {
                    stepword = word;
                }
            } else {
                continue;
            }
        }
    }

    if (!repeat_flag){
        cout << "There is no repeat" << endl;
    }

    return 0;
}