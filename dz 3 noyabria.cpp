#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void zadanieArray(int array[], int size) 
{
    
    for (int i = 0; i < size; i++) 
    {
        array[i] = rand() % 100;
    }
}

void pokazArray(int array[], int size) 
{
    for (int i = 0; i < size; i++) 
    {
        cout << array[i] << " ";
    }
    cout << endl;
}

int main() {
    setlocale(0, "");
    const int size1 = 5;
    const int size2 = 7;

    int array1[size1];
    int array2[size2];

    zadanieArray(array1, size1);
    zadanieArray(array2, size2);

    cout << "Массив номер 1: ";
    pokazArray(array1, size1);

    cout << "Массив номер 2: ";
    pokazArray(array2, size2);
    
    return 0;
}
