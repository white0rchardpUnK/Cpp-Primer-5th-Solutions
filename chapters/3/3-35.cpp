/*
 * 利用指针将数组中的元素重置为0
 */
#include <iostream>

using std::cin; using std::cout; using std::endl;
using std::begin; using std::end;

constexpr int size = 10;

int a[size] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
decltype(a) b = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};

int main()
{
   for (auto x: a)
       cout << x << "\t";
   cout << endl;

    for (auto x: b)
        cout << x << "\t";
    cout << endl;

    //使用标准库函数begin和end返回的指针改变数组值
    int *start = begin(a), *last = end(a);
    while (start != last){
        *start = 0;
        ++start;
    }

    //使用标准指针
    int *i = b, *j = b + size;        //i为首指针，j为尾后指针
    while (i != j){
        *i = 0;
        ++i;
    }

    //输出结果
    for (int *start_ptr = begin(a), *last_ptr = (end(a) -1);
            last_ptr >= start_ptr; --last_ptr){
        cout << *last_ptr << "\t";
    }
    cout << endl;

    for (int *k = b, *l = b + size; k < l; ++k){
        cout << *k << "\t";
    }
    cout << endl;
}