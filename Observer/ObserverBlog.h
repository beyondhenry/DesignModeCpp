#pragma once
#include <iostream>
#include "Observer.h"
#include "Blog.h"

// instance observer
class CObserverBlog : public CObserver
{
private:
	string m_name;	// observer name
	CBlog *m_blog;	// blog list
public:
	CObserverBlog(string name, CBlog *blog) : m_name(name), m_blog(blog) {}
	~CObserverBlog() {}
	void Update()	// get refresh info
	{
		string status = m_blog->GetStatus();
		cout << m_name << "-------" << status << endl;
	}
};
