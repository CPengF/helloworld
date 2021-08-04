#include <iostream>
// #include <vector>
// #include <string>
// #include <cmath>
#include <cstdio>

using namespace std;
class S2
{
private:
    int a, b;
public:
    S2(int, int);
    int get(int i) const;
    void set(int *val);
};

void S2::set(int* val)
{
    S2::a = *val;
    S2::b = *(val + 1);
}
int S2::get(int index) const
{
    if (index == 0)
    {
        return S2::a;
    }
    else
    {
        return S2::b;
    }
    
}
S2::S2(int aa = 10, int bb = 9)
{
    S2::a = aa;
    S2::b = bb;
}


int main()
{
    int y;
    cout << "y: " << y << endl;
    int x[2] {1, 4};
    S2 x23 {6};
    cout <<"a: " << x23.get(0) << ", b: " << x23.get(1) << endl;
    x23.set(&x[0]);
    // x23.set();
    cout <<"a: " << x23.get(0) << ", b: " << x23.get(1) << endl;
}