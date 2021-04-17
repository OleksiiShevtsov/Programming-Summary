// ‘ормирует краткую историю на основе пользовательского ввода
// улучшена ссылками 
#include <iostream>
#include <string>
using namespace std;
string askText(const string& prompt);
int askNumber(const string& prompt);
void tellStory(string& name, string& noun, int& number, string& bodyPart, string& verd);
int main(){
	cout <<"Welcome to Mad Lid.\n\n";
	cout <<"Answer the following questions to help create a nwe story.\n";
	string name = askText("Please enter a name: ");
	string noun = askText("Please enter a plural noun: ");
	int number = askNumber("Please enter a numer: ");
	string bodyPart = askText("Please enter a body part: ");
	string verb = askText("Please enter a verb: ");
	tellStory(name, noun, number, bodyPart, verb);
	return 0;
}
string askText(const string& prompt){
	string text;
	cout <<prompt;
	cin >>text;
	return text;
}
int askNumber(const string& prompt){
	int num;
	cout <<prompt;
	cin >>num;
	return num;
}
void tellStory(string& name, string& noun, int& number, string& bodyPart, string& verb){
	cout <<"\nHere's your story: \n";
	cout <<"The famous explorer ";
	cout <<name;
	cout <<"had nearly given up а life-long quest to find\n";
	cout <<"The Lost City of ";
	cout <<noun;
	cout <<"when one day. the ";
	cout <<noun;
	cout <<" found the explorer. \n";
	cout <<"Surrounded №у ";
	cout <<number;
	cout <<" " <<noun;
	cout <<". а tear came to ";
	cout <<name<<"'s ";
	cout <<bodyPart<<". \n";
	cout <<"After all this time. the quest was finally over. ";
	cout <<"And then. the ";
	cout <<noun <<"\n";
	cout <<"promptly devoured ";
	cout <<name<<". ";
	cout <<"The mora l of the story? ¬е са refu l what you ";
	cout <<verb;
	cout <<" for. ";
}

