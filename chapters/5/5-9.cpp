#include <iostream>

using std::cin; using std::cout; using std::endl;

int main(){
    unsigned aCount = 0, eCount = 0, iCount = 0,
             oCount = 0, uCount = 0;
    cout << "Please type the text: ";

    char word;

    while (cin >> word){
        if (word == 'a'){
            ++aCount;
        } else if (word == 'e'){
            ++eCount;
        } else if (word == 'i'){
            ++iCount;
        } else if (word == 'o'){
            ++oCount;
        } else if (word == 'u'){
            ++uCount;
        }
    }

    cout << "Number of vowel a: \t" << aCount << '\n'
            << "Number of vowel e: \t" << eCount << '\n'
            << "Number of vowel i: \t" << iCount << '\n'
            << "Number of vowel o: \t" << oCount << '\n'
            << "Number of vowel u: \t" << uCount << endl;

    return 0;
}