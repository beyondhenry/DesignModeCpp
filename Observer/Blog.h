#pragma once
#include <string>
#include <list>
#include "Observer.h"

using namespace std;
// Blog
class CBlog
{
public:
	CBlog() {}
	virtual ~CBlog() {}
	void Attach(CObserver *observer) { m_observers.push_back(observer); }	// add Oberver
	void Remove(CObserver *observer) { m_observers.remove(observer); }		// remove Observer
	void Notify() // Notify Observer
	{
		list<CObserver*>::iterator iter = m_observers.begin();
		for (; iter != m_observers.end(); iter++)
			(*iter)->Update();
	}
	virtual void SetStatus(string s) { m_status = s; }	// set status
	virtual string GetStatus() { return m_status; }		// get status
private:
	list<CObserver* > m_observers; // observer list
protected:
	string m_status; // status
};

