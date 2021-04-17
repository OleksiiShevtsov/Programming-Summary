#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
	vector<string> headlineGame;
	string command;
	cout <<"enter the command: ";
	cin >>command;
	do{
		if(command == "enum"){
			for(unsigned int i = 0;i < headlineGame.size(); ++i){
				cout <<"\tmy game number "<<i + 1<<" '"<<headlineGame[i]<<"'"<<endl;
			}
		}
		else if(command == "add"){
			while(true){
				string game;
				cout <<"\tAdd a game title: ";
				cin >>game; 
				if(game == "stop"){break;}
				headlineGame.push_back(game);
			}
		}
		else if(command == "remove"){
			for(unsigned int i = 0;i < headlineGame.size(); ++i){
					cout <<i + 1<<" - '"<<headlineGame[i]<<"'"<<endl;
			}
			int remuve;
			cout <<"\tdelete header: ";
			cin >>remuve;
			headlineGame.erase(headlineGame.begin() - 1 + remuve);
			for(unsigned int i = 0;i < headlineGame.size(); ++i){
				cout <<i + 1<<" - '"<<headlineGame[i]<<"'"<<endl;
			}
		}
		else{
			cout <<"enter the correct command";
		}
		cout <<"enter the command: ";
		cin >>command;
	}while(command != "exit");
	cout <<"bye!";
	return 0;
}
