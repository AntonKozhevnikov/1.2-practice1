#include <iostream>

using namespace std;

int main() {
    int a;
    cout << "vvedite kol-vo yablok";
    cin >> a;
    if(a > 10 && a < 21)
        cout << a <<"yablok";
    if(a>20 || (a<11 && a>-1))
    {
        if(a % 10 == 0 || (a % 10 > 4 && a % 10 <= 9))
            cout << a << "yablok";
        if(a % 10 == 1)
            cout << a << "yabloko";
        if(a % 10 > 1 && a % 10<5)
            cout << a << "yabloka";
    }
    return 0;
}
