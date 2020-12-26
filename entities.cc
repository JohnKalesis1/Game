//#include "entities.h"
//#include <stdlib.h>
//#include <iostream>
#include <string>
#include <list>
#include <vector>
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include "entities.h"

int main(int args,char *argv[])  {
    Grid* game=new Grid(atoi(argv[1]),atoi(argv[2]));
    game->receive_input();
    delete game;
}

static int quit_game=false;

float series(int recursion,int agility)  {
    if (recursion==agility)  {
        return 0;
    }
    else  {
        return 1.0/(float)recursion+2*series(recursion+1,agility);
    }
}

int high_stat_random_value()  {
    return 0;
}

int low_stat_random_value()  {
    return 0;
}

int high_attack_random_value()  {
    return 0;
}

int low_attack_random_value()  {
    return 0;
}

int high_defense_random_value()  {
    return 0;
}

int low_defense_random_value()  {
    return 0;    
}

float high_evasion_random_value()  {
    return 0.0;
}

float low_evasion_random_value()  {
    return 0.0;    
}

int get_random_number_of_wares()  {
    return 10;
}

int get_pseudo_random_level()  {
    return 1+rand()%2;
}

float get_encounter_chance()  {
    return 0.0;
}

int get_weapon_attack(int level,bool two_handed)  {
    return 0;
}

int get_armor_defense(int level)  {
    return 0;    
}

int get_gear_price(int level)  {
    return 0;
}
int get_potion_effect(int level,int type)  {
    return 0;    
}

int get_weapon_armor_price(int level)  {
    return 0;
}

int get_potion_price(int level)  {
    return 1;
}

int get_spell_price(int level)  {
    return 4;
}

int get_spell_mp_cost(int level)  {
    return 0;
}

int get_spell_damage(int level,int mp_cost)  {
    return 0;
}

int damage_value(int average_damage)  {
    return 9*(average_damage/10.0)+rand()%(average_damage);
}

bool check_number(std::string str) {
    for (int i = 0; i < str.length(); i++)  {
        if (isdigit(str[i]) == false)  {
            return false;
        }
    }
    return true;
}

namespace name_pool {
    std::string hero_names[98]={"Abbathor","Aerdrie Faenya","Arvoreen","Baervan Wildwanderer","Baravar Cloakshadow","Berronar Truesilver","Brandobaris","Callarduran Smoothhands","Charmalaine","Clangeddin Silverbeard","Corellon Larethian","Cyrrollalee","Deep Sashelas","Dugmaren Brightmantle","Dumathoin","Ehlonna","Erevan Ilesere","Fenmarel Mestarine","Fharlanghn","Flandal Steelskin","Gadhelyn","Gaerdal Ironhand","Garl Glittergold","Gendwar Argrim","Halani Celanil","Heironeous","Labelas Enoreth","Moradin","Muamman Duathal","Olidammara","Pelor","Rillifane Rallathil","Roykyn","Segojan Earthcaller","Sehanine Moonbow","Sheela Peryroyl","Solonor Thelandira","St. Cuthbert","Urdlen","Urogalan","Vergadain","Ye'Cind","Yondalla","Annam","Bahamut","Blibdoolpoolp","Diirinka","Eadro","Gruumsh","Hruggek","Ilsensine","Jubilex","Kurtulmak","Laduguer","Loagzed","Lolth","Maglubiyet","Merrshaulk","Orcus","Sekolah","Semuanya","Shekinester","Skerrit","Stronmaus","Tiamat","Vaprak","Yeenoghu","Aasterinian","Bagrivyek","Bahgtru","Chronepsis","Doresain","Falazure","Gaknulak","Grankhul","Great Mother","Grolantor","Hiatea","Iallanis","Ilneval","Io","Karontor","Kiaransalee","Khurgorbaeyag","Luthic","Memnor","Nomog-Geaya","Panzuriel","Raxivort","Shargaas","Sixin","Skoraeus Stonebones","Squerrik","Surtr","Thrym","Vhaeraun","Yurtrus","Zinzerena"};
    std::string monster_names[102]={"Insane Daoist","A not so evil monster","Hellman","Tainthound","Dustfiend","Nethertree","The Grim Wraith","The Blissful Corpse","The Disgusting Phenomenon","The Amphibian Razor Hyena","The Grisly Ash Fiend","The Grisly Thunder Anaconda","Vileling","Plagueling","Stenchgolem","Fetidling","The Agitated Mumbler","The Dangerous Wraith","The Blissful Anomaly","The Brutal Berserker Gargoyle","The Grisly Vampire Lynx","The Tattooed Storm Bison","Vortexsnake","Abysssnake","Brineserpent","Acidfigure","The Monstrous Weirdo","The Ancient Tree","The Mad Shrieker","The Greater Ash Lion","The Elusive Killer Buffalo","The Raging Demon Drake","Blightwing","Cavernfoot","Cavehound","Wisphound","The Anguished Screamer","The Empty Brute","The Grumpy Lich","The Feathered Phantom Pig","The Vicious Hunting Owl","The Greater Warp Rat","Vilecreep","Plaguehand","Spectralteeth","Wispmask","The Defiant Horror","The Haunting Screamer","The Brown Plant","The Mad Tomb Buffalo","The Scarred Mist Cobra","The Ivory Blaze Freak","Corpsesnake","Gloomgolem","Cloudscreamer","Foulteeth","The Muted Vision","The Blind Ooze","The Bold Tumor","The Feathered Tomb Dragon","The Vicious Bane Crocodile","The Bloodthirsty Ash Bat","Nightsword","Infernotooth","Plaguecrackle","Smokefreak","The Canine Ooze","The Undead Phenomenon","The Wretched Behemoth","The Fiery Demon Bull","The Crimson Killer Viper","The Long-Horned Razor Scorpion","Gallghoul","Grievehood","Murkboy","Smogwing","The Disfigured Creeper","The Quiet Plant","The Active Weirdo","The Burnt Corpse Cobra","The Taloned Rot Crocodile","The Savage Slayer Hippo","Gallwings","Mournspawn","Mistflayer","Umbrawings","The Aged Ooze","The White Deviation","The Bronze Abnormality","The Ruthless Bone Bison","The Titanium Vampire Elephant","The Feral Harlequin Vermin","Nethercat","Smogstep","Thorntalon","Chaosbody","The Bold Ooze","The Brown Miscreation","The Barren Weirdo","The Tattooed Phantom Leviathan","The Painted Tomb Crocodile","The Burnt Raptor Warthog"};
    std::string potion_names[66]={"Potion","Hi-Potion","X-Potion","Mega-Potion","Ether","Turbo Ether","Elixir","Megalixir","Phoenix Down","Mega Phoenix","Antidote","Echo Screen","Eye Drops","Holy Water","Remedy","Soft","Al Bhed Potion","Healing Water","Tetra Elemental","Candle of Life","Dream Powder","Farplane Shadow","Farplane Wind","Frag Grenade","Silence Grenade","Sleeping Powder","Smoke Bomb","Petrify Grenade","Poison Fang","Blessed Gem","Dark Matter","Shadow Gem","Shining Gem","Supreme Gem","Gold Hourglass","Healing Spring","Light Curtain","Lunar Curtain","Mana Spring","Mana Tablet","Mana Tonic","Purifying Salt","Silver Hourglass","Soul Spring","Stamina Spring","Stamina Tablet","Stamina Tonic","Star Curtain","Three Stars","Twin Stars","Ability Distiller","Amulet","Designer Wallet","Door to Tomorrow","Gambler's Spirit","Hypello Potion","Mana Distiller","Map","Musk","Pendulum","Power Distiller","Shining Thorn","Speed Distiller","Underdog's Secret","Wings to Discovery","Winning Formula"};
    std::string spell_names[91]={"Flame","Torch","Eruption","Flare","Blaze","Inferno","Fireball","Explosion","Meteor","Salamander’s Blade","Dragon Fire","Sinkhole","Pit","Chasm","Vine","Thorn","Nettle","Rockfall","Landslide","Avalanche","Chill","Freeze","Frostbite","Douse","Deluge","Flood","Wave","Surge","Tsunami","Nyad’s Lore","Sleep","Slumber","Shock","Bolt","Plasma","Gust","Gale","Tempest","Whirlwhind","Cyclone","Vortex","Wyvern’s Wings","Daze","Stun","Confuse","Light","Flash","Radiance","Cleanse","Scour","Purge","Wrath","Retribution","Judgment","Angel’s Mercy","Darkness","Shade","Gloom","Decay","Fester","Corrupt","Spite","Rancor","Malice","Demon’s Rage","Drain","Siphon","Void","Bolt Strike","Freeze Wave","Inferno Blaze","Channel Energy","Shadow Blade","Heaven's Sword","Blazing Katana","Staff of Ice","Arrow of Purity","Blazing Arrows","Burn the Soul","Fire Wings","Fury of Osano-Wo","Gaijin Flames","Hungry Blade","Yakamo’s Wrath","Yakamo’s Eye","Breath of Suitengu","The Inner Ocean","Surging Soul","Endless Depth","Kharmic Intent","Whispered Blade"};
    std::string weapon_names[119]={"Caladbolg","Taming Sword","Crystal Sword","Excalibur","Ragnarok","Balmung","Save the Queen","Heartbreaker","Lionheart","Durandal","Ascalon","Ambitious","Hrunting","Astral Sword","Apocalypse","Slowstrike","Master Sword","Rune-Master","Warlock","Arc Sword","Gilventure","Tri-Steel","Helter-Skelter","Vendetta","Avenger","Prism Steel","Mirage Sword","Lifesaver","Sonic Steel","Vigilante","Dance Macabre","Largamente","Gravestone","Sidewinder","Nightmare","Mage Masher","Nightbringer","Knight Sword","Wizard Sword","Double-Edge","Razzmatazz","Deathbringer","Stunning Steel","Basilisk Steel","Poison Steel","Lullaby Steel","Muted Steel","Twilight Steel","Hunter's Sword","Flametongue","Ice Brand","Lightning Steel","Force Saber","Baroque Sword","Sorcery Sword","Soldier's Saber","Rune Steel","Enchanted Sword","Fencing Saber","Slasher","Nirvana","Herding Staff","Arc Arcana","Abraxas","Heavenly Axis","Judgment","Seraphim Rod","Rod of Roses","Nimbus Rod","Wing Wand","Wonder Wand","Laevatein","Astral Rod","Chaos Rod","Power Staff","Shining Staff","Faerie Staff","Magistral Rod","El Dorado","Tri-Rod","Wicked Wand","Nemesis Rod","Defender","Prism Rod","Mirage Rod","Healing Rod","Wind Rod","Conductor","Punisher","Calcite Staff","Bizarre Staff","Staff of Thorns","Reticent Staff","Darkness Staff","Monk Staff","Mage's Staff","Dual Rod","Ominous Rod","Death Wand","Entangling Rod","Break Rod","Belladonna Wand","Lullaby Rod","Rod of Silence","Rod of Darkness","Rod of Wisdom","Rod of Fire","Rod of Ice","Rod of Lightning","Rod of Water","Malleable Staff","Force Rod","Ductile Rod","Sorcery Rod","Full Metal Rod","Rune Rod","Enchanted Rod","Rod of Striking","Spiked Rod"};
    std::string armor_names[79]={"Genji Shield","Emblem","Crystal Shield","Aegis Shield","Golem Shield","Revive Shield","Rescue Shield","Paladin Shield","Diamond Shield","Ruby Shield","Dynasty Shield","Magister Shield","Collector's Shield","Treasure Shield","Shield of Hope","Assault Shield","Phantom Shield","Recovery Shield","Spiritual Shield","Phoenix Shield","Curative Shield","Rainbow Shield","Shining Shield","Faerie Shield","Peaceful Shield","Shaman Shield","Barrier Shield","Star Shield","Marching Shield","Moon Shield","Regen Shield","Haste Shield","Reflect Shield","Protect Shield","Shell Shield","Platinum Shield","Sapphire Shield","Knight's Shield","Wizard Shield","Elemental Shield","Defending Shield","Crimson Shield","Snow Shield","Ochre Shield","Cerulean Shield","Medical Shield","Lucid Shield","Serene Shield","Light Shield","Soul Shield","Blessed Shield","Soft Shield","Serum Shield","Alert Shield","Echo Shield","Bright Shield","Red Shield","White Shield","Yellow Shield","Blue Shield","NulTide Shield","NulBlaze Shield","NulFrost Shield","Adept's Shield","Tetra Shield","Mythril Shield","Gold Shield","Emerald Shield","Soldier's Shield","Mage's Shield","Silver Shield","Onyx Shield","Sorcery Shield","Warrior's Shield","Glorious Shield","Metal Shield","Pearl Shield","Magic Shield","Seeker's Shield"};
    std::string get_random_hero_name() {
        return hero_names[rand()%98];
    }
    std::string get_random_monster_name() {
        std::string possible_names[100];
        int possibility_counter=0;
        for (int i=0;i<100;i++)  {
            if (monster_names[i].compare("-")!=0)  {
                possible_names[possibility_counter]=monster_names[i];
                possibility_counter++;
            }
        }
        if (possibility_counter==0)  {
            return NULL;
        }
        int choice=rand()%possibility_counter;
        std::string to_return=possible_names[choice];
        for (int i=0;i<100;i++)  {
            if (monster_names[i].compare(to_return)==0)  {
                monster_names[i]="-";
                break;
            }
        }    
        return to_return;
    }
    std::string get_random_potion_name() {
        std::string possible_names[66];
        int possibility_counter=0;
        for (int i=0;i<66;i++)  {
            if (potion_names[i].compare("-")!=0)  {
                possible_names[possibility_counter]=potion_names[i];
                possibility_counter++;
            }
        }
        int choice=rand()%possibility_counter;
        std::string to_return=possible_names[choice];
        for (int i=0;i<66;i++)  {
            if (potion_names[i].compare(to_return)==0)  {
                potion_names[i]="-";
                break;
            }
        }    
        return to_return;
    }
    std::string get_random_spell_name() {
        std::string possible_names[91];
        int possibility_counter=0;
        for (int i=0;i<91;i++)  {
            if (spell_names[i].compare("-")!=0)  {
                possible_names[possibility_counter]=spell_names[i];
                possibility_counter++;
            }
        }
        int choice=rand()%possibility_counter;
        std::string to_return=possible_names[choice];
        for (int i=0;i<91;i++)  {
            if (spell_names[i].compare(to_return)==0)  {
                spell_names[i]="-";
                break;
            }
        }    
        return to_return;
    }
    std::string get_random_weapon_name() {
        std::string possible_names[119];
        int possibility_counter=0;
        for (int i=0;i<119;i++)  {
            if (weapon_names[i].compare("-")!=0)  {
                possible_names[possibility_counter]=weapon_names[i];
                possibility_counter++;
            }
        }
        int choice=rand()%possibility_counter;
        std::string to_return=possible_names[choice];
        for (int i=0;i<119;i++)  {
            if (weapon_names[i].compare(to_return)==0)  {
                weapon_names[i]="-";
                break;
            }
        }    
        return to_return;
    }
    std::string get_random_armor_name() {
        std::string possible_names[79];
        int possibility_counter=0;
        for (int i=0;i<79;i++)  {
            if (armor_names[i].compare("-")!=0)  {
                possible_names[possibility_counter]=armor_names[i];
                possibility_counter++;
            }
        }
        int choice=rand()%possibility_counter;
        std::string to_return=possible_names[choice];
        for (int i=0;i<79;i++)  {
            if (armor_names[i].compare(to_return)!=0)  {
                armor_names[i]="-";
                break;
            }
        }    
        return to_return;
    }
    void re_entry(std::string name)  {
        for (int i=0;i<100;i++)  {
            if (monster_names[i].compare("-")==0)  {
                monster_names[i]=name;
                return ;
            }
        }
    }
};

//////////////////////////////////////////////////////Effect///////////////////////////////////////////

bool Effect::is_active() {
    if (duration>0)  {
        return true;
    }
    else  {
        return false;
    }
}

void Effect::reduce_duration()  {
    duration--;
}

int Effect::apply_effect(int stat_value)  {
    return (int)((1.0+percentage)*((float)stat_value));
}

int Effect::get_stat_affected()  {
    return stat_affected;
}

int Effect::get_duration()  {
    return duration;
}

float Effect::get_percentage()  {
    return percentage;
}

//////////////////////////////////////////////////////Item////////////////////////////////////////////

int Item::get_lvl_requirement()  {
    return lvl_requirement;
}

int Item::get_price()  {
    return price;
}

std::string Item::get_name()  {
    return name;
}

short Item::get_type_of_item()  {
    return type_of_item;
}


/////////////////////////////////////////////////////Potion/////////////////////////////////////////

int Weapon::attack()  {
    return damage;
}

bool Weapon::Two_handed_weapon()  {
    return Two_handed;
}


//////////////////////////////////////////////////////Armor///////////////////////////////////////////

int Armor::defend()  {
    return defense;
}


//////////////////////////////////////////////////////Potion///////////////////////////////////////////////////////////////////

void Potion::use(Hero* hero)  {
    hero->receive_buff(type_of_potion,boost);
}

short Potion::get_type_of_potion()  {
    return type_of_potion;
}

int Potion::get_boost()  {
    return boost;
}

//////////////////////////////////////////////////////Spell//////////////////////////////////////////////

void Spell::initiate_spell(Monster* monster,int dexterity)  {
    monster->receive_damage(avg_damage+dexterity);
    monster->receive_debuff(effect);
}

int Spell::get_lvl_requirement()  {
    return lvl_requirement;
}

int Spell::get_price()  {
    return price;
}

int Spell::get_mp_usage()  {
    return mp_usage;
}

int Spell::get_power()  {
    return avg_damage;
}

std::string Spell::get_name()  {
    return name;
}

short Spell::get_type_of_spell()  {
    return spell_type;
}

Effect& Spell::get_effect()  {
    return effect;
}

//////////////////////////////////////////////////////LigthingSpell//////////////////////////////////////

LigthingSpell::LigthingSpell(std::string name,int price,int lvl,int mp_usage,int damage) : Spell(name,price,lvl,mp_usage,damage,0) {
    effect=Effect(0,0,2);
}

//////////////////////////////////////////////////////IceSpell//////////////////////////////////////////

IceSpell::IceSpell(std::string name,int price,int lvl,int mp_usage,int damage) : Spell(name,price,lvl,mp_usage,damage,2) {
    effect=Effect(0,0,0);
}

//////////////////////////////////////////////////////FireSpell////////////////////////////////////////

FireSpell::FireSpell(std::string name,int price,int lvl,int mp_usage,int damage) : Spell(name,price,lvl,mp_usage,damage,1) {
    effect=Effect(0,0,1);
}


//////////////////////////////////////////////////////LivingBeing///////////////////////////////////////

std::string LivingBeing::get_name()  {
    return name;
}

int LivingBeing::get_health()  {
    return health;
}

int LivingBeing::get_health_capacity()  {
    return health_capacity;
}

int LivingBeing::get_level()  {
    return level;
}

void LivingBeing::restore_life(int amount)  {
    if (health+amount>=health_capacity)  {
        health=health_capacity;
    }
    else  {
        health=health+amount;
    }
}


//////////////////////////////////////////////////////Hero//////////////////////////////////////////////

Hero::Hero(std::string name,int health,int magic_power_capacity,int strength,int dexterity,int agility,int money)  : LivingBeing(name,health,1), magic_power_capacity(magic_power), magic_power(magic_power), strength(strength), base_strength(strength), base_dexterity(dexterity), dexterity(dexterity), base_agility(agility), agility(agility), money(money)  { 
    bool two_handed=((rand()%10)<5);
    weapon=new Weapon(name_pool::get_random_weapon_name(),get_gear_price(1),1,get_weapon_attack(1,two_handed),two_handed);
    acquire_item(weapon);
    if (!two_handed)  {
        armor=new Armor(name_pool::get_random_armor_name(),get_gear_price(1),1,get_armor_defense(1));
        acquire_item(armor);
    }
} 

Hero::~Hero()  {
    while (item_box.size()!=0)  {
        std::list<Item*>::iterator it=item_box.begin();
        Item* to_delete=it.operator*();
        item_box.erase(it);
        delete to_delete;
    }
    while (spells.size()!=0)  {
        std::list<Spell*>::iterator it2=spells.begin();
        Spell* to_delete=it2.operator*();
        spells.erase(it2);
        delete to_delete;
    }
}

int Hero::get_magic_power()  {
    return magic_power;
}

int Hero::get_magic_power_capacity()  {
    return magic_power_capacity;
}

int Hero::get_strength()  {
    return strength;
}

int Hero::get_dexterity()  {
    return dexterity;

}

int Hero::get_agility()  {
    return agility;

}

int Hero::get_wealth()  {
    return money;
}

int Hero::get_experience()  {
    return experience;
}

Weapon* Hero::get_equipped_weapon()  {
    return weapon;
}

Armor* Hero::get_equipped_armor()  {
    return armor;
}

std::list<Item*>& Hero::get_item_box()  {
    return item_box;
}

std::list<Spell*>& Hero::get_spells()  {
    return spells;
}

bool Hero::evade()  {
    float evasion_chance=series(5,agility);
    float random_float=(float)rand()/(float)RAND_MAX;
    if (random_float<evasion_chance)  {
        return true;
    }
    else  {
        return false;
    }
}

bool Hero::try_and_level_up()  {
    bool flag=false;
    while (experience>=((((float)level)/10.0)+1)*1000)  {
        experience=experience-((((float)level)/10.0)+1)*1000;
        level_up();
        flag=true;
    }
    return flag;
}

void Hero::cast_spell(std::string spell_name,Monster* monster)  {
    std::list<Spell*>::iterator it=spells.begin();
    for (int i=0;i<spells.size();i++)  {
        if (it.operator*()->get_name().compare(spell_name)==0)  {
            it.operator*()->initiate_spell(monster,dexterity);
            return ;
        }
        else  {
            std::advance(it,1);
        }
    }  

}

void Hero::level_up()  {
    level++;
    agility=(int)(((float)(level-1))/10.0+1)*base_agility;
    strength=(int)(((float)(level-1))/10.0+1)*base_strength;
    dexterity=(int)(((float)(level-1))/10.0+1)*base_dexterity;
    health_capacity=(int)(((float)(level-1))/10.0+1)*400;
    magic_power_capacity=(int)(((float)(level-1))/10.0+1)*100;
}

void Hero::attack(Monster* monster)  {
    monster->receive_damage(weapon->attack()+strength);
}

void Hero::restore_mp(int amount)  {
    if (magic_power+amount>=magic_power_capacity)  {
        magic_power=magic_power_capacity;
    }
    else  {
        magic_power=magic_power+amount;
    }
}

void Hero::increase_exp(int amount)  {
    experience=experience+amount;
}

void Hero::increase_wealth(int amount)  {
    money=money+amount;
}

void Hero::receive_damage(int damage)  {
    if (evade())  {

    }
    else  {
        if (armor==NULL)  {
            health=health-damage;
        }
        else  {
            if (damage>armor->defend())  {
                health=health+armor->defend()-damage;
            }
        }
    }
}

void Hero::lose_money(int amount)  {
    money=money-amount;
}

bool Hero::replace_weapon(Weapon* weapon)  {
    this->weapon=weapon;
    if ((this->weapon)->Two_handed_weapon())  {
        unequip_armor();
        return true;
    }
    return false;
}

bool Hero::replace_armor(Armor* armor)  {
    this->armor=armor;
    if (weapon->Two_handed_weapon())  {
        unequip_weapon();
        return true;
    }
    return false;
}

void Hero::unequip_weapon()  {
    weapon=NULL;
}

void Hero::unequip_armor()  {
    armor=NULL;
}

void Hero::use_potion(Potion* potion)  {
    potion->use(this);
    Item* to_delete=remove_item(potion->get_name());
    delete to_delete;
}

void Hero::receive_buff(short stat_affected,int boost)  {
    switch (stat_affected)
    {
    case 0:
        restore_life(boost);
        break;
    case 1:
        restore_mp(boost);
        break;
    case 2:
        strength=strength+boost;
        break;
    case 3:
        dexterity=dexterity+boost;
        break;
    case 4:
        agility=agility+boost;
        break;
    default:
        break;
    }
}

Item* Hero::remove_item(std::string name)  {
    std::list<Item*>::iterator it=item_box.begin();
    for (int i=0;i<item_box.size();i++)  {
        if (it.operator*()->get_name().compare(name)==0)  {
            Item* item=it.operator*();
            item_box.erase(it);
            return item;
        }
        else  {
            std::advance(it,1);
        }
    }
    return NULL;
}

void Hero::acquire_item(Item* item)  {
    item_box.insert(item_box.begin(),item);
}

Spell* Hero::remove_spell(std::string name)  {
    std::list<Spell*>::iterator it=spells.begin();
    for (int i=0;i<spells.size();i++)  {
        if (it.operator*()->get_name().compare(name)==0)  {
            Spell* spell=it.operator*();
            spells.erase(it);
            return spell;
        }
        else  {
            std::advance(it,1);
        }
    }
    return NULL;
}

void Hero::acquire_spell(Spell* spell)  {
    spells.insert(spells.begin(),spell);
}

void Hero::receive_input(char input)  {
    switch (input)  {
        case 'i'://check inventory
            display_inventory();
            break;
        case 'z'://equip weapon
            show_availabe_weapons_and_promt_for_swap();
            break;
        case 'x'://equip armor
            show_availabe_armors_and_promt_for_swap();
            break;
        case 'c'://use a potion
            show_availabe_potions_and_promt_for_use();
            break;
        default:
            break;
    }
}


void Hero::show_availabe_weapons_and_promt_for_swap()  {
    bool wrong_action=false;
    bool underleveled=false;
    bool already_equipped=false;
    bool successfully_equipped=false;
    bool unequipped_armor=false;
    std::string weapon_equipped;
    while (true)  {
        std::list<Item*>::iterator it=item_box.begin();
        system("clear");
        std::cout << "Hero name: " << name << " Lvl." << level << " Gold: "<<money <<'\n';
        Weapon* choices[item_box.size()];
        int weapons_count=0;
        std::cout << "Weapons:\n";
        for (int i=0;i<item_box.size();i++)  {
            if (it.operator*()->get_type_of_item()==0)  {
                Weapon* weapon_candidate=(Weapon*)it.operator*();
                std::cout << weapons_count+1 <<"." << weapon_candidate->get_name();
                choices[weapons_count]=weapon_candidate;
                weapons_count++;
                if (weapon!=NULL)  {
                    if (weapon->get_name().compare(weapon_candidate->get_name())==0)  {
                        std::cout << "(Equipped)";
                    }
                }
                std::cout << '\n';
                std::cout <<" Attack: "<<weapon_candidate->attack()<<'\n';
                std::cout <<" Level: "<<weapon_candidate->get_lvl_requirement()<<'\n';
                std::cout <<" Price: "<<weapon_candidate->get_price()/2<<'\n';
                if (weapon_candidate->Two_handed_weapon())  {
                    std::cout <<" Note: Weapon must be used two-handed\n";
                }
            }
            std::advance(it,1);
        }
        std::cout << "\nSelect which weapon you want to equip:\n";
        for (int i=0;i<weapons_count;i++)  {
            std::cout << i+1 <<"->"<<choices[i]->get_name();
            if (weapon->get_name().compare(choices[i]->get_name())==0)  {
                std::cout << "(Equipped)";
            }
            if (choices[i]->get_lvl_requirement()>level)  {
                std::cout << "(Level "<<choices[i]->get_lvl_requirement() <<" required)";
            }
            std::cout << '\n';
        }
        std::cout <<"(Armor category: c) (Go Back: b) (Quit game: q)\n";
        std::string input;
        if (wrong_action)  {
            std::cout<< "Option not valid. ";
            wrong_action=false;
        }
        if (underleveled)  {
            std::cout << "Hero does not meet the requirements to use the weapon. ";
            underleveled=false;
        }
        if (already_equipped)  {
            std::cout<< "Weapon is already eqquiped. ";
            already_equipped=false;
        }
        if (successfully_equipped)  {
            if (unequipped_armor)  {
                std::cout << weapon_equipped<<"(Two-handed) successfully equipped. Armor has been unequipped. ";
            }
            else  {
                std::cout << weapon_equipped<<" successfully equipped. ";
            }
            successfully_equipped=false;
            unequipped_armor=false;
        }
        std::cout << "Please enter an action:";
        std::cin >> input; 
        if (check_number(input))  {
            int pick=atoi(input.c_str())-1;
            if (pick<weapons_count && pick>=0)  {
                if (choices[pick]->get_lvl_requirement()<=level)  {
                    if (choices[pick]->get_name().compare(weapon->get_name())==0)  {
                        already_equipped=true;
                        continue;
                    }
                    else  {
                        weapon_equipped=choices[pick]->get_name();
                        unequipped_armor=replace_weapon(choices[pick]);
                        successfully_equipped=true;
                        continue;
                    }
                }
                else  {
                    underleveled=true;
                    continue;
                }
            }
            else  {
                wrong_action=true;
                continue;
            }
        }
        else  {
            if (input.compare("q")==0)  {
                quit_game=true;
                return;
            }
            else if (input.compare("b")==0)  {
                return;
            }
            else if (input.compare("c")==0)  {
                show_availabe_armors_and_promt_for_swap();
                return;
            }
            else  {
                wrong_action=true;
                continue;
            }
        }
    }
}

void Hero::show_availabe_armors_and_promt_for_swap()  {
    bool wrong_action=false;
    bool underleveled=false;
    bool already_equipped=false;
    bool successfully_equipped=false;
    bool weapon_unequipped=false;
    std::string armor_equipped;
    while (true)  {
        std::list<Item*>::iterator it=item_box.begin();
        system("clear");
        std::cout << "Hero name: " << name << " Lvl." << level << " Gold: "<<money <<'\n';
        Armor* choices[item_box.size()];
        int armors_count=0;
        std::cout << "Armors:\n";
        for (int i=0;i<item_box.size();i++)  {
            if (it.operator*()->get_type_of_item()==1)  {
                Armor* armor_candidate=(Armor*)it.operator*();
                std::cout << armors_count+1 <<"." << armor_candidate->get_name();
                choices[armors_count]=armor_candidate;
                armors_count++;
                if (!weapon->Two_handed_weapon())  {
                    if (armor->get_name().compare(armor_candidate->get_name())==0)  {
                        std::cout << "(Equipped)";
                    }
                }
                std::cout << '\n';
                std::cout <<" Defense: "<<armor_candidate->defend()<<'\n';
                std::cout <<" Level: "<<armor_candidate->get_lvl_requirement()<<'\n';
                std::cout <<" Price: "<<armor_candidate->get_price()/2<<'\n';
            }
            std::advance(it,1);
        }
        std::cout << "\nSelect which armor you want to equip: ";
        if (weapon->Two_handed_weapon())  {
            std::cout << "(Be advised, equipping any armor will unequipped your current Two-handed weapon)";
        }
        std::cout << '\n';
        for (int i=0;i<armors_count;i++)  {
            std::cout << i+1<<"->"<<choices[i]->get_name();
            if (armor->get_name().compare(choices[i]->get_name())==0)  {
                std::cout << "(Equipped)";
            }
            if (choices[i]->get_lvl_requirement()>level)  {
                std::cout << "(Level "<<choices[i]->get_lvl_requirement() <<" required)";
            }
            std::cout << '\n';
        }
        std::cout <<"(Weapons category: c) (Go Back: b) (Quit game: q)\n";
        std::string input;
        if (wrong_action)  {
            std::cout<< "Option not valid. ";
            wrong_action=false;
        }
        if (underleveled)  {
            std::cout << "Hero does not meet the requirements to use the armor. ";
            underleveled=false;
        }
        if (already_equipped)  {
            std::cout<< "Armor is already eqquiped. ";
            already_equipped=false;
        }
        if (successfully_equipped)  {
            if (weapon_unequipped)  {
                std::cout << armor_equipped<<" successfully equipped. Two-handed weapon has been unequipped. ";
            }
            else  {
                std::cout << armor_equipped<<" successfully equipped. ";
            }
            weapon_unequipped=false;
            successfully_equipped=false;

        }
        std::cout << "Please enter an action:";
        std::cin >> input; 
        if (check_number(input))  {
            int pick=atoi(input.c_str())-1;
            if (pick<armors_count && pick>=0)  {
                if (choices[pick]->get_lvl_requirement()<=level)  {
                    if (choices[pick]->get_name().compare(armor->get_name())==0)  {
                        already_equipped=true;
                        continue;
                    }
                    else  {
                        armor_equipped=choices[pick]->get_name();
                        weapon_unequipped=replace_armor(choices[pick]);
                        successfully_equipped=true;
                        continue;
                    }
                }
                else  {
                    underleveled=true;
                    continue;
                }
            }
            else  {
                wrong_action=true;
                continue;
            }
        }
        else  {
            if (input.compare("q")==0)  {
                quit_game=true;
                return;
            }
            else if (input.compare("b")==0)  {
                return;
            }
            else if (input.compare("c")==0)  {
                show_availabe_weapons_and_promt_for_swap();
                return;
            }
            else  {
                wrong_action=true;
                continue;
            }
        }
    }
}

void Hero::show_availabe_potions_and_promt_for_use()  {
    bool wrong_action=false;
    bool underleveled=false;
    bool already_equipped=false;
    while (true)  {
        std::list<Item*>::iterator it=item_box.begin();
        system("clear");
        std::cout << "Hero name: " << name << " Lvl." << level << " Gold: "<<money <<'\n';
        Potion* potion_choices[item_box.size()];
        int potions_count=0;
        std::cout << "Potions:\n";
        Potion* potion;
        for (int i=0;i<item_box.size();i++)  {
            if (it.operator*()->get_type_of_item()==2)  {
                potion=(Potion*)it.operator*();
                std::cout << potions_count+1 <<"." << potion->get_name() <<"(Potion)";
                potion_choices[potions_count]=potion;
                potions_count++;
                std::cout << '\n';
                std::cout <<" Effect: \n";
                switch (((Potion*)potion)->get_type_of_potion())  {
                    case 0:
                        std::cout << "Restore "<<potion->get_boost() <<" health\n";
                        break;
                    case 1:
                        std::cout << "Restore "<<potion->get_boost() <<" magic power\n";
                        break;
                    case 2:
                        std::cout << "Increase strength by "<<potion->get_boost() <<'\n';
                        break;
                    case 3:
                        std::cout << "Increase dexterity by "<<potion->get_boost() <<'\n';
                        break;
                    case 4:
                        std::cout << "Increase agility by "<<potion->get_boost() <<'\n';
                        break;
                    default :
                        break;
                }
                std::cout <<" Level: "<<potion->get_lvl_requirement()<<'\n';
                std::cout <<" Price: "<<potion->get_price()/2<<'\n';
                std::advance(it,1);
            }
        }
        if (potions_count==0)  {
            std::cout << "No potions available for use\n";
        }  
        else  {
            std::cout << "\nSelect which potion you want to use:\n";
            for (int i=0;i<potions_count;i++)  {
                std::cout << i+1 <<"->"<<potion_choices[i]->get_name();
                if (potion_choices[i]->get_lvl_requirement()>level)  {
                    std::cout << "(Level "<< potion_choices[i]->get_lvl_requirement() <<" required)";
                }
                std::cout << '\n';
            }
        }
        std::cout <<"(Go Back: b) (Quit game: q)\n";
        std::string input;
        if (wrong_action)  {
            std::cout<< "Option not valid. ";
            wrong_action=false;
        }
        if (underleveled)  {
            std::cout << "Hero does not meet the requirements to use the potion. ";
            underleveled=false;
        }
        std::cout << "Please enter an action:";
        std::cin >> input; 
        if (check_number(input))  {
            int pick=atoi(input.c_str())-1;
            if (pick<potions_count && pick>=0)  {
                if (potion_choices[pick]->get_lvl_requirement()<=level)  {
                    use_potion(potion_choices[pick]);
                    return;
                }
                else  {
                    underleveled=true;
                }
            }
            else  {
                wrong_action=true;
                continue;
            }
        }
        else  {
            if (input.compare("q")==0)  {
                quit_game=true;
                return;
            }
            else if (input.compare("b")==0)  {
                return;
            }
            else  {
                wrong_action=true;
                continue;
            }
        }
    }
}

void Hero::display_inventory()  {
    bool wrong_action=false;
    bool underleveled=false;
    bool item_or_spell=true;
    while (true)  {
        if (item_or_spell)  {
            std::list<Item*>::iterator it=item_box.begin();
            system("clear");
            std::cout << "Hero name: " << name << " Lvl." << level << " Gold: "<<money <<'\n';
            Item* item_choices[item_box.size()];
            int items_count=0;
            std::cout << "Items:\n";
            Item* item;
            for (int i=0;i<item_box.size();i++)  {
                if (it.operator*()->get_type_of_item()==0)  {
                    item=it.operator*();
                    std::cout << i+1 <<"." << item->get_name()<<"(Weapon)";
                    item_choices[items_count]=item;
                    items_count++;
                    std::cout << '\n';
                    std::cout <<" Attack: "<<((Weapon*)item)->attack()<<'\n';
                    std::cout <<" Level: "<<item->get_lvl_requirement()<<'\n';
                    std::cout <<" Price: "<<item->get_price()/2<<'\n';
                    if (((Weapon*)item)->Two_handed_weapon())  {
                        std::cout <<" Note: Weapon must be used two-handed\n";
                    }
                }
                if (it.operator*()->get_type_of_item()==1)  {
                    item=it.operator*();
                    std::cout << i+1 <<"." << item->get_name()<<"(Armor)";
                    item_choices[items_count]=item;
                    items_count++;
                    std::cout << '\n';
                    std::cout <<" Defense: "<<((Armor*)item)->defend()<<'\n';
                    std::cout <<" Level: "<<item->get_lvl_requirement()<<'\n';
                    std::cout <<" Price: "<<item->get_price()/2<<'\n';
                }
                if (it.operator*()->get_type_of_item()==2)  {
                    item=it.operator*();
                    std::cout << i+1 <<"." << item->get_name() <<"(Potion)";
                    item_choices[items_count]=item;
                    items_count++;
                    std::cout << '\n';
                    std::cout <<" Effect: \n";
                    switch (((Potion*)item)->get_type_of_potion())  {
                        case 0:
                            std::cout << "Restore "<<((Potion*)item)->get_boost() <<" health\n";
                            break;
                        case 1:
                            std::cout << "Restore "<<((Potion*)item)->get_boost() <<" magic power\n";
                            break;
                        case 2:
                            std::cout << "Increase strength by "<<((Potion*)item)->get_boost() <<'\n';
                            break;
                        case 3:
                            std::cout << "Increase dexterity by "<<((Potion*)item)->get_boost() <<'\n';
                            break;
                        case 4:
                            std::cout << "Increase agility by "<<((Potion*)item)->get_boost() <<'\n';
                            break;
                        default :
                            break;
                    }
                    std::cout <<" Level: "<<item->get_lvl_requirement()<<'\n';
                    std::cout <<" Price: "<<item->get_price()/2<<'\n';
                }
                std::advance(it,1);
            }
            std::cout <<"(Spells category: c) (Go Back: b) (Quit game: q)\n";
            if (wrong_action)  {
                std::cout<< "Option not valid. ";
                wrong_action=false;
            }
            std::string input;
            std::cout << "Please enter an action:";
            std::cin >> input; 
            if (input.compare("q")==0)  {
                quit_game=true;
                return;
            }
            else if (input.compare("b")==0)  {
                return;
            }
            else if (input.compare("c")==0)  {
                item_or_spell=false;
                continue;
            }
            else  {
                wrong_action=true;
                continue;
            }
        }
        else  {//check spells category
            std::list<Spell*>::iterator it2=spells.begin();
            Spell* spell_choices[spells.size()];
            system("clear");
            std::cout << "Hero name: " << name << " Lvl." << level << " Gold: "<<money <<'\n';
            int spells_count=0;
            std::cout << "Spells:\n";
            Spell* spell;
            for (int i=0;i<spells.size();i++)  {
                if (it2.operator*()->get_type_of_spell()==0)  {
                    spell=it2.operator*();
                    std::cout << i+1 <<"." << spell->get_name()<<"(Ligthing Spell)";
                    spell_choices[spells_count]=spell;
                    spells_count++;
                    std::cout << '\n';
                    std::cout <<" Average Damage: "<<spell->get_power()<<'\n';
                    std::cout << "Effect: Reduced evasion chance by "<<spell->get_effect().get_percentage() <<" for "<< spell->get_effect().get_duration() <<" rounds\n";
                    std::cout <<" Level: "<<spell->get_lvl_requirement()<<'\n';
                    std::cout <<" Price: "<<spell->get_price()/2<<'\n';
                }
                if (it2.operator*()->get_type_of_spell()==1)  {
                    spell=it2.operator*();
                    std::cout << i+1 <<"." << spell->get_name()<<"(Fire Spell)";
                    spell_choices[spells_count]=spell;
                    spells_count++;
                    std::cout << '\n';
                    std::cout <<" Average Damage: "<<spell->get_power()<<'\n';
                    std::cout << "Effect: Reduced defense by "<<spell->get_effect().get_percentage() <<" for "<< spell->get_effect().get_duration() <<" rounds\n";
                    std::cout <<" Level: "<<spell->get_lvl_requirement()<<'\n';
                    std::cout <<" Price: "<<spell->get_price()/2<<'\n';
                }
                if (it2.operator*()->get_type_of_spell()==2)  {
                    spell=it2.operator*();
                    std::cout << i+1 <<"." << spell->get_name() <<"(Ice Spell)";
                    spell_choices[spells_count]=spell;
                    spells_count++;
                    std::cout << '\n';
                    std::cout << "Average Damage: "<<spell->get_power() <<'\n';
                    std::cout << "Effect: Reduced attack by "<<spell->get_effect().get_percentage() <<" for "<< spell->get_effect().get_duration() <<" rounds\n";
                    std::cout <<" Level: "<<spell->get_lvl_requirement()<<'\n';
                    std::cout <<" Price: "<<spell->get_price()/2<<'\n';
                }
                std::advance(it2,1);
            }
            if (spells_count==0)  {
                std::cout << "No spells available.\n";
            }
            std::cout <<"(Items category: c) (Go Back: b) (Quit game: q)\n";
            std::string input;
            if (wrong_action)  {
                std::cout<< "Option not valid. ";
                wrong_action=false;
            }
            std::cout << "Please enter an action:";
            std::cin >> input; 
            if (input.compare("q")==0)  {
                quit_game=true;
                return;
            }
            else if (input.compare("b")==0)  {
                return;
            }
            else if (input.compare("c")==0)  {
                item_or_spell=true;
                continue;
            }
            else  {
                wrong_action=true;
                continue;
            }
        }
    }
}

void Hero::display_stats()  {

}

//////////////////////////////////////////////////////Warrior////////////////////////////////////////

Warrior::Warrior(std::string name) : Hero(name,400,100,high_stat_random_value(),low_stat_random_value(),high_stat_random_value(),100)  {}

//////////////////////////////////////////////////////Paladin////////////////////////////////////////

Paladin::Paladin(std::string name) : Hero(name,400,100,high_stat_random_value(),high_stat_random_value(),low_stat_random_value(),100)  {}

//////////////////////////////////////////////////////Sorcerer////////////////////////////////////////

Sorcerer::Sorcerer(std::string name) : Hero(name,400,100,low_stat_random_value(),high_stat_random_value(),high_stat_random_value(),100)  {}

//////////////////////////////////////////////////////Monster////////////////////////////////////////

Monster::Monster(std::string name,int avg_damage,int defense,int evasion_chance,int lvl) : LivingBeing(name,(int)(((float)(lvl-1))/10.0+1)*520,lvl), avg_damage(avg_damage), defense(defense), evasion_chance(evasion_chance)  {
    for (int i=0;i<3;i++)  {
        effects.push_back(Effect());
    }
}

void Monster::diplay_stats()  {

}

void Monster::attack(Hero* hero)  {
    if (effects.at(0).is_active())  {
        hero->receive_damage(effects.at(0).apply_effect(damage_value(avg_damage)));
    }
    else  {
        hero->receive_damage(damage_value(avg_damage));
    }
}

bool Monster::evade()  {
    float random_float=(float)rand()/(float)RAND_MAX;
    float true_evasion_chance;
    if (effects.at(2).is_active())  {
            true_evasion_chance=effects.at(2).apply_effect(evasion_chance);
        }
        else  {
            true_evasion_chance=evasion_chance;
        }
    if (random_float<true_evasion_chance)  {
        return true;
    }
    else  {
        return false;
    }
}

void Monster::receive_damage(int damage)  {
    if (evade())  {

    }
    else  {
        int true_defense;
        if (effects.at(1).is_active())  {
            true_defense=effects.at(1).apply_effect(defense);
        }
        else  {
            true_defense=defense;
        }
        if (damage>true_defense)  {
            health=health+true_defense-damage;
        }  
    }
}

void Monster::receive_debuff(Effect& effect)  {
    effects.at(effect.get_stat_affected())=effect;
}

void Monster::round_passes()  {
    for (int i=0;i<3;i++)  {
        effects.at(i).reduce_duration();
    }
}

//////////////////////////////////////////////////////Dragon////////////////////////////////////////

Dragon::Dragon(std::string name,int lvl) : Monster(name,high_attack_random_value()*(((float)(lvl-1))/10.0+1),low_defense_random_value()*(((float)(lvl-1))/10.0+1),low_evasion_random_value()*(((float)(lvl-1))/10.0+1),lvl)  {}

//////////////////////////////////////////////////////Exoskeleton////////////////////////////////////////

Exoskeleton::Exoskeleton(std::string name,int lvl) : Monster(name,low_attack_random_value()*(((float)(lvl-1))/10.0+1),high_defense_random_value()*(((float)(lvl-1))/10.0+1),low_evasion_random_value()*(((float)(lvl-1))/10.0+1),lvl)  {}


//////////////////////////////////////////////////////Spirit////////////////////////////////////////

Spirit::Spirit(std::string name,int lvl) : Monster(name,low_attack_random_value()*(((float)(lvl-1))/10.0+1),low_defense_random_value()*(((float)(lvl-1))/10.0+1),high_evasion_random_value()*(((float)(lvl-1))/10.0+1),lvl)  {}

//////////////////////////////////////////////////////Hero_Party////////////////////////////////////////

Hero_Party::Hero_Party(int starting_x_pos,int starting_y_pos,int number_of_heroes) : hero_in_control(0), x_pos(starting_x_pos), y_pos(starting_y_pos) {
    for (int i=0;i<number_of_heroes;i++)  {
        switch (rand()%3)  {
            case 0:
                heroes.push_back(new Warrior(name_pool::get_random_hero_name()));
                break;
            case 1:    
                heroes.push_back(new Paladin(name_pool::get_random_hero_name()));
                break;
            case 2:    
                heroes.push_back(new Sorcerer(name_pool::get_random_hero_name()));
                break;
            default:
                break;
        }
    }
}

Hero_Party::~Hero_Party()  {
    for (int i=0;i<heroes.size();i++)  {
        delete heroes.at(i);
    }
}

int Hero_Party::get_number_of_heroes()  {
    return heroes.size();
}

int Hero_Party::get_heroes_level()  {
    return heroes.at(0)->get_level();
}

int Hero_Party::get_x_position()  {
    return x_pos;
}

int Hero_Party::get_y_position()  {
    return y_pos;
}

void Hero_Party::prepare_for_next_round()  {
    for (int i=0;i<heroes.size();i++)  {
        heroes.at(i)->restore_life(heroes.at(i)->get_health_capacity()/5);
        heroes.at(i)->restore_mp(heroes.at(i)->get_magic_power_capacity()/6);
    }
}

bool Hero_Party::check_fighting_condition()  {
    bool to_return=0;
    for (int i=0;i<heroes.size();i++)  {
        to_return=to_return || (heroes.at(i)->get_health()>0);
    }
    return to_return;
}


void Hero_Party::defeat()  {
    for (int i=0;i<heroes.size();i++)  {
        heroes.at(i)->lose_money(heroes.at(i)->get_wealth()/2);
        heroes.at(i)->restore_life(heroes.at(i)->get_health_capacity());
        heroes.at(i)->restore_mp(heroes.at(i)->get_magic_power_capacity());
    }
}

void Hero_Party::victory()  {
    for (int i=0;i<heroes.size();i++)  {
        heroes.at(i)->increase_wealth(0);
        heroes.at(i)->increase_exp(0);
        heroes.at(i)->try_and_level_up();
    }
}

void Hero_Party::move_up()  {
    y_pos--;
}

void Hero_Party::move_down()  {
    y_pos++;
}

void Hero_Party::move_left()  {
    x_pos--;
}

void Hero_Party::move_right()  {
    x_pos++;
}

void Hero_Party::receive_input(char input)  {
    switch (input)  {
        case 'w' : //move up
            move_up();
            break;
        case 's'://move down
            move_down();
            break;
        case 'a'://move left
            move_left();
            break;
        case 'd'://move right
            move_right();
            break;
        case 'i'://check inventory
            heroes.at(hero_in_control)->receive_input(input);
            break;
        case 'z'://equip weapon
            heroes.at(hero_in_control)->receive_input(input);
            break;
        case 'x'://equip armor
            heroes.at(hero_in_control)->receive_input(input);
            break;
        case 'c'://use a potion
            heroes.at(hero_in_control)->receive_input(input);
            break;
        case 'h'://take control of another hero
            if (hero_in_control==2)  {
                hero_in_control=0;
            }
            else  {
                hero_in_control++;
            }
            break;
        default :
            break;
    }
}

Hero* Hero_Party::get_target(int n)  {
    return heroes.at(n);
}

Hero* Hero_Party::get_hero_in_control()  {
    return heroes.at(hero_in_control);
}

//////////////////////////////////////////////////////Monster_Party////////////////////////////////////////

Monster_Party::Monster_Party(int lvl,int number_of_monsters)  {
    for (int i=0;i<number_of_monsters;i++)  {
        short type_of_monster=rand()%3;
        switch (type_of_monster)  {
            case 0:
                monsters.push_back(new Dragon(name_pool::get_random_monster_name(),lvl));
                break;
            case 1:
                monsters.push_back(new Exoskeleton(name_pool::get_random_monster_name(),lvl));
                break;
            case 2:
                monsters.push_back(new Spirit(name_pool::get_random_monster_name(),lvl));
                break;
            default:
                break;
        }
    }
}

Monster_Party::~Monster_Party()  {
    for (int i=0;i<monsters.size();i++)  {
        delete monsters.at(i);
    }
}

void Monster_Party::prepare_for_next_round()  {
    for (int i=0;i<monsters.size();i++)  {
        monsters.at(i)->restore_life(monsters.at(i)->get_health_capacity()/5);
        monsters.at(i)->round_passes();
    }
}

void Monster_Party::attack_heroes(Hero_Party& Hero_Party)  {
    for (int i=0;i<monsters.size();i++)  {
        monsters.at(i)->attack(Hero_Party.get_target(rand()%monsters.size()));
    }
}

bool Monster_Party::check_fighting_condition()  {
    bool to_return=0;
    for (int i=0;i<monsters.size();i++)  {
        to_return=to_return || (monsters.at(i)->get_health()>0);
    }
    return to_return;
}

Monster* Monster_Party::get_target(std::string monster_name)  {
    for (int i=0;i<monsters.size();i++)  {
        if (monsters.at(i)->get_name().compare(monster_name)==0)  {
            return monsters.at(i);
        }
    }
    return NULL;
}

void Monster_Party::victory()  {
    for (int i=0;i<monsters.size();i++)  {
        name_pool::re_entry(monsters.at(i)->get_name());
    }
}

//////////////////////////////////////////////////////Fight////////////////////////////////////////

Fight::Fight(Hero_Party* hero_party) : round_count(1), heroes_make_the_first_move(rand()%2), hero_party(hero_party)  {
    monster_party=new Monster_Party(hero_party->get_heroes_level(),hero_party->get_number_of_heroes());
}

void Fight::monsters_turn()  {
    monster_party->attack_heroes(*hero_party);
}

void Fight::heroes_turn()  {
    
}

void Fight::next_round()  {
    monster_party->prepare_for_next_round();
    hero_party->prepare_for_next_round();
    round_count++;
}

int Fight::get_current_round()  {
    return round_count;
}

//////////////////////////////////////////////////////Market////////////////////////////////////////

Market::Market(int number_of_wares_to_generate) : visited(false) {
    while(number_of_wares_to_generate-->0)  {
        bool spell_or_item=rand()%2;
        if (spell_or_item)  {
            short type_of_item=rand()%3;
            int level=get_pseudo_random_level();
            switch (type_of_item)  {
                case 0:
                    bool two_handed;
                    items.push_back(new Weapon(name_pool::get_random_weapon_name(),get_weapon_armor_price(level),level,get_weapon_attack(level,two_handed),two_handed));
                    break;
                case 1:
                    items.push_back(new Armor(name_pool::get_random_armor_name(),get_weapon_armor_price(level),level,get_armor_defense(level)));
                    break;
                case 2:
                    int type;
                    items.push_back(new Potion(name_pool::get_random_potion_name(),get_potion_price(level),level,get_potion_effect(level,type),type));
                    break;
                default:
                    break;
            }
        }
        else  {
            short type_of_spell=rand()%3;
            int level=get_pseudo_random_level();
            int mp_cost=get_spell_mp_cost(level);
            switch (type_of_spell)  {    
                case 0:
                    spells.push_back(new LigthingSpell(name_pool::get_random_spell_name(),get_spell_price(level),level,mp_cost,get_spell_damage(level,mp_cost)));
                    break;
                case 1:
                    spells.push_back(new FireSpell(name_pool::get_random_spell_name(),get_spell_price(level),level,mp_cost,get_spell_damage(level,mp_cost)));
                    break;
                case 2:
                    spells.push_back(new IceSpell(name_pool::get_random_spell_name(),get_spell_price(level),level,mp_cost,get_spell_damage(level,mp_cost)));
                    break;
                default:
                    break;
            }
        }
    }
}

Market::~Market()  {
    while (items.size()!=0)  {
        std::list<Item*>::iterator it=items.begin();
        Item* to_delete=it.operator*();
        items.erase(it);
        delete to_delete;
    }
    while (spells.size()!=0)  {
        std::list<Spell*>::iterator it2=spells.begin();
        Spell* to_delete=it2.operator*();
        spells.erase(it2);
        delete to_delete;
    }
}

std::string Market::buy_item(std::string item_name,Hero* hero)  {
    std::list<Item*>::iterator it=items.begin();
    for (int i=0;i<items.size();i++)  {
        if (it.operator*()->get_name().compare(item_name)==0)  {
            hero->lose_money(it.operator*()->get_price());
            hero->acquire_item(it.operator*());
            std::string to_return=it.operator*()->get_name();
            items.erase(it);
            return to_return;
        }
        else  {
            std::advance(it,1);
        }
    }
    return NULL;
}

std::string Market::sell_item(std::string item_name,Hero* hero)  {
    Item* item=hero->remove_item(item_name);
    hero->increase_wealth(item->get_price()/2);
    items.insert(items.begin(),item);
    return item->get_name();
}

std::string Market::buy_spell(std::string spell_name,Hero* hero)  {
    std::list<Spell*>::iterator it=spells.begin();
    for (int i=0;i<spells.size();i++)  {
        if (it.operator*()->get_name().compare(spell_name)==0)  {
            hero->lose_money(it.operator*()->get_price());
            hero->acquire_spell(it.operator*());
            std::string to_return=it.operator*()->get_name();
            spells.erase(it);
            return to_return;
        }
        else  {
            std::advance(it,1);
        }
    }
    return NULL;
}

std::string Market::sell_spell(std::string spell_name,Hero* hero)  {
    Spell* spell=hero->remove_spell(spell_name);
    hero->increase_wealth(spell->get_price()/2);
    spells.insert(spells.begin(),spell);
    return spell->get_name();
}

void Market::browse_wares(Hero_Party* hero_party)  {
    visited=true;
    bool buy_or_sell=1;
    bool item_or_spell=1;
    bool wrong_action=false;
    bool not_enough_money=false;
    bool successful_purchase=false;
    bool successful_sale=false;
    bool tried_to_sell_equipped_gear=false;
    std::string merchandise_traded;
    std::string input;
    while (true)  {
        if (buy_or_sell)  {
            if (item_or_spell)  {//buy item
                std::list<Item*>::iterator it=items.begin();
                system("clear");
                Item* item_choices[items.size()];
                int items_count=0;
                std::cout << "Hero name:" << hero_party->get_hero_in_control()->get_name()<< " Lvl."<<hero_party->get_heroes_level()<<" Gold:" <<hero_party->get_hero_in_control()->get_wealth()<<'\n';                 
                std::cout << "Items:\n";
                Item* item;
                for (int i=0;i<items.size();i++)  {
                    if (it.operator*()->get_type_of_item()==0)  {
                        item=it.operator*();
                        std::cout << i+1 <<"." << item->get_name()<<"(Weapon)";
                        item_choices[items_count]=item;
                        items_count++;
                        std::cout << '\n';
                        std::cout <<" Attack: "<<((Weapon*)item)->attack()<<'\n';
                        std::cout <<" Level: "<<item->get_lvl_requirement()<<'\n';
                        std::cout <<" Price: "<<item->get_price()<<'\n';
                        if (((Weapon*)item)->Two_handed_weapon())  {
                            std::cout <<" Note: Weapon must be used two-handed\n";
                        }
                    }
                    if (it.operator*()->get_type_of_item()==1)  {
                        item=it.operator*();
                        std::cout << i+1 <<"." << item->get_name()<<"(Armor)";
                        item_choices[items_count]=item;
                        items_count++;
                        std::cout << '\n';
                        std::cout <<" Defense: "<<((Armor*)item)->defend()<<'\n';
                        std::cout <<" Level: "<<item->get_lvl_requirement()<<'\n';
                        std::cout <<" Price: "<<item->get_price()<<'\n';
                    }
                    if (it.operator*()->get_type_of_item()==2)  {
                        item=it.operator*();
                        std::cout << i+1 <<"." << item->get_name() <<"(Potion)";
                        item_choices[items_count]=item;
                        items_count++;
                        std::cout << '\n';
                        std::cout <<" Effect: \n";
                        switch (((Potion*)item)->get_type_of_potion())  {
                            case 0:
                                std::cout << "Restore "<<((Potion*)item)->get_boost() <<" health\n";
                                break;
                            case 1:
                                std::cout << "Restore "<<((Potion*)item)->get_boost() <<" magic power\n";
                                break;
                            case 2:
                                std::cout << "Increase strength by "<<((Potion*)item)->get_boost() <<'\n';
                                break;
                            case 3:
                                std::cout << "Increase dexterity by "<<((Potion*)item)->get_boost() <<'\n';
                                break;
                            case 4:
                                std::cout << "Increase agility by "<<((Potion*)item)->get_boost() <<'\n';
                                break;
                            default :
                                break;
                        }
                        std::cout <<" Level: "<<item->get_lvl_requirement()<<'\n';
                        std::cout <<" Price: "<<item->get_price()<<'\n';
                    }
                    std::advance(it,1);
                }
                if (items_count==0)  {
                    std::cout << "No items available for purchase. ";
                }
                else  {
                    std::cout << "\nSelect the item you want to buy:\n";
                    for (int i=0;i<items_count;i++)  {
                        std::cout << i+1 <<"->"<<item_choices[i]->get_name();
                        if (item_choices[i]->get_lvl_requirement()>hero_party->get_heroes_level())  {
                            std::cout << "(Level "<<item_choices[i]->get_lvl_requirement() << " required)";
                        }
                        std::cout << '\n';
                    }
                    std::cout << '\n';
                }
                std::cout <<"(Spells category: c) (Sell items: t) "" (Go Back: b) ";
                if (hero_party->get_number_of_heroes()>1)  {
                    std::cout << "(Switch hero: h) ";
                }
                std::cout<<"(Quit game: q)\n";
                if (wrong_action)  {
                    std::cout<< "Option not valid. ";
                    wrong_action=false;
                }
                if (not_enough_money)  {
                    std::cout << "Not enough money for the transaction. ";
                    not_enough_money=false;
                }
                if (successful_purchase)  {
                    std::cout << merchandise_traded<< " acquired. ";
                    successful_purchase=false;
                }
                std::string input;
                std::cout << "Please enter an action:";
                std::cin >> input; 
                if (check_number(input))  {
                    int pick=atoi(input.c_str())-1;
                    if (pick<items_count && pick>=0)  {
                        if (item_choices[pick]->get_price()<=hero_party->get_hero_in_control()->get_wealth())  {
                            merchandise_traded=buy_item(item_choices[pick]->get_name(),hero_party->get_hero_in_control());
                            successful_purchase=true;

                        }
                        else  {
                            not_enough_money=true;
                        }
                    }
                    else  {
                        wrong_action=true;
                        continue;
                    }
                }
                else  {
                    if (input.compare("q")==0)  {
                        quit_game=true;
                        return;
                    }
                    else if (input.compare("b")==0)  {
                        return;
                    }
                    else if (input.compare("c")==0)  {
                        item_or_spell=false;
                        continue;
                    }
                    else if (input.compare("t")==0)  {
                        buy_or_sell=false;
                        continue;
                    }
                    else if (input.compare("h")==0)//take control of another hero
                        if (hero_party->get_number_of_heroes()>1)  {
                            hero_party->receive_input('h');
                            continue ;
                        }
                        else  {
                            wrong_action=true;
                        }
                    else  {
                        wrong_action=true;
                        continue;
                    }
                }
            }
            else  {//buy a spell
                std::list<Spell*>::iterator it2=spells.begin();
                Spell* spell_choices[spells.size()];
                system("clear");
                int spells_count=0;
                std::cout << "Hero name:" << hero_party->get_hero_in_control()->get_name()<< " Lvl."<<hero_party->get_heroes_level()<<" Gold:" <<hero_party->get_hero_in_control()->get_wealth()<<'\n'; 
                std::cout << "Spells:\n";
                Spell* spell;
                for (int i=0;i<spells.size();i++)  {
                    if (it2.operator*()->get_type_of_spell()==0)  {
                        spell=it2.operator*();
                        std::cout << i+1 <<"." << spell->get_name()<<"(Ligthing Spell)";
                        spell_choices[spells_count]=spell;
                        spells_count++;
                        std::cout << '\n';
                        std::cout <<" Average Damage: "<<spell->get_power()<<'\n';
                        std::cout << " Effect: Reduced evasion chance by "<<spell->get_effect().get_percentage() <<" for "<< spell->get_effect().get_duration() <<" rounds\n";
                        std::cout <<" Level: "<<spell->get_lvl_requirement()<<'\n';
                        std::cout <<" Price: "<<spell->get_price()<<'\n';
                    }
                    if (it2.operator*()->get_type_of_spell()==1)  {
                        spell=it2.operator*();
                        std::cout << i+1 <<"." << spell->get_name()<<"(Fire Spell)";
                        spell_choices[spells_count]=spell;
                        spells_count++;
                        std::cout << '\n';
                        std::cout <<" Average Damage: "<<spell->get_power()<<'\n';
                        std::cout << " Effect: Reduced defense by "<<spell->get_effect().get_percentage() <<" for "<< spell->get_effect().get_duration() <<" rounds\n";
                        std::cout <<" Level: "<<spell->get_lvl_requirement()<<'\n';
                        std::cout <<" Price: "<<spell->get_price()<<'\n';
                    }
                    if (it2.operator*()->get_type_of_spell()==2)  {
                        spell=it2.operator*();
                        std::cout << i+1 <<"." << spell->get_name() <<"(Ice Spell)";
                        spell_choices[spells_count]=spell;
                        spells_count++;
                        std::cout << '\n';
                        std::cout << "Average Damage: "<<spell->get_power() <<'\n';
                        std::cout << "Effect: Reduced attack by "<<spell->get_effect().get_percentage() <<" for "<< spell->get_effect().get_duration() <<" rounds\n";
                        std::cout <<" Level: "<<spell->get_lvl_requirement()<<'\n';
                        std::cout <<" Price: "<<spell->get_price()<<'\n';
                    }
                    std::advance(it2,1);
                }
                if (spells_count==0)  {
                    std::cout << "No spells available for purchase. ";
                }
                else  {
                    std::cout << "\nSelect which spell you want to buy:\n";
                    for (int i=0;i<spells_count;i++)  {
                        std::cout << i+1 <<"->"<<spell_choices[i]->get_name();
                        if (spell_choices[i]->get_lvl_requirement()>hero_party->get_heroes_level())  {
                            std::cout << "(Level "<<spell_choices[i]->get_lvl_requirement() <<" required)";
                        }
                        std::cout << '\n';
                    }
                }
                std::string input;
                std::cout <<"(Items category: c) (Sell spells: t) (Go Back: b) ";
                if (hero_party->get_number_of_heroes()>1)  {
                    std::cout << "(Switch hero: h) ";
                }
                std::cout<<"(Quit game: q)\n";
                if (wrong_action)  {
                    std::cout<< "Option not valid. ";
                    wrong_action=false;
                }
                if (not_enough_money)  {
                    std::cout << "Not enough money for the transaction. ";
                    not_enough_money=false;
                }
                if (successful_purchase)  {
                    std::cout << merchandise_traded<< " acquired. ";
                    successful_purchase=false;
                }
                std::cout << "Please enter an action:";
                std::cin >> input; 
                if (check_number(input))  {
                    int pick=atoi(input.c_str())-1;
                    if (pick<spells_count && pick>=0)  {
                        merchandise_traded=buy_spell(spell_choices[pick]->get_name(),hero_party->get_hero_in_control());
                        successful_purchase=true;
                        continue;
                    }
                    else  {
                        wrong_action=true;
                        continue;
                    }
                }
                else  {
                    if (input.compare("q")==0)  {
                        quit_game=true;
                        return;
                    }
                    else if (input.compare("b")==0)  {
                        return;
                    }
                    else if (input.compare("c")==0)  {
                        item_or_spell=true;
                        continue;
                    }
                    else if (input.compare("t")==0)  {
                        buy_or_sell=false;
                        continue;
                    }
                    else if (input.compare("h")==0)//take control of another hero
                        if (hero_party->get_number_of_heroes()>1)  {
                            hero_party->receive_input('h');
                            continue ;
                        }
                        else  {
                            wrong_action=true;
                        }
                    else  {
                        wrong_action=true;
                        continue;
                    }
                }
            }
        }
        else  {
            if (item_or_spell)  {//sell item
                std::list<Item*>::iterator it=hero_party->get_hero_in_control()->get_item_box().begin();
                system("clear");
                Item* item_choices[hero_party->get_hero_in_control()->get_item_box().size()];
                int items_count=0;
                std::cout << "Hero name:" << hero_party->get_hero_in_control()->get_name()<< " Lvl."<<hero_party->get_heroes_level()<<" Gold:" <<hero_party->get_hero_in_control()->get_wealth()<<'\n'; 
                std::cout << "Items:\n";
                Item* item;
                for (int i=0;i<hero_party->get_hero_in_control()->get_item_box().size();i++)  {
                    if (it.operator*()->get_type_of_item()==0)  {
                        item=it.operator*();
                        std::cout << i+1 <<"." << item->get_name()<<"(Weapon)";
                        item_choices[items_count]=item;
                        items_count++;
                        std::cout << '\n';
                        std::cout <<" Attack: "<<((Weapon*)item)->attack()<<'\n';
                        std::cout <<" Level: "<<item->get_lvl_requirement()<<'\n';
                        std::cout <<" Price: "<<item->get_price()/2<<'\n';
                        if (((Weapon*)item)->Two_handed_weapon())  {
                            std::cout <<" Note: Weapon must be used two-handed\n";
                        }
                    }
                    if (it.operator*()->get_type_of_item()==1)  {
                        item=it.operator*();
                        std::cout << i+1 <<"." << item->get_name()<<"(Armor)";
                        item_choices[items_count]=item;
                        items_count++;
                        std::cout << '\n';
                        std::cout <<" Defense: "<<((Armor*)item)->defend()<<'\n';
                        std::cout <<" Level: "<<item->get_lvl_requirement()<<'\n';
                        std::cout <<" Price: "<<item->get_price()/2<<'\n';
                    }
                    if (it.operator*()->get_type_of_item()==2)  {
                        item=it.operator*();
                        std::cout << i+1 <<"." << item->get_name() <<"(Potion)";
                        item_choices[items_count]=item;
                        items_count++;
                        std::cout << '\n';
                        std::cout <<" Effect: \n";
                        switch (((Potion*)item)->get_type_of_potion())  {
                            case 0:
                                std::cout << "Restore "<<((Potion*)item)->get_boost() <<" health\n";
                                break;
                            case 1:
                                std::cout << "Restore "<<((Potion*)item)->get_boost() <<" magic power\n";
                                break;
                            case 2:
                                std::cout << "Increase strength by "<<((Potion*)item)->get_boost() <<'\n';
                                break;
                            case 3:
                                std::cout << "Increase dexterity by "<<((Potion*)item)->get_boost() <<'\n';
                                break;
                            case 4:
                                std::cout << "Increase agility by "<<((Potion*)item)->get_boost() <<'\n';
                                break;
                            default :
                                break;
                        }
                        std::cout <<" Level: "<<item->get_lvl_requirement()<<'\n';
                        std::cout <<" Price: "<<item->get_price()/2<<'\n';
                    }
                    std::advance(it,1);
                }
                std::cout << "\nSelect which item you want to sell:\n";
                for (int i=0;i<items_count;i++)  {
                    std::cout << i+1 <<"->"<<item_choices[i]->get_name();
                    std::cout << "( "<<item_choices[i]->get_lvl_requirement() << "  gold)";
                    std::cout << '\n';
                }
                std::cout <<"(Spells category: c) (Buy items: t) (Go Back: b) ";
                if (hero_party->get_number_of_heroes()>1)  {
                    std::cout << "(Switch hero: h) ";
                }
                std::cout<<"(Quit game: q)\n";
                if (wrong_action)  {
                    std::cout<< "Option not valid. ";
                    wrong_action=false;
                }
                if (tried_to_sell_equipped_gear)  {
                    std::cout << "Cannot sell any equipped gear. ";
                    tried_to_sell_equipped_gear=false;
                }
                if (successful_sale)  {
                    std::cout << merchandise_traded<<" successfully sold. ";
                    successful_sale=false;
                }
                std::string input;
                std::cout << "Please enter an action:";
                std::cin >> input;
                if (check_number(input))  {
                    int pick=atoi(input.c_str())-1;
                    if (pick<items_count && pick>=0)  {
                        if (item_choices[pick]->get_name().compare(hero_party->get_hero_in_control()->get_equipped_weapon()->get_name())==0)  {
                            tried_to_sell_equipped_gear=true;
                            continue;
                        }
                        else  {
                            merchandise_traded=sell_item(item_choices[pick]->get_name(),hero_party->get_hero_in_control());
                            successful_sale=true;
                            continue;
                        }
                    }
                    else  {
                        wrong_action=true;
                        continue;
                    }
                }
                else  {
                    if (input.compare("q")==0)  {
                        quit_game=true;
                        return;
                    }
                    else if (input.compare("b")==0)  {
                        return;
                    }
                    else if (input.compare("c")==0)  {
                        item_or_spell=false;
                        continue;
                    }
                    else if (input.compare("t")==0)  {
                        buy_or_sell=true;
                    }
                    else if (input.compare("h")==0)//take control of another hero
                        if (hero_party->get_number_of_heroes()>1)  {
                            hero_party->receive_input('h');
                            continue ;
                        }
                        else  {
                            wrong_action=true;
                        }
                    else  {
                        wrong_action=true;
                        continue;
                    }
                }
            }
            else  {//sell spell
                std::list<Spell*>::iterator it2=hero_party->get_hero_in_control()->get_spells().begin();
                Spell* spell_choices[hero_party->get_hero_in_control()->get_spells().size()];
                system("clear");
                int spells_count=0;
                std::cout << "Hero name:" << hero_party->get_hero_in_control()->get_name()<< " Lvl."<<hero_party->get_heroes_level()<<" Gold:" <<hero_party->get_hero_in_control()->get_wealth()<<'\n'; 
                std::cout << "Spells:\n";
                Spell* spell;
                for (int i=0;i<hero_party->get_hero_in_control()->get_spells().size();i++)  {
                    if (it2.operator*()->get_type_of_spell()==0)  {
                        spell=it2.operator*();
                        std::cout << i+1 <<"." << spell->get_name()<<"(Ligthing Spell)";
                        spell_choices[spells_count]=spell;
                        spells_count++;
                        std::cout << '\n';
                        std::cout <<" Average Damage: "<<spell->get_power()<<'\n';
                        std::cout << "Effect: Reduced evasion chance by "<<spell->get_effect().get_percentage() <<" for "<< spell->get_effect().get_duration() <<" rounds\n";
                        std::cout <<" Level: "<<spell->get_lvl_requirement()<<'\n';
                        std::cout <<" Price: "<<spell->get_price()/2<<'\n';
                    }
                    if (it2.operator*()->get_type_of_spell()==1)  {
                        spell=it2.operator*();
                        std::cout << std::to_string(i+1) <<"." << spell->get_name()<<"(Fire Spell)";
                        spell_choices[spells_count]=spell;
                        spells_count++;
                        std::cout << '\n';
                        std::cout <<" Average Damage: "<<spell->get_power()<<'\n';
                        std::cout << "Effect: Reduced defense by "<<spell->get_effect().get_percentage() <<" for "<< spell->get_effect().get_duration() <<" rounds\n";
                        std::cout <<" Level: "<<spell->get_lvl_requirement()<<'\n';
                        std::cout <<" Price: "<<spell->get_price()/2<<'\n';
                    }
                    if (it2.operator*()->get_type_of_spell()==2)  {
                        spell=it2.operator*();
                        std::cout << i+1 <<"." << spell->get_name() <<"(Ice Spell)";
                        spell_choices[spells_count]=spell;
                        spells_count++;
                        std::cout << '\n';
                        std::cout << "Average Damage: "<<spell->get_power() <<'\n';
                        std::cout << "Effect: Reduced attack by "<<spell->get_effect().get_percentage() <<" for "<< spell->get_effect().get_duration() <<" rounds\n";
                        std::cout <<" Level: "<<spell->get_lvl_requirement()<<'\n';
                        std::cout <<" Price: "<<spell->get_price()/2<<'\n';
                    }
                    std::advance(it2,1);
                }
                if (spells_count==0)  {
                    std::cout << "No spells available for sale. ";
                }
                else  {
                    std::cout << "\nSelect which spell you want to sell:\n";
                    for (int i=0;i<spells_count;i++)  {
                        std::cout << i+1 <<"->"<<spell_choices[i]->get_name();
                        std::cout << "("<<spell_choices[i]->get_lvl_requirement() <<" gold)";
                        std::cout << '\n';
                    }
                }
                std::cout <<"(Items category: c) (Buy spells: t) (Go Back: b) ";
                if (hero_party->get_number_of_heroes()>1)  {
                    std::cout << "(Switch hero: h) ";
                }
                std::cout<<"(Quit game: q)\n";
                std::string input;
                if (wrong_action)  {
                    std::cout<< "Option not valid. ";
                    wrong_action=false;
                }
                if (successful_sale)  {
                    std::cout << merchandise_traded<<" successfully sold. ";
                    successful_sale=false;
                }
                std::cout << "Please enter an action:";
                std::cin >> input; 
                if (check_number(input))  {
                    int pick=atoi(input.c_str())-1;
                    if (pick<spells_count && pick>=0)  {
                        if (spell_choices[pick]->get_name().compare(hero_party->get_hero_in_control()->get_equipped_armor()->get_name())==0)  {
                            tried_to_sell_equipped_gear;
                            continue;
                        }
                        else  {
                            merchandise_traded=sell_spell(spell_choices[pick]->get_name(),hero_party->get_hero_in_control());
                            successful_sale=true;
                            continue;
                        }
                    }
                    else  {
                        wrong_action=true;
                        continue;
                    }
                }
                else  {
                    if (input.compare("q")==0)  {
                        quit_game=true;
                        return;
                    }
                    else if (input.compare("b")==0)  {
                        return;
                    }
                    else if (input.compare("c")==0)  {
                        item_or_spell=true;
                        continue;
                    }
                    else if (input.compare("t")==0)  {
                        buy_or_sell=true;
                    }
                    else if (input.compare("h")==0)//take control of another hero
                        if (hero_party->get_number_of_heroes()>1)  {
                            hero_party->receive_input('h');
                            continue ;
                        }
                        else  {
                            wrong_action=true;
                        }
                    else  {
                        wrong_action=true;
                        continue;
                    }
                }
            }
        }
    }

}

void Market::receive_input(char input)  {

}
bool Market::has_been_visited()  {
    return visited;
}

//////////////////////////////////////////////////////Block////////////////////////////////////////

Block::Block(bool accessible,bool has_a_market) : accessible(accessible) {
    if (has_a_market)  {
        market=new Market(get_random_number_of_wares());
    }
    else  {
        market=NULL;
    }
}

Block::~Block()  {
    if (market!=NULL)  {
        delete market;
    }
}

bool Block::fight_triggered()  {
    float random_float=(float)rand()/(float)RAND_MAX;
    if (random_float<=get_encounter_chance())  {
        return true;
    }
    else  {
        return false;
    }
}

bool Block::is_accessible()  {
    return accessible;
}

bool Block::is_a_market()  {
    if (market==NULL)  {
        return false;
    }
    else  {
        return true;
    }
}

void Block::set_to_non_accessible()  {
    accessible=false;
}

Market& Block::access_market()  {
    return *market;
}

bool Block::has_been_visited()  {
    return market->has_been_visited();
}
//////////////////////////////////////////////////////Grid////////////////////////////////////////

Grid::Grid(int size,int number_of_heroes) : size(size), hero_vision(5) {
    srand(time(NULL));
    int quarter_x;
    int quarter_y;
    int market_x_pos;
    int market_y_pos;
    int number_of_areas=(size/4);
    float density_of_blocks=0.4;
    hero_party=new Hero_Party((size+2*hero_vision)/2,(size+2*hero_vision)/2,number_of_heroes);
    World=new Block**[size+2*hero_vision];
    for (int i=0;i<size+2*hero_vision;i++)  {
        World[i]=new Block*[size+2*hero_vision];
        for (int j=0;j<size+2*hero_vision;j++)  {
            if (i>=hero_vision && i<(size+hero_vision) && j>=hero_vision && j<(size+hero_vision))  {
                World[i][j]=NULL;
            }
            else  {
                World[i][j]=new Block(0,0);
            }
        }
    }
    encounter_chance=0.1;
    for (int i=0;i<number_of_areas-1;i++)  {
        quarter_x=(size/number_of_areas)*i+hero_vision;
        for (int j=0;j<number_of_areas;j++)  {
            quarter_y=(size/number_of_areas)*j+hero_vision;
            market_x_pos=quarter_x+rand()%(size/number_of_areas);
            market_y_pos=quarter_y+rand()%(size/number_of_areas);
            World[market_x_pos][market_y_pos]=new Block(1,1);
        }
    }
    for (int i=0;i<size+2*hero_vision;i++)  {
        for (int j=0;j<size+2*hero_vision;j++)  {
            if (World[i][j]==NULL)  {
                World[i][j]=new Block(1,0);
            }
       }
    }
    for (int i=hero_vision;i<size+hero_vision;i++)  {
        for (int j=0;j<int(density_of_blocks*size+0.5);j++)  {
            int pick_non_accesible_block;
            int possible_choices_counter=0;
            int possible_choices[size];
            for (int k=hero_vision;k<size+hero_vision;k++)  {
                if (!World[i][k]->is_a_market() && (i!=hero_party->get_y_position() || k!=hero_party->get_x_position()))  {
                    possible_choices[possible_choices_counter]=k;
                    possible_choices_counter++;
                }
            }
            pick_non_accesible_block=rand()%possible_choices_counter;
            World[i][possible_choices[pick_non_accesible_block]]->set_to_non_accessible();
        }
    }
}

Grid::~Grid()  {
    delete hero_party;
    for (int i=0;i<size+2*hero_vision;i++)  {
        for (int j=0;j<size+2*hero_vision;j++)  {
            delete World[i][j];
        }
        delete[] World[i];
    }
    delete[] World;
}

void Grid::print_world(bool blocked_passage,bool wrong_action)  {
    int centre_x=hero_party->get_x_position();
    int centre_y=hero_party->get_y_position();
    system("clear");
    for (int i=centre_y-hero_vision;i<=centre_y+hero_vision;i++)  {
        for (int k=0;k<2*hero_vision+1;k++)  {
            std::cout << "---------";
        }
        std::cout << "-\n";
        for (int j=centre_x-hero_vision;j<=centre_x+hero_vision;j++)  {
            if (i==centre_y && j==centre_x)  {
                if (World[i][j]->is_a_market())  {
                    std::cout << " User(S)|";
                }
                else  {
                    std::cout << "  User  |";
                }
            }
            else  {
                if (j==centre_x-hero_vision)  {
                    std::cout <<'|';
                }
                if (World[i][j]->is_accessible())  {
                    if (World[i][j]->is_a_market())  {
                        std::cout << " Store";
                        if (World[i][j]->has_been_visited())  {
                            std::cout<<" ";
                        }
                        else  {
                            std::cout <<"!";
                        }
                        std::cout << " |";
                    }
                    else  {
                        std::cout << "        |";
                    }
                }
                else if (!World[i][j]->is_accessible())  {
                    std::cout << " XXXXXX |";
                }
            }
        }
        std::cout << '\n';
    }
    for (int k=0;k<2*hero_vision+1;k++)  {
        std::cout << "---------";
    }
    std::cout << "-\n";
    std::cout << '\n';
    std::cout << "Available options:\n";
    std::cout << " (Move Up: w) ";
    std::cout << "(Move Down: s) ";
    std::cout << "(Move Left: a) ";
    std::cout << "(Move Right: d) \n";
    std::cout << " (Check Inventory: i) ";
    std::cout << "(Equip Weapon: z) ";
    std::cout << "(Equip Armor: x) ";
    std::cout << "(Use Potion: c) \n";
    std::cout << " (Display Stats: u) ";
    if (World[hero_party->get_y_position()][hero_party->get_x_position()]->is_a_market())  {
        std::cout << "(Access Market: m) ";
    }
    if (hero_party->get_number_of_heroes()>1)  {
        std::cout << "(Switch hero: h) ";
    }
    std::cout << "(Quit Game: q) \n";
    if (blocked_passage)  {
        std::cout << "An object is blocking the path.";
    }
    if (wrong_action)  {
        std::cout << "Option not valid. ";
    }
    std::cout << "Please enter an action:\n";
}

void Grid::receive_input()  {
    char input;
    bool blocked_passage=false;
    bool wrong_action=false;
    while(!quit_game)  {
        print_world(blocked_passage,wrong_action);
        blocked_passage=false;
        wrong_action=false;
        std::cin >> input;
        switch (input)  {
            case 'w' : //move up
                if (World[hero_party->get_y_position()-1][hero_party->get_x_position()]->is_accessible())  {
                    hero_party->receive_input(input);
                }
                else  {
                    blocked_passage=true;
                }
                break;
            case 's'://move down
                if (World[hero_party->get_y_position()+1][hero_party->get_x_position()]->is_accessible())  {
                    hero_party->receive_input(input);
                }
                else  {
                    blocked_passage=true;
                }
                break;
            case 'a'://move left
                if (World[hero_party->get_y_position()][hero_party->get_x_position()-1]->is_accessible())  {
                    hero_party->receive_input(input);
                }
                else  {
                    blocked_passage=true;
                }
                break;
            case 'd'://move right
                if (World[hero_party->get_y_position()][hero_party->get_x_position()+1]->is_accessible())  {
                    hero_party->receive_input(input);
                }
                else  {
                    blocked_passage=true;
                }
                break;
            case 'i'://check inventory
                hero_party->receive_input(input);
                break;
            case 'z'://equip weapon
                hero_party->receive_input(input);
                break;
            case 'x'://equip armor
                hero_party->receive_input(input);
                break;
            case 'c'://use a potion
                hero_party->receive_input(input);
                break;
            case 'h'://take control of another hero
                if (hero_party->get_number_of_heroes()>1)  {
                    hero_party->receive_input(input);
                }
                else  {
                    wrong_action=true;
                }
                break;
            case 'u'://display hero stats
                hero_party->receive_input(input);
                break;
            case 'm': 
                if (World[hero_party->get_y_position()][hero_party->get_x_position()]->is_a_market())  {
                    World[hero_party->get_y_position()][hero_party->get_x_position()]->access_market().browse_wares(hero_party);
                }
                else  {
                    wrong_action=true;
                }
                break;
            case 'q':
                quit_game=true;
                break;
            default://no matching key pressed, retry
                wrong_action=true;
                break;
        }
    }
}
