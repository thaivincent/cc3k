module human;

Human::Human(int x, int y): 
        PC(140, 20, 20, 0, x, y) {}

void Human::incGold(Gold g) {
    gold += g.getValue();
}

