#include "Title.h"
#include "../../../GameObject/GameObjectFactory.h"

Title::Title()
    : Scene()
{
}

Title::~Title() = default;

void Title::awake() {
    GameObjectCreater::create("Plane");
}
