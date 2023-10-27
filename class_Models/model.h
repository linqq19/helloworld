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
	
	//������Ϣ�༭
	string name() const { return _name; };
	void setName(string name) { _name = name; };
	string description() const { return _description; };
	void setDescription(string description) { _description = description; };


	//�ο�couple�ĺ��������޸ĺ����
	//�����˿ڱ༭
	int inPorts() const { return numIn; };
	int outPorts() const { return numOut; };
	void setInports(int numIn) { numIn = numIn; };
	void setOutports(int numOut) { numOut = numOut; };

	//ϵͳ״̬�༭
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

	//ϵͳ�ṹ�༭
	//������connection��
	vector<Connection*> connection() const { return _connection; };


	//ϵͳ��Ϊ�༭
	
	void clearModel();

public:	
	
	//���ݶ����
	//������Ϣ
	string _name;
	string _description;
	modelType _type;//ԭ��ģ�ͺ����ģ��

	//�����˿�
	int numIn;
	int numOut;
	vector<Port*> _PortsLst;

	//ϵͳ״̬
	vector<Parameter*> _parameters;

	//ϵͳ�ṹ
	Model* _father;
	vector<Model*> _childs;

	//ϵͳ�ṹ
	//connection
	vector<Connection*> _connection;

	//ϵͳ��Ϊ
	//state


	//����ӿ�

};

