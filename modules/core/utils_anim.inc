#define SWEET_LaFin_Sweet   (1533)

stock const AnimLibraries[][] = 
{
	!"SWEET"
};

PreloadAnimations(playerid) 
{
    for (new i = 0; i != sizeof(AnimLibraries); i++) 
	{
        ApplyAnimation(playerid, AnimLibraries[i], "null", 4.1, 0, 0, 0, 0, 0, 1);
    }
}

ApplyAnimationById(playerid, animId, Float:fDelta, loop, x, y, freeze, time, forceSync = 1) 
{
    new
    	animLib[32],
        animName[32]
	;

    if (GetAnimationName(animId, animLib, sizeof(animLib), animName, sizeof(animName)) == 1) 
	{
        return ApplyAnimation(playerid, animLib, animName, fDelta, loop, x, y, freeze, time, forceSync);
    }
    return 0;
}