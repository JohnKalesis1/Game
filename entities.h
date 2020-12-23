#include <string>
#include <list>
#include <vector>
class Hero;
class Monster;


namespace {
    std::string hero_names[]={"Abbathor","Aerdrie Faenya","Arvoreen","Baervan Wildwanderer","Baravar Cloakshadow","Berronar Truesilver","Brandobaris","Callarduran Smoothha",nds"Charmalaine","Clangeddin Silverbea",rd"Corellon Larethian","Cyrrollalee","Deep Sashelas","Dugmaren Brightmantl",e"Dumathoin","Ehlonna","Erevan Ilesere","Fenmarel Mestarine","Fharlanghn","Flandal Steelskin","Gadhelyn","Gaerdal Ironhand","Garl Glittergold","Gendwar Argrim","Halani Celanil","Heironeous","Labelas Enoreth","Moradin","Muamman Duathal","Olidammara","Pelor","Rillifane Rallathil","Roykyn","Segojan Earthcaller","Sehanine Moonbow","Sheela Peryroyl","Solonor Thelandira","St. Cuthbert","Urdlen","Urogalan","Vergadain","Ye'Cind","Yondalla","Annam","Bahamut","Blibdoolpoolp","Diirinka","Eadro","Gruumsh","Hruggek","Ilsensine","Jubilex","Kurtulmak","Laduguer","Loagzed","Lolth","Maglubiyet","Merrshaulk","Orcus","Sekolah","Semuanya","Shekinester","Skerrit","Stronmaus","Tiamat","Vaprak","Yeenoghu","Aasterinian","Bagrivyek","Bahgtru","Chronepsis","Doresain","Falazure","Gaknulak","Grankhul","Great Mother","Grolantor","Hiatea","Iallanis","Ilneval","Io","Karontor","Kiaransalee","Khurgorbaeyag","Luthic","Memnor","Nomog-Geaya","Panzuriel","Raxivort","Shargaas","Sixin","Skoraeus Stonebones","Squerrik","Surtr","Thrym","Vhaeraun","Yurtrus","Zinzerena"};
    std::string potion_names[]={"Potion","Hi-Potion","X-Potion","Mega-Potion","Ether","Turbo Ether","Elixir","Megalixir","Phoenix Down","Mega Phoenix","Antidote","Echo Screen","Eye Drops","Holy Water","Remedy","Soft","Al Bhed Potion","Healing Water","Tetra Elemental","Candle of Life","Dream Powder","Farplane Shadow","Farplane Wind","Frag Grenade","Silence Grenade","Sleeping Powder","Smoke Bomb","Petrify Grenade","Poison Fang","Blessed Gem","Dark Matter","Shadow Gem","Shining Gem","Supreme Gem","Gold Hourglass","Healing Spring","Light Curtain","Lunar Curtain","Mana Spring","Mana Tablet","Mana Tonic","Purifying Salt","Silver Hourglass","Soul Spring","Stamina Spring","Stamina Tablet","Stamina Tonic","Star Curtain","Three Stars","Twin Stars","Ability Distiller","Amulet","Designer Wallet","Door to Tomorrow","Gambler's Spirit","Hypello Potion","Mana Distiller","Map","Musk","Pendulum","Power Distiller","Shining Thorn","Speed Distiller","Underdog's Secret","Wings to Discovery","Winning Formula"};
    std::string spell_names[]={"Flame","Torch","Eruption","Flare","Blaze","Inferno","Fireball","Explosion","Meteor","Salamander’s Blade","Dragon Fire","Sinkhole","Pit","Chasm","Vine","Thorn","Nettle","Rockfall","Landslide","Avalanche","Chill","Freeze","Frostbite","Douse","Deluge","Flood","Wave","Surge","Tsunami","Nyad’s Lore","Sleep","Slumber","Shock","Bolt","Plasma","Gust","Gale","Tempest","Whirlwhind","Cyclone","Vortex","Wyvern’s Wings","Daze","Stun","Confuse","Light","Flash","Radiance","Cleanse","Scour","Purge","Wrath","Retribution","Judgment","Angel’s Mercy","Darkness","Shade","Gloom","Decay","Fester","Corrupt","Spite","Rancor","Malice","Demon’s Rage","Drain","Siphon","Void","Bolt Strike","Freeze Wave","Inferno Blaze","Channel Energy","Shadow Blade","Heaven's Sword","Blazing Katana","Staff of Ice","Arrow of Purity","Blazing Arrows","Burn the Soul","Fire Wings","Fury of Osano-Wo","Gaijin Flames","Hungry Blade","Yakamo’s Wrath","Yakamo’s Eye","Breath of Suitengu","The Inner Ocean","Surging Soul","Endless Depth","Kharmic Intent","Whispered Blade"};
    std::string weapon_names[]={"Caladbolg","Taming Sword","Crystal Sword","Excalibur","Ragnarok","Balmung","Save the Queen","Heartbreaker","Lionheart","Durandal","Ascalon","Ambitious","Hrunting","Astral Sword","Apocalypse","Slowstrike","Master Sword","Rune-Master","Warlock","Arc Sword","Gilventure","Tri-Steel","Helter-Skelter","Vendetta","Avenger","Prism Steel","Mirage Sword","Lifesaver","Sonic Steel","Vigilante","Dance Macabre","Largamente","Gravestone","Sidewinder","Nightmare","Mage Masher","Nightbringer","Knight Sword","Wizard Sword","Double-Edge","Razzmatazz","Deathbringer","Stunning Steel","Basilisk Steel","Poison Steel","Lullaby Steel","Muted Steel","Twilight Steel","Hunter's Sword","Flametongue","Ice Brand","Lightning Steel","Force Saber","Baroque Sword","Sorcery Sword","Soldier's Saber","Rune Steel","Enchanted Sword","Fencing Saber","Slasher","Nirvana","Herding Staff","Arc Arcana","Abraxas","Heavenly Axis","Judgment","Seraphim Rod","Rod of Roses","Nimbus Rod","Wing Wand","Wonder Wand","Laevatein","Astral Rod","Chaos Rod","Power Staff","Shining Staff","Faerie Staff","Magistral Rod","El Dorado","Tri-Rod","Wicked Wand","Nemesis Rod","Defender","Prism Rod","Mirage Rod","Healing Rod","Wind Rod","Conductor","Punisher","Calcite Staff","Bizarre Staff","Staff of Thorns","Reticent Staff","Darkness Staff","Monk Staff","Mage's Staff","Dual Rod","Ominous Rod","Death Wand","Entangling Rod","Break Rod","Belladonna Wand","Lullaby Rod","Rod of Silence","Rod of Darkness","Rod of Wisdom","Rod of Fire","Rod of Ice","Rod of Lightning","Rod of Water","Malleable Staff","Force Rod","Ductile Rod","Sorcery Rod","Full Metal Rod","Rune Rod","Enchanted Rod","Rod of Striking","Spiked Rod"};
    std::string armor_names[]={"Genji Shield","Emblem","Crystal Shield","Aegis Shield","Golem Shield","Revive Shield","Rescue Shield","Paladin Shield","Diamond Shield","Ruby Shield","Dynasty Shield","Magister Shield","Collector's Shield","Treasure Shield","Shield of Hope","Assault Shield","Phantom Shield","Recovery Shield","Spiritual Shield","Phoenix Shield","Curative Shield","Rainbow Shield","Shining Shield","Faerie Shield","Peaceful Shield","Shaman Shield","Barrier Shield","Star Shield","Marching Shield","Moon Shield","Regen Shield","Haste Shield","Reflect Shield","Protect Shield","Shell Shield","Platinum Shield","Sapphire Shield","Knight's Shield","Wizard Shield","Elemental Shield","Defending Shield","Crimson Shield","Snow Shield","Ochre Shield","Cerulean Shield","Medical Shield","Lucid Shield","Serene Shield","Light Shield","Soul Shield","Blessed Shield","Soft Shield","Serum Shield","Alert Shield","Echo Shield","Bright Shield","Red Shield","White Shield","Yellow Shield","Blue Shield","NulTide Shield","NulBlaze Shield","NulFrost Shield","Adept's Shield","Tetra Shield","Mythril Shield","Gold Shield","Emerald Shield","Soldier's Shield","Mage's Shield","Silver Shield","Onyx Shield","Sorcery Shield","Warrior's Shield","Glorious Shield","Metal Shield","Pearl Shield","Magic Shield","Seeker's Shield"};
};


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
        int apply_effect(int stat_value);
        int get_stat_affected();
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
        Hero(std::string name,int magic_power_capacity,int strength,int dexterity,int agility,int money);
        ~Hero();
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
        void receive_damage();
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
