#include <iostream>

using std::cin; using std::cout; using std::endl;

int odd[] = {1, 3, 5, 7, 9};
int even[] = {0, 2, 4, 6, 8};

decltype(odd) &arrPtr(int i){
    return (i % 2) ? odd : even;
}

int main(int argc, char *argv[]){
    int (&oddq)[5] = arrPtr(1);
    int (&evenq)[5] = arrPtr(2);

    cout << oddq << endl;
    cout << evenq << endl;
    cout << oddq[1] << endl;
    cout << evenq[1] << endl;
}