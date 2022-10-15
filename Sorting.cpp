#include<iostream>
using namespace std;

int main()
{
    int a[100];
    int n;
    cout<<"ENTER TOTAL NUMBER OF ELEMENTS"<<endl;
    cin>>n;
    cout<<"NOW ENTER THE NUMBERS"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    //int h=n+1;
    //a[h]=INT32_MAX;
    //QuickSort(a,0,h);
    ShellSort(a,n);
    cout<<"THE SORTED LIST IS ===>"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<endl;
    }
}
