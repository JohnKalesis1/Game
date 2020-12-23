#include <string>
#include <vector>
class Hero;
class Monster;

class Effect  {
    protected:
        int duration;
        float percentage;
        int stat_affected;
    public:
        Effect();
        Effect(int duration,float percentage,int stat_affected) : duration(duration), percentage(percentage), stat_affected(stat_affected)  {}
        ~Effect();
        bool is_active();
        void reduce_duration();
        int apply_effect(int stat_affected);
};


class Item  {
    protected:
        std::string name;
        int price;
        int lvl_requirement;
    public:
        Item();
        Item(std::string name,int price,int lvl) : name(name), price(price), lvl_requirement(lvl) {}
        virtual ~Item() {}
        int get_lvl_requirement();
        int get_price();
        std::string get_name();
};

class Weapon: public Item  {
    private:
        int damage;
        bool Two_handed;
    public:
        Weapon(std::string name,int price,int lvl,int damage,bool two_handed) : Item(name,price,lvl), damage(damage), Two_handed(two_handed)  {}
        Weapon() {}
        int attack();
        bool Two_handed_weapon();
};

class Armor: public Item  {
    private: 
        int defense;
    public:
        Armor(std::string name,int price,int lvl,int defense) : Item(name,price,lvl), defense(defense) {}
        ~Armor() {}
        int defend();
};

class Potion: public Item  {
    private:
        Effect effect;
    public:
        Potion(std::string name,int price,int lvl,int duration,float percentage);
        ~Potion() {}
        void use(Hero* hero);
};

class Spell  {
    protected:
        std::string name;
        int price;
        int lvl_requirement;
        int mp_usage;
        int avg_damage;
    public:
        Spell(std::string name,int price,int lvl,int mp_usage,int damage) : name(name), price(price), lvl_requirement(lvl), mp_usage(mp_usage), avg_damage(damage)  {}
        void initiate_spell(Monster* monster);
        int get_lvl_requirement();
        int get_price();
        int get_mp_usage();
        std::string get_name();
};

class LigthingSpell: public Spell  {
    protected: 
        Effect effect;
    public:
        LigthingSpell(std::string name,int price,int lvl,int mp_usage,int damage);
};

class IceSpell: public Spell  {
    protected: 
        Effect effect;
    public:
        IceSpell(std::string name,int price,int lvl,int mp_usage,int damage);
};

class FireSpell: public Spell  {
    protected: 
        Effect effect;
    public:
        FireSpell(std::string name,int price,int lvl,int mp_usage,int damage);
};

class LivingBeing  {
    protected:
        std::string name;
        int health_capacity;
        int health;
        int level;
    public:
        LivingBeing(std::string name,int health,int level) : name(name), health(health), level(level) {}
        ~LivingBeing() {}
        std::string get_name();
        int get_health();
        int get_level();
        void die();
        void restore_life(int amount);
};

class Hero: public LivingBeing  {
    protected:
        Armor* armor;
        Weapon* weapon;
        std::vector<Spell*> spells;
        std::vector<Item*> item_box;
        std::vector<Effect> effects;// 0 slot is for strenght, 1 is for dexterity, and 2 is for agility
        int magic_power_capacity;
        int magic_power;
        int strenght;
        int dexterity;
        int agility;
        int money;
        int experience;
    public:
        void display_stats();
        void acces_inventory();
        int get_strenght();
        int get_dexterity();
        int get_agility();
        int get_wealth();
        int get_experience();
        void cast_spell(int spell_selection,Monster* monster);
        void attack(Monster* monster);
        void restore_mp(int amount);
        void increase_exp(int amount);
        void incease_wealth(int amount);
        void level_up();
        void receive_damage(int damage);
        void evade();
        void lose_money();
        void replace_weapon(int weapon_selection);
        void replace_armor(int armor_selection);
        void unequip_armor();
        void use_potion(int potion_selection);
};

class Warrior: public Hero  {
    public:
        Warrior();
        ~Warrior();
};

class Paladin: public Hero  {
    public:
        Paladin();
        ~Paladin();
};

class Sorcerer: public Hero  {
    public:
        Sorcerer();
        ~Sorcerer();
};

class Monster: public LivingBeing  {
    protected:
        std::vector<Effect> effects; //0 slot is for reduced damage,1 is for reduced defense, and 2 is for reduced ecasion chance
        int avg_damage;
        int defense;
        float evasion_chance;
    public:
        void diplay_stats();
        void attack(Hero* hero);
        void evade();
        void receive_damage();
        void receive_debuff(Effect& effect);
};

class Party  {
    public:
        virtual void prepare_for_next_round();
        bool check_fighting_condition();
};

class Hero_Party: public Party {
    private:
        int x_pos;
        int y_pos;
        std::vector<Hero*> heroes;
    public:
        Hero_Party();
        ~Hero_Party();
        void prepare_for_next_round();
        void defeat();
        void victory();
};

class Monster_Party: public Party  {
    private:
        std::vector<Monster*> monsters;
    public:
        Monster_Party(int lvl); 
        ~Monster_Party(); 
};

class Fight  {
    private:
        int round_count;
        int heroes_make_the_first_move;
    public:
        Fight();
        void monsters_turn();
        void heroes_turn();
        void next_round();
        int get_current_round();
};
