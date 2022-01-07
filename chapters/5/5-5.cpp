#include <iostream>
#include <vector>
#include <string>

using std::cin; using std::cout;
using std::endl;
using std::vector;
using std::string;

int main(){
    const vector<string> alpha = {"F", "E", "D", "C", "B", "A"};
    //90~100=A,80~89=B,70~79=C,60~69=D,50~59=E,<=49=F
    int grade = 0;
    string alphagrade;

    cout << "Please type a grade: ";

    while (cin >> grade){
        if (grade == 100){
            alphagrade += alpha[5];
        } else if (grade < 40){
            alphagrade += alpha[0];
        } else{
            alphagrade += alpha[(grade - 40) / 10];
        }
    }

    cout << "The grade is point to " << alphagrade << endl;

    return 0;
}