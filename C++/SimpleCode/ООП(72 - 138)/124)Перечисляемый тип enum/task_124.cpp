#include <iostream>
#include <string>
#include <fstream>
using namespace std;

class PC{
	public:
		//набо констант
		enum PCState{OFF, ON, SLEEP};
		
		PCState GetState(){
			return State;
		}
		void SetState(PCState State){
			this->State = State;
		}
	private:
		PCState State;
};

int main(){

	PC pc;
	pc.SetState(PC::OFF);
	
	switch(pc.GetState()){
		case PC::ON: cout <<"computer is on"<< endl; break;
		case PC::OFF: cout <<"the computer is turned off"<< endl; break;
		case PC::SLEEP: cout <<"computer in sleep mode"<< endl; break;
	}
	
	return 0;
}
