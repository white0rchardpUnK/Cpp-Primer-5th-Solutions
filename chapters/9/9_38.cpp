#include <iostream>
using std::cin; using std::cout; using std::endl;
#include <vector>
using std::vector;

int main() {
    vector<int> v;
    cout << "v.size(): " << v.size() << endl;
    cout << "v.capacity(): " << v.capacity() << endl;

    for (decltype(v.size()) i = 0; i != 10; ++i)
        v.push_back(i);
    cout << "v.size(): " << v.size() << endl;
    cout << "v.capacity(): " << v.capacity() << endl;

    while (v.size() != v.capacity())
        v.push_back(1);
    cout << "v.size(): " << v.size() << endl;
    cout << "v.capacity(): " << v.capacity() << endl;
    
    //策略是每次需要分配新内存空间时将当前容量翻倍
    v.push_back(1);
    cout << "v.size(): " << v.size() << endl;
    cout << "v.capacity(): " << v.capacity() << endl;

    //标准库响应了请求，退还了内存
    v.shrink_to_fit();
    cout << "v.size(): " << v.size() << endl;
    cout << "v.capacity(): " << v.capacity() << endl;

    v.reserve(50);
    cout << "v.size(): " << v.size() << endl;
    cout << "v.capacity(): " << v.capacity() << endl;

    v.resize(1);
    cout << "v.size(): " << v.size() << endl;
    cout << "v.capacity(): " << v.capacity() << endl;
}
