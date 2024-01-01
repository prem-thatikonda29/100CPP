#include <iostream>

using namespace std;

int main(){
    int score = 0 , scorecomp = 0;
    label:
        int userchoice ;
        char y;
        cout<<" Enter your choice :( 1 for rock , 2 for paper , 3 for sciesors): \n";
        cin>>userchoice;
        cout<<"\n\n";


        if (userchoice <1 || userchoice>3){

            cout<<"invalid choice.\n";
            return 0;
            
        }

        int* updateplayer = &score;
        int* updatecomp = &scorecomp;

        cout<<"\nScore  YOUR : "<<score<<"        Comp : "<<scorecomp<<"\n";
        cout<<"\nuserchoice:  ";

        switch (userchoice)
        {
            case 1:
                cout<<"rock";
                break;

            case 2:
                cout<<"paper";
                break;    

            case 3:
                cout<<"scissor";
                break;

        }

        cout<<"\n";

        cout<<"computerchoice:  ";
        srand((int) time(NULL));
        int computerchoice = (rand() % 2)+1;

    

        switch (computerchoice)
        {
            case 1:
                cout<<"rock";
                break;

            case 2:
                cout<<"paper";
                break;    
        
            case 3:
                cout<<"scissor";
                break;

        }

        cout<<"\n\n";

        if (userchoice==computerchoice)
        {
            cout<<"tie 😂 \n\n";

        }
        else if (userchoice== 1 && computerchoice==3 ||
                userchoice== 2 && computerchoice==1 ||     
                userchoice== 3 && computerchoice==2 )
        {
            cout<<"you win 😎 \n\n";
            *updateplayer = score+1;
        
        }

        else
        {
            cout<<"computer win 🥲 \n\n";
            *updatecomp = scorecomp + 1;

        }
        
        cout<<"Input \'y\' to play again";
        cin>>y;

        if(y=='y'){
            goto label;
        }
        else
        {
            return 0;
        }

        
    return 0;   
}