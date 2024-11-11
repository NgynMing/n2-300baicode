#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int a;
    cin >> a;
    cout << fixed << setprecision(2) << a * 2 * 3.14 << " " << a * a * 3.14;
    return 0;
}
