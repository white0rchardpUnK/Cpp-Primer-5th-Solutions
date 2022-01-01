/*
 * 将含有整型元素的vector对象拷贝给一个整型数组
 * 固定vector对象，考虑三种情况：vector对象元素数量=n，数组大小=N
 * n > N, n = N, n < N
 */
#include <iostream>
#include <vector>

using std::cin; using std::cout; using std::endl; using std::cerr;
using std::begin; using std::end;
using std::vector;

constexpr int size = 7;
vector<int> x = {1, 2, 3, 4, 5, 6};
int a[size];

decltype(x.size()) x_numbers = x.size();
decltype(x_numbers) arr_numbers = size;

int main() {
    if (x_numbers > arr_numbers) {
        cout << "Size not match, arryas can only copy part of vector"
             << endl;
        for (decltype(x_numbers) i = 0, j = 0; i <= arr_numbers; ++i) {
            a[j] = x[i];
            ++j;
        }
    } else if (x_numbers == arr_numbers) {
        int *that = begin(a);
        for (auto it = x.cbegin(); it != x.cend(); ++it) {
            *that = *it;
            ++that;
        }
    } else {
        int *that = begin(a);
        for (auto i : x) {
            *that = i;
            ++that;
        }
    }
}