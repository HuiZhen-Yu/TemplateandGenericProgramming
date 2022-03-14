#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

#define Buffersize 5

template <typename T>
struct PrintC
{
    PrintC(ostream &out) : os(out)
    {
    }
    void operator()(const T &x) { os << x << ' '; }
    ostream &os;
};

int main(int argc, char **argv)
{
    int buffer[Buffersize] = {0, 100, -98, 31, 7};

    vector<int> vec(buffer, buffer + Buffersize);
    for_each(vec.begin(), vec.end(), PrintC<int>(cout));
    system("pause");
    return 0;
}