#include <iostream>
using std::cin; using std::cout; using std::endl; using std::cerr;
using std::istream;
#include <fstream>
using std::ifstream;
#include <string>
using std::string;

bool isNaNd(const string &s){
    string aNd{"bdfghijklpqty"};
    return s.find_first_not_of(aNd);
}

void findL(istream &is){
    string curr, prev;
    while (is >> curr){
        if (isNaNd(curr) && (curr.size() > prev.size()))
            prev = curr;
    }
    if (prev.empty()){
        cout << "No match word in file" << endl;
    } else {
        cout << "The longest word is " << prev << endl;
    }
}

int main() {
    cout << "Please type the file name: ";
    string filename;
    cin >> filename;

    ifstream input(filename);
    if (input.is_open()){
        findL(input);
    } else {
        cerr << "Open file faild" << endl;
    }

    return EXIT_SUCCESS;
}
