#include <iostream>
#include <string>

using std::cin; using std::cout; using std::endl;
using std::string;

int main(){
    unsigned aCount = 0, eCount = 0, iCount = 0,
             oCount = 0, uCount = 0, blankCount = 0,
             zbfCount = 0, hhfCount = 0;

    cout << "Please type the text: ";

    char word;

    while (cin.get(word)){
        switch (word){
                case 'a': case 'A':
                    ++aCount;
                break;
                case 'e': case 'E':
                    ++eCount;
                break;
                case 'i': case 'I':
                    ++iCount;
                break;
                case 'o': case 'O':
                    ++oCount;
                break;
                case 'u': case 'U':
                    ++uCount;
                break;
                case ' ':
                    ++blankCount;
                break;
                case '\t':
                    ++zbfCount;
                break;
                case '\n':
                    ++hhfCount;
                break;
        }
    }

    cout << "Number of vowel a: and A: \t" << aCount << '\n'
            << "Number of vowel e: and E: \t" << eCount << '\n'
            << "Number of vowel i: and I: \t" << iCount << '\n'
            << "Number of vowel o: and O: \t" << oCount << '\n'
            << "Number of vowel u: and U: \t" << uCount << '\n'
            << "Number of blank: \t" << blankCount << '\n'
            << "Number of 制表符: \t" << zbfCount << '\n'
            << "Number of 换行符: \t" << hhfCount << endl;

    return 0;
}