public OnPlayerSpawn(playerid) 
{
    PreloadAnimations(playerid);
    SetPlayerTeam(playerid, NO_TEAM);

    SetPlayerInterior(playerid, 0);
    SetPlayerPos(playerid, 123.9661, -82.4548, 1.5781);
    return 1;
}