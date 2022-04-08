bool:IsDamageSelfInflicted(damageissuerid) 
{
    return damageissuerid == INVALID_PLAYER_ID;
}

GivePlayerDamage(playerid, Float:amount, issuerid = INVALID_PLAYER_ID)
{
    SetPlayerHealth(playerid, -amount);

    new Float:pHealth;
    GetPlayerHealth(playerid, pHealth);
    if (pHealth <= MIN_BW_HEALTH) 
    {
        OnPlayerGetBrutallyWounded(playerid, issuerid);
    }
    return 1;
}

public OnPlayerTakeDamage(playerid, issuerid, Float:amount, weaponid, bodypart) 
{
    if (IsDamageSelfInflicted(issuerid)) 
    {
        GivePlayerDamage(playerid, amount);
        return 1;
    }

    amount = GetWeaponDamageVal(weaponid);
    GivePlayerDamage(playerid, amount, issuerid);
    return 1;
}

forward OnPlayerGetBrutallyWounded(playerid, issuerid);
public OnPlayerGetBrutallyWounded(playerid, issuerid)
{
    ApplyAnimationById(playerid, SWEET_LaFin_Sweet, 4.1, 0, 1, 1, 1, 0);
    return 1;
}