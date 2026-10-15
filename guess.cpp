#include <iostream>
#include <ctime>
#include <random>

using namespace std;

int main()
{
    srand(time(0));
    cout << "Welcome to Guess game" << "\n";
    cout << "You have to Guess Between 1 to 1000." << "\n";

    int number;
    int secret_num = rand() % 1000 + 10;
    int attempts = 0;
    do
    {
        cout << "Enter Your Number: " << "\n";
        cin >> number;
        if (number > secret_num)
        {
            cout << "Too high,guess a little bit lower." << "\n";
            attempts++;
        }
        else if (number < secret_num)
        {
            cout << "Too low,guess a little bit higher." << "\n";
            attempts++;
        }
        else
        {
            cout << "Got it! You guessed right number this time." << "\n";
            cout << "You took " << attempts << " attempts." << "\n";
        }
    } while (number != secret_num);
    return 0;
}