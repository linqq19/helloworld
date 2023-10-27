#pragma once

#include <string>
#include <vector>
#include "port.h"
#include "parameter.h"
#include "connection.h"
using namespace std;


class Model
{
public:
	Model():
		numIn(0),
		numOut(0),
		_name(string()),
		_description(string())
	{};
	Model(string name, string description) :
		numIn(0),
		numOut(0),
		_name(name),
		_description(description)
	{};
	~Model() {};
	enum modelType { ATOMIC, COUPLED };
	
	//基本信息编辑
	string name() const { return _name; };
	void setName(string name) { _name = name; };
	string description() const { return _description; };
	void setDescription(string description) { _description = description; };


	//参考couple的函数进行修改和添加
	//交互端口编辑
	int inPorts() const { return numIn; };
	int outPorts() const { return numOut; };
	void setInports(int numIn) { numIn = numIn; };
	void setOutports(int numOut) { numOut = numOut; };

	//系统状态编辑
	Model *father() const { return _father; };
	void setfather(Model* father) { _father = father; };

	void addChild(Model* child) { _childs.push_back(child); };
	void removeChild(Model *child);
	unsigned int childIndex(Model *child);
	Model *child(int i) const;
	int childCount() const;
	vector<Model*> getChildList() const { return _childs; }
	void setChildAt(Model* child, int i) { _childs[i] = child; }

	void removeChilds() {};

	//系统结构编辑
	//先完善connection类
	vector<Connection*> connection() const { return _connection; };


	//系统行为编辑
	
	void clearModel();

public:	
	
	//依据定义的
	//基本信息
	string _name;
	string _description;
	modelType _type;//原子模型和耦合模型

	//交互端口
	int numIn;
	int numOut;
	vector<Port*> _PortsLst;

	//系统状态
	vector<Parameter*> _parameters;

	//系统结构
	Model* _father;
	vector<Model*> _childs;

	//系统结构
	//connection
	vector<Connection*> _connection;

	//系统行为
	//state


	//仿真接口

};

