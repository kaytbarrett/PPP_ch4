/*
    Implement a little guessing game called (for some obscure reason) "Bulls and Cows." The program
    has a vector of four different integers in the range 0 - 9 (e.g. 1234 but not 1122) and it is the
    user's task to discover those numbers by repeated guesses. Say the number to be guessed is 1234 and
    the user guesses 1359, the response should be "1 bull and 1 cow" because the user got one digit (1)
    in the right position (a bull) and one digit (3) right but in the wrong position (a cow). The guessing
    continues until the user gets four bulls, aka the user gets the four digits in the correct order.
*/

#include <iostream>
#include <vector> 
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

// Function to create a vector of 4 random integers ranging from 0-9
vector<int> generateRandNum()
{
    vector<int> v;

    for (int i = 0; i < 4; i++){
        // Seed the random number with the current time plus i to get 4 different random integers 
        srand(time(0) + i);
        // Generate a random number 0 - 9 by using modulo 10 
        int randomNumber = rand() % 10;
        // Add the random number to the end of the vector 
        v.push_back(randomNumber);
    }

    return v;
}


int main() 
{
    // Generate a vector of 4 random integers
    vector<int> numberVec = generateRandNum();

    // Declare a vector to store guess integers
    vector<int> guessVec;

    // Declare and initialize bull and cow counts
    int bulls = 0;
    int cows = 0;

    // Use a while loop to play the game until all 4 integers are guessed in the correct order
    while (bulls != 4){
        // Clear the vector of guesses for each iteration
        guessVec.clear();
        // Reset bull and cow counts for each iteration
        bulls = 0; 
        cows = 0;

        // Prompt the user for a guess of 4 integers and put those values in a string
        cout << "Please guess 4 numbers 0-1 (ex: 1234): " << endl;
        string guess;
        cin >> guess;
        
        // Parse the string with substrings to get each individual guess, turn into an int and push into guessVec
        for(int i = 0; i < guess.length(); i++)
        {
            int end = 1;
            string ss = guess.substr(i,end);
            int num = stoi(ss);
            guessVec.push_back(num);
            end = i+1;
        }

        for (int i = 0; i < guessVec.size(); i++ )
        {
            // Check if each guess integer matches the number at the same position in the vector
            if (guessVec[i] == numberVec[i])
            {
                // If match is found, incrememt bulls by 1
                bulls++;
            }
            // Check if each guess integer is found somewhere in the number vector, but not at the same position
            for (int j = 0; j < numberVec.size(); j++ )
            {
                if (guessVec[i] == numberVec[j] && i != j )
                {
                    // If the same number is found but in a different position in the vector, increment cows by 1
                    cows++;
                }
            }
        }

        // Output based on number of bulls found in guessVec
        if (bulls == 4){
            cout << "Correct! The number is: " << guess << endl;

        } else {
            cout << bulls << " bulls and " << cows << " cows" << endl;
        }
    }  

    return 0;
}