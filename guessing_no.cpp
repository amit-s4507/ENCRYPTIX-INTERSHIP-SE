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


    srand(time(0));
    int random = 1 + (rand()% 100);

   
    cout<<"\n\t\t\t Welcome To the Guessing Game!"<<endl;
    cout<<"\n You have to Guess a Number between 1 and 100 . You'll have limited choices based on the Difficulty Level you choose"<<endl;
    cout<<" Good luck !!! "<<endl;





 return 0;

}