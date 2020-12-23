#include <string>
#include <list>
#include <set>
#include <vector>
class Hero;
class Monster;



class Effect  {
    protected:
        int duration;
        float percentage;
        int stat_affected;
    public:
        Effect() {}
        Effect(int duration,float percentage,int stat_affected) : duration(duration), percentage(percentage), stat_affected(stat_affected)  {}
        ~Effect() {}
        bool is_active();
        void reduce_duration();
        int apply_effect(int stat_value);
        int get_stat_affected();
};


class Item  {
    protected:
        std::string name;
        int price;
        int lvl_requirement;
    public:
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
        ~Weapon() {}
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
        Potion(std::string name,int price,int lvl,int duration,float percentage,int stat_affected);
        ~Potion() {}
        void use(Hero* hero);
};

class Spell  {
    protected:
        Effect effect;
        std::string name;
        int price;
        int lvl_requirement;
        int mp_usage;
        int avg_damage;
    public:
        Spell(std::string name,int price,int lvl,int mp_usage,int damage) : name(name), price(price), lvl_requirement(lvl), mp_usage(mp_usage), avg_damage(damage)  {}
        virtual ~Spell() {}
        void initiate_spell(Monster* monster);
        int get_lvl_requirement();
        int get_price();
        int get_mp_usage();
        std::string get_name();
};

class LigthingSpell: public Spell  {
    public:
        LigthingSpell(std::string name,int price,int lvl,int mp_usage,int damage);
};

class IceSpell: public Spell  {
    public:
        IceSpell(std::string name,int price,int lvl,int mp_usage,int damage);
};

class FireSpell: public Spell  {
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
        LivingBeing(std::string name,int health,int level) : name(name), health_capacity(health), health(health), level(level) {}
        ~LivingBeing() {}
        std::string get_name();
        int get_health();
        int get_level();
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
        int base_strength;
        int strength;
        int base_dexterity;
        int dexterity;
        int base_agility;
        int agility;
        int money;
        int experience;
    public:
        Hero(std::string name,int health,int magic_power_capacity,int strength,int dexterity,int agility,int money)  : LivingBeing(name,health,1), magic_power_capacity(magic_power), magic_power(magic_power), strength(strength), base_strength(strength), base_dexterity(dexterity), dexterity(dexterity), base_agility(agility), agility(agility), money(money), armor(NULL), weapon(NULL)  {}        
        virtual ~Hero();
        void display_stats();
        void access_inventory();
        int get_magic_power();
        int get_magic_power_capacity();
        int get_strenght();
        int get_dexterity();
        int get_agility();
        int get_wealth();
        int get_experience();
        bool evade();
        bool try_and_level_up();
        void cast_spell(std::string name,Monster* monster);
        void level_up();
        void attack(Monster* monster);
        void restore_mp(int amount);
        void increase_exp(int amount);
        void increase_wealth(int amount);
        void receive_damage(int damage);
        void lose_money(int money);
        void replace_weapon(std::string weapon_name);
        void replace_armor(std::string armor_name);
        void unequip_armor();
        void unequip_weapon();
        void use_potion(int potion_selection);
        void receive_buff(Effect effect);
};

class Warrior: public Hero  {
    public:
        Warrior(std::string name);
        ~Warrior();
};

class Paladin: public Hero  {
    public:
        Paladin(std::string name);
        ~Paladin();
};

class Sorcerer: public Hero  {
    public:
        Sorcerer(std::string name);
        ~Sorcerer();
};

class Monster: public LivingBeing  {
    protected:
        std::vector<Effect> effects; //0 slot is for reduced damage,1 is for reduced defense, and 2 is for reduced ecasion chance
        int avg_damage;
        int defense;
        float evasion_chance;
    public:
        Monster(std::string name,int avg_damage,int defense,int evasion_chance);
        ~Monster();
        void diplay_stats();
        void attack(Hero* hero);
        void evade();
        void receive_damage(int damage);
        void receive_debuff(Effect& effect);
};

class Dragon: public Monster  {
    public:
        Dragon(std::string name);
        ~Dragon();
};

class Exoskeleton: public Monster  {
    public:
        Exoskeleton(std::string name);
        ~Exoskeleton();
};

class Spirit: public Monster  {
    public:
        Spirit(std::string name);
        ~Spirit();
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
        int get_x_position();
        int get_y_position();
        void prepare_for_next_round();
        void defeat();
        void victory();
        void move_up();
        void move_down();
        void move_left();
        void move_right();
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

class Market  {
    private:
        std::list<Item*> items;
    public:
        Market();
        ~Market();
        void buy(Item* item,Hero* hero);
        void sell(Item* item,Hero* hero);
        void browse_wares(Hero* hero);
};

class Block  {
    private:
        bool accesible;
        Market* market;
    public:
        Block(bool accesible,bool market);
        ~Block();
        bool fight_triggered();
        Market& access_market();
};

class Grid  {
    private:
        Block** World;
        Hero_Party hero_party;
        float encounter_chance;
    public:
        Grid(int size);
        ~Grid();
        void print_world();
        void receive_input();
};
