#include <iostream>

using namespace std;

void swap(int *a, int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
void BubSort(int a[], int n)
{
    int i,j;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(a[j]>a[j+1]) { swap(&a[j], &a[j+1]);}
        }
    }
}
void printArray(int a[], int n)
    {
      for (auto i = 0; i < n; i++)
        cout << a[i] << " ";
    }


int main()
{
    int a[]={50, 85, 64, 1, 152, 97};
    int n=sizeof(a)/sizeof(a[0]);
   
            {
            cout<<"\n Before sorting ";
            printArray(a, n);
            }
            BubSort(a, n);
        
            {
                    cout<<"\n After sorting ";
                    printArray(a, n);
            }
            return 0;
}