
#include <iostream>
using namespace std;

int total = 0;

void anwser () {
    while (cin) {
    char c;
    cin >> c;
    toupper(c);
        if (c == 'A') {
            total++;
            break;
        }
        if (c == 'B') {
            total += 2;
            break;
        }
        if (c == 'C') {
            total += 3;
            break;
        }
        if (c == 'D') {
            total += 4;
            break;
        }
        else cout << "Invalid input. Please try again.\n";
    }
}

int main() {
  
    cout << "WELCOME TO THE SKKYE PERSONALITY QUIZ!\n";
    cout << "Please anwser the following questions to the best\n";
    cout << "of your ability using answer keys A, B, C, or D.\n";
    cout << endl;
    
    cout << "1) What is your favorite color?\n";
    cout << "A) Yellow\n";
    cout << "B) Pink\n";
    cout << "C) Black\n";
    cout << "D) Blue\n";
    anwser();
    
    cout << "2) What is your favorite genre of music?\n";
    cout << "A) Rock\n";
    cout << "B) Pop\n";
    cout << "C) Electronic\n";
    cout << "D) Hip-hop / Rap\n";
    answer();
    
    cout << "3) What is your favorite movie?\n";
    cout << "A) Romantic\n";
    cout << "B) Adventure\n";
    cout << "C) Horror\n";
    cout << "D) Comedy\n";
    answer();
    
    cout << "4) What is your ideal weekend?\n";
    cout << "A) Relaxing\n";
    cout << "B) Hanging with friends\n";
    cout << "C) Hiking\n";
    cout << "D) Partying\n";
    answer();
    
    cout << "5) What is your favorite
    cout << "A)  
    cout << "B) 
    cout << "C) 
    cout << "D) 
    answer();
    
    cout << "6) What is your favorite
    cout << "A)  
    cout << "B) 
    cout << "C) 
    cout << "D) 
    answer();
    
    cout << "7) What is your favorite
    cout << "A)  
    cout << "B) 
    cout << "C) 
    cout << "D) 
    answer();
    
    cout << "8) What is your favorite
    cout << "A)  
    cout << "B) 
    cout << "C) 
    cout << "D) 
    answer();
    
    cout << "9) What is your favorite
    cout << "A)  
    cout << "B) 
    cout << "C) 
    cout << "D) 
    answer();
    
    cout << "10) What is your favorite
    cout << "A)  
    cout << "B) 
    cout << "C) 
    cout << "D) 
    answer();

5. FAV PET
A CAT
B BUNNY
C REPTILE
D DOG

6. FAV SCHOOL SUBJECT
A ART
B MATH 
C P.E.
D ENGLISH

7. WHERE WOULD YOU RATHER LIVE
A SUBURBS
B BEACH
C COUNTRY
D CITY

8. FAV DRINK
A TEA
B WATER
C ENERGY DRINKS
D COFFEE

9. WHICH CITY WOULD YOU RATHER VISIT
A PARIS
B AMSTERDAM
C TOKYO
D RIO

10. FAV ANIMAL
A ELEPHANT
B SLOTH
C SNAKE
D LION

  
}
