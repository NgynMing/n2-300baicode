#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    float a,b,c,p,s;
    cin >> a >> b >> c;
    p = ( a + b + c ) / 2;
    s = sqrt(p*(p-a)*(p-b)*(p-c));
    cout << fixed << setprecision(3) << a * b * c  / ( 4 * s ) ;
    return 0;
}
