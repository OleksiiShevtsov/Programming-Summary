#include <iostream>
#include <string>

using namespace std;

class Worker {
	private:
		string m_firstName;
		string m_secondName;
		string m_position;
	public:
		string GetFullName() {
			return m_firstName +" "+ m_secondName;
		}

		Worker(string m_firstName, string m_secondName, string m_position) {
			this->m_firstName = m_firstName;
			this->m_secondName = m_secondName;
			this->m_position = m_position;
		}
		Worker(string m_firstName, string m_secondName) {
			this->m_firstName = m_firstName;
			this->m_secondName = m_secondName;
		}

		//гет сет
		string GetPosition() {
			return m_position;
		}
		void SetPosition(string m_position) {
			this->m_position = m_position;
		}
};

int main() {

	Worker worker("Alex", "Shevtsov", "Dev");
	Worker worker2("Alex", "Shevtsov");
	worker2.SetPosition("Devops");
	cout << "position: " << worker2.GetPosition() << endl;
	cout <<"full name: "<< worker.GetFullName() << endl;
	cout << "full name: " << worker2.GetFullName() << endl;
	return 0;
}