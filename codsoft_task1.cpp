#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
    int num, g, ch=0, mx_ch=5;
    srand(time(0));
    num = rand() % 100 + 1;
    cout << "Welcome to number guessing game" << endl;
    cout << "!!!!!INSTRUCTIONS!!!!!" << endl;
    cout << "Computer has generated a random number. You have 5 chances to guess what it is." << endl;
    cout << "Let's begin" << endl;
    while (ch< mx_ch)
    {
        cout << "Enter the number: " << endl;
        cin >> g;
        if (g != num)
        {
            if (g < num)
            {
                cout << "Enter a larger number." << endl;
            }
            else if (g > num)
            {
                cout << "Enter a smaller number" << endl;
            }
            ch++;
        }
        else{
            cout<<"Congratulations. You guessed it right."<<endl;
            break;
        }
    }
    if (ch == mx_ch) {
        cout << "Sorry, you couldn't guess the number. The correct number was: " << num << endl;
    }
    return 0;
}
