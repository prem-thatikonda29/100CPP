//Including Iostream library to use it's functionalities
#include <iostream>

//Using standard namespace scope for This code
using namespace std;

//Main function
int main()
{   
    //Initialization and declaration
    int a = 0 , b = 0 , D =  0;
    string word;
    char c;
    
    cout<<"Enter a word : \n";
    cin>>word;

    //Storing size of length of input by user
    a=word.length();
    

    //For loop working on increment till the lenght of input 
    for (int i = 0 ; i<a ; i++){                                                                                            //Works to check if i of the string is a vowel or consonant and calculates the number of both in string
        c=word[i];

        if(c == 'a' || c == 'A' || c == 'e' || c=='E' || c == 'I' || c=='i' || c == 'o' || c == 'O'|| c == 'U' || c == 'u')
        {
            b += 1;
        }
        else{
            D += 1;
        }

    }


    //Assigning the length of array with No. of vowel and consonant
    char arr[b];
    char conson[D];
    int vowel = 0;
    int consonant = 0;

    //Using another for loop For putting the values inside the Array 
    for (int i = 0 ; i<a ; i++)
    {
        c=word[i];
        if(c == 'a' || c == 'A' || c == 'e' || c=='E' || c == 'I' || c=='i' || c == 'o' || c == 'O'|| c == 'U' || c == 'u')
        {
            
            arr[vowel] = c;
            vowel += 1;
        }
        else{
            
            conson[consonant] = c;
            consonant += 1;
        }

    }

    //organizing the output to make clear what's what
    cout<<"\n\n\n"<<b<<" Vowels In the word : \n";

    //Loop to print the contents of vowel array
    for (int i = 0 ; i < b ;  i ++){
        cout<<arr[i]<<"\n";
    }

    //Loop to print the contents of consonant array
    cout<<"\n-------------------------------------\n";
    cout<<"\n"<<D<<" Consonants In the word : \n";
    for (int i = 0 ; i < D ; i++){
        cout<<conson[i]<<"\n";
    }

    //Exiting function 
    return 0;
}

