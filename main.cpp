#include <iostream>
#include  "headers/side.h"
using namespace std;


int main(){
    entry();
    
    int note1, note2, note3;
    float finalNote;

    note1 = AskAndGet("exam1");
    note2 = AskAndGet("exam2");
    note3 = AskAndGet("exam3");

    std::cout << "\nYour notes are: " << std::endl;
    LogNote(note1);
    LogNote(note2);
    LogNote(note3);

    finalNote = FinalCalculation(note1, note2, note3);
    LetterNote(finalNote);
}
