#include "GameObjectBluePrint.h"

float GameObjectBluePrint::getWidth()
{
	return m_Width;
}

void GameObjectBluePrint::setWidth(float width)
{
	m_Width = width;
}

float GameObjectBluePrint::getHeight()
{
	return m_Height;
}

void GameObjectBluePrint::setHeight(float height)
{
	m_Height = height;
}

float GameObjectBluePrint::getLocationX()
{
	return m_LocationX;
}

void GameObjectBluePrint::setLocationX(float locationX)
{
	m_LocationX = locationX;
}

float GameObjectBluePrint::getLocationY()
{
	return m_LocationY;
}

void GameObjectBluePrint::setLocationY(float locationY)
{
	m_LocationY = locationY;
}

void GameObjectBluePrint::setName(string name)
{
	m_Name = "" + name;
}

string GameObjectBluePrint::getName()
{
	return m_Name;
}

vector<string>& GameObjectBluePrint::getComponentList()
{
	return m_ComponentList;
}

void GameObjectBluePrint::addToComponentList(string newComponent)
{
	m_ComponentList.push_back(newComponent);
}

string GameObjectBluePrint::getBitmapName()
{
	return m_BitmapName;
}

void GameObjectBluePrint::setBitmapName(string bitmapName)
{
	m_BitmapName = "" + bitmapName;
}

string GameObjectBluePrint::getEncompassingRectColliderLabel()
{
	return m_EncompassingRectColliderLabel;
}

bool GameObjectBluePrint::getEncompassingRectCollider()
{
	return m_EncompassingRectCollider;
}

void GameObjectBluePrint::setEncompassingRectCollider(string label)
{
	m_EncompassingRectCollider = true;
	m_EncompassingRectColliderLabel = "" + label;
}