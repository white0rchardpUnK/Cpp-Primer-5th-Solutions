#ifndef CPPLV1_ACCOUNT_H
#define CPPLV1_ACCOUNT_H
#include <iostream>
#include <string>

class Account{
public:
    Account():Account("HanMeiMei", 10000){}
    explicit Account(const std::string &o):owner(o){}
    Account(const std::string &o, double a):owner(o), amount(a){}
    void calculate() { amount += amount * interestRate; }
    static double rate() { return interestRate; }
    static void rate(double);
private:
    std::string owner;
    double amount;
    static double interestRate;
    static double initRate();
};

double

void Account::rate(double newRate) {
    interestRate = newRate;
}

double Account::initRate() {
    return 0.24;
}
#endif //CPPLV1_ACCOUNT_H
