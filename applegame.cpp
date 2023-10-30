#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
void KheloIndia(){
	cout<<"\t\t\t\t\t\t\t**************************Apple Game**************************\t\t\t\t\t\t\t"<<endl;
	int apple=21,user,comp,turn=0,cont;
	cout<<"\t\t\t\t\t\t\t\t\t\t U have 21 balls \t\t\t\t\t\t\t\t\t\t"<<endl;
	cout<<"\t\t\t\t\t\t\t\t\t U have to choose 1 to 4 number\t\t\t\t\t\t\t\t\t"<<endl;
	cout<<"________________________________________________________________________________________________________________________________________________________________________"<<endl;
	srand(time(NULL));
	while(1)
	{
		int remain;
		if(turn==0){
			cout<<"enter number"<<endl;
			cin>>user;
			if(user<=apple){
				if(user<=4 && user>=0){
					apple=apple-user;
					cout<<"remaing apple = "<<apple<<endl;
					turn=1;
				}
				else cout<<endl<<"enter correct number"<<endl;
			}
			else{
				cout<<"number coording to rule"<<endl;
				turn=0;
			}
		}
		if(turn==1){
			comp=rand()%4+1;
			if(comp<=apple){
				cout<<comp<<endl;
				apple=apple-comp;
				cout<<"remaing apple = "<<apple<<endl;
				turn=0;
			}
		}
		if(apple==1){
			break;
		}
		else if(apple==0){
			turn=0;
			break;
		}
	}
	if(turn==0 && apple==1) cout<<"you loose the game"<<endl;
	else cout<<"U will Win game"<<endl;
}
int main(){
	int ch;
	KheloIndia();
	while(1){
		cout<<"Do you want to play again"<<endl;
		cin>>ch;
		if(ch==1){
			system("cls");
			KheloIndia();
		}
	}
}
