#pragma once
#include <iostream>
#include "Observer.h"
#include "Blog.h"

// instance observer
class CObserverBlog : public CObserver
{
private:
	string m_name;	// observer name
	CBlog *m_pBlog;	// blog list
public:
	CObserverBlog(string name, CBlog *pBlog)
		: m_name(name), m_pBlog(pBlog) {}
	~CObserverBlog() {}
	// get refresh info
	void Update()
	{
		string status = m_pBlog->GetStatus();
		cout <<"name : ,"<<m_name << "status : " << status << endl;
	}
};
