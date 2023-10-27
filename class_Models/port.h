#pragma once

#include <vector>

using namespace std;


//demo:input flange flow<SI.Angle,SI.Torque>
//type = input
//name = flange
//SignalPort
//signal vector=<SI.Angle,SI.Torque>

//端口类型可继续完善

class Port
{
public:
	Port() {}
	Port(int type, string name, string desc) :
		_name(name),
		_desc(desc)
	{
	}
	//端口类型
	virtual bool isEvent() const = 0;
	virtual bool isSignal()  const = 0;
	virtual bool isCoupledSignal()  const = 0;


	//编辑端口基本信息
	enum portType { INPUT, OUTPUT };
	portType type() const { return _type; }
	void setType(portType type) { _type = type; };
	string name() const { return _name; }
	string desc() const { return _desc; }

	//编辑传输内容

protected:
	//端口基本信息
	portType _type;
	string _name;
	string _desc;
};

class EventPort :public Port
{
public:
	bool isEvent() const { return true; }
	bool isSignal()  const { return false; }
	bool isCoupledSignal() const { return false; }

	string messagename() { return _messagename; }
	void setmessagename(string name) { _messagename = name; }

protected:
	//端口传输内容
	string _messagename;
};

class SignalPort :public Port
{
public:
	bool isEvent() const { return false; }
	bool isSignal()  const { return true; }
	bool isCoupledSignal() const { return false; }

	string signalname() const{ return _signalname; }
	void setsignalname(string name) { _signalname = name; }

protected:
	//端口传输内容
	string _signalname;

};

class CoupledSignalPort : public Port
{
public:
	bool isEvent() const { return false; }
	bool isSignal()  const { return false; }
	bool isCoupledSignal() const { return true; }

	vector<string> signal() const {return _signal; }
	//add
	//remove
	//clear
	//at

protected:
	vector<string> _signal;
};

