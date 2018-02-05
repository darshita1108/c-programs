#include<iostream>
#include<stdlib.h>
#include<process.h>
#include<time.h>
using namespace std;
enum status{
	win,lose,cont
};
status player_status;
int dicesum()
{
	int num1=1+(rand()%6);
	int num2=1+(rand()%6);
	cout<<num1<<" "<<num2;
	int sum=num1+num2;
	return sum;
}
int main()
{
	
	cout<<"And the game begins!!";
	cout<<"\nDices are rolling...\n";
	srand(time(NULL));
	int s=dicesum();
	switch(s){
		case 7:
		case 11:
		 player_status=win;
		 cout<<"\nYou win";
		 break;
		 
		case 3:
		case 2:
		case 12:
			player_status=lose;
			cout<<"\nYou lose";
			break;
			
		default:
			int points=s;
			player_status=cont;
			cout<<"\ncontinue\n";
			while(player_status==cont)
			{
				int k= dicesum();
				if(k==7)
				{
					player_status=win;
					cout<<"\nYou lose\n";
					exit(0);
				}
				else if(k==points)
				{
					player_status=win;
					cout<<"\nYou win";
					exit(0);
				}
				else
				{
					player_status=cont;
					cout<<"\ncontinue\n";
				}
			}
			
	}
	return 0;
}
