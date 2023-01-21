// Clock
#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    int h, min, seg, a, cont;
    cont=a=0;
    
    while(cont==0)
    {
        cout<<"Informe a hora : "<<endl;
        cin>>h;
        cout<<"Informe o minuto : "<<endl;
        cin>>min;
        cout<<"Informe os segundos : "<<endl;
        cin>>seg;
        if(h<24 && min<60 && seg<60)
        cont++;
        else
        system("cls");
    }
    while(a==0)
    {
        system("cls");
        cout<<h<<":"<<min<<":"<<seg<<endl;
        Sleep(1000);
        seg++;
        if(seg>59)
        {
            seg=0;
            min++;
        }
        if(min>59)
        {
            min=0;
            h++;
        }
        if(h>24)
        {
            h=0;
        }
    }
    return 0;
}