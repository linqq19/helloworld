#include "model.h"

void Model::removeChild(Model *child)
{
	unsigned int j = childIndex(child);
	_childs.erase(_childs.begin() + j);
	/*	for (unsigned int i = 0; i < lineCount(); i++) {
		Line *l = lineAt(i);
		if (l->sinkType() == Line::COMPONENT) {
			vector<int> s = l->sinks();
			if (s[0] > j) {
				s[0] = s[0] - 1;
				l->setSink(s);
			}
		}
		if (l->sourceType() == Line::COMPONENT) {
			vector<int> s = l->sources();
			if (s[0] > j) {
				s[0] = s[0] - 1;
				l->setSources(s);
			}
		}
	}*/
}

unsigned int Model::childIndex(Model *child) {
	unsigned int j = 0;
	for (; j < _childs.size(); j++)
	{
		if (_childs.at(j) == child)
		{
			return j;
		}
	}
	return 0;
};

Model *Model::child(int i) const
{
	return _childs[i];
}

int Model::childCount() const
{
	return _childs.size();
}

