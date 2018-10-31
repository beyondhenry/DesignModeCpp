// code from uml.org.cn
#include <iostream>
#include <list>
#include <string>

using namespace std;
// Observer
class Observer
{
public:
	Observer() {}
	virtual ~Observer() {}
	virtual void Update() {}
};

// Blog
class Blog
{
public:
	Blog() {}
	virtual ~Blog() {}
	void Attach(Observer *observer) { m_observers.push_back(observer); }	// add Oberver
	void Remove(Observer *observer) { m_observers.remove(observer); }		// remove Observer
	void Notify() // Notify Observer
	{
		list<Observer*>::iterator iter = m_observers.begin();
		for (; iter != m_observers.end(); iter++)
			(*iter)->Update();
	}
	virtual void SetStatus(string s) { m_status = s; }	// set status
	virtual string GetStatus() { return m_status; }		// get status
private:
	list<Observer* > m_observers; // observer list
protected:
	string m_status; // status
};

//instance blog class
class BlogCSDN : public Blog
{
private:
	string m_name; // bloger name
public:
	BlogCSDN(string name) : m_name(name) {}
	~BlogCSDN() {}
	void SetStatus(string s) { m_status = "CSDN notify : " + m_name + s; } // set status information
	string GetStatus() { return m_status; }
};

// instance observer
class ObserverBlog : public Observer
{
private:
	string m_name;	// observer name
	Blog *m_blog;	// blog list
public:
	ObserverBlog(string name, Blog *blog) : m_name(name), m_blog(blog) {}
	~ObserverBlog() {}
	void Update()	// get refresh info
	{
		string status = m_blog->GetStatus();
		cout << m_name << "-------" << status << endl;
	}
};

//test case
int main()
{
	Blog *blog = new BlogCSDN("BeyondHenry");
	Observer *observer = new ObserverBlog("design mode", blog);
	blog->Attach(observer);
	blog->SetStatus("design mode_15 -> obeserver mode\n");
	blog->Notify();
	delete blog;
	delete observer;
	return 0;
}
