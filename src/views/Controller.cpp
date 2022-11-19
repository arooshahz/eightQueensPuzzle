#include "Controller.h"

Controller::Controller(Game *game): game(game) {
    setFlags(GraphicsItemFlag::ItemIsFocusable);
    setFocus();


}

