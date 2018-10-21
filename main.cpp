/*
 * File: main.cpp
 * Description: Counts the number of times a specific character is in a string that was put in by the user.
 * Author: Ghannea Rave    
 * Email: ghanner1589@student.vvc.edu
 * Date: October 18, 2018
*/

#include<iostream>
#include<string>

using namespace std;

string get_string (string prompt);
char get_char (string prompt);
int char_count (string, char );

int main()
{ 
    string sentence= get_string ("Please enter a sentence about anything: "); 
    char c = get_char ("Enter a character: ");

    cout << "The character you choose is: " << c << endl;
    cout << "The number of time(s) that character appeeared is: " << char_count (sentence, c) << endl;

    return 0;
}

/**
 Prompt when the user enters a string value
 @param string prompt is the string value
 @return getline value returns the string including spaces.
*/
string get_string (string prompt)
{
    string value;
    cout << prompt;
    getline (cin, value);
    return value;
}

/**
 Prompt when entering the character to search for in the string
 @param c is the character the user choose
 @return c returns the value the user entered
*/
char get_char (string prompt)
{
    char c;
    cout << prompt;
    cin >> c;
    return c;
}

/**
 Prompt for calculating the number of times the character c was used in the string
 @param string sentence is use to calculate the lenght of the string and character c is the charactere picked
 @return calculates the number of times character c was used in the sentence
*/
int char_count (string sentence, char c)
{
    int count = 0;
    for (int i = 0; i < sentence.length(); i++)
    {
        char character = sentence.at(i);
        if (character == c)
        {
            count ++;
        }
    }
    return count;
}

