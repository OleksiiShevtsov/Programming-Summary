#pragma once
#include <iostream>
#include <string>
using namespace std;
class Worker {
	private:
		string m_firstName;
		string m_secondName;
		string m_position;
	public:
		string GetFullName();

		Worker(const string& m_firstName, const string& m_secondName, const string& m_position);
		Worker(const string& m_firstName, const string& m_secondName);

		string GetPosition() const;
		void SetPosition(const string& m_position);
};