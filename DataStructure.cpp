

#include "DataStructure.h"


DataStructure::DataStructure()
{

}

DataStructure::~DataStructure()
{

}

void DataStructure::addField(const std::string &fieldName, const Field &field)
{
	auto itor = fieldMap.find(fieldName);
	if(itor != fieldMap.end())
	{
		fieldMap.erase(fieldName);
	}
	fieldMap.insert(std::make_pair(fieldName, field));
}

void DataStructure::addKey(const DataKey &key)
{
	keyList.push_back(key);
}
