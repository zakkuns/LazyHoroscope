//Authors: Zakary Kuns
#include<iostream>
#include<string>

using namespace std;

int main()
{
        //declare variables

        string firstname;
        string lastname;



        //get user input
        cout << "Enter your first name.\n";
        cin >> firstname;

        cout << "Enter your last name.\n";
        cin >> lastname;


        //tell fortune


        cout << "Welcome, " << firstname[0] << "." << lastname[0] << "," << " here is your fortune...\n";    


        return 0;
}
