#include <iostream>
using namespace std;

int Find(int arr[], int n, int key);
int Delete(int arr[], int n, int key)
{
    int pos = Find(arr, n, key);
    if (pos == -1) {
        cout << "Element not found";
        return n;
    }
    int i;

    for (i = pos; i < n - 1; i++)
        arr[i] = arr[i + 1];
    return n - 1;
}

int Find(int arr[], int n, int key)
{
    int i;
    for (i = 0; i < n; i++)
        if (arr[i] == key)
            return i;
    return -1;
}

int main()
{
    int i;
    int arr[] = { 17,7,20,03 };

    int n = sizeof(arr) / sizeof(arr[0]);

    int key = 11;

    cout << "before deletion\n";

    for (i = 0; i < n; i++)
        cout << arr[i] << " ";
    n = Delete(arr, n, key);

    cout << "\n After deletion\n";
    for (i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}