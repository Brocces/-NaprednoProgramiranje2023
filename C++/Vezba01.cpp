#include <iostream>
using namespace std;
void FillArray(int arr[], int n)
{
    int number = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> number;
        arr[i] = number;
    }
    cout << "Nizata Vi e: \n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
void Insertion(int arr[], int n)
{
    int temp = 0;
    for (int i = 1; i < n; i++)
    {
        int j = i;
        while (j > 0 && arr[j - 1] > arr[j])
        {
            temp = arr[j];
            arr[j] = arr[j - 1];
            arr[j - 1] = temp;
            j--;
        }
    }
}

int main()
{
    int n;
    cout << "Kolkava sakate da e nizata?";
    cin >> n;
    int arr[n];
    cout << "Vnesete gi elemntite od nizata: ";
    FillArray(arr, n);
    Insertion(arr, n);
    cout << "\n\nNovata niza e: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
/*  Nacinot na podreduvanje na nizata po red  vo ova zadaca e so koristenje na funkcijata
    Selection Sort. Ja naoga vrednosta na pozicijata arr[j] i ja sporeduva so vrednosta na pozicija
    arr[j - 1]. Ako vrednosta na pozicijata arr[j - 1] e pogolema, se primenuva swap.
    Ciklusot se povtoruva duri ne se podredi nizata po red.*/