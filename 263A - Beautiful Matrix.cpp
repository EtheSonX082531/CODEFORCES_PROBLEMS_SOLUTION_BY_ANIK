#include<iostream>
using namespace std;

int main()
{
    int arr[5][5],a,b,count=0;
    for(int i=0; i<5; i++) {
        for(int j=0; j<5; j++) {
            cin>>arr[i][j];
            if(arr[i][j]==1) {
                a=i;
                b=j;
            }
        }
    }
    int i=a,j=b;
    while(i!=2 || j!=2) {
        if(i>2) {
            i--;
        }
        else if(i<2) {
            i++;
        }
        else if(j>2) {
            j--;
        }
        else if(j<2) {
            j++;
        }
        count++;
    }
    cout<<count;
    return 0;
}
