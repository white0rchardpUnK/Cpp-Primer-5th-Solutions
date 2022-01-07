#include <iostream>
#include <string>

using std::cin; using std::cout; using std::endl;
using std::string;

int main(){
    bool repeat_flag = false;
    string word, stepword;

    cout << "Please type the text: " << endl;

    while (cin >> word){
        if (word == stepword){
            repeat_flag = true;
            cout << stepword << endl;
            break;
        } else {
            stepword = word;
        }
    }

    if (!repeat_flag){
        cout << "There is no repeat" << endl;
    }

    return 0;
}