#ifndef CPPLV1_PERSON_H
#define CPPLV1_PERSON_H

#include <iostream>
#include <string>

struct Person {
    std::string name;
    std::string addrress;

    std::string getname() const { return name;};
    std::string getaddr() const { return addrress;};
};


#endif //CPPLV1_PERSON_H

//这些函数应是常量成员函数，因为其不需要改变调用它的对象的内容