#include <iostream>
#include <windows.h>

using namespace std;

int main(){
    int n;
    cout<<"vvedite n= ";
    cin>>n;
    while(n>0)
    {
        cout<<n<<endl;
        Sleep(1000);
        n=n-1;
    }
}

