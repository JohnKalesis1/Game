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

static int quit_game=false;//global variable which if set to true will stop the game cycle

int count_digit(int number)  {//a function to count how many digits a number has
    int count=0;
    while(number>0)  {
        number=number/10;
        count++;
    }
    return count;

}

//Below are many functions which are the return the values of a every object in the game(better to have them all together for future changes in order to balance the game)
//No need to focus on them, the final functions were made through experimentation

float evasion(int agility)  {
    return (float)agility/100.0;
}

int high_stat_random_value()  {
    return 9+rand()%2;
}

int low_stat_random_value()  {
    return 6+rand()%2;
}

int get_effect_duration(int level)  {
    return 4*((level-1)*0.05+1);
}

float get_effect_percentage(int level)  {
    return 0.1*((level-1)*0.1+1);
}

int high_attack_random_value()  {
    return 10+rand()%2;
}

int low_attack_random_value()  {
    return 6+rand()%2;
}

int high_defense_random_value()  {
    return 10+rand()%2;
}

int low_defense_random_value()  {
    return 7+rand()%2;    
}

float high_evasion_random_value()  {
    return 0.1;
}

float low_evasion_random_value()  {
    return 0.5;    
}

int get_random_number_of_wares()  {
    return 5+rand()%3;
}

int get_pseudo_random_level()  {
    if (rand()%3)  {
        return 1+rand()%10;
    }
    return 1;
}

int get_weapon_attack(int level,bool two_handed)  {
    if (two_handed)  {
        return (9+rand()%2)*(level*0.1+1);
    }
    else  {
        return (6+rand()%2)*(level*0.1+1);
    }
}

int get_armor_defense(int level)  {
    return (4+rand()%2)*(level*0.1+1);    
}

int get_potion_effect(int level,int type)  {
    if (type>1)  {
        return (level*0.2+1);
    }
    else if (type==1) {
        return (2+rand()%3)*2;
    }
    else if (type==0)  {
        return (2+rand()%3)*2;
    }
}

int get_weapon_armor_price(int level)  {
    return (level*0.4+1)*25;
}

int get_potion_price(int level,int type)  {
    if (type>1)  {
        return (level*0.4+1)*20;
    }
    else if (type==1) {
        return (level*0.4+1)*8;
    }
    else if (type==0)  {
        (level*0.4+1)*12;
    }
}

int get_spell_price(int level)  {
    return (level*0.4+1)*30;
}

int get_mp_usage(int level)  {
    return (level*0.4+1)*5;
}

int get_spell_damage(int level)  {
    return (12+rand()%2)*(level*0.1+1);
}

int damage_value(int average_damage)  {
    return 9*((float)average_damage/10.0)+(rand()%3)*((int)((float)average_damage/10.0));
}

bool check_number(std::string str) {//asserts wheter a string is eligible for a conversion to a number
    for (int i = 0; i < str.length(); i++)  {
        if (isdigit(str[i]) == false)  {
            return false;
        }
    }
    return true;
}

namespace names_and_sketches {//some jaw-dropping original sketches whose cuteness are one of the main selling points of the game ^-^
    std::string Dragon_components[11]={//goofy looking but immeasurably powerful 
    "       ||       ||       ",
    "       |||_____|||       ",
    "         ||~ ~||         ",
    "   ''|    |||||    |''   ",
    "     ||  (-----)  ||     ",
    "      ||(-------)||      ",
    "       (---------)       ",
    "      (-----------)      ",
    "       (---------)       ",
    "        (-------)        ",
    "          ^   ^          "};
    std::string Exoskeleton_components[11]={//skip leg day macho
    "           ^  ^          ",        
    "          (*--*)         ",
    "     ______||||_____     ",
    "{|  {    o     o    }  |}",
    "{|==={             }===|}",
    "      {    ---    }      ",
    "       {   ---   }       ",
    "        {  ---  }        ",
    "          |   |          ",
    "          |   |          ",
    "         _|   |_         "};
    std::string Spirit_components[11]={//snake deer hybrid scared of combat 
    "  {                 }    ",
    "   {}{}         {}{}     ",
    "      |_________|        ",
    "       || ^-^ ||         ",
    "        ||__||           ",
    "          ||             ",
    "         ||              ",
    "        ||               ",
    "         ||      ||==>   ",
    "          ||    ||       ",
    "           ||==||        ",};    
    std::string Sorcerer_components[11]={//nerdy wizard
    "           |||           ",
    "          |||||          ",
    "      ___|||||||___      ",
    "         (o   o)         ",
    "    (#)   +++++   (#)    ",
    "     |    |+++|    |     ",
    "     ||---||+||---||     ",
    "          |||||          ",
    "           | |           ",
    "           | |           ",
    "           & &           "};
    std::string Warrior_components[11]={//karate man
    "         ^     ^         ",
    "         |^___^|         ",
    "       <=|||||||=>       ",
    "          {* *}          ",
    "           |||           ",
    "     /==={|||||}====#}   ",
    "     =#}  {|||}          ",
    "           |||           ",
    "          {| |}          ",
    "         {|   |}         ",
    "          &   &          "};
    std::string Paladin_components[11]={//ex-solder turned priest  
    "         |||+|||         ",
    "         |||||||         ",
    "         |(^ ^)|         ",
    "    {#}    |||    {#}    ",
    "    {|    | | |    |}    ",
    "    {|===| +|  |===|}    ",
    "        |   |   |        ",
    "       |    |    |       ",
    "      |___________|      ",
    "         {|   |}         ",
    "          &   &          "};
    std::string Dead_Foe_components[11]={
    "                         ",
    "                         ",
    "                         ",
    "         _______         ",
    "         [X   X]         ",
    "          [---]          ",
    "           |||           ",
    "            O            ",
    "            o            ",
    "                         ",
    "                         "};
    std::string Dead_Friendly_components[11]={
    "                         ",
    "                         ",
    "          _____          ",
    "         (     )         ",
    "        ( o   o )        ",
    "         | ~~~ |         ",
    "          |||||          ",
    "           (O)           ",
    "            O            ",
    "            o            ",
    "                         "};
    //Below are a lot of names and functions to get a random one of those available
    std::string hero_names[98]={"Abbathor","Aerdrie Faenya","Arvoreen","Baervan Wildwanderer","Baravar Cloakshadow","Berronar Truesilver","Brandobaris","Callarduran Smoothhands","Charmalaine","Clangeddin Silverbeard","Corellon Larethian","Cyrrollalee","Deep Sashelas","Dugmaren Brightmantle","Dumathoin","Ehlonna","Erevan Ilesere","Fenmarel Mestarine","Fharlanghn","Flandal Steelskin","Gadhelyn","Gaerdal Ironhand","Garl Glittergold","Gendwar Argrim","Halani Celanil","Heironeous","Labelas Enoreth","Moradin","Muamman Duathal","Olidammara","Pelor","Rillifane Rallathil","Roykyn","Segojan Earthcaller","Sehanine Moonbow","Sheela Peryroyl","Solonor Thelandira","St. Cuthbert","Urdlen","Urogalan","Vergadain","Ye'Cind","Yondalla","Annam","Bahamut","Blibdoolpoolp","Diirinka","Eadro","Gruumsh","Hruggek","Ilsensine","Jubilex","Kurtulmak","Laduguer","Loagzed","Lolth","Maglubiyet","Merrshaulk","Orcus","Sekolah","Semuanya","Shekinester","Skerrit","Stronmaus","Tiamat","Vaprak","Yeenoghu","Aasterinian","Bagrivyek","Bahgtru","Chronepsis","Doresain","Falazure","Gaknulak","Grankhul","Great Mother","Grolantor","Hiatea","Iallanis","Ilneval","Io","Karontor","Kiaransalee","Khurgorbaeyag","Luthic","Memnor","Nomog-Geaya","Panzuriel","Raxivort","Shargaas","Sixin","Skoraeus Stonebones","Squerrik","Surtr","Thrym","Vhaeraun","Yurtrus","Zinzerena"};
    std::string monster_names[102]={"Insane Daoist","A not so evil monster","Hellman","Tainthound","Dustfiend","Nethertree","The Grim Wraith","The Blissful Corpse","The Disgusting Phenomenon","The Amphibian Razor Hyena","The Grisly Ash Fiend","The Grisly Thunder Anaconda","Vileling","Plagueling","Stenchgolem","Fetidling","The Agitated Mumbler","The Dangerous Wraith","The Blissful Anomaly","The Brutal Berserker Gargoyle","The Grisly Vampire Lynx","The Tattooed Storm Bison","Vortexsnake","Abysssnake","Brineserpent","Acidfigure","The Monstrous Weirdo","The Ancient Tree","The Mad Shrieker","The Greater Ash Lion","The Elusive Killer Buffalo","The Raging Demon Drake","Blightwing","Cavernfoot","Cavehound","Wisphound","The Anguished Screamer","The Empty Brute","The Grumpy Lich","The Feathered Phantom Pig","The Vicious Hunting Owl","The Greater Warp Rat","Vilecreep","Plaguehand","Spectralteeth","Wispmask","The Defiant Horror","The Haunting Screamer","The Brown Plant","The Mad Tomb Buffalo","The Scarred Mist Cobra","The Ivory Blaze Freak","Corpsesnake","Gloomgolem","Cloudscreamer","Foulteeth","The Muted Vision","The Blind Ooze","The Bold Tumor","The Feathered Tomb Dragon","The Vicious Bane Crocodile","The Bloodthirsty Ash Bat","Nightsword","Infernotooth","Plaguecrackle","Smokefreak","The Canine Ooze","The Undead Phenomenon","The Wretched Behemoth","The Fiery Demon Bull","The Crimson Killer Viper","The Long-Horned Razor Scorpion","Gallghoul","Grievehood","Murkboy","Smogwing","The Disfigured Creeper","The Quiet Plant","The Active Weirdo","The Burnt Corpse Cobra","The Taloned Rot Crocodile","The Savage Slayer Hippo","Gallwings","Mournspawn","Mistflayer","Umbrawings","The Aged Ooze","The White Deviation","The Bronze Abnormality","The Ruthless Bone Bison","The Titanium Vampire Elephant","The Feral Harlequin Vermin","Nethercat","Smogstep","Thorntalon","Chaosbody","The Bold Ooze","The Brown Miscreation","The Barren Weirdo","The Tattooed Phantom Leviathan","The Painted Tomb Crocodile","The Burnt Raptor Warthog"};
    std::string potion_names[66]={"Potion","Hi-Potion","X-Potion","Mega-Potion","Ether","Turbo Ether","Elixir","Megalixir","Phoenix Down","Mega Phoenix","Antidote","Echo Screen","Eye Drops","Holy Water","Remedy","Soft","Al Bhed Potion","Heset Water","Tetra Elemental","Candle of Life","Dream Powder","Farplane Shadow","Farplane Wind","Frag Grenade","Silence Grenade","Sleeping Powder","Smoke Bomb","Petrify Grenade","Poison Fang","Blessed Gem","Dark Matter","Shadow Gem","Shining Gem","Supreme Gem","Gold Hourglass","Heset Spring","Light Curtain","Lunar Curtain","Mana Spring","Mana Tablet","Mana Tonic","Purifying Salt","Silver Hourglass","Soul Spring","Stamina Spring","Stamina Tablet","Stamina Tonic","Star Curtain","Three Stars","Twin Stars","Ability Distiller","Amulet","Designer Wallet","Door to Tomorrow","Gambler's Spirit","Hypello Potion","Mana Distiller","Map","Musk","Pendulum","Power Distiller","Shining Thorn","Speed Distiller","Underdog's Secret","Wings to Discovery","Winning Formula"};
    std::string spell_names[91]={"Flame","Torch","Eruption","Flare","Blaze","Inferno","Fireball","Explosion","Meteor","Salamander’s Blade","Dragon Fire","Sinkhole","Pit","Chasm","Vine","Thorn","Nettle","Rockfall","Landslide","Avalanche","Chill","Freeze","Frostbite","Douse","Deluge","Flood","Wave","Surge","Tsunami","Nyad’s Lore","Sleep","Slumber","Shock","Bolt","Plasma","Gust","Gale","Tempest","Whirlwhind","Cyclone","Vortex","Wyvern’s Wings","Daze","Stun","Confuse","Light","Flash","Radiance","Cleanse","Scour","Purge","Wrath","Retribution","Judgment","Angel’s Mercy","Darkness","Shade","Gloom","Decay","Fester","Corrupt","Spite","Rancor","Malice","Demon’s Rage","Drain","Siphon","Void","Bolt Strike","Freeze Wave","Inferno Blaze","Channel Energy","Shadow Blade","Heaven's Sword","Blazing Katana","Staff of Ice","Arrow of Purity","Blazing Arrows","Burn the Soul","Fire Wings","Fury of Osano-Wo","Gaijin Flames","Hungry Blade","Yakamo’s Wrath","Yakamo’s Eye","Breath of Suitengu","The Inner Ocean","Surging Soul","Endless Depth","Kharmic Intent","Whispered Blade"};
    std::string weapon_names[119]={"Caladbolg","Taming Sword","Crystal Sword","Excalibur","Ragnarok","Balmung","Save the Queen","Heartbreaker","Lionheart","Durandal","Ascalon","Ambitious","Hrunting","Astral Sword","Apocalypse","Slowstrike","Master Sword","Rune-Master","Warlock","Arc Sword","Gilventure","Tri-Steel","Helter-Skelter","Vendetta","Avenger","Prism Steel","Mirage Sword","Lifesaver","Sonic Steel","Vigilante","Dance Macabre","Largamente","Gravestone","Sidewinder","Nightmare","Mage Masher","Nightbringer","Knight Sword","Wizard Sword","Double-Edge","Razzmatazz","Deathbringer","Stunning Steel","Basilisk Steel","Poison Steel","Lullaby Steel","Muted Steel","Twilight Steel","Hunter's Sword","Flametongue","Ice Brand","Lightning Steel","Force Saber","Baroque Sword","Sorcery Sword","Soldier's Saber","Rune Steel","Enchanted Sword","Fencing Saber","Slasher","Nirvana","Herding Staff","Arc Arcana","Abraxas","Heavenly Axis","Judgment","Seraphim Rod","Rod of Roses","Nimbus Rod","Wing Wand","Wonder Wand","Laevatein","Astral Rod","Chaos Rod","Power Staff","Shining Staff","Faerie Staff","Magistral Rod","El Dorado","Tri-Rod","Wicked Wand","Nemesis Rod","Defender","Prism Rod","Mirage Rod","Heset Rod","Wind Rod","Conductor","Punisher","Calcite Staff","Bizarre Staff","Staff of Thorns","Reticent Staff","Darkness Staff","Monk Staff","Mage's Staff","Dual Rod","Ominous Rod","Death Wand","Entangling Rod","Break Rod","Belladonna Wand","Lullaby Rod","Rod of Silence","Rod of Darkness","Rod of Wisdom","Rod of Fire","Rod of Ice","Rod of Lightning","Rod of Water","Malleable Staff","Force Rod","Ductile Rod","Sorcery Rod","Full Metal Rod","Rune Rod","Enchanted Rod","Rod of Striking","Spiked Rod"};
    std::string armor_names[79]={"Genji Shield","Emblem","Crystal Shield","Aegis Shield","Golem Shield","Revive Shield","Rescue Shield","Paladin Shield","Diamond Shield","Ruby Shield","Dynasty Shield","Magister Shield","Collector's Shield","Treasure Shield","Shield of Hope","Assault Shield","Phantom Shield","Recovery Shield","Spiritual Shield","Phoenix Shield","Curative Shield","Rainbow Shield","Shining Shield","Faerie Shield","Peaceful Shield","Shaman Shield","Barrier Shield","Star Shield","Marching Shield","Moon Shield","Regen Shield","Haste Shield","Reflect Shield","Protect Shield","Shell Shield","Platinum Shield","Sapphire Shield","Knight's Shield","Wizard Shield","Elemental Shield","Defending Shield","Crimson Shield","Snow Shield","Ochre Shield","Cerulean Shield","Medical Shield","Lucid Shield","Serene Shield","Light Shield","Soul Shield","Blessed Shield","Soft Shield","Serum Shield","Alert Shield","Echo Shield","Bright Shield","Red Shield","White Shield","Yellow Shield","Blue Shield","NulTide Shield","NulBlaze Shield","NulFrost Shield","Adept's Shield","Tetra Shield","Mythril Shield","Gold Shield","Emerald Shield","Soldier's Shield","Mage's Shield","Silver Shield","Onyx Shield","Sorcery Shield","Warrior's Shield","Glorious Shield","Metal Shield","Pearl Shield","Magic Shield","Seeker's Shield"};
    std::string get_random_hero_name() {
        return hero_names[rand()%98];
    }
    std::string get_random_monster_name() {//each time we give a name to an object, this name is replaced by and "-" so that it is not given again to another object
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
            if (armor_names[i].compare(to_return)==0)  {
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

int Spell::initiate_spell(Monster* monster,int dexterity)  {
    int attack_successful=monster->receive_damage(avg_damage+dexterity);//attack the enemy with the spell (will return -1 if evaded or a positive number dictating the damage it did)
    if (attack_successful>=0)  {//if attack was not evaded, then apply the spell's debuff on the enemy
        monster->receive_debuff(effect);
    }
    return attack_successful;//we return what was the result of the attack in order to display it in the action taken 
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
    effect=Effect(get_effect_duration(lvl),get_effect_percentage(lvl),2);//the numbers simply go to the type of effect the effect is
}

//////////////////////////////////////////////////////IceSpell//////////////////////////////////////////

IceSpell::IceSpell(std::string name,int price,int lvl,int mp_usage,int damage) : Spell(name,price,lvl,mp_usage,damage,2) {
    effect=Effect(get_effect_duration(lvl),get_effect_percentage(lvl),0);
}

//////////////////////////////////////////////////////FireSpell////////////////////////////////////////

FireSpell::FireSpell(std::string name,int price,int lvl,int mp_usage,int damage) : Spell(name,price,lvl,mp_usage,damage,1) {
    effect=Effect(get_effect_duration(lvl),get_effect_percentage(lvl),1);
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
    if (health+amount>=health_capacity)  {//if amount healed adds up to more than max health, then set player health to max hp
        health=health_capacity;
    }
    else  {
        health=health+amount;
    }
}


//////////////////////////////////////////////////////Hero//////////////////////////////////////////////

Hero::Hero(std::string name,int health,int magic_power_capacity,int strength,int dexterity,int agility,int money,short hero_type)  : LivingBeing(name,health,1), magic_power_capacity(magic_power_capacity), magic_power(magic_power_capacity), strength(strength), base_strength(strength), base_dexterity(dexterity), dexterity(dexterity), base_agility(agility), agility(agility), money(money), hero_type(hero_type)  { 
    evasion_chance=evasion(agility);
    bool two_handed=((rand()%10)<5);//when a hero is created he is given lvl 1 weapons and armor
    weapon=new Weapon(names_and_sketches::get_random_weapon_name(),get_weapon_armor_price(1),1,get_weapon_attack(1,two_handed),two_handed);
    acquire_item(weapon);
    if (!two_handed)  {
        armor=new Armor(names_and_sketches::get_random_armor_name(),get_weapon_armor_price(1),1,get_armor_defense(1));
        acquire_item(armor);
    }
} 

Hero::~Hero()  {
    while (item_box.size()!=0)  {//delete every item in the item box and likewise in the spells
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

bool& Hero::get_turn()  {
    return turn;
}

void Hero::set_turn_to(bool status)  {
    turn=status; 
}

bool Hero::evade()  {
    float random_float=(float)rand()/(float)RAND_MAX;//get a random float between 0 and 1
    if (random_float<evasion_chance)  {//if float is less than evasion chance then evade
        return true;
    }
    else  {
        return false;
    }
}

bool Hero::try_and_level_up()  {
    bool flag=false;
    while (experience>=((((float)level)/10.0)+1)*1000)  {//if experience is more or equal to the amount needed to level up
        experience=experience-((((float)level)/10.0)+1)*1000;//reduce experience by that amount and level up 
        level_up();
        flag=true;
    }
    return flag;//returns true if hero succesfully leveled up
}

int Hero::cast_spell(Spell* spell,Monster* monster)  {//whether hero has enough mp to cast the spell is done before the call of the function
    magic_power=magic_power-spell->get_mp_usage();
    return spell->initiate_spell(monster,dexterity); 
}

void Hero::level_up()  {//growth of hero
    level++;
    agility=0.5+ ((level-1)*0.3+1)*base_agility;
    strength=0.5+ ((level-1)*0.3+1)*base_strength;
    dexterity=0.5+ ((level-1)*0.3+1)*base_dexterity;
    health_capacity=0.5+ ((level-1)*0.4+1)*20;
    magic_power_capacity=0.5+ ((level-1)*0.5+1)*15;
    evasion_chance=evasion(agility);
}

int Hero::attack(Monster* monster)  {
    if (weapon!=NULL)  {
        return monster->receive_damage(weapon->attack()+strength);
    }
    else  {
        return monster->receive_damage(strength);//bare fists attack
    }
}

void Hero::restore_mp(int amount)  {//same as in hp restoration
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

int Hero::receive_damage(int damage)  {
    if (evade())  {
        return -1;
    }
    else  {
        if (armor==NULL)  {//if no anmor equipped, take all the damage
            health=health-damage;
            if (health<0)  {
                health=0;//if damage is fatal set hero health to zero
            }
            return damage;
        }
        else  {
            if (damage>armor->defend())  {//if damage is greater than that of hero's defense
                health=health+armor->defend()-damage;//reduce damage by that amount of defense and inflict it one hero
                if (health<0)  {
                    health=0;
                }
                return damage-armor->defend();
            }
            else  {
                return 0;//else damage is nullified
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
    Item* to_delete=remove_item(potion->get_name());//since names are unique to an item, we use them to identify each item
    delete to_delete;
}

void Hero::receive_buff(short stat_affected,int boost)  {
    switch (stat_affected)  {//depending on the stat affected make the appropriate enhancements
        case 0:
            restore_life(boost);
            break;
        case 1:
            restore_mp(boost);
            break;
        case 2:
            strength=strength+boost;//increase actual strenght by set amount
            base_strength=base_strength+(float)boost/(float)((level-1)*0.3+1);//in order for the change to stay after the level up, we also increase the hero's growth rate by same amount(this also makes the potions act as some kind of steroids since the increase the speed of stat growth... but lets just call it a feature ^~^)
            break;
        case 3:
            dexterity=dexterity+boost;
            base_dexterity=base_dexterity+(float)boost/(float)((level-1)*0.3+1);
            break;
        case 4:
            agility=agility+boost;
            base_agility=base_agility+(float)boost/(float)((level-1)*0.3+1);
            break;
        default:
            break;
    }
}

Item* Hero::remove_item(std::string name)  {//search item by it's unique name by iterating through the list and remove it before returning it
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

bool Hero::receive_input(char input)  {//handles inputs related to hero methods
    switch (input)  {
        case 'i'://check inventory
            return display_inventory();
            break;
        case 'z'://equip weapon
            return show_availabe_weapons_and_promt_for_swap();
            break;
        case 'x'://equip armor
            return show_availabe_armors_and_promt_for_swap();
            break;
        case 'c'://use a potion
            return show_availabe_potions_and_promt_for_use();
            break;
        case 'u'://display stats  
            return display_stats();
            break;
        default :
            return false;
            break;
    }
}


bool Hero::show_availabe_weapons_and_promt_for_swap(bool* turn,std::string* action)  {//oh boy this will be hard...
    bool wrong_action=false;//whether user pressed a wrong action
    bool underleveled=false;//whether user tried to equip a weapon whith a higher level than his
    bool already_equipped=false;//whether user tried to equip the same weapon
    bool successfully_equipped=false;//set true on succesful equip
    bool unequipped_armor=false;//whether the Weapon equip forced an Armor removal
    std::string weapon_equipped;//name of weapon that was equipped
    while (true)  {//inner loop for player choice of weapons
        std::list<Item*>::iterator it=item_box.begin();//we will iterate over the item box in search of weapons
        system("clear");//clear the terminal screen
        std::cout << "Hero name: " << name ;//display hero name and occupation to make it easier to understand a hero's needs
        switch (hero_type)  {
            case 0:
                std::cout << "(Warrior)";
                break;
            case 1:
                std::cout << "(Paladin)";
                break;
            case 2:
                std::cout << "(Sorcerer)";
                break;
        }
        std::cout << " Lvl." << level <<'\n';
        Weapon* choices[item_box.size()];//create an array of possible weapons
        int weapons_count=0;
        std::cout << "Weapons:\n";
        for (int i=0;i<item_box.size();i++)  {
            if (it.operator*()->get_type_of_item()==0)  {//if item is a weapon
                Weapon* weapon_candidate=(Weapon*)it.operator*();
                std::cout << weapons_count+1 <<"." << weapon_candidate->get_name();//display it (we add +1 in order to make the display more intuitive)
                choices[weapons_count]=weapon_candidate;//add the weapon to the list of possble choices
                weapons_count++;
                if (weapon!=NULL)  {
                    if (weapon->get_name().compare(weapon_candidate->get_name())==0)  {
                        std::cout << "(Equipped)";//if its the one we have currently equipped, display the message
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
        if (weapons_count==0)  {
            std::cout << "No available weapons\n";
        }
        std::cout << "\nSelect which weapon you want to equip:\n";
        for (int i=0;i<weapons_count;i++)  {//display possible actions 
            std::cout << i+1 <<"->"<<choices[i]->get_name();
            if (weapon!=NULL)  {
                if (weapon->get_name().compare(choices[i]->get_name())==0)  {
                    std::cout << "(Equipped)";
                }
            }
            if (choices[i]->get_lvl_requirement()>level)  {
                std::cout << "(Level "<<choices[i]->get_lvl_requirement() <<" required)";
            }
            std::cout << '\n';
        }
        std::cout <<"(Armor category: c) (Go Back: b) (Switch Hero: h) (Quit game: q)\n";
        std::string input;
        if (wrong_action)  {//below are message for each action in the context of picking weapons the hero can take(in the case of the other actions their result is visible so there is no need to show anything)
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
        if (check_number(input))  {//if input is a number(meaning user tried to select a weapon)
            int pick=atoi(input.c_str())-1;//make the input into an integer and make it fit to function as an array index 
            if (pick<weapons_count && pick>=0)  {//if number is withing bounds of weapons presented proceed
                if (choices[pick]->get_lvl_requirement()<=level)  {//if not underleveled, proceed to equip it
                    if (weapon!=NULL)  {//if a weapon is already equipped
                        if (choices[pick]->get_name().compare(weapon->get_name())==0)  {
                            already_equipped=true;//watch out for already equipped scenario
                            continue;//procced with loop, in order to make any scenarios become visible
                        }
                        else  {
                            weapon_equipped=choices[pick]->get_name();
                            unequipped_armor=replace_weapon(choices[pick]);//replace weapon, which returns true if armor was unequipped
                            successfully_equipped=true;
                            if (turn!=NULL)  {//if this is happening while in a fight, end user's turn after he has finished with weapon swapping 
                                *turn=false;
                            }
                            if (action!=NULL)  {//likewise if it is happening in a fight, create the message of the action taken
                                *action=get_name();
                                action->append(" equipped ");
                                action->append(choices[pick]->get_name());
                                if (unequipped_armor)  {
                                    action->append(". Armor unequipped");
                                }
                                return true;//if in a fight and user consumed turn return true, which will indicate a hero swap
                            }
                            continue;
                        }
                    }
                    else  {//case of no weapon
                        weapon_equipped=choices[pick]->get_name();
                        unequipped_armor=replace_weapon(choices[pick]);
                        successfully_equipped=true;
                        if (turn!=NULL)  {
                            *turn=false;
                        }
                        if (action!=NULL)  {
                            *action=get_name();
                            action->append(" equipped ");
                            action->append(choices[pick]->get_name());
                            if (unequipped_armor)  {
                                action->append(". Armor unequipped");
                            }
                            return true;
                        }
                        continue;
                    }
                }
                else  {
                    underleveled=true;//trigger underleveled scenario
                    continue;
                }
            }
            else  {//else wrong action
                wrong_action=true;
                continue;
            }
        }
        else  {
            if (input.compare("q")==0)  {
                quit_game=true;
                return false;//a false statement here plays no major role, since with the quit game flag set to true, the game will stop
            }
            else if (input.compare("b")==0)  {
                return false;//by returning false we signify that no hero swap must be made afterwards(only takes effect in a fight)
            }
            else if (input.compare("c")==0)  {
                return show_availabe_armors_and_promt_for_swap();//show armors
            }
            else if (input.compare("h")==0)  {
                return true;//return true indicating to change hero
            }
            else  {
                wrong_action=true;
                continue;
            }
        }
    }
}

bool Hero::show_availabe_armors_and_promt_for_swap(bool * turn,std::string* action)  {//almost identical to the above
    bool wrong_action=false;
    bool underleveled=false;
    bool already_equipped=false;
    bool successfully_equipped=false;
    bool weapon_unequipped=false;
    std::string armor_equipped;
    while (true)  {
        std::list<Item*>::iterator it=item_box.begin();
        system("clear");
        std::cout << "Hero name: " << name ;
        switch (hero_type)  {
            case 0:
                std::cout << "(Warrior)";
                break;
            case 1:
                std::cout << "(Paladin)";
                break;
            case 2:
                std::cout << "(Sorcerer)";
                break;
        }
        std::cout << " Lvl." << level <<'\n';
        Armor* choices[item_box.size()];
        int armors_count=0;
        std::cout << "Armors:\n";
        for (int i=0;i<item_box.size();i++)  {
            if (it.operator*()->get_type_of_item()==1)  {
                Armor* armor_candidate=(Armor*)it.operator*();
                std::cout << armors_count+1 <<"." << armor_candidate->get_name();
                choices[armors_count]=armor_candidate;
                armors_count++;
                if (armor!=NULL)  {
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
        if (armors_count==0)  {
            std::cout << "No available armors\n";
        }
        std::cout << "\nSelect which armor you want to equip: ";
        if (weapon!=NULL)  {
            if (weapon->Two_handed_weapon())  {
                std::cout << "(Be advised, equipping any armor will unequipped your current Two-handed weapon)";
            }
        }
        std::cout << '\n';
        for (int i=0;i<armors_count;i++)  {
            std::cout << i+1<<"->"<<choices[i]->get_name();
            if (armor!=NULL)  {
                if (armor->get_name().compare(choices[i]->get_name())==0)  {
                    std::cout << "(Equipped)";
                }
            }
            if (choices[i]->get_lvl_requirement()>level)  {
                std::cout << "(Level "<<choices[i]->get_lvl_requirement() <<" required)";
            }
            std::cout << '\n';
        }
        std::cout <<"(Weapons category: c) (Go Back: b) (Switch Hero: h) (Quit game: q)\n";
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
                    if (armor!=NULL)  {
                        if (choices[pick]->get_name().compare(armor->get_name())==0)  {
                            already_equipped=true;
                            continue;
                        }
                        else  {
                            armor_equipped=choices[pick]->get_name();
                            weapon_unequipped=replace_armor(choices[pick]);
                            successfully_equipped=true;
                            if (turn!=NULL)  {
                                *turn=false;
                            }
                            if (action!=NULL)  {
                                *action=get_name();
                                action->append(" equipped ");
                                action->append(choices[pick]->get_name());
                                return true;
                            }
                            continue;
                        }
                    }
                    else  {
                        armor_equipped=choices[pick]->get_name();
                        weapon_unequipped=replace_armor(choices[pick]);
                        successfully_equipped=true;
                        if (turn!=NULL)  {
                                *turn=false;
                        }
                        if (action!=NULL)  {
                            *action=get_name();
                            action->append(" equipped ");
                            action->append(choices[pick]->get_name());
                            if (weapon_unequipped)  {
                                action->append(". Weapon unequipped");
                            }
                            return true;
                        }
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
                return false;
            }
            else if (input.compare("b")==0)  {
                return false;
            }
            else if (input.compare("c")==0)  {
                return show_availabe_weapons_and_promt_for_swap();
            }
            else if (input.compare("h")==0)  {
                return true;
            }
            else  {
                wrong_action=true;
                continue;
            }
        }
    }
}

bool Hero::show_availabe_potions_and_promt_for_use(bool * turn,std::string* action)  {//same structure as the above
    bool wrong_action=false;
    bool underleveled=false;
    bool successful_use=false;
    int number_of_uses=0;
    std::string potion_used;
    while (true)  {
        std::list<Item*>::iterator it=item_box.begin();
        system("clear");
        std::cout << "Hero name: " << name ;
        switch (hero_type)  {
            case 0:
                std::cout << "(Warrior)";
                break;
            case 1:
                std::cout << "(Paladin)";
                break;
            case 2:
                std::cout << "(Sorcerer)";
                break;
        }
        std::cout << " Lvl." << level << " Magic Power: "<<magic_power << "/" <<magic_power_capacity <<'\n';
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
                std::cout <<" Effect: ";
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
            }
            std::advance(it,1);
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
        std::cout <<"(Go Back: b) (Switch Hero: h) (Quit game: q)\n";
        std::string input;
        if (wrong_action)  {
            std::cout<< "Option not valid. ";
            wrong_action=false;
        }
        if (underleveled)  {
            std::cout << "Hero does not meet the requirements to use the potion. ";
            underleveled=false;
        }
        if (successful_use)  {
            std::cout << potion_used <<" succesfully used. ";
            successful_use=false;
            number_of_uses++;
        }
        std::cout << "Please enter an action:";
        std::cin >> input; 
        if (check_number(input))  {
            int pick=atoi(input.c_str())-1;
            if (pick<potions_count && pick>=0)  {
                if (potion_choices[pick]->get_lvl_requirement()<=level)  {
                    potion_used=potion_choices[pick]->get_name();
                    use_potion(potion_choices[pick]);
                    if (turn!=NULL)  {
                        *turn=false;
                    }
                    if (action!=NULL)  {
                        if (number_of_uses==0)  {
                            *action=get_name();
                            action->append(" used ");
                        }
                        if (number_of_uses>0)  {
                            action->append(", "); 
                        }
                        action->append(potion_used);
                        
                        
                    }
                    successful_use=true;
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
                return false;
            }
            else if (input.compare("b")==0)  {
                return false;
            }
            else if (input.compare("h")==0)  {
                return true;
            }
            else  {
                wrong_action=true;
                continue;
            }
        }
    }
}

bool Hero::display_inventory()  {//either shows items or spells 
    bool wrong_action=false;
    bool underleveled=false;
    bool item_or_spell=true;//thus a boolean to switch between the two sections is vital
    while (true)  {
        if (item_or_spell)  {//item section, which shows every item in item box in a similar way as the previous methods(a lot of copy pasting was at play here...)
            std::list<Item*>::iterator it=item_box.begin();
            system("clear");
            std::cout << "Hero name: " << name;
            switch (hero_type)  {
                case 0:
                    std::cout << "(Warrior)";
                    break;
                case 1:
                    std::cout << "(Paladin)";
                    break;
                case 2:
                    std::cout << "(Sorcerer)";
                    break;
            }
            std::cout << " Lvl." << level << " Gold: "<<money <<'\n';
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
                    std::cout <<" Effect: ";
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
            std::cout <<"(Spells category: c) (Go Back: b) (Switch Hero: h) (Quit game: q)\n";
            if (wrong_action)  {
                std::cout<< "Option not valid. ";
                wrong_action=false;
            }
            std::string input;
            std::cout << "Please enter an action:";
            std::cin >> input; 
            if (input.compare("q")==0)  {
                quit_game=true;
                return false;
            }
            else if (input.compare("b")==0)  {
                return false;
            }
            else if (input.compare("c")==0)  {
                item_or_spell=false;//change to spell section
                continue;
            }
            else if (input.compare("h")==0)  {
                return true;
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
            std::cout << "Hero name: " << name ;
            switch (hero_type)  {
                case 0:
                    std::cout << "(Warrior)";
                    break;
                case 1:
                    std::cout << "(Paladin)";
                    break;
                case 2:
                    std::cout << "(Sorcerer)";
                    break;
            }
            std::cout <<" Lvl." << level << " Gold: "<<money <<'\n';
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
                    std::cout <<" Magic Power Used: "<< spell->get_mp_usage() << '\n';
                    std::cout << " Effect: Reduced evasion chance by "<<spell->get_effect().get_percentage() <<" for "<< spell->get_effect().get_duration() <<" rounds\n";
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
                    std::cout <<" Magic Power Used: "<< spell->get_mp_usage() << '\n';
                    std::cout << " Effect: Reduced defense by "<<spell->get_effect().get_percentage() <<" for "<< spell->get_effect().get_duration() <<" rounds\n";
                    std::cout <<" Level: "<<spell->get_lvl_requirement()<<'\n';
                    std::cout <<" Price: "<<spell->get_price()/2<<'\n';
                }
                if (it2.operator*()->get_type_of_spell()==2)  {
                    spell=it2.operator*();
                    std::cout << i+1 <<"." << spell->get_name() <<"(Ice Spell)";
                    spell_choices[spells_count]=spell;
                    spells_count++;
                    std::cout << '\n';
                    std::cout << " Average Damage: "<<spell->get_power() <<'\n';
                    std::cout <<" Magic Power Used: "<< spell->get_mp_usage() << '\n';
                    std::cout << " Effect: Reduced attack by "<<spell->get_effect().get_percentage() <<" for "<< spell->get_effect().get_duration() <<" rounds\n";
                    std::cout <<" Level: "<<spell->get_lvl_requirement()<<'\n';
                    std::cout <<" Price: "<<spell->get_price()/2<<'\n';
                }
                std::advance(it2,1);
            }
            if (spells_count==0)  {
                std::cout << "No spells available.\n";
            }
            std::cout <<"(Items category: c) (Go Back: b) (Switch Hero: h) (Quit game: q)\n";
            std::string input;
            if (wrong_action)  {
                std::cout<< "Option not valid. ";
                wrong_action=false;
            }
            std::cout << "Please enter an action:";
            std::cin >> input; 
            if (input.compare("q")==0)  {
                quit_game=true;
                return false;
            }
            else if (input.compare("b")==0)  {
                return false;
            }
            else if (input.compare("c")==0)  {
                item_or_spell=true;//switch to items category
                continue;
            }
            else if (input.compare("h")==0)  {
                return true;
            }
            else  {
                wrong_action=true;
                continue;
            }
        }
    }
}

bool Hero::show_availabe_spells_and_promt_for_activation(bool* turn,std::string* action,std::string* result,Fight* fight)  {//in comparison to the other cases, the spell prompt "window" will always be related to a fight
    bool wrong_action=false;
    bool underleveled=false; 
    bool not_enough_mp=false;//scenario of not enought magic power to cast spell
    while (true)  {
        std::list<Spell*>::iterator it=spells.begin();
        Spell* spell_choices[spells.size()];
        system("clear");
        std::cout << "Hero name: " << name << " Lvl." << level << " Magic Power: "<<magic_power <<'\n';
        std::cout << "Spells:\n";
        Spell* spell;
        for (int i=0;i<spells.size();i++)  {//show each available spell
            if (it.operator*()->get_type_of_spell()==2)  {
                spell=it.operator*();
                std::cout << i+1 <<"." << spell->get_name()<<"(Ligthing Spell)";
                spell_choices[i]=spell;
                std::cout << '\n';
                std::cout <<" Average Damage: "<<spell->get_power()<<'\n';
                std::cout <<" Magic Power Used: "<< spell->get_mp_usage() << '\n';
                std::cout << " Effect: Reduced evasion chance by "<<spell->get_effect().get_percentage() <<" for "<< spell->get_effect().get_duration() <<" rounds\n";
                std::cout <<" Level: "<<spell->get_lvl_requirement()<<'\n';
            }
            if (it.operator*()->get_type_of_spell()==1)  {
                spell=it.operator*();
                std::cout << i+1 <<"." << spell->get_name()<<"(Fire Spell)";
                spell_choices[i]=spell;
                std::cout << '\n';
                std::cout <<" Average Damage: "<<spell->get_power()<<'\n';
                std::cout <<" Magic Power Used: "<< spell->get_mp_usage() << '\n';
                std::cout << " Effect: Reduced defense by "<<spell->get_effect().get_percentage() <<" for "<< spell->get_effect().get_duration() <<" rounds\n";
                std::cout <<" Level: "<<spell->get_lvl_requirement()<<'\n';
            }
            if (it.operator*()->get_type_of_spell()==0)  {
                spell=it.operator*();
                std::cout << i+1 <<"." << spell->get_name() <<"(Ice Spell)";
                spell_choices[i]=spell;
                std::cout << '\n';
                std::cout << " Average Damage: "<<spell->get_power() <<'\n';
                std::cout <<" Magic Power Used: "<< spell->get_mp_usage() << '\n';
                std::cout << " Effect: Reduced attack by "<<spell->get_effect().get_percentage() <<" for "<< spell->get_effect().get_duration() <<" rounds\n";
                std::cout <<" Level: "<<spell->get_lvl_requirement()<<'\n';
            }
            std::advance(it,1);
        }
        if (spells.size()==0)  {
            std::cout << "No spells available.\n";
        }
        else  {
            std::cout << "\nSelect which spell you want to cast:\n";
            for (int i=0;i<spells.size();i++)  {//similar to the other functions, show related key presses in order to cast specific spell
                std::cout << i+1 <<"->"<<spell_choices[i]->get_name();
                if (spell_choices[i]->get_lvl_requirement()>level)  {
                    std::cout << "(Level "<<spell_choices[i]->get_lvl_requirement() <<" required)";
                }
                std::cout << '\n';
            }
       }
        std::cout <<"(Go Back: b) (Switch Hero: h) (Quit game: q)\n";
        std::string input;
        if (wrong_action)  {//scenarios for spell error messages
            std::cout<< "Option not valid. ";
            wrong_action=false;
        }
        if (underleveled)  {
            std::cout << "Hero does not meet the level requirement to cast the spell. ";
            underleveled=false;
        }
        if (not_enough_mp)  {
            std::cout << "Not enough magic power to cast the spell. ";
            not_enough_mp=false;
        }
        std::cout << "Please enter an action:";
        std::cin >> input;
        if (check_number(input))  {
            int choice=atoi(input.c_str())-1;
            if (choice<spells.size() && choice>=0)  {
                if (spell_choices[choice]->get_mp_usage()>magic_power)  {
                    not_enough_mp=true;//if not enought mp, display related scenario
                    continue;
                }
                else  {//after making a choice of which spell to use, a new window will appear in order for user to pick a target 
                    Monster* monster_to_attack=fight->show_available_targets();
                    if (monster_to_attack!=NULL)  {//if a target was chosen
                        *turn=false;
                        int succesfull_hit=cast_spell(spell_choices[choice],monster_to_attack);//returns -1 if evaded or a positive number dictating the damage dealt. Based on that create action and result messages
                        *action=name;
                        action->append(" casted spell on ");
                        action->append(monster_to_attack->get_name());
                        if (succesfull_hit==-1)  {//
                            *result="Spell evaded";
                        }
                        else if (succesfull_hit==0)  {
                            *result="Monster's defense too high, damage nullified. Monster afflicted with";
                            switch (spell_choices[choice]->get_type_of_spell())  {
                                case 0:
                                    result->append(" Chilled ");
                                    break;
                                case 1:
                                    result->append(" Burned ");
                                    break;
                                case 2:
                                    result->append(" Shocked ");
                                    break;
                            }
                            result->append("status effect");
                        }
                        else if (succesfull_hit>0)  {
                            *result="Inflicted ";
                            result->append(std::to_string(succesfull_hit));
                            result->append(" damage. Monster afflicted with ");
                            switch (spell_choices[choice]->get_type_of_spell())  {
                                case 0:
                                    result->append(" Chilled ");
                                    break;
                                case 1:
                                    result->append(" Burned ");
                                    break;
                                case 2:
                                    result->append(" Shocked ");
                                    break;
                            }
                            result->append("status effect");
                        }
                        return true;
                    }
                    else  {//a monster was not selected, user is taken to the spell selection
                        continue;
                    }
                }
            }
        }
        else  {
            if (input.compare("h")==0)  {
                return true;
            }
            else if (input.compare("q")==0)  {
                quit_game=true;
                return false;
            }
            else if (input.compare("b")==0)  {
                return false;
            }
            else  {
                wrong_action=true;
            }
        }
    }
}

bool Hero::display_stats()  {//nothing much to see here
    bool wrong_action=false;
    while (true)  {
        system("clear");
        std::cout << "  Hero Stats\n";
        std::cout << "Name:" << name<<'\n';
        std::cout << "Occupation: ";
        switch (hero_type)  {
            case 0:
                std::cout << "Warrior\n";
                break;
            case 1:
                std::cout << "Paladin\n";
                break;
            case 2:
                std::cout << "Sorcerer\n";
                break;
            default:
                break;
        }
        std::cout << "Level: " << level<<'\n';
        std::cout << "Health: " << health << "/" << health_capacity<<'\n';
        std::cout << "Magic Power: "<< magic_power << "/" << magic_power_capacity <<'\n';
        std::cout << "Strength: "<< strength<<'\n';
        std::cout << "Dexterity: "<< dexterity<<'\n';
        std::cout << "Agility: " << agility << "("<<evasion_chance <<"% evasion chance)"<<'\n';  
        std::cout << "Gold: "<< money<<'\n';
        std::cout << "(Go Back: b) (Switch Hero: h) (Quit game: q)\n";
        if (wrong_action)  {
            std::cout << "Not a valid option. ";
            wrong_action=false;
        }
        std::cout << "Please enter an action:\n";
        std::string input;
        std::cin >> input;
        switch (input[0])  {
            case 'b':
                return false;
                break;
            case 'q':
                quit_game=true;
                return false;
                break;
            case 'h':
                return true;
                break;
            default :
                wrong_action=true;
                continue;
                break;
        }
        
    }

}

short Hero::get_hero_type()  {
    return hero_type;
}

//////////////////////////////////////////////////////Warrior////////////////////////////////////////

Warrior::Warrior(std::string name) : Hero(name,20,15,high_stat_random_value(),low_stat_random_value(),high_stat_random_value(),100,0)  {}

//////////////////////////////////////////////////////Paladin////////////////////////////////////////

Paladin::Paladin(std::string name) : Hero(name,20,15,high_stat_random_value(),high_stat_random_value(),low_stat_random_value(),100,1)  {}

//////////////////////////////////////////////////////Sorcerer////////////////////////////////////////

Sorcerer::Sorcerer(std::string name) : Hero(name,20,15,low_stat_random_value(),high_stat_random_value(),high_stat_random_value(),100,2)  {}

//////////////////////////////////////////////////////Monster////////////////////////////////////////

Monster::Monster(std::string name,int avg_damage,int defense,int evasion_chance,int lvl,short monster_type) : LivingBeing(name,(int)(((float)(lvl-1))*0.4+1)*25,lvl), avg_damage(avg_damage), defense(defense), evasion_chance(evasion_chance), monster_type(monster_type) {
    for (int i=0;i<3;i++)  {
        effects.push_back(Effect());//when monsters are created, we also create an non impactfull Effect to act as a placeholder for when we want to swap with another Effect of the same type
    }                               //meaning that if a monster is already affected with a -20% damage decrease debuff, then when a -10% damage decrease debuff comes, it will overwite the previous one(meaning that effects of the same type can't stack...that would be too overpowered)
}

Monster::~Monster()  {

}

bool Monster::display_stats()  {//similar process to that of hero's stats with the addition that we show any active debuffs
    bool wrong_action=false;
    int debuffs_active=0;
    while (true)  {
        system("clear");
        std::cout << "  Monster Stats\n";
        std::cout << "Name:" << name<<'\n';
        std::cout << "Monster Type: ";
        switch (monster_type)  {
            case 0:
                std::cout << "Dragon\n";
                break;
            case 1:
                std::cout << "Exoskeleton\n";
                break;
            case 2:
                std::cout << "Spirit\n";
                break;
            default:
                break;
        }
        std::cout << "Level: " << level<<'\n';
        std::cout << "Health: " << health << "/" << health_capacity<<'\n';
        std::cout << "Attack Power: "<< avg_damage;
        if (effects.at(0).is_active())  {
            std::cout << "(-"<< effects.at(0).get_percentage()<<"%)";
            debuffs_active++;
            
        }
        std::cout << '\n';
        std::cout << "Defense: "<< defense;
        if (effects.at(1).is_active())  {
            std::cout << "(-"<< effects.at(1).get_percentage()<<"%)";
            debuffs_active++;
        }
        std::cout << '\n';
        std::cout << "Evasion Chance: "<<evasion_chance << "%";
        if (effects.at(2).is_active())  {
            std::cout << "(-"<< effects.at(2).get_percentage()<<"%)";
            debuffs_active++;
        }
        std::cout << '\n';
        std::cout << "Effects: ";
        if (effects.at(0).is_active())  {
            std::cout << "Chilled("<< effects.at(0).get_duration() <<" rounds)";
        }
        if (effects.at(1).is_active())  {
            if (debuffs_active>1)  {
                std::cout << ", ";
            }
            std::cout << "Burned("<< effects.at(1).get_duration() <<" rounds)";
        }
        if (effects.at(2).is_active())  {
            if (debuffs_active>1)  {
                std::cout << ", ";
            }
            std::cout << "Shocked("<< effects.at(2).get_duration() <<" rounds)";
        }  
        std::cout << "\n\n(Go Back: b) (Switch Monster: m) (Quit game: q)\n";
        if (wrong_action)  {
            std::cout << "Not a valid option. ";
            wrong_action=false;
        }
        std::cout << "Please enter an action:\n";
        std::string input;
        std::cin >> input;
        switch (input[0])  {
            case 'b':
                return false;
                break;
            case 'q':
                quit_game=true;
                return false;
                break;
            case 'm':
                return true;
                break;
            default :
                wrong_action=true;
                continue;
                break;
        } 
    }
}

int Monster::attack(Hero* hero)  {
    if (effects.at(0).is_active())  {//if the damage decrease is active, take it into account 
        return hero->receive_damage(effects.at(0).apply_effect(damage_value(avg_damage)));
    }
    else  {
        return hero->receive_damage(damage_value(avg_damage));
    }
}

bool Monster::evade()  {
    float random_float=(float)rand()/(float)RAND_MAX;
    float true_evasion_chance;
    if (effects.at(2).is_active())  {
            true_evasion_chance=effects.at(2).apply_effect(evasion_chance);//if reduced evasion devuff is active, apply it
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

int Monster::receive_damage(int damage)  {
    if (evade())  {
        return -1;
    }
    else  {
        int true_defense;
        if (effects.at(1).is_active())  {//if reduced defense debuff is active, apply it
            true_defense=effects.at(1).apply_effect(defense);
        }
        else  {
            true_defense=defense;
        }
        if (damage>true_defense)  {
            health=health+true_defense-damage;
            if (health<0)  {
                health=0;
            }
            return damage-true_defense;
        }  
        else  {
            return 0;
        }
    }
}

void Monster::receive_debuff(Effect& effect)  {
    effects.at(effect.get_stat_affected())=effect;//overwrite an effect with one of the same type(only one effect of each type can be active at once)
}

void Monster::round_passes()  {
    for (int i=0;i<3;i++)  {
        effects.at(i).reduce_duration();//at each round an effect's duration is reduced, thus making it inactive after a few rounds
    }
}

short Monster::get_monster_type()  {
    return monster_type;
}

//////////////////////////////////////////////////////Dragon////////////////////////////////////////

Dragon::Dragon(std::string name,int lvl) : Monster(name,high_attack_random_value()*(((float)(lvl-1))*0.3+1),low_defense_random_value()*(((float)(lvl-1))*0.3+1),low_evasion_random_value()*(((float)(lvl-1))*0.3+1),lvl,0)  {}

//////////////////////////////////////////////////////Exoskeleton////////////////////////////////////////

Exoskeleton::Exoskeleton(std::string name,int lvl) : Monster(name,low_attack_random_value()*(((float)(lvl-1))*0.3+1),high_defense_random_value()*(((float)(lvl-1))*0.3+1),low_evasion_random_value()*(((float)(lvl-1))*0.3+1),lvl,1)  {}


//////////////////////////////////////////////////////Spirit////////////////////////////////////////

Spirit::Spirit(std::string name,int lvl) : Monster(name,low_attack_random_value()*(((float)(lvl-1))*0.3+1),low_defense_random_value()*(((float)(lvl-1))*0.3+1),high_evasion_random_value()*(((float)(lvl-1))*0.3+1),lvl,2)  {}

//////////////////////////////////////////////////////Hero_Party////////////////////////////////////////

Hero_Party::Hero_Party(int starting_x_pos,int starting_y_pos,int number_of_heroes) : hero_in_control(0), x_pos(starting_x_pos), y_pos(starting_y_pos) {
    for (int i=0;i<number_of_heroes;i++)  {//randomly create some heroes
        switch (rand()%3)  {
            case 0:
                heroes.push_back(new Warrior(names_and_sketches::get_random_hero_name()));
                break;
            case 1:    
                heroes.push_back(new Paladin(names_and_sketches::get_random_hero_name()));
                break;
            case 2:    
                heroes.push_back(new Sorcerer(names_and_sketches::get_random_hero_name()));
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
        if (heroes.at(i)->get_health()>0)  {
            heroes.at(i)->restore_life(heroes.at(i)->get_health_capacity()/10);//restore 10% health
            heroes.at(i)->restore_mp(heroes.at(i)->get_magic_power_capacity()/8);//restore 12.5% magic power
        }
    }
}

bool Hero_Party::heroes_turn()  {//if any of the heroes has a turn left returns true
    bool to_return=0;
    for (int i=0;i<heroes.size();i++)  {
        to_return=to_return || heroes.at(i)->get_turn();
    }
    return to_return;
}

bool Hero_Party::in_fighting_condition()  {//if any of the heroes is alive returns true
    bool to_return=0;
    for (int i=0;i<heroes.size();i++)  {
        to_return=to_return || (heroes.at(i)->get_health()>0);
    }
    return to_return;
}


void Hero_Party::defeat()  {
    for (int i=0;i<heroes.size();i++)  {
        heroes.at(i)->lose_money(heroes.at(i)->get_wealth()/2);
        heroes.at(i)->restore_life(heroes.at(i)->get_health_capacity()/2);
        heroes.at(i)->restore_mp(heroes.at(i)->get_magic_power_capacity()/2);
    }
}

void Hero_Party::victory()  {
    for (int i=0;i<heroes.size();i++)  {
        heroes.at(i)->increase_wealth(100);
        heroes.at(i)->increase_exp(1200);
        heroes.at(i)->restore_life(heroes.at(i)->get_health_capacity()/2);
        heroes.at(i)->restore_mp(heroes.at(i)->get_magic_power_capacity()/2);
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

void Hero_Party::switch_hero()  {
    if (hero_in_control==heroes.size()-1)  {
        hero_in_control=0;
    }
    else  {
        hero_in_control++;
    }
}

void Hero_Party::receive_input(char input)  {//either calls one of the class's methods or redirects input to the hero in control
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
            while (heroes.at(hero_in_control)->receive_input(input))  {//if any of the following input redirections return true then we switch hero in control
                switch_hero();
            }
            break;
        case 'z'://equip weapon
            while (heroes.at(hero_in_control)->receive_input(input))  {
                switch_hero();
            }
            break;
        case 'x'://equip armor
            while (heroes.at(hero_in_control)->receive_input(input))  {
                switch_hero();
            }
            break;
        case 'c'://use a potion
            while (heroes.at(hero_in_control)->receive_input(input))  {
                switch_hero();
            }
            break;
        case 'h'://take control of another hero
            switch_hero();
            break;
        case 'u'://check hero stats
            while (heroes.at(hero_in_control)->receive_input(input))  {
                switch_hero();
            }
        default :
            break;
    }
}

Hero* Hero_Party::get_hero(int n)  {
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
                monsters.push_back(new Dragon(names_and_sketches::get_random_monster_name(),lvl));
                break;
            case 1:
                monsters.push_back(new Exoskeleton(names_and_sketches::get_random_monster_name(),lvl));
                break;
            case 2:
                monsters.push_back(new Spirit(names_and_sketches::get_random_monster_name(),lvl));
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
        if (monsters.at(i)->get_health()!=0)  {
            monsters.at(i)->restore_life(monsters.at(i)->get_health_capacity()/10);//restore monster health by 10%
            monsters.at(i)->round_passes();
        }
    }
}

bool Monster_Party::in_fighting_condition()  {
    bool to_return=0;
    for (int i=0;i<monsters.size();i++)  {
        to_return=to_return || (monsters.at(i)->get_health()>0);
    }
    return to_return;
}

Monster* Monster_Party::get_monster(int i)  {
    return monsters.at(i);
}

void Monster_Party::victory()  {
    for (int i=0;i<monsters.size();i++)  {
        names_and_sketches::re_entry(monsters.at(i)->get_name());
    }
}

//////////////////////////////////////////////////////Fight////////////////////////////////////////

Fight::Fight(Hero_Party* hero_party) : round_count(1), hero_party(hero_party)  {
    monster_party=new Monster_Party(hero_party->get_heroes_level(),hero_party->get_number_of_heroes());
    std::string message;
    std::string input;
    while (true)  {
        message="Round ";
        message.append(std::to_string(round_count));
        print_battle(message," ",true);//show combatants
        if (quit_game)  {//after each action we always check to see if the global variable has been set to true, so that the quit is performed immediately afterwards
            return;
        }
        heroes_turn();//all heroes play their turn
        if (quit_game)  {
            return;
        }
        if (!monster_party->in_fighting_condition())  {//after they have finished, check whether the monsters are dead 
            print_battle("!!!!!!!!!!!!!Victory!!!!!!!!!!!!!","Gold and Experience awarded to heroes",true);
            hero_party->victory();
            break ;
        }
        monsters_turn();//else it's the monsters turn
        if (quit_game)  {
            return;
        }
        if (!hero_party->in_fighting_condition())  {//if the heroes have been defeated, print it
            print_battle("^^^^^^^^^^^Defeat^^^^^^^^^","Gold coins have been reduced to half",true);
            hero_party->defeat();
            break ;
        }
        next_round();//else advance to the next round
    }
}

Fight::~Fight()  {
    delete monster_party;//the only memory that gets allocated in the Fight sequence is the dynamically generate monster party
}

void Fight::monsters_turn()  {
    for (int i=0;i<hero_party->get_number_of_heroes();i++)  {//number of heroes==number of monsters
        if (monster_party->get_monster(i)->get_health()>0)  {//a monster can only attack if it's alive
            Hero* hero_attacked;
            int successful_strike;
            std::string action_message,result_message;
            short pick_target=rand()%hero_party->get_number_of_heroes();//trandomly pick a hero to attack
            hero_attacked=hero_party->get_hero(pick_target);
            for (int j=0;j<2;j++)  {
                if (hero_attacked->get_health()>0)  {//if hero picked is alive, then proceed to attack him, else pick the next hero in line 
                    break;
                }
                pick_target=(pick_target+1)%hero_party->get_number_of_heroes();
                hero_attacked=hero_party->get_hero(pick_target);
            }
            successful_strike=monster_party->get_monster(i)->attack(hero_attacked);//attack the hero and return an integer from which we can learn what was the result of the action
            action_message.append(monster_party->get_monster(i)->get_name());//same procees as the one with printing the action message in the spell attack
            action_message.append(" attacked ");
            action_message.append(hero_attacked->get_name());
            if (successful_strike>0)  {
                result_message.append("Inflicted ");
                result_message.append(std::to_string(successful_strike));
                result_message.append(" damage");
            }
            else if (successful_strike==0)  {
                result_message.append("Hero's defense too high, damage nullified");
            }
            else if (successful_strike==-1)  {
                result_message.append("Hero evaded the attack");
            }
            print_battle(action_message,result_message,true);//print the battlefield again but with the addition of the action and result message(the health points of the monsters will have also changed)
            if (quit_game)  {
                return;
            }
        }
    }
}

void Fight::heroes_turn()  {
    bool wrong_action=false;
    std::string input;
    std::string action="";
    std::string result="";
    for (int i=0;i<hero_party->get_number_of_heroes();i++)  {
        hero_party->get_hero(i)->set_turn_to(true);
    }
    print_battle("Heroes Turn","",true);
    if (quit_game)  {
        return;
    }
    while (hero_party->heroes_turn())  {//one can cycle between the available heroes without using the hero's turn
        print_battle(action,result,false);
        if (!monster_party->in_fighting_condition())  {//take into account if the monsters die while a hero still has a turn left 
            return;
        }
        if (hero_party->get_hero_in_control()->get_health()>0)  {//if hero chosen is alive, proceed with displaying the possible actions he may take
            if (hero_party->get_hero_in_control()->get_turn())  {
                std::cout << "1.Attack      2.Cast Spell      3.Equip Weapon      4.Equip Armor      5.Use Potion      6.Display Hero Stats      7.Display Monster Stats\n" ;
                std::cout << "(Switch hero: h) (Quit game: q)\n";
                if (wrong_action)  {
                    std::cout << "Option not valid. ";
                    wrong_action=false;
                }
            }
            else  {
                std::cout << "No turns left for this hero\n";
                std::cout << "(Switch hero: h) (Quit game: q)\n";
            }
        }
        else  {
            hero_party->get_hero_in_control()->set_turn_to(false);
            std::cout << "Hero is dead\n";
            std::cout << "(Switch hero: h) (Quit game: q)\n";
        }
        std::cout <<"Please enter an action:";
        std::cin >> input;
        Monster* monster_to_attack;
        if (check_number(input) && hero_party->get_hero_in_control()->get_turn() && hero_party->get_hero_in_control()->get_health()>0)  {
            switch (atoi(input.c_str()))  {
                case 1://attack a monster
                    monster_to_attack=show_available_targets();
                    if (monster_to_attack!=NULL)  {
                        int successful_hit=hero_party->get_hero_in_control()->attack(monster_to_attack);
                        hero_party->get_hero_in_control()->set_turn_to(false);
                        action=hero_party->get_hero_in_control()->get_name();
                        action.append(" attacked ");
                        action.append(monster_to_attack->get_name());
                        if (successful_hit==-1)  {
                            result="Attack evaded!"; 
                        }
                        else if (successful_hit==0)  {
                            result="Monster's defense too high, damage nullified";
                        }
                        else if (successful_hit>0)  {
                            result="Inflicted ";
                            result.append(std::to_string(successful_hit));
                            result.append(" damage");
                        }
                        hero_party->switch_hero();
                    }
                    if (quit_game)  {
                        return ;
                    }
                    break;
                case 2://select a spell to cast at a monster
                    if (hero_party->get_hero_in_control()->show_availabe_spells_and_promt_for_activation(&hero_party->get_hero_in_control()->get_turn(),&action,&result,this))  {
                        hero_party->switch_hero();
                    }
                    if (quit_game)  {
                        return ;
                    }
                    break;
                case 3://equip a weapon
                    if (hero_party->get_hero_in_control()->show_availabe_weapons_and_promt_for_swap(&hero_party->get_hero_in_control()->get_turn(),&action))  {
                        hero_party->switch_hero();
                    }
                    result="";
                    if (quit_game)  {
                        return;
                    }
                    break;
                case 4://equip an armor
                    if (hero_party->get_hero_in_control()->show_availabe_armors_and_promt_for_swap(&hero_party->get_hero_in_control()->get_turn(),&action))  {
                        hero_party->switch_hero();
                    }
                    result="";
                    if (quit_game)  {
                        return;
                    }
                    break;
                case 5://use a potion
                    if (hero_party->get_hero_in_control()->show_availabe_potions_and_promt_for_use(&hero_party->get_hero_in_control()->get_turn(),&action))  {
                        hero_party->switch_hero();
                    }
                    result="";
                    if (quit_game)  {
                        return;
                    }
                    break;
                case 6:
                    display_hero_stats();
                    if (quit_game)  {
                        return;
                    }
                    break;
                case 7:
                    display_monster_stats();
                    if (quit_game)  {
                        return;
                    }
                    break;
                default: 
                    wrong_action=true;
                    break;
            }  
        }
        else  {
            if (input.compare("q")==0)  {
                quit_game=true;
                return ;
            }
            else if (input.compare("h")==0)  {
                hero_party->switch_hero();
            }
            else  {
                wrong_action=true;
                continue ;
            }
        }
    }
    print_battle(action,result,true);//print the last action that was taken
    if (quit_game)  {
        return;
    }
    if (!monster_party->in_fighting_condition())  {
        return;
    }
    print_battle("Monsters Turn","",true);//inform that the monsters turn will begin
    if (quit_game)  {
        return;
    }
}

void Fight::display_hero_stats()  {
    while (true)  {
        if (hero_party->get_hero_in_control()->display_stats())  {//a reminder (if any of the related methods return true it means that we want to switch hero)
            hero_party->switch_hero();
        }
        else  {
            return;
        }
    }
}

void Fight::display_monster_stats()  {
    int i=0;
    while (true)  {
        if (monster_party->get_monster(i)->display_stats())  {//if returns true, look at the next monsters stats
            i=(i+1)%hero_party->get_number_of_heroes();
        }
        else  {
            return;
        }
    }
}

void Fight::print_battle(std::string action_message,std::string result_message,bool wait_for_input)  {
    system("clear");
    int padding[3];//<-several parameters that will hold important information in order to make the display of the game entities better 
    int length[3];//aspects like, the names always being at the center above the sketch's figure, the sketches being moved in order to accomodate for the extra space a name might take etc
    int name_set_to_center[3];//try not to focus too much on how those are calculated as they is merely a quality of life addition
    int distance=4;//be adivised that all the mathematical actions that will follow are the result of numerous experimentations(therefore it is difficult to explain them properly)
    int hp_length;
    int hp_max_length;
    for (int x=0;x<hero_party->get_number_of_heroes();x++)  {
        hp_length=count_digit(monster_party->get_monster(x)->get_health());
        hp_max_length=count_digit(monster_party->get_monster(x)->get_health_capacity());
        if ((monster_party->get_monster(x)->get_name().length()+4+hp_length+hp_max_length)>25)  {
            length[x]=monster_party->get_monster(x)->get_name().length()+4+hp_length+hp_max_length;
        }
        else  {
            length[x]=25;//minimum length of the placeholder for an entity's name.(due to the size of each sketch)
        }
        padding[x]=length[x]/2-12;//the padding, or in other words, the amount of spaces a sketch will be pushed to the right compared to the position it should be placed
        name_set_to_center[x]=(length[x]-(monster_party->get_monster(x)->get_name().length()+4+hp_length+hp_max_length))/2;
        for (int i=0;i<name_set_to_center[x];i++)  {
            std::cout << " ";//print spaces until we reach the optimal starting position for the name to be centered around the skecth
        }
        std::cout <<monster_party->get_monster(x)->get_name()<<" ("<< monster_party->get_monster(x)->get_health()<<"/"<<monster_party->get_monster(x)->get_health_capacity() <<")";
        for (int i=0;i<name_set_to_center[x]+distance;i++)  {//fill the other side of blanks, where the name stops
            std::cout << " ";
        }
    }
    std::cout <<'\n';
    for (int line=0;line<11;line++)  {
        for (int x=0;x<hero_party->get_number_of_heroes();x++)  {
            for (int i=0;i<padding[x];i++)  {//based on the padding for each monster, fill the neccesary space before beggining to print the sketch
                std::cout<< " ";
            }
            if (monster_party->get_monster(x)->get_health()>0)  {
                switch (monster_party->get_monster(x)->get_monster_type())  {
                    case 0:
                        std::cout << names_and_sketches::Dragon_components[line];
                        break;
                    case 1:
                        std::cout << names_and_sketches::Exoskeleton_components[line];
                        break;
                    case 2:
                        std::cout << names_and_sketches::Spirit_components[line];
                        break;
                }
            }
            else  {
                std::cout << names_and_sketches::Dead_Foe_components[line];
            }
            for (int i=0;i<padding[x]+distance;i++)  {
                std::cout<< " ";//fill the other side of the right side of the sketch, while also adding some extra distance between the two skecthes
            }
        }
        std::cout << '\n';
    }
    std::cout <<"\n\n";
    for (int i=0;i<hero_party->get_number_of_heroes()*(25/2);i++)  {//fill in enough spaces so that the action message is displayed in the middle point of the heroes
        std::cout << " ";
    }
    std::cout<< action_message << '\n';
    for (int i=0;i<hero_party->get_number_of_heroes()*(25/2);i++)  {//same as in the result message
        std::cout << " ";
    }
    std::cout<< result_message << '\n';
    std::cout <<"\n\n";
    for (int x=0;x<hero_party->get_number_of_heroes();x++)  {//same procedure for the heroes, nothing more to add here
        hp_length=count_digit(monster_party->get_monster(x)->get_health());
        hp_max_length=count_digit(monster_party->get_monster(x)->get_health_capacity());
        if ((hero_party->get_hero(x)->get_name().length()+4+hp_length+hp_max_length)>25)  {
            length[x]=hero_party->get_hero(x)->get_name().length()+4+hp_length+hp_max_length;
        }
        else  {
            length[x]=25;
        }
        padding[x]=length[x]/2-12;
        name_set_to_center[x]=(length[x]-(hero_party->get_hero(x)->get_name().length()+4+hp_length+hp_max_length))/2;
        for (int i=0;i<name_set_to_center[x];i++)  {
            std::cout << " ";
        }
        std::cout <<hero_party->get_hero(x)->get_name()<<" ("<< hero_party->get_hero(x)->get_health()<<"/"<<hero_party->get_hero(x)->get_health_capacity() <<")";
        for (int i=0;i<name_set_to_center[x]+distance;i++)  {
            std::cout << " ";
        }
    }
    std::cout <<'\n';
    for (int line=0;line<11;line++)  {
        for (int x=0;x<hero_party->get_number_of_heroes();x++)  {
            for (int i=0;i<padding[x];i++)  {
                std::cout<< " ";
            }
            if (hero_party->get_hero(x)->get_health()>0)  {
                switch (hero_party->get_hero(x)->get_hero_type())  {
                    case 0:
                        std::cout << names_and_sketches::Warrior_components[line];
                        break;
                    case 1:
                        std::cout << names_and_sketches::Paladin_components[line];
                        break;
                    case 2:
                        std::cout << names_and_sketches::Sorcerer_components[line];
                        break;
                }
            }
            else  {
                std::cout << names_and_sketches::Dead_Friendly_components[line];
            }
            for (int i=0;i<padding[x]+distance;i++)  {
                std::cout<< " ";
            }
        }
        std::cout << '\n';
    }
    int position=0;
    for (int i=0;i<hero_party->get_number_of_heroes();i++)  {
        if (hero_party->get_hero_in_control()->get_name().compare(hero_party->get_hero(i)->get_name())==0)  {
            for (int j=0;j<position+length[i]/2-8;j++)  {
                std::cout << " ";
            }
            std::cout << "[Hero in control]\n";//below the hero we are currenty controlling add the related message
            break; 
        }
        else  {
            position=position+length[i]+distance;
        }
    }
    std::string to_trash_can;
    if (wait_for_input)  {//depending on whether we are in a situation where we switch between rounds or the opposing party begins its turn, we want to wait for an input of any kind so that the user sees the information displayed
        std::cout << "(Guit game: q)\n";
        std::cout << "Press any button to continue:";
        std::cin >> to_trash_can;
        if (to_trash_can.compare("q")==0)  {
            quit_game=true;
        }
        return ;
    }
}

Monster* Fight::show_available_targets()  {
    bool wrong_action=false;
    bool target_is_already_dead=false;
    while (true)  {
        print_battle("","",false);
        std::cout << "Targets available:\n";
        for (int i=0;i<hero_party->get_number_of_heroes();i++)  {
            std::cout << i+1 << "." << monster_party->get_monster(i)->get_name(); 
            if (monster_party->get_monster(i)->get_health()>0)  {
                std::cout << "("<< monster_party->get_monster(i)->get_health() <<"/"<< monster_party->get_monster(i)->get_health_capacity() <<")\n";            
            }
            else  {
                std::cout << "(Dead)\n";
            }
        }
        std::cout << "(Go Back: b) (Quit game: q)\n";
        if (target_is_already_dead)  {
            std::cout << "Target is already dead. ";
            target_is_already_dead=false;
        }
        if (wrong_action)  {
            std::cout << "Not a valid option. ";
            wrong_action=false;
        }
        std::cout << "Please enter an action:";
        std::string input;
        std::cin >> input;
        if (check_number(input))  {
            int choice=atoi(input.c_str())-1;
            if (choice<hero_party->get_number_of_heroes() && choice>=0)  {
                if (monster_party->get_monster(choice)->get_health()>0)  {
                    return monster_party->get_monster(choice);
                }
                else  {
                    target_is_already_dead=true;
                }
            }
            else  {
                wrong_action=true;
            }
        }
        else  {
            if (input.compare("b")==0)  {
                return NULL;
            }
            else if (input.compare("g")==0)  {
                quit_game=true;
                return NULL;
            }
            else  {
                wrong_action=true;
            }
        }
    }
}

void Fight::next_round()  {
    monster_party->prepare_for_next_round();
    hero_party->prepare_for_next_round();
    round_count++;
}

//////////////////////////////////////////////////////Market////////////////////////////////////////

Market::Market(int number_of_wares_to_generate) : visited(false) {
    while(number_of_wares_to_generate-->0)  {
        bool spell_or_item=rand()%2;
        if (spell_or_item)  {
            short type_of_item=rand()%3;
            int level=get_pseudo_random_level();
            bool two_handed;
            int type;
            switch (type_of_item)  {
                case 0:
                    two_handed=rand()%2;
                    items.push_back(new Weapon(names_and_sketches::get_random_weapon_name(),get_weapon_armor_price(level),level,get_weapon_attack(level,two_handed),two_handed));
                    break;
                case 1:
                    items.push_back(new Armor(names_and_sketches::get_random_armor_name(),get_weapon_armor_price(level),level,get_armor_defense(level)));
                    break;
                case 2:
                    type=rand()%5;
                    items.push_back(new Potion(names_and_sketches::get_random_potion_name(),get_potion_price(level,type),level,get_potion_effect(level,type),type));
                    break;
            }
        }
        else  {
            short type_of_spell=rand()%3;
            int level=get_pseudo_random_level();
            switch (type_of_spell)  {    
                case 0:
                    spells.push_back(new LigthingSpell(names_and_sketches::get_random_spell_name(),get_spell_price(level),level,get_mp_usage(level),get_spell_damage(level)));
                    break;
                case 1:
                    spells.push_back(new FireSpell(names_and_sketches::get_random_spell_name(),get_spell_price(level),level,get_mp_usage(level),get_spell_damage(level)));
                    break;
                case 2:
                    spells.push_back(new IceSpell(names_and_sketches::get_random_spell_name(),get_spell_price(level),level,get_mp_usage(level),get_spell_damage(level)));
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
                std::cout << "Hero name:" << hero_party->get_hero_in_control()->get_name();
                switch (hero_party->get_hero_in_control()->get_hero_type())  {
                    case 0:
                        std::cout << "(Warrior)";
                        break;
                    case 1:
                        std::cout << "(Paladin)";
                        break;
                    case 2:
                        std::cout << "(Sorcerer)";
                        break;
                }
                std::cout << " Lvl."<<hero_party->get_heroes_level()<<" Gold:" <<hero_party->get_hero_in_control()->get_wealth()<<'\n';                 
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
                        std::cout <<" Effect: ";
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
                std::cout << "Hero name:" << hero_party->get_hero_in_control()->get_name();
                switch (hero_party->get_hero_in_control()->get_hero_type())  {
                    case 0:
                        std::cout << "(Warrior)";
                        break;
                    case 1:
                        std::cout << "(Paladin)";
                        break;
                    case 2:
                        std::cout << "(Sorcerer)";
                        break;
                }
                std::cout << " Lvl."<<hero_party->get_heroes_level()<<" Gold:" <<hero_party->get_hero_in_control()->get_wealth()<<'\n'; 
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
                        std::cout <<" Magic Power Used: "<< spell->get_mp_usage() << '\n';
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
                        std::cout <<" Magic Power Used: "<< spell->get_mp_usage() << '\n';
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
                std::cout << "Hero name:" << hero_party->get_hero_in_control()->get_name();
                switch (hero_party->get_hero_in_control()->get_hero_type())  {
                    case 0:
                        std::cout << "(Warrior)";
                        break;
                    case 1:
                        std::cout << "(Paladin)";
                        break;
                    case 2:
                        std::cout << "(Sorcerer)";
                        break;
                }
                std::cout << " Lvl."<<hero_party->get_heroes_level()<<" Gold:" <<hero_party->get_hero_in_control()->get_wealth()<<'\n'; 
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
                        std::cout <<" Effect: ";
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
                        if (hero_party->get_hero_in_control()->get_equipped_weapon()!=NULL)  {
                            if (item_choices[pick]->get_name().compare(hero_party->get_hero_in_control()->get_equipped_weapon()->get_name())==0)  {
                                tried_to_sell_equipped_gear=true;
                                continue;
                            }
                        }
                        else if (hero_party->get_hero_in_control()->get_equipped_armor()!=NULL) {
                            if (item_choices[pick]->get_name().compare(hero_party->get_hero_in_control()->get_equipped_armor()->get_name())==0)  {
                                tried_to_sell_equipped_gear=true;
                                continue;
                            }
                        }
                        merchandise_traded=sell_item(item_choices[pick]->get_name(),hero_party->get_hero_in_control());
                        successful_sale=true;
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
                std::cout << "Hero name:" << hero_party->get_hero_in_control()->get_name();
                switch (hero_party->get_hero_in_control()->get_hero_type())  {
                    case 0:
                        std::cout << "(Warrior)";
                        break;
                    case 1:
                        std::cout << "(Paladin)";
                        break;
                    case 2:
                        std::cout << "(Sorcerer)";
                        break;
                }
                std::cout << " Lvl."<<hero_party->get_heroes_level()<<" Gold:" <<hero_party->get_hero_in_control()->get_wealth()<<'\n'; 
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
                        std::cout <<" Magic Power Used: "<< spell->get_mp_usage() << '\n';
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
                        std::cout <<" Magic Power Used: "<< spell->get_mp_usage() << '\n';
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
    int number_of_areas=1+(size/16);
    float density_of_blocks=0.2;
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

bool Grid::fight_triggered()  {
    short dice=rand()%7;
    if (dice==0)  {
        return true;
    }
    else  {
        return false;
    }
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
    std::string input;
    bool blocked_passage=false;
    bool wrong_action=false;
    while(!quit_game)  {
        print_world(blocked_passage,wrong_action);
        blocked_passage=false;
        wrong_action=false;
        std::cin >> input;
        char actual_input=input[0];
        switch (actual_input)  {
            case 'w' : //move up
                if (World[hero_party->get_y_position()-1][hero_party->get_x_position()]->is_accessible())  {
                    hero_party->receive_input(actual_input);
                    if (!World[hero_party->get_y_position()][hero_party->get_x_position()]->is_a_market())  {
                        if (fight_triggered())  {
                            fight=new Fight(hero_party);
                            delete fight;
                        }
                    }
                }
                else  {
                    blocked_passage=true;
                }
                break;
            case 's'://move down
                if (World[hero_party->get_y_position()+1][hero_party->get_x_position()]->is_accessible())  {
                    hero_party->receive_input(actual_input);
                    if (!World[hero_party->get_y_position()][hero_party->get_x_position()]->is_a_market())  {
                        if (fight_triggered())  {
                            fight=new Fight(hero_party);
                            delete fight;
                        }
                    }
                }
                else  {
                    blocked_passage=true;
                }
                break;
            case 'a'://move left
                if (World[hero_party->get_y_position()][hero_party->get_x_position()-1]->is_accessible())  {
                    hero_party->receive_input(actual_input);
                    if (!World[hero_party->get_y_position()][hero_party->get_x_position()]->is_a_market())  {
                        if (fight_triggered())  {
                            fight=new Fight(hero_party);
                            delete fight;
                        }
                    }
                }
                else  {
                    blocked_passage=true;
                }
                break;
            case 'd'://move right
                if (World[hero_party->get_y_position()][hero_party->get_x_position()+1]->is_accessible())  {
                    hero_party->receive_input(actual_input);
                    if (!World[hero_party->get_y_position()][hero_party->get_x_position()]->is_a_market())  {
                        if (fight_triggered())  {
                            fight=new Fight(hero_party);
                            delete fight;
                        }
                    }
                }
                else  {
                    blocked_passage=true;
                }
                break;
            case 'i'://check inventory
                hero_party->receive_input(actual_input);
                break;
            case 'z'://equip weapon
                hero_party->receive_input(actual_input);
                break;
            case 'x'://equip armor
                hero_party->receive_input(actual_input);
                break;
            case 'c'://use a potion
                hero_party->receive_input(actual_input);
                break;
            case 'h'://take control of another hero
                if (hero_party->get_number_of_heroes()>1)  {
                    hero_party->receive_input(actual_input);
                }
                else  {
                    wrong_action=true;
                }
                break;
            case 'u'://display hero stats
                hero_party->receive_input(actual_input);
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
