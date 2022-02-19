#ifndef CPPLV1_PERSON_H
#define CPPLV1_PERSON_H

#include <iostream>
#include <string>

struct Person {
    friend std::istream &read(std::istream &, Person &);
    friend std::ostream &print(std::ostream &, const Person &);
public:
    //构造函数和部分成员函数应该为public
    Person() = default;
    Person(const std::string &n):name(n){};
    Person(const std::string &n, const std::string &a):
            name(n), addrress(a){};
    Person(std::istream &);
    std::string getname() const { return name;};
    std::string getaddr() const { return addrress;};
private:
    //数据成员和作为实现部分的函数应为private
    std::string name;
    std::string addrress;
};

std::istream &read(std::istream &is, Person &p){
    is >> p.name >> p.addrress;
    return is;
}

std::ostream &print(std::ostream &os, const Person &p){
    os << p.getname() << " " << p.getaddr();
    return os;
}

Person::Person(std::istream &is) {
    read(is, *this);
}
#endif //CPPLV1_PERSON_H
