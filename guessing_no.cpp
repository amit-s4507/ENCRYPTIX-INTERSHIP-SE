// Guessing The Number Game 

#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;


// Random Number : Choosen by Computer
int main(){

   
    
    // for generating random numbers by computer


    // now for generating between limits 0 to 100

    // int random = offset + (rand() % range)
    // int random = 1 + (rand()% 100)


    

   
    cout<<"\n\t\t\t Welcome To the Guessing Game!"<<endl;
    cout<<"\n You have to Guess a Number between 1 and 100 . You'll have limited choices based on the Difficulty Level you choose"<<endl;
    cout<<" Good luck !!! "<<endl;


    while(true){
        cout<<"\n Enter The Difficulty Level : "<<endl;
        cout<<" 1. for Easy "<<endl;
        cout<<" 2. for Medium "<<endl;
        cout<<" 3. for Hard "<<endl;
        cout<<" 0. For Ending The Game !! "<<endl;

        int difficultychoice;
        cout<<"Enter The Number : ";
        cin>>difficultychoice;

         srand(time(0));
         int secrandom = 1 + (rand()% 100);
         int playerChoice;

        if(difficultychoice == 1){
            cout<<"You have 10 choices for guessing the secret number between 0 and 100 "<<endl;
            int choicesleft = 10;

            for(int i=1;i<=10;i++){
                cout<<"\n Enter Your Choice : ";
                cin>>playerChoice;
                if(playerChoice == secrandom){
                    cout<<"\n Well Played !! You Won!! "<<playerChoice<<"is the secret number "<<endl;
                    cout<<"\t\t\t  Thanks for playing ......" << endl;
                    cout<<"Play the Game Again with Us !! \n\n "<<endl;
                    break;
                }
                else{

                     cout<<"Nope , "<<playerChoice<<"is not the right number "<<endl; 

                     if(playerChoice > secrandom){
                        cout<<"\n Your Choice is Greater than the Secret Number "<<endl;
                        choicesleft--;
                        cout<<" You have "<<choicesleft<<" choices left "<<endl;

                    }
                    else {
                        cout<<"\n Your Choice is Smaller than the Secret Number "<<endl;
                        choicesleft--;
                        cout<<" You have "<<choicesleft<<" choices left. "<<endl;
                    }

                }

               
                }
            }
        
    
        else if(difficultychoice == 2){
       
       }
        else if(difficultychoice == 3){

        }
        else if(difficultychoice == 0){
            break;
        }
        else{

        }

    }

 return 0;

}