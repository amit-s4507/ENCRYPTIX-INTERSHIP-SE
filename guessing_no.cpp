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


    

   
    cout<<"\n\t\t\t\t\t    Welcome To the Guessing Game!"<<endl;
    cout<<"\n You have to Guess a Number between 1 and 100 . You'll have limited choices based on the Difficulty Level you choose ."<<endl;
    cout<<" Good luck !!! "<<endl;


    while(true){
        cout<<"\n Enter The Difficulty Level According to following  : "<<endl;
        cout<<" 1. for Easy "<<endl;
        cout<<" 2. for Medium "<<endl;
        cout<<" 3. for Hard "<<endl;
        cout<<" 0. For Ending The Game !! "<<endl;
        cout<<"\n\n";
        int difficultychoice;
        cout<<"Enter The difficulty level  : ";
        cin>>difficultychoice;

         srand(time(0));
         int secrandom = 1 + (rand()% 100);
         int playerChoice;

        if(difficultychoice == 1){
            cout<<"You have 10 choices for guessing the secret number between 0 and 100  ."<<endl;
            int choicesleft = 10;

            for(int i=1;i<=10;i++){
                cout<<"\n Enter Your Choice : ";
                cin>>playerChoice;
                if(playerChoice == secrandom){
                    cout<<"\n Well Played !! You Won!! "<<playerChoice<<"is the secret number "<<endl;
                    cout<<"\t\t\t\t\t  Thanks for playing ......" << endl;
                    cout<<"\t\t\t\t\t  Play the Game Again with Us !! \n\n "<<endl;
                    break;
                }
                else{

                     cout<<"Nope , "<<playerChoice<<" is not the right number "<<endl; 
                     

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

                    if(choicesleft == 0){
                        cout<<"You couldn't find the secret number , it was "<<secrandom<<",   You lose !! \n \n ";
                        cout<<"\t\t\t\t\t  Thanks for playing ......" << endl;
                        cout<<"\t\t\t\t\t  Play the Game Again to win !! \n\n "<<endl;
                        

                    }

               
                }
            }
        
        }

        else if(difficultychoice == 2){
                       cout<<"You have 7 choices for guessing the secret number between 0 and 100 "<<endl;
            int choicesleft = 7;

            for(int i=1;i<=7;i++){
                cout<<"\n Enter Your Choice : ";
                cin>>playerChoice;
                if(playerChoice == secrandom){
                    cout<<"\n Well Played !! You Won!!  "<<playerChoice<<"  is the secret number "<<endl;
                    cout<<"\t\t\t\t\t  Thanks for playing ......" << endl;
                    cout<<"\t\t\t\t\t  Play the Game Again with Us !! \n\n "<<endl;
                    break;
                }
                else{

                     cout<<"Nope , "<<playerChoice<<" is not the right number "<<endl; 
                     

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

                    if(choicesleft == 0){
                        cout<<"You couldn't find the secret number , it was "<<secrandom<<",  You LOSE  the Game  !! \n \n ";
                        cout<<"\t\t\t\t\t  Thanks for playing ......" << endl;
                        cout<<"\t\t\t\t\t  Play the Game Again to win !! \n\n "<<endl;
                        

                    }

               
                }
            }
        
        }
        else if(difficultychoice == 3){
                        cout<<"You have 5 choices for guessing the secret number between 0 and 100 "<<endl;
            int choicesleft = 5;

            for(int i=1;i<=5;i++){
                cout<<"\n Enter Your Choice : ";
                cin>>playerChoice;
                if(playerChoice == secrandom){
                    cout<<"\n Well Played !! You Won!! "<<playerChoice<<"  is the secret number "<<endl;
                    cout<<"\t\t\t\t\t  Thanks for playing ......" << endl;
                    cout<<"\t\t\t\t\t  Play the Game Again with Us !! \n\n "<<endl;
                    break;
                }
                else{

                     cout<<"Nope , "<<playerChoice<<" is not the right number "<<endl; 
                     

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

                    if(choicesleft == 0){
                        cout<<"You couldn't find the secret number , it was "<<secrandom<<",  You lose !! \n \n ";
                        cout<<"\t\t\t\t\t  Thanks for playing ......" << endl;
                        cout<<"\t\t\t\t\t  Play the Game Again to win !! \n\n "<<endl;
                        

                    }

               
                }
            }
        
        }
        else if(difficultychoice == 0){
            exit(0);
        }
        else{
            cout<<"Wrong choice,Enter the valid choice to play the game ! (0,1,2,3)"<<endl;
        }

    
    }
 return 0;

}