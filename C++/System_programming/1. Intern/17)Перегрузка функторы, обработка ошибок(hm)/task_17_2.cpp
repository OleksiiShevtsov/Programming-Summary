#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;
class FileContent{
	public:

		string f = "txt";
};

bool ParseFile(FileContent& fileContent){
	if(fileContent.f == "txt"){
		return true;
	}else{
		return false;
	}
}

int  main()
{
	  FileContent fileContent;
	  
	  fileContent.f = "";
	  
	  if(!ParseFile(fileContent)){
	  	cout <<"Please use correct file name"<< endl;
	  	return -1;
	  }
}
