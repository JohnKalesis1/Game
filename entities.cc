#include <string>
#include <list>
#include <vector>
#include "entities.h"

class Hero;
class Monster;

float series(int recursion,int agility)  {
    if (recursion==agility)  {
        return 0;
    }
    else  {
        return 1.0/(float)recursion+2*series(recursion+1,agility);
    }
}

namespace name_pool {
    std::string hero_names[98]={"Abbathor","Aerdrie Faenya","Arvoreen","Baervan Wildwanderer","Baravar Cloakshadow","Berronar Truesilver","Brandobaris","Callarduran Smoothhands","Charmalaine","Clangeddin Silverbeard","Corellon Larethian","Cyrrollalee","Deep Sashelas","Dugmaren Brightmantle","Dumathoin","Ehlonna","Erevan Ilesere","Fenmarel Mestarine","Fharlanghn","Flandal Steelskin","Gadhelyn","Gaerdal Ironhand","Garl Glittergold","Gendwar Argrim","Halani Celanil","Heironeous","Labelas Enoreth","Moradin","Muamman Duathal","Olidammara","Pelor","Rillifane Rallathil","Roykyn","Segojan Earthcaller","Sehanine Moonbow","Sheela Peryroyl","Solonor Thelandira","St. Cuthbert","Urdlen","Urogalan","Vergadain","Ye'Cind","Yondalla","Annam","Bahamut","Blibdoolpoolp","Diirinka","Eadro","Gruumsh","Hruggek","Ilsensine","Jubilex","Kurtulmak","Laduguer","Loagzed","Lolth","Maglubiyet","Merrshaulk","Orcus","Sekolah","Semuanya","Shekinester","Skerrit","Stronmaus","Tiamat","Vaprak","Yeenoghu","Aasterinian","Bagrivyek","Bahgtru","Chronepsis","Doresain","Falazure","Gaknulak","Grankhul","Great Mother","Grolantor","Hiatea","Iallanis","Ilneval","Io","Karontor","Kiaransalee","Khurgorbaeyag","Luthic","Memnor","Nomog-Geaya","Panzuriel","Raxivort","Shargaas","Sixin","Skoraeus Stonebones","Squerrik","Surtr","Thrym","Vhaeraun","Yurtrus","Zinzerena"};
    std::string potion_names[66]={"Potion","Hi-Potion","X-Potion","Mega-Potion","Ether","Turbo Ether","Elixir","Megalixir","Phoenix Down","Mega Phoenix","Antidote","Echo Screen","Eye Drops","Holy Water","Remedy","Soft","Al Bhed Potion","Healing Water","Tetra Elemental","Candle of Life","Dream Powder","Farplane Shadow","Farplane Wind","Frag Grenade","Silence Grenade","Sleeping Powder","Smoke Bomb","Petrify Grenade","Poison Fang","Blessed Gem","Dark Matter","Shadow Gem","Shining Gem","Supreme Gem","Gold Hourglass","Healing Spring","Light Curtain","Lunar Curtain","Mana Spring","Mana Tablet","Mana Tonic","Purifying Salt","Silver Hourglass","Soul Spring","Stamina Spring","Stamina Tablet","Stamina Tonic","Star Curtain","Three Stars","Twin Stars","Ability Distiller","Amulet","Designer Wallet","Door to Tomorrow","Gambler's Spirit","Hypello Potion","Mana Distiller","Map","Musk","Pendulum","Power Distiller","Shining Thorn","Speed Distiller","Underdog's Secret","Wings to Discovery","Winning Formula"};
    std::string spell_names[91]={"Flame","Torch","Eruption","Flare","Blaze","Inferno","Fireball","Explosion","Meteor","Salamander’s Blade","Dragon Fire","Sinkhole","Pit","Chasm","Vine","Thorn","Nettle","Rockfall","Landslide","Avalanche","Chill","Freeze","Frostbite","Douse","Deluge","Flood","Wave","Surge","Tsunami","Nyad’s Lore","Sleep","Slumber","Shock","Bolt","Plasma","Gust","Gale","Tempest","Whirlwhind","Cyclone","Vortex","Wyvern’s Wings","Daze","Stun","Confuse","Light","Flash","Radiance","Cleanse","Scour","Purge","Wrath","Retribution","Judgment","Angel’s Mercy","Darkness","Shade","Gloom","Decay","Fester","Corrupt","Spite","Rancor","Malice","Demon’s Rage","Drain","Siphon","Void","Bolt Strike","Freeze Wave","Inferno Blaze","Channel Energy","Shadow Blade","Heaven's Sword","Blazing Katana","Staff of Ice","Arrow of Purity","Blazing Arrows","Burn the Soul","Fire Wings","Fury of Osano-Wo","Gaijin Flames","Hungry Blade","Yakamo’s Wrath","Yakamo’s Eye","Breath of Suitengu","The Inner Ocean","Surging Soul","Endless Depth","Kharmic Intent","Whispered Blade"};
    std::string weapon_names[119]={"Caladbolg","Taming Sword","Crystal Sword","Excalibur","Ragnarok","Balmung","Save the Queen","Heartbreaker","Lionheart","Durandal","Ascalon","Ambitious","Hrunting","Astral Sword","Apocalypse","Slowstrike","Master Sword","Rune-Master","Warlock","Arc Sword","Gilventure","Tri-Steel","Helter-Skelter","Vendetta","Avenger","Prism Steel","Mirage Sword","Lifesaver","Sonic Steel","Vigilante","Dance Macabre","Largamente","Gravestone","Sidewinder","Nightmare","Mage Masher","Nightbringer","Knight Sword","Wizard Sword","Double-Edge","Razzmatazz","Deathbringer","Stunning Steel","Basilisk Steel","Poison Steel","Lullaby Steel","Muted Steel","Twilight Steel","Hunter's Sword","Flametongue","Ice Brand","Lightning Steel","Force Saber","Baroque Sword","Sorcery Sword","Soldier's Saber","Rune Steel","Enchanted Sword","Fencing Saber","Slasher","Nirvana","Herding Staff","Arc Arcana","Abraxas","Heavenly Axis","Judgment","Seraphim Rod","Rod of Roses","Nimbus Rod","Wing Wand","Wonder Wand","Laevatein","Astral Rod","Chaos Rod","Power Staff","Shining Staff","Faerie Staff","Magistral Rod","El Dorado","Tri-Rod","Wicked Wand","Nemesis Rod","Defender","Prism Rod","Mirage Rod","Healing Rod","Wind Rod","Conductor","Punisher","Calcite Staff","Bizarre Staff","Staff of Thorns","Reticent Staff","Darkness Staff","Monk Staff","Mage's Staff","Dual Rod","Ominous Rod","Death Wand","Entangling Rod","Break Rod","Belladonna Wand","Lullaby Rod","Rod of Silence","Rod of Darkness","Rod of Wisdom","Rod of Fire","Rod of Ice","Rod of Lightning","Rod of Water","Malleable Staff","Force Rod","Ductile Rod","Sorcery Rod","Full Metal Rod","Rune Rod","Enchanted Rod","Rod of Striking","Spiked Rod"};
    std::string armor_names[79]={"Genji Shield","Emblem","Crystal Shield","Aegis Shield","Golem Shield","Revive Shield","Rescue Shield","Paladin Shield","Diamond Shield","Ruby Shield","Dynasty Shield","Magister Shield","Collector's Shield","Treasure Shield","Shield of Hope","Assault Shield","Phantom Shield","Recovery Shield","Spiritual Shield","Phoenix Shield","Curative Shield","Rainbow Shield","Shining Shield","Faerie Shield","Peaceful Shield","Shaman Shield","Barrier Shield","Star Shield","Marching Shield","Moon Shield","Regen Shield","Haste Shield","Reflect Shield","Protect Shield","Shell Shield","Platinum Shield","Sapphire Shield","Knight's Shield","Wizard Shield","Elemental Shield","Defending Shield","Crimson Shield","Snow Shield","Ochre Shield","Cerulean Shield","Medical Shield","Lucid Shield","Serene Shield","Light Shield","Soul Shield","Blessed Shield","Soft Shield","Serum Shield","Alert Shield","Echo Shield","Bright Shield","Red Shield","White Shield","Yellow Shield","Blue Shield","NulTide Shield","NulBlaze Shield","NulFrost Shield","Adept's Shield","Tetra Shield","Mythril Shield","Gold Shield","Emerald Shield","Soldier's Shield","Mage's Shield","Silver Shield","Onyx Shield","Sorcery Shield","Warrior's Shield","Glorious Shield","Metal Shield","Pearl Shield","Magic Shield","Seeker's Shield"};
    std::string get_random_hero_name() {
        std::string possible_names[98];
        int possibility_counter=0;
        for (int i=0;i<98;i++)  {
            if (hero_names[i].compare("-")!=0)  {
                possible_names[possibility_counter]=hero_names[i];
                possibility_counter++;
            }
        }
        int choice=rand()%possibility_counter;
        return possible_names[choice];
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
        return possible_names[choice];
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
        return possible_names[choice];
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
        return possible_names[choice];
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
        return possible_names[choice];
    }
};


//////////////////////////////////////////////////////Effect////////////////////////////


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
    return (int)(percentage*((float)stat_value));
}

int Effect::get_stat_affected()  {
    return stat_affected;
}




//////////////////////////////////////////////////////Item////////////////////////////

int Item::get_lvl_requirement()  {
    return lvl_requirement;
}

int Item::get_price()  {
    return price;
}

std::string Item::get_name()  {
    return name;
}



//////////////////////////////////////////////////////Potion////////////////////////////

int Weapon::attack()  {
    return damage;
}

bool Weapon::Two_handed_weapon()  {
    return Two_handed;
}



//////////////////////////////////////////////////////Armor////////////////////////////

int Armor::defend()  {
    return defense;
}



//////////////////////////////////////////////////////Potion///////////////////////////////////////////////////////////////////

Potion::Potion(std::string name,int price,int lvl,int duration,float percentage,int stat_affected) : Item(name,price,lvl) {
    effect=Effect(duration,percentage,stat_affected);
}

void Potion::use(Hero* hero)  {
    hero->receive_buff(effect);
}


//////////////////////////////////////////////////////Spell////////////////////////////

void Spell::initiate_spell(Monster* monster)  {
    monster->receive_damage(avg_damage);
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

std::string Spell::get_name()  {
    return name;
}


//////////////////////////////////////////////////////LigthingSpell////////////////////////////

LigthingSpell::LigthingSpell(std::string name,int price,int lvl,int mp_usage,int damage) : Spell(name,price,lvl,mp_usage,damage) {
    effect=Effect(0,0,2);
}


//////////////////////////////////////////////////////IceSpell////////////////////////////

IceSpell::IceSpell(std::string name,int price,int lvl,int mp_usage,int damage) : Spell(name,price,lvl,mp_usage,damage) {
    effect=Effect(0,0,0);
}


//////////////////////////////////////////////////////FireSpell////////////////////////////

FireSpell::FireSpell(std::string name,int price,int lvl,int mp_usage,int damage) : Spell(name,price,lvl,mp_usage,damage) {
    effect=Effect(0,0,1);
}



//////////////////////////////////////////////////////LivingBeing////////////////////////////

std::string LivingBeing::get_name()  {
    return name;
}

int LivingBeing::get_health()  {
    return health;
}

int LivingBeing::get_level()  {
    return health;
}

void LivingBeing::restore_life(int amount)  {
    if (health+amount>=health_capacity)  {
        health=health_capacity;
    }
    else  {
        health=health+amount;
    }
}



//////////////////////////////////////////////////////Hero////////////////////////////


Hero::~Hero()  {
    delete armor;
    delete weapon;
    while (item_box.size()!=0)  {
        std::vector<Item*>::iterator it=item_box.begin();
        Item* to_delete=it.operator*();
        item_box.erase(it);
        delete to_delete;
    }
    std::vector<Spell*>::iterator it2=spells.begin();
    while (spells.size()!=0)  {
        std::vector<Spell*>::iterator it2=spells.begin();
        Spell* to_delete=it2.operator*();
        spells.erase(it2);
        delete to_delete;
    }
}

void Hero::display_stats()  {

}

void Hero::access_inventory()  {

}

int Hero::get_magic_power()  {
    return magic_power;
}

int Hero::get_magic_power_capacity()  {
    return magic_power_capacity;
}

int Hero::get_strenght()  {
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
    while (experience>=((((float)level)/10.0)+1)*1000)  {
        experience=experience-((((float)level)/10.0)+1)*1000;
        level_up();
    }
}

void Hero::cast_spell(std::string spell_name,Monster* monster)  {
    std::vector<Spell*>::iterator it=spells.begin();
    for (int i=0;i<spells.size();i++)  {
        if (spells.at(i)->get_name().compare(spell_name)==0)  {
            spells.at(i)->initiate_spell(monster);
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

void Hero::replace_weapon(std::string weapon_name)  {
    
}



