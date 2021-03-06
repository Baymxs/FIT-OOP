//
// Created by Bayramov Nidjat on 28.11.18.
//

#ifndef LAB_3_SFMLCREATOR_H
#define LAB_3_SFMLCREATOR_H

#include "../ViewCreator.h"
#include "../View.h"
#include "../Views/SFMLView/SFMLView.h"

class SFMLCreator : public ViewCreator {
    View* create(BattleShipModel *battleShipModel) override {
        return new SFMLView(battleShipModel);
    }
};

#endif //LAB_3_SFMLCREATOR_H
