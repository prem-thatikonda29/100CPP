#include <iostream>
#include <unistd.h>

using namespace std;

int main(){
    srand((int) time(NULL));
    int n , q;
    int random , randomq;

    
    

    cout<<"\nWELCOME TO RANDOM QUESTION ASSIGNING TO GROUPS WHICH WILL SHOW STUDENT'S ASSIGNED QUESTION IN GROUP OF FIVE\n";
    cout<<"\nHow many students : ";
    cin>>n;

    string arr[n];
    

    for(int i = 0 ; i<n ; i++){
        cout<<"Enter Student "<<i+1<<" Name : \n";
        cin>>arr[i];
    }
label:
    cout<<"\nHow many questions are there ? : ";
    cin>>q;
    if(q<=0){
        cout<<"\nPlease put positive number of questions ";
        goto label;
    }
    int que[q];
    for(int i = 0 ; i < q ; i++ ){
        que[i]=i+1;
    }

    for(int i = 0 ; i < n/5 ; i++ )
    {
        cout<<"\n__________________________________________________________________\n";
        cout<<"\nGroup "<<i+1<<" Name and question : \n";
        
        for(int j = 0 ; j < 5 ; j++)
        {
            
            rerun:
            
            
            random = (rand() % n-1)+2;
            
            
            
            if(arr[random-1] == "0" )
            {
                goto rerun;
            }
            else{
                cout<<"\n____________________________________\n";
                cout<<"\nStudent "<<arr[random-1];
                arr[random-1] = "0";
            }
            
            int totalq = q/5;

            for(int i = 1 ; i <= totalq ; i++){
                another:
                    
                    randomq = (rand() % q-1)+1;
                if(que[randomq] == 0){
                    goto another;
                }
                else{
                cout<<"\nAssigned question "<<que[randomq];
                
                que[randomq] = 0;
                }
            }
            
            
            cout<<"\n___________________________________________________________\n\n";

        }   
    }
    
}