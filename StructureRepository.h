

#ifndef STRUCTURE_REPOSITORY_H
#define STRUCTURE_REPOSITORY_H

#include <string>
#include <map>
#include <memory>

#include "CommSingleton.h"
#include "DataStructure.h"

class StructureRepository
{
public:
	StructureRepository();
	~StructureRepository();

	void addStructure(const std::string& structureName, DataStructure* dataStructure);
	void remove(const std::string& structureName);
	void setProjectName(const std::string& projName);

private:

private:
	std::map<std::string, std::unique_ptr<DataStructure>> structureMap;
	std::string projectName;
};

typedef CommSingleton<StructureRepository> CStructureRepository;

#endif // STRUCTURE_REPOSITORY_H
