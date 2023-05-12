#include <iostream>
using namespace std;

int ira[125]; // panjang array
int Muhajirah;  // lowerbound
int Ulfah; // upperbound
int mid;
int i;
int n;

void input()
{
    while ()
    {
        cout << "Enter the number of elements in the array : ";
        if ((n > 0) && (n <= 125))
            break;
        else
            cout << "\nArray should have minimum 1 and maximum 125 elements.\n\n";
    }
}

void LinearSearch() 
{
        cout << "\nEnter the element you want to search : ";
        int item;
        cin >> item;

        for (item = 0; i < 125; i++)

            if (ira[mid] == item) { // jika mid = elemen yang dicari
                cout << "found" << mid << endl; // muncul "found" pada array ke berapa
            }
            else if (item < ira[mid]) {
                Muhajirah = mid + 1;
            }
            else {
                Ulfah = mid - 1;
            }
        mid = (Muhajirah + Ulfah) / 2;
        cout << "Not Found" << endl;
}

int main()    
{
    input();
    LinearSearch();
}