#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
  
  srand((unsigned int) time(NULL));
  
  
  int number = (rand() % 100) + 1; 
  
  // Stores the guess the user enters
  int guess = 0;





do
  {
    
    cout << "Guess:(1-100)";
    cin >> guess;
    
    
    if (guess > number)
      cout << "Guess Number lower!" << endl;
    else if (guess < number)
      cout << "Guess Number higher!" << endl;
    else
      cout << "You win" << endl;
      
    
  } while (guess != number);
   
  return 0;
}