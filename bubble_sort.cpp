//Bubble Sort
#include<iostream>
using namespace std;

int main()
{
    int n, f, i, j, temp;
    int l = 0, m = 1;
    cout << "Enter the size of array : ";
    cin >> n;
    int arr[n];
    int a = n;
    cout << "Enter " << n << " Elements" << endl;
    
    for(i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    f = n;
    for(i=0; i < n-1; i++)
    {   
        for(j=0; j < f-1; j++)
        {  
            if(arr[l] > arr[m])
            {
                temp = arr[l];
                arr[l] = arr[m];
                arr[m] = temp;
            } 
            l++;
            m++;
        }
        f--;
        l=0;
        m=1;
    }

    for(i = 0; i < a; i++)
    {
        cout << arr[i] <<" ";
    }
    return 0;
}