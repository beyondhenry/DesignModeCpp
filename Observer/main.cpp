// code from uml.org.cn
#include "BlogCSDN.h"
#include "ObserverBlog.h"

//test case
int main()
{
	CBlog *blog = new CBlogCSDN("BeyondHenry");
	CObserver *observer = new CObserverBlog("design mode\n", blog);
	blog->Attach(observer);
	blog->SetStatus("design mode_15 -> obeserver mode\n");
	blog->Notify();

	delete blog;
	delete observer;
	
	return 0;
}
