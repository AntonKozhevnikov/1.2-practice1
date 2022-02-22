#include <iostream>

using namespace std;

int main() {
    int a, b;
    float r;
    char c;
    cout<<"vvedite 1 chislo= ";
    cin>>a;
    cout<<"vvedite 2 chislo= ";
    cin>> b;
    cout<<"vvedite operaciu ";
    cin>> c;
    if (c=='+')
    {
        r=a+b;
        cout<<"resultat= "<<r;
    }
    if (c=='-')
    {
        r=a-b;
        cout<<"resultat= "<<r;
    }
    if (c=='*')
    {
        r=a*b;
        cout<<"resultat= "<<r;
    }
    if (c=='/')
    {
        r=a*(1./b);
        cout<<"resultat= "<<r;
    }
}

