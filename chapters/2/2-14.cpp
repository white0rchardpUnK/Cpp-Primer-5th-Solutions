int main()
{
    int i = 100, sum = 0;
    for (int i = 0; i != 10 ; ++i) {	//i=0在局部作用域覆盖i=100
        sum += i;	//sum依然使用全局作用域的值
    }
    std::cout << i << " " << sum << std::endl;	//for循环结束，局部作用域失效，i取全局作用域下的值
}
//程序合法，输出 100 45