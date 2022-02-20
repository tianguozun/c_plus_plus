#include <iostream>
#include "src/swap2num.hpp"

using namespace std;

int main() {
    // 引用必须在定义的同时初始化
    // 引用在定义时需要添加&，在使用时不能添加&，使用时添加&表示取地址
    // 引用可以看做是数据的一个别名，通过这个别名和原来的名字都能够找到这份数据
    int a = 99;
    int &r = a;

    cout << a << ", " << r << endl;
    cout << &a << ", " << &r << endl;

    // 通过引用可以修改原始变量中所存储的数据
    r = 47;
    cout << a << ", " << r << endl;

    cout << "---------------------------------" << endl;

    return 0;
}
