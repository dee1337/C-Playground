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

int main(){
    cout << "#########  Zeichenkette:  #########" << endl;
    zeichenkette();

    string in;
    // cout << "you typed:" << input << cbuf << " max charLength: " << charLength << endl;
    cin >> in;
    return 0;

}
