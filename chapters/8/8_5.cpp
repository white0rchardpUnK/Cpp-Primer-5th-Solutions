#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using std::cin; using std::cout;
using std::endl; using std::cerr;
using std::string;
using std::vector;

using VS = vector<string>;

VS read(const string & fn){
    std::ifstream input(fn);
    VS vstmp;
    string stmp;
    if (input){
        while(input >> stmp)
            vstmp.push_back(stmp);
    } else {
        cerr << "couldn't open: " + fn;
    }
    return vstmp;
}

int main(){}