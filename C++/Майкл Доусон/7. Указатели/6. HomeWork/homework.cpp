//доделать 
#include <iostream>
#include <string>
using namespace std;
string askText(string* pPrompt);
int askNumber(string* pPrompt);
void tellStory(string* pName, string* pNoun, int number, string* pBodyPart, string* pVerd);
int main(){
	cout <<"Welcome to Mad Lid.\n\n";
	cout <<"Answer the following questions to help create a nwe story.\n";
	string text1 = "Please enter a name: ";
	string name = askText(&text1);
	string text2 = "Please enter a plural noun: ";
	string noun = askText(&text2);
	string text3 = "Please enter a numer: ";
	int number = askNumber(&text3);
	string text4 = "Please enter a body part: ";
	string bodyPart = askText(&text4);
	string text5 = "Please enter a verb: ";
	string verb = askText(&text5);
	tellStory(&name, &noun, number, &bodyPart, &verb);
	return 0;
}
string askText(string* pPrompt){
	string text;
	cout <<*pPrompt;
	cin >>text;
	return text;
}
int askNumber(string* pPrompt){
	int num;
	cout <<*pPrompt;
	cin >>num;
	return num;
}
void tellStory(string* pName, string* pNoun, int number, string* pBodyPart, string* pVerd){
	cout <<"\nHere's your story: \n";
	cout <<"The famous explorer ";
	cout <<*pName;
	cout <<"had nearly given up а life-long quest to find\n";
	cout <<"The Lost City of ";
	cout <<*pNoun;
	cout <<"when one day. the ";
	cout <<*pNoun;
	cout <<" found the explorer. \n";
	cout <<"Surrounded №у ";
	cout <<number;
	cout <<" " <<*pNoun;
	cout <<". а tear came to ";
	cout <<*pName<<"'s ";
	cout <<*pBodyPart<<". \n";
	cout <<"After all this time. the quest was finally over. ";
	cout <<"And then. the ";
	cout <<*pNoun <<"\n";
	cout <<"promptly devoured ";
	cout <<*pName<<". ";
	cout <<"The mora l of the story? ¬е са refu l what you ";
	cout <<*pVerd;
	cout <<" for. ";
}
