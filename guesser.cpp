
#include <iostream>
#include <cstdlib>
#include <ctime>
 
// Function to generate a random number between min and max (inclusive)
int random_number(int min, int max)
{
    return rand() % (max - min + 1) + min;
}
 
int main(){

        // Initialize random seed
        srand(unsigned(time(nullptr)));

    bool replay {1};

    do{
    
        int num1{}, num2{}, chosen{}, temp{}, user_guess{};
        int attempts {3};

        std::cout << "--------------------------\n";
        std::cout << "Enter two numbers for a range: ";
        std::cin >> num1 >> num2; 

        if(num1 == num2){
            std::cout << "Range is not valid" << std::endl;

            return 0;
        }
        else{
            if(num1 > num2 ){
                temp = num2;
                num2 = num1;
                num1 = temp;

                chosen = random_number(num1, num2);        
            }
            else{
                chosen = random_number(num1, num2);
            }
            std::cout << "Guess a number: " ;
        }

        do{
            
            std::cout << "You have " << attempts << " attempts left: ";
            std::cin >> user_guess;

            (user_guess == chosen) ? std::cout << "You matched your number!\n" :
            (user_guess > chosen) ? std::cout<<"The number is lower.\n" : std::cout <<"The number is higher.\n";
            
            attempts--;


        }while (user_guess != chosen && attempts != 0);

        if(user_guess == chosen){
            int tries = 3 - attempts;

            (tries == 1) ? std::cout << "Well done, first try!\n" : 
            (tries == 2 ) ? std::cout <<"Wow, that did not take long!\n" : std::cout << "Third time's the charm :D\n";
        } 

        if(user_guess != chosen){
            std::cout <<"\nYou ran out of attempts!";
            std::cout <<" The chosen number was " << chosen << " .-." <<std::endl;
        }

        do{
            std::cout << "Do you want to play again?\n";
            std::cout << "Yes:1 | No:0 ~ ";
            std::cin >> replay;

            if (replay != 1 && replay != 0) {
                std::cout << "Not a valid input\n";
            }
        }while(replay!= 1 && replay !=0);   


    }while(replay == 1);
        

    return 0;
}


// Instructions:

//     Use the random_number function to generate a random number between two chosen values. (done)
//     Ask the player to guess the number. (done)
//     Compare the guess with the target and tell the player if it’s higher or lower. (done)
//     Repeat until the correct number is found. (done)
//     Display a congratulation message when the player wins. (done)
//     Add extra features to make the game more fun.

// Optional features:

// – Limit the number of attempts. (done)
// – Display the remaining attempts after each guess. (done)
// – Let the player define the range (min and max). (done)
// – Add a replay option at the end. (done)
// – Display a special message depending on the number of tries used. (done)