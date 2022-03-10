C++模板简介
模板（Templates）是c++的一种特性，允许函数或类对象通过泛型（generic types）的形式表现或运用。
模板可以使得函数或类在对应不同型别（types）的时候可以正常工作，而无需为每一个型别都写一份代码。
模板有两种类型：类模板与函数模板 模板的声明其实并未给出一个函数或类的定义，只提供了一个语法框架（syntactical skeleton）
模板实例化： 显式实例化与隐式实例化  template <typename> struct Object{};

函数模板是参数化的一族函数（a family of function）
template <typename T>
inline T max(const T& a,const T& b)
{
    return (a>b)?a:b;
}
请尽量使用typename

模板被编译了两次
1）没有实例化之前，检查模板代码本身是否有语法错误
2）实例化期间，检查对模板代码的调用是否合法

模板的参数在实例化的时候一定要严格对应
否则需要显示指定T的类别

允许空的参数列表
Max<>(7,42);调用Max<int>()

函数模板可以重载


类模板：类模板实参可以是某一类型或常量（仅限int或者enum）
模板的偏特化











