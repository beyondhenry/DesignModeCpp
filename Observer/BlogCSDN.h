#pragma once

#include "Blog.h"

//instance blog class
class CBlogCSDN : public CBlog
{
private:
	string m_name; // bloger name
public:
	CBlogCSDN(string name) : m_name(name) {}
	~CBlogCSDN() {}
	void SetStatus(string s) { m_status = "CSDN notify : " + m_name + s; } // set status information
	string GetStatus() { return m_status; }
};
