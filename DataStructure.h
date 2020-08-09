

#ifndef DATA_STRUCTURE_H
#define DATA_STRUCTURE_H

#include <string>
#include <map>
#include <vector>

enum class FieldType
{
	INT			= 1,
	BIGINT		= 2,
	VARCHAR		= 3,
	CHAR		= 4,
	DATETIME	= 5,
};

enum class KeyType
{
	PK			= 1,	// 主键
	UK			= 2,	// 唯一键
	MK			= 3,	// 不唯一键
};

struct Field
{
	std::string		fieldName;
	FieldType		type;
	bool			canBeNull;
	bool			autoIncrement;
	std::string		defaultValue;
};

struct DataKey
{
	std::string filedName;	// 联合键时以|分隔字段
	std::string keyName;
	KeyType		type;
};

class DataStructure
{
public:
	DataStructure();
	~DataStructure();

	void addField(const std::string& fieldName, const Field& field);
	void addKey(const DataKey& key);

private:

private:
	std::map<std::string, Field>	fieldMap;
	std::vector<DataKey>			keyList;
};

#endif // DATA_STRUCTURE_H
