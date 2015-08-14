#include <iostream>
using namespace std;

void printArray(short array[], int size){
    // array ausgeben:
    for (int i = 0; i < size; i++){
        if (i % 10 == 0){ cout << endl; }
        cout << array[i] << " ";
    }
    cout << endl;
}

void selsorthsh(short sarr[], int size){
    cout << "============= Array - BEFORE Selection Sort: =============";
    printArray(sarr, size);
    int min = 0;
    int tmp;

    for (int i = 0; i < size - 1; i++)
    {
        min = i;
        for (int j = i + 1; j < size; j++)
        {
            if (sarr[j] < sarr[min]) { min = j; }
        }

        tmp = sarr[min];
        sarr[min] = sarr[i];
        sarr[i] = tmp;
    }

        cout << endl << "============= Array - AFTER Selection Sort: =============";
        printArray(sarr, size);
}

int main(){
    cout << endl << endl << "#########  SELECTION SORT:  #########" << endl;
    if (RAND_MAX == 32767){
        cout << "RAND_MAX: " << RAND_MAX << " (is within SHORT range)" << endl;
    }
    else {
        cout << "Warning - RAND_MAX: " << RAND_MAX << " should be in range of 32, 767!" << endl;
    }

    // feld mit 100 random shorts generieren
    short feld[100] = {0}; // initialisieren mit 0
    for (int i = 0; i < 100; i++){
        feld[i] = rand();
    }
    // printArray(feld, 100);
    cout << endl << endl;
    selsorthsh(feld, 100);


    int in;
    // cout << "you typed:" << input << cbuf << " max charLength: " << charLength << endl;
    cin >> in;
    return 0;

}
