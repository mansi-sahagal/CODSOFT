#include<iostream>
#include<cstdlib> //for random number 
#include<ctime>

using namespace std;

int main(){
srand((unsigned int) time(NULL));
int number = (rand() % 100) + 1;  //0-99 = 1-100
int guess=0;

do
{
  cout<<"Enter Guess (1-100): ";
  cin>>guess;

  if(guess > number)
  cout<< "Guess Lower !"<<endl;
else if(guess > number)
  cout<< "Guess Higher !"<<endl;
else
  cout<< "You won"<<endl;
} 
while (guess != number);
  cout<< "Game End"<<endl;
return 0;
}