/*
泛型编程（generic programming）
概述（Overview）:是一种编程方法，这种方法将类别(type)以to-be-specified-later的方式给出，
    等到需要调用的时候，再以参数方式，通过具体的、特定的型别实例化（instantiate）一个具体的方法或者对象
*/

/* T():usually creates a zero value */

/* 其是一种编程思想，并不依赖于具体的语言*/

/*
    关联特性（Traits）：
    Traits可以实现为模板类，而关联（association）则是针对某个型别T的特化。
    Traits实现
*/
template <typename T>
class SigmaTraits
{
public:
    typedef T ReturnType;
};
template <>
class SigmaTraits<char>
{
public:
    typedef int ReturnType;
};
template <>
class SigmaTraits<short>
{
public:
    typedef int ReturnType;
};
template <>
class SigmaTraits<int>
{
public:
    typedef long ReturnType;
};
template <>
class SigmaTraits<unsigned int>
{
public:
    typedef unsigned long ReturnType;
};
template <>
class SigmaTraits<float>
{
public:
    typedef double ReturnType;
};

template <typename T>
inline typename SigmaTraits<T>::ReturnType Sigma(const T const *start, const T *end)
{
    typedef typename SigmaTraits<T>::ReturnType ReturnType;
    ReturnType = ReturnType();
    while (start != end)
        s += *start++;
    return s;
}

/*
迭代器（iteators）：是指针的泛化（generalization of pointer）
    在stl中迭代器是容器和算法之间的接口
基本思想：
--在stl中，迭代器最重要的思想就是分离算法和容器，使之不需要相互依赖
--迭代器将算法和容器粘合（stick）在一起从而使得一种算法的实现可以运用到多种不同的容器上
*/
template <class _Inlt, class _Ty>
inline _Inlt my_find(_Inlt _First, _Inlt _Last, const _Ty &_Val)
{
    // find first matching _Val
    for (; _First != _Last; ++_First)
        if (*_First == _Val)
            break;
    return (_First);
}
