

#include "StructureRepository.h"

StructureRepository::StructureRepository()
{

}

StructureRepository::~StructureRepository()
{

}

void StructureRepository::addStructure(const std::string &structureName, DataStructure *dataStructure)
{
	auto itor = structureMap.find(structureName);
	if(itor != structureMap.end())
	{
		structureMap.erase(structureName);
	}
	structureMap.insert(std::make_pair(structureName, std::unique_ptr<DataStructure>(dataStructure)));
}

void StructureRepository::remove(const std::string &structureName)
{
	auto itor = structureMap.find(structureName);
	if(itor != structureMap.end())
	{
		structureMap.erase(structureName);
	}
}

void StructureRepository::setProjectName(const std::string &projName)
{
	projectName = projName;
}
