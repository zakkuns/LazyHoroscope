//Authors: Zakary Kuns
#include<iostream>
#include<string>

using namespace std;

int main()
{
        //declare variables

        string firstname;
        string lastname;
        int lucky;

        //get user input
        cout << "Enter your first name.\n";
        cin >> firstname;

        cout << "Enter your last name.\n";
        cin >> lastname;


        int length = lastname.length();
        char letter = lastname[length - 1];
        


        //tell fortune

        lucky = firstname.length();


        cout << "Welcome, " << firstname[0] << "." << lastname[0] << "," << " here is your fortune...\n";    
        cout << "Your lucky number is " << lucky << "." << endl;




        if (firstname[0] == 'a' || firstname[0] == 'e' || firstname[0] == 'i' || firstname[0] == 'o' || firstname[0] == 'u'
                        || firstname[0] == 'A' || firstname[0] == 'E' || firstname[0] == 'I' || firstname[0] == 'O' || firstname[0] == 'U')

        {
                cout << "You are destined to be famous" << endl;

        }






        if (letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u' || letter == 'A' || letter == 'E' ||
                        letter == 'I' || letter == 'O' || letter == 'U') 

        {

                cout << "You have already met your true love" << endl;

        }

        cout << "Have a good day!" << endl;
        
        
        return 0;
}
