#include <iostream>

using namespace std;

int main()
{
    int x,y,z,a;
    cout <<"Введите срок:="<<endl;
    cin >> x;
    cout << "Введите сумму вклада:= "<<endl;
    cin >> z;
    
    if ((x>=0) &(x<=30))
    {
        y=-10;
        a= z/100*y+z;
        cout <<"Сумма вклада =: "<< a;
    }
    if ((x>=31) &(x<=120))
    {
        y=2;
        a= z/100*y+z;
        cout <<"Сумма вклада =: "<< a;
    }

    if ((x>=121) &(x<=240))
    {
        y=6;
        a= z/100*y+z;
        cout <<"Сумма вклада =: "<< a;
    }
    
    if ((x>=241) &(x<=365))
    {
        y=12;
        a= z/100*y+z;
        cout <<"Сумма вклада =: "<< a;
    }
    return 0;
}
