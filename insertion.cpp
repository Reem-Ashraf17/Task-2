#include <iostream>
using namespace std;
 
int insertS(int arr[], int n, int key, int c)
{
 
  
  
    if (n >= c)
        return n;
 
    arr[n] = key;
 
    return (n + 1);
}
 
int main()
{
    int x = 5;
    int arr[x] = { 17,7,20,03 };
    int n = 5;
    int key = 11;
 
    cout << "\n Before: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
 
    n = insertS(arr, n, key, sizeof(arr) / sizeof(arr[0]));
 
    cout << "\n After: ";
    for (int j = 0; j < n; j++)
        cout << arr[j] << " ";
 
    return 0;
}