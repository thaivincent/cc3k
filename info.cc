export module info;

export enum class Type {Gold,Potion,BS,Compass,Orc,Elf,Dwarf,Human,Phoenix,Werewolf,Vampire,Goblin, Troll, Dragon, Merchant};

export struct Info{
    Type type;
    int x,y;
};
