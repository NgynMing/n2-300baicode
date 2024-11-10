#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    float a,b,c,p;
    cin >> a >> b >> c;
    p = ( a + b + c ) / 2;
    cout << fixed << setprecision(1) << p * 2 << " ";
    cout << fixed << setprecision(3) << sqrt(p*(p-a)*(p-b)*(p-c));
    return 0;
}
