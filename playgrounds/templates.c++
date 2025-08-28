#include <iostream>
using namespace std;


/*
template <class T>
T product (T a, T b)
{
    T result;
    result = a * b;
    return result;
    
}


template <class T>
T sum (T a, T b)
{
    T result;
    result = a + b;
    return result;

    }


    */
   
template <class T, int N>
T fixed_multiply(T val)
{
   
   return val * N;
}
int main()
{
       /*
    int i = 5, j = 6, k, l;
    double f = 2.0, g = 0.5, h, m;
    k = sum<int>(i, j);
    h = sum<double>(f,g);

    l = product<int>(i, j);
    m = product<double>(f, g);



    cout << k << '\n';
    cout << h << '\n';
    cout << l << '\n';
    cout << m << '\n';
*/


    cout << fixed_multiply<int,2>(10) << '\n';
    cout << fixed_multiply<int,3>(10) << '\n';


    return 0;
}