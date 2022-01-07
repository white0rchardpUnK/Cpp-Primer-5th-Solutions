#include <iostream>

using std::cin; using std::cout; using std::endl;

int main(){
    unsigned aCount = 0, eCount = 0, iCount = 0,
             oCount = 0, uCount = 0;
    cout << "Please type the text: ";

    char word;

    while (cin >> word){
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
        }
    }

    cout << "Number of vowel a: and A: \t" << aCount << '\n'
            << "Number of vowel e: and E: \t" << eCount << '\n'
            << "Number of vowel i: and I: \t" << iCount << '\n'
            << "Number of vowel o: and O: \t" << oCount << '\n'
            << "Number of vowel u: and U: \t" << uCount << endl;

    return 0;
}