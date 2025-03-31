module decorator;


int Decorator::getAttack() {
    if (statusEffect->modAtk() + decorated_character->getAttack() < 0) {
        return 0;
    } else {
        return statusEffect->modAtk() + decorated_character->getAttack();
    }
}

int Decorator::getDefense() {
    if (statusEffect->modDef() + decorated_character->getDefense() < 0) {
        return 0;
    } else {
        return statusEffect->modDef() + decorated_character->getDefense();
    }
}

Decorator::~Decorator() {
    delete statusEffect;
    delete decorated_character;
}
