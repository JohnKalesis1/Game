#include <string>
#include <list>
#include <vector>
class Hero;
class Monster;
class Fight;



class Effect  {
    protected:
        int duration;
        float percentage;
        int stat_affected;
    public:
        Effect() : duration(-1) {}
        Effect(int duration,float percentage,int stat_affected) : duration(duration), percentage(percentage), stat_affected(stat_affected)  {}
        ~Effect() {}
        bool is_active();
        void reduce_duration();
        int apply_effect(int stat_value);
        int get_stat_affected();
        int get_duration();
        float get_percentage();
};


class Item  {
    protected:
        std::string name;
        short type_of_item;//0 is for Weapon, 1 is for Armor, 2 is for Potion
        int price;
        int lvl_requirement;
    public:
        Item(std::string name,int price,int lvl,int type) : name(name), price(price), lvl_requirement(lvl), type_of_item(type) {}
        virtual ~Item() {}
        int get_lvl_requirement();
        int get_price();
        short get_type_of_item();
        std::string get_name();
};

class Weapon: public Item  {
    private:
        int damage;
        bool Two_handed;
    public:
        Weapon(std::string name,int price,int lvl,int damage,bool two_handed) : Item(name,price,lvl,0), damage(damage), Two_handed(two_handed)  {}
        ~Weapon() {}
        int attack();
        bool Two_handed_weapon();
};

class Armor: public Item  {
    private: 
        int defense;
    public:
        Armor(std::string name,int price,int lvl,int defense) : Item(name,price,lvl,1), defense(defense) {}
        ~Armor() {}
        int defend();
};

class Potion: public Item  {
    private:
        int boost;
        short type_of_potion;//0 is for health, 1 is for magic power,2 is for strength, 3 is for dexterity, 4 is for agility 
    public:
        Potion(std::string name,int price,int lvl,int boost,int type_of_potion) : Item(name,price,lvl,2), type_of_potion(type_of_potion), boost(boost) {}
        ~Potion() {}
        short get_type_of_potion();
        int get_boost();
        void use(Hero* hero);
};

class Spell  {
    protected:
        Effect effect;
        std::string name;
        short spell_type;//0 is for LigthingSpell, 1 is for FireSpell, 2 is for IceSpell
        int price;
        int lvl_requirement;
        int mp_usage;
        int avg_damage;
    public:
        Spell(std::string name,int price,int lvl,int mp_usage,int damage,int spell_type) : name(name), price(price), lvl_requirement(lvl), mp_usage(mp_usage), avg_damage(damage) ,spell_type(spell_type) {}
        virtual ~Spell() {}
        int initiate_spell(Monster* monster,int dexterity);
        int get_lvl_requirement();
        int get_price();
        int get_mp_usage();
        int get_power();
        short get_type_of_spell();
        std::string get_name();
        Effect& get_effect();
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
        int get_health_capacity();
        int get_level();
        void restore_life(int amount);
};

class Hero: public LivingBeing  {
    protected:
        Armor* armor;
        Weapon* weapon;
        std::list<Spell*> spells;
        std::list<Item*> item_box;
        bool turn;
        short hero_type;//0 is for Warrior, 1 is for Paladin, 2 is for Sorcerer
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
        float evasion_chance;
    public:
        Hero(std::string name,int health,int magic_power_capacity,int strength,int dexterity,int agility,int money,short hero_type);
        virtual ~Hero();
        bool display_stats();
        bool display_inventory();
        std::list<Item*>& get_item_box();
        std::list<Spell*>& get_spells();
        Weapon* get_equipped_weapon();
        Armor* get_equipped_armor();
        bool& get_turn();
        short get_hero_type();
        int get_magic_power();
        int get_magic_power_capacity();
        int get_strength();
        int get_dexterity();
        int get_agility();
        int get_wealth();
        int get_experience();
        bool evade();
        bool try_and_level_up();
        int cast_spell(Spell* spell,Monster* monster);
        void level_up();
        void set_turn_to(bool status);
        int attack(Monster* monster);
        void restore_mp(int amount);
        void increase_exp(int amount);
        void increase_wealth(int amount);
        int receive_damage(int damage);
        void lose_money(int money);
        bool replace_weapon(Weapon* weapon);
        bool replace_armor(Armor* armor);
        void unequip_armor();
        void unequip_weapon();
        void use_potion(Potion* potion);
        void receive_buff(short stat_affected,int boost);
        Item* remove_item(std::string name);
        void acquire_item(Item* item);
        Spell* remove_spell(std::string name);
        void acquire_spell(Spell* spell);
        bool receive_input(char input);
        bool show_availabe_weapons_and_promt_for_swap(bool* turn=NULL,std::string* action=NULL);
        bool show_availabe_armors_and_promt_for_swap(bool* turn=NULL,std::string* action=NULL);
        bool show_availabe_potions_and_promt_for_use(bool* turn=NULL,std::string* action=NULL);
        bool show_availabe_spells_and_promt_for_activation(bool* turn,std::string* action,std::string* result,Fight* fight);
};

class Warrior: public Hero  {
    public:
        Warrior(std::string name);
        ~Warrior() {}
};

class Paladin: public Hero  {
    public:
        Paladin(std::string name);
        ~Paladin() {}
};

class Sorcerer: public Hero  {
    public:
        Sorcerer(std::string name);
        ~Sorcerer() {}
};

class Monster: public LivingBeing  {
    protected:
        std::vector<Effect> effects; //0 slot is for reduced damage,1 is for reduced defense, and 2 is for reduced ecasion chance
        int avg_damage;
        int defense;
        short monster_type;//0 is for Dragon, 1 is for Exoskeleton, 2 is for Spirit
        float evasion_chance;
    public:
        Monster(std::string name,int avg_damage,int defense,int evasion_chance,int lvl,short monster_type);
        virtual ~Monster();
        bool display_stats();
        int attack(Hero* hero);
        bool evade();
        short get_monster_type();
        int receive_damage(int damage);
        void receive_debuff(Effect& effect);
        void round_passes();
};

class Dragon: public Monster  {
    public:
        Dragon(std::string name,int lvl);
        ~Dragon() {}
};

class Exoskeleton: public Monster  {
    public:
        Exoskeleton(std::string name,int lvl);
        ~Exoskeleton() {}
};

class Spirit: public Monster  {
    public:
        Spirit(std::string name,int lvl);
        ~Spirit() {}
};

class Hero_Party {
    private:
        short hero_in_control;
        int x_pos;
        int y_pos;
        std::vector<Hero*> heroes;
    public:
        Hero_Party(int starting_x_pos,int starting_y_pos,int number_of_heroes);
        ~Hero_Party();
        int get_number_of_heroes();
        int get_heroes_level();
        int get_x_position();
        int get_y_position();
        bool in_fighting_condition();
        bool heroes_turn();
        void prepare_for_next_round();
        void defeat();
        void victory();
        void move_up();
        void move_down();
        void move_left();
        void move_right();
        void switch_hero();
        void receive_input(char input);
        Hero* get_hero(int n);
        Hero* get_hero_in_control();
};

class Monster_Party {
    private:
        std::vector<Monster*> monsters;
    public:
        Monster_Party();
        Monster_Party(int lvl,int number_of_monsters); 
        ~Monster_Party(); 
        void prepare_for_next_round();
        void attack_heroes(Hero_Party& Hero_Party);
        bool in_fighting_condition();
        Monster* get_monster(int i);
        void victory();
};

class Fight  {
    private:
        Monster_Party* monster_party;
        Hero_Party* hero_party;
        int round_count;
    public:
        Fight(Hero_Party* hero_party);
        ~Fight();
        Monster* show_available_targets();
        void print_battle(std::string action_message,std::string result_message,bool wait_for_input);
        void monsters_turn();
        void heroes_turn();
        void next_round();
        void display_hero_stats();
        void display_monster_stats();
};

class Market  {
    private:
        std::list<Item*> items;
        std::list<Spell*> spells;
        bool visited;
    public:
        Market(int number_of_items_to_generate);
        ~Market();
        std::string buy_item(std::string item_name,Hero* hero);
        std::string sell_item(std::string item_name,Hero* hero);
        std::string buy_spell(std::string spell_name,Hero* hero);
        std::string sell_spell(std::string spell_name,Hero* hero);
        void browse_wares(Hero_Party* hero_party);
        void receive_input(char input);
        bool has_been_visited();
};

class Block  {
    private:
        bool accessible;
        Market* market;
    public:
        Block() {};
        Block(bool accesible,bool market);
        ~Block();
        bool is_accessible();
        bool is_a_market();
        bool has_been_visited();
        void set_to_non_accessible();
        Market& access_market();
        int get_store_number();
};

class Grid  {
    private:
        Block*** World;
        Hero_Party* hero_party;
        Fight* fight;
        int size;
        int hero_vision;
        float encounter_chance;
    public:
        Grid(int size,int number_of_heroes);
        ~Grid();
        bool fight_triggered();
        void print_world(bool blocked_passage,bool wrong_action);
        void receive_input();
};
