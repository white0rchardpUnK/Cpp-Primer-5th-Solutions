#ifndef CPPLV1_EMPLOYEE_H
#define CPPLV1_EMPLOYEE_H
#include <iostream>
#include <string>

class Employee{
    friend std::istream &read(std::istream &, Employee &);
public:
    Employee():Employee("Li Lei", "Male", 24, "Tech", "2008-1-1", 10000){}
    Employee(std::istream &is){read(is, *this);}
    Employee(const std::string &ns, const std::string &ss,
             unsigned an, const std::string &ts, const std::string &is,
             double sn): name(ns), sex(ss), age(an), title(ts), inDate(is),
             salmon(sn), salyear(sal_year()){std::cout << "DF" << std::endl;};
private:
    std::string name;
    std::string sex;
    unsigned age;
    std::string title;
    std::string inDate;
    double salmon;
    double sal_year() const;
    double salyear;

};

std::istream &read(std::istream &is, Employee &per){
    is >> per.name >> per.sex >> per.age >> per.title
        >> per.inDate >> per.salmon;
    return is;
}
inline
double Employee::sal_year() const {
    if (salmon)
        return salmon * 12;
}
#endif //CPPLV1_EMPLOYEE_H
