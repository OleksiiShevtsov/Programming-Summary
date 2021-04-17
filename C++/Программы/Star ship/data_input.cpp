int Score = 0;
inline string add(string add){
	cout <<"name: ";
	cin >>add;
	return add;
}
inline int add(int add){
	Score++;
	if(Score == 4){
		Score = 1;
	}
	switch(Score){
		case 1: 
			cout <<"armor: "; 
			cin >>add;
			while(add<=0 || add>=5000){
				cout <<"0<=armor<=5000"<<endl;
				cout <<"armor: ";
				cin >>add;
			};return add; break;
		case 2:	
			cout <<"health: "; 
			cin >>add;
			while(add<=0 || add>=10000){
				cout <<"0<=health<=10000"<<endl;
				cout <<"health: ";
				cin >>add;
			};return add; break;
		case 3:	
			cout <<"damage: "; 
			cin >>add;
			while(add<=0 || add>=1000){
				cout <<"0<=damage<=1000"<<endl;
				cout <<"damage: ";
				cin >>add;
			};return add; break;
	}
}
