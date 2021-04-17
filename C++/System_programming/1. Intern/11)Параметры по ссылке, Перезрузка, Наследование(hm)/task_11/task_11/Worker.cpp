#include "Worker.h"

string Worker::GetFullName() {
	return m_firstName + " " + m_secondName;
}

Worker::Worker(const string& m_firstName, 
				const string& m_secondName, 
				const string& m_position):
				m_firstName(m_firstName), 
				m_secondName(m_secondName),
				m_position(m_position){}

Worker::Worker(const string& m_firstName, const string& m_secondName) {
	this->m_firstName = m_firstName;
	this->m_secondName = m_secondName;
}

string Worker::GetPosition() const{
	return m_position;
}

void Worker::SetPosition(const string& m_position) {
	this->m_position = m_position;
}
