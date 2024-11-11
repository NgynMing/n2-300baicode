#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    float a,b,c;
    cin >> a >> b >> c;
    cout << fixed << setprecision(1) << (a + b + c) / 3;
    return 0;
}
