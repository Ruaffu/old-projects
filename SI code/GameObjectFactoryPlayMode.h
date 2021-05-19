#pragma once
#include "GameObjectBluePrint.h"
#include "GameObject.h"
#include <vector>

class GameObjectFactoryPlayMode {
public:
	void buildGameObject(GameObjectBluePrint& bp,
		std::vector <GameObject>& gameObject);
};