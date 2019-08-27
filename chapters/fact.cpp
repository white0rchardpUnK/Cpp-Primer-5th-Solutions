int fact(int number) {
    int a = 1;
    while (number > 1) {
        a *= number--;
    }
    if (number == 0) {
        a = 1;
    }
    return a;
}