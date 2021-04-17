#include <iostream>
#include <string>
using namespace std;

class Msg{
	public:
		Msg(string msg){
			this->msg = msg;
		}
		
		virtual string GetMsg(){
			return msg;
		}
	private:
		string msg;
};

class BraketsMsg : public Msg{
	public:
		BraketsMsg(string msg):Msg(msg){
		}
		
		string GetMsg() override{
			
			//вызов вертуального метода
			//базового класса
			return "(" + ::Msg::GetMsg() + ")";
		}
	private:
		string msg;
};

class Printer{
	public:
		void Print(Msg *msg){
			cout << msg->GetMsg() << endl;
		}
};

int main(){
	
	Msg msg("Hello");
	BraketsMsg braketsMsg("Hello");
	
	Printer printer;
	printer.Print(&braketsMsg);
	
	
	
	
	return 0;
}
