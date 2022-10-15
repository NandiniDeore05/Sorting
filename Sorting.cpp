#include<iostream>
using namespace std;
void BubbleSort(int a[],int n)
{
    int flag;
    for(int i=0;i<n-1;i++)
    {
        flag=0;
        for(int j=0;j<n-1-i;j++)
        {
            if(a[j]>a[j+1])
            {
                int temp;
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                flag=1;
            }
        }
        if(flag==0)
        {
            return;
        }
    }
}
void InsertionSort(int a[],int n)
{
    int i,j;
    int temp;
    for(i=1;i<n;i++)
    {
        temp=a[i];
        for(j=i-1;j>=0;j--)        // ADHICHE SAGALE COMPARE KARTA
        {
            if(a[j]>temp)
            {
                a[j+1]=a[j];
            }
            else
            {
                break;
            }
        }
    }
    a[j+1]=temp;
}
void ShellSort(int a[],int n)
{
    int step;
    int temp;
    int i,j;
    for(step=n/2;step>0;step=step/2)
    {
        for(i=step;i<n;i++)                         // HERE  1  IS  REPLACED BY   "STEP" 
        {
            temp=a[i];
            for(j=i-step;j>=0;j=j-step)
            {
                if(a[j]>temp)
                {
                    a[j+step]=a[j];
                }
                else
                {
                    break;
                }
            }
         a[j+step]=temp;
        }
    }
}
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
