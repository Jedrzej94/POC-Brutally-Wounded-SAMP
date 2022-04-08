#define MAX_WEAPONS     (57)
#define MAX_WEAPON_NAME (21)

stock const g_WeaponName[MAX_WEAPONS][MAX_WEAPON_NAME] = 
{
	{"Fist"             }, {"Brass knuckles"}, {"Golf club"           },
	{"Nightstick"       }, {"Knife"         }, {"Bat"                 },
	{"Shovel"           }, {"Pool cue"      }, {"Katana"              },
	{"Chainsaw"         }, {"Purple dildo"  }, {"Dildo"               },
	{"Vibrator"         }, {"Vibrator"      }, {"Flowers"             },
	{"Cane"             }, {"Grenade"       }, {"Tear gas"            },
	{"Molotov"          }, {"Vehicle gun"   }, {"Vehicle gun"         },
	{"Vehicle gun"      }, {"Colt 45"       }, {"Silenced pistol"     },
	{"Deagle"           }, {"Shotgun"       }, {"Sawn-off shotgun"    },
	{"Combat shotgun"   }, {"Mac-10"        }, {"MP5"                 },
	{"AK-47"            }, {"M4"            }, {"Tec-9"               },
	{"Cuntgun"          }, {"Sniper"        }, {"Rocket launcher"     },
	{"Heat seeking RPG" }, {"Flamethrower"  }, {"Minigun"             },
	{"Satchel"          }, {"Detonator"     }, {"Spraycan"            },
	{"Fire extinguisher"}, {"Camera"        }, {"Night vision goggles"},
	{"Infrared goggles" }, {"Parachute"     }, {"Fake pistol"         },
	{"Pistol whip"      }, {"Vehicle"       }, {"Helicopter blades"   },
	{"Explosion"        }, {"Car parking"   }, {"Drowning"            },
	{"Collision"        }, {"Splat"         }, {"Unknown"             }
};

static Float:s_WeaponDamage[MAX_WEAPONS] = 
{
	1.0, // 0 - Fist
	1.0, // 1 - Brass knuckles
	1.0, // 2 - Golf club
	1.0, // 3 - Nitestick
	1.0, // 4 - Knife
	1.0, // 5 - Bat
	1.0, // 6 - Shovel
	1.0, // 7 - Pool cue
	1.0, // 8 - Katana
	1.0, // 9 - Chainsaw
	1.0, // 10 - Dildo
	1.0, // 11 - Dildo 2
	1.0, // 12 - Vibrator
	1.0, // 13 - Vibrator 2
	1.0, // 14 - Flowers
	1.0, // 15 - Cane
	82.5, // 16 - Grenade
	0.0, // 17 - Teargas
	1.0, // 18 - Molotov
	9.9, // 19 - Vehicle M4 (custom)
	46.2, // 20 - Vehicle minigun (custom)
	82.5, // 21 - Vehicle rocket (custom)
	8.25, // 22 - Colt 45
	13.2, // 23 - Silenced
	46.2, // 24 - Deagle
	3.3, // 25 - Shotgun
	3.3, // 26 - Sawed-off
	4.95, // 27 - Spas
	6.6, // 28 - UZI
	8.25, // 29 - MP5
	9.9, // 30 - AK47
	9.9, // 31 - M4
	6.6, // 32 - Tec9
	24.75, // 33 - Cuntgun
	41.25, // 34 - Sniper
	82.5, // 35 - Rocket launcher
	82.5, // 36 - Heatseeker
	1.0, // 37 - Flamethrower
	46.2, // 38 - Minigun
	82.5, // 39 - Satchel
	0.0, // 40 - Detonator
	0.33, // 41 - Spraycan
	0.33, // 42 - Fire extinguisher
	0.0, // 43 - Camera
	0.0, // 44 - Night vision
	0.0, // 45 - Infrared
	0.0, // 46 - Parachute
	0.0, // 47 - Fake pistol
	2.64, // 48 - Pistol whip (custom)
	9.9, // 49 - Vehicle
	330.0, // 50 - Helicopter blades
	82.5, // 51 - Explosion
	1.0, // 52 - Car park (custom)
	1.0, // 53 - Drowning
	165.0  // 54 - Splat
};

Float:GetWeaponDamageVal(weaponId)
{
    return s_WeaponDamage[weaponId];
}