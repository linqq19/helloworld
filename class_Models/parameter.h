#pragma once
#include <string>

using namespace std;

//parameter的类型固定 目前包括string 和value
//demo
//Real k = 5;
//Parameter type = Real; name = k ; value = 5

// list 类型可继续完善

class Parameter
{
public:
	Parameter() {};
	Parameter(string name) : _name(name) {};
	Parameter(string name, string description) : _name(name), _description(description) {};

	virtual bool isString() const = 0;
	virtual bool isReal()  const = 0;

	string name() const { return _name; }
	void setName(string name) { _name = name; };
	string description() const { return _description; };
	void setDescription(string description) { _description = description; };

protected:
	string _name;
	string _description;
};


class StringParameter : public Parameter
{
public:
	StringParameter() {}
	StringParameter(string name, string description, string value) : Parameter(name, description), _strValue(value)
	{
	};

	bool isString() const { return true; }
	bool isReal()  const { return false; }

	string strValue() const { return _strValue; }
	void setValue(string s) { _strValue = s; }
protected:
	string _strValue;
};

class RealParameter : public Parameter
{
public:
	RealParameter() {}
	RealParameter(string name, string description, double value) : Parameter(name, description), _dValue(value)
	{
	};
	bool isString() const { return false; }
	bool isReal()  const { return true; }

	double value() const { return _dValue; };
	void setValue(double value) { _dValue = value; };

private:
	double _dValue;
	//可加内容 单位
};
