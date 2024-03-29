#include <iostream>
#include <string>
#include <iomanip>

using namespace std;


void entry(){
    cout << "welcome to note calculation system!!\n";
}

void LogNote(int note){
    std::cout << note << " ";
}

int AskAndGet(const std::string exam){
    int note;
    std::cout << "Please enter your " << exam <<" note:"<< std::endl;
    std::cin >> note;
    return note;
}

float FinalCalculation(int note1, int note2, int note3){
    cout << fixed;
    cout << setprecision(2);
    float finalNote;
    cout << "\n\nYour final note is calculated as:\n";
    finalNote = (note1 + note2 + note3)/3.0;
    cout << finalNote << endl;
    return finalNote;
}

void LetterNote(float finalNote){
    char letter;
    if (finalNote < 50){
        letter = 'F';
    }
    else if (finalNote < 70){
        letter = 'C';
    }
    else if (finalNote < 90){
        letter = 'B';
    }
    else {
        letter = 'A';
    }

    cout << "\nYour Final Letter Note: " << letter << endl;
}