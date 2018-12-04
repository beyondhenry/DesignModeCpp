// code from uml.org.cn
#include "BlogCSDN.h"
#include "ObserverBlog.h"

//test case
int main()
{
	CBlog* pBlog = new CBlogCSDN("BeyondHenry");
	CObserver* pObserver = new CObserverBlog("design mode\n", pBlog);
	pBlog->Attach(pObserver);
	pBlog->SetStatus("design mode_15 -> obeserver mode\n");
	pBlog->Notify();

	delete pBlog;
	delete pObserver;
	
	return 0;
}
