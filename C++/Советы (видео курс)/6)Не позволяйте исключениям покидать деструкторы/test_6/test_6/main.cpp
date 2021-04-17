#include <iostream>
#include <vector>
using namespace std;

struct W {
	W() {};
	~W() {
		cout << "~W start" << endl;
		//����� ������
		//throw 1;
		cout << "~W end" << endl;
	};
};
void foo() {
	vector<W> wVec;
	//������ ������ �� n ���������
	wVec.resize(3);
}

//������ �������
struct DBConnection{
	DBConnection(){}
	~DBConnection() {}
	static DBConnection create() {
		DBConnection con;
		return con;
	}
	void close(){
		cout << "close" << endl;
	}
};
struct DBConn {
	DBConn(DBConnection aDb) :mDb(aDb) {}
	~DBConn()
	{
		try {
			mDb.close();
		}
		catch (exception) {
			//log
			//abort();
		}
	}
	DBConnection mDb;
};

void createDB() {
	DBConn db(DBConnection::create());
}

int main() {

	//foo();

	createDB();

	int exit; cin >> exit; return 0;
}