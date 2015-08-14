#include <iostream>
#include <string>
using namespace std;



void zeichenkette(){
    char cbuf[256]; // limit to 256 chars
    int wordLength = 256;
    int input = 256;
    cout << "please type a word, press enter and then type in the wordlength + enter" << endl;
    cin.get(cbuf, input) >> wordLength;
    cout << "[ using word: " << cbuf << " with length: " << wordLength << " ]" << endl;

    for (int i = 0; i < wordLength - 1; i++){
        // leerzeichen vor den Buchstaben generieren
        for (int j = wordLength - i; j > 0; j--){
            if (j != 0) { cout << "  "; }
        }
        cout << cbuf[i];
        // leerzeichen nach dem ersten Buchstaben generieren
        int abstand = 8;
        for (int k = abstand*i; k > 2; k -= 2){ cout << " "; }
        if (i == 0) { cout << endl; } // den ersten buchstaben NICHT 2x ausgeben.
        else { cout << cbuf[i] << endl; }
    }

    // LETZTE ZEILE:

    cout << "  ";// << cbuf[wordLength - 1] << " "; // letzten buchstaben
    // letzte Zeile, erste Haelfte
    for (int i = wordLength - 1; i > 0; i--){
        cout << cbuf[i] << " ";
    }
    // letzte Zeile, zweite Haelfte
    for (int i = 0; i < wordLength; i++){
        cout << cbuf[i] << " ";
    }

    cout << endl;
}

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
    cout << "#########  Zeichenkette:  #########" << endl;
    zeichenkette();
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


    string in;
    // cout << "you typed:" << input << cbuf << " max charLength: " << charLength << endl;
    cin >> in;
    return 0;

}
