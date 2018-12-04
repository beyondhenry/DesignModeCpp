#pragma once

#include "Blog.h"

//instance blog class
class CBlogCSDN : public CBlog
{
private:
	string m_name; // bloger name
public:
	CBlogCSDN(string name)
	: m_name(name) {}
	~CBlogCSDN() {}

	// set status information
	void SetStatus(string s)
	{
		m_status = "CSDN notify : " + m_name + s;
	}

	string GetStatus()
	{
		return m_status;
	}
};
