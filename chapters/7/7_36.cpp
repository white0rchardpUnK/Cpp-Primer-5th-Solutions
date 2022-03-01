//在类X中，成员rem先于base定义，因此在构造函数中先初始化rem而后是base
//但rem使用了base初始化，而此时base是未定义，错误
//可改变成员定义顺序
struct X {
    X (int i, int j):base(i), rem(base % j){}
    int base, rem;
};