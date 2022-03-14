/*
���ͱ�̣�generic programming��
������Overview��:��һ�ֱ�̷��������ַ��������(type)��to-be-specified-later�ķ�ʽ������
    �ȵ���Ҫ���õ�ʱ�����Բ�����ʽ��ͨ������ġ��ض����ͱ�ʵ������instantiate��һ������ķ������߶���
*/

/* T():usually creates a zero value */

/* ����һ�ֱ��˼�룬���������ھ��������*/

/*
    �������ԣ�Traits����
    Traits����ʵ��Ϊģ���࣬��������association���������ĳ���ͱ�T���ػ���
    Traitsʵ��
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
��������iteators������ָ��ķ�����generalization of pointer��
    ��stl�е��������������㷨֮��Ľӿ�
����˼�룺
--��stl�У�����������Ҫ��˼����Ƿ����㷨��������ʹ֮����Ҫ�໥����
--���������㷨������ճ�ϣ�stick����һ��Ӷ�ʹ��һ���㷨��ʵ�ֿ������õ����ֲ�ͬ��������
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
