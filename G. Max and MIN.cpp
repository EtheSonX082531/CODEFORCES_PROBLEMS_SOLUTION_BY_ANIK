#include<iostream>
using namespace std;

void findMinMax(int a[],int n,int min,int max) {
    cin>>a[0];
    min=a[0];
    max=a[0];
    for(int i=1; i<n; i++) {
        cin>>a[i];
        if(a[i]<min) {
            min=a[i];
        }
        if(a[i]>max) {
            max=a[i];
        }
    }
    cout<<min<<" "<<max;
    return;
}

int main()
{
    int n,min,max;
    cin>>n;
    int a[n];
    findMinMax(a,n,min,max);
    return 0;
}
