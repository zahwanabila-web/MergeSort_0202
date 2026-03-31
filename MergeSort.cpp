#include <iostream>
using namespace std;

int arr[20], B[20];
int n;

void input()
{
    while (true)
    {
        cout << "Masukkan panjang element array: ";
        cin >> n;
        
        if (n <= 20)
        {
            break;
        }
        else
        {
            cout << "\nMaksimum panjang array yang dapat di masukkan adalah 20"<< endl;
        }
    }
    cout << endl;
    cout << "==========================================" << endl;
    cout << "==========Masukkan Element Array==========" << endl;
    cout << "==========================================" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << "Data ke-" << (i + 1) << "; ";
        cin >> arr[i];
    }
}

void mergeSort(int low,int high)
{

    if (low >= high)
    {
        return;
    }

    int mind = (low + high)/2;
    mergeSort(low, mind);
    mergeSort(mind + 1, high);

    int i = low;
    int j = mind + 1;
    int k = low;

    while (i <= mind && j <= high)
    {
        if (arr[i] <= arr[j])
        {
            B[k] = arr[i];
            i++;
        }
        else
        {
            B[k] = arr[j];
            j++;
        }
        k++;
    }

    for (int x = low; x <= high; x++)
    {
        arr[x] = B[x];
    }
}