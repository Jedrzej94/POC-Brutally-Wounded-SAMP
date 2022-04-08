public OnPlayerRequestClass(playerid, classid) 
{
    SetupPlayerForClassSelection(playerid);
    return 1;
}

SetupPlayerForClassSelection(playerid) 
{
    SetPlayerInterior(playerid, 14);
    SetPlayerPos(playerid, 258.4893, -41.4008, 1002.0234);
    SetPlayerFacingAngle(playerid, 270.0);
    SetPlayerCameraPos(playerid, 256.0815, -43.0475, 1004.0234);
    SetPlayerCameraLookAt(playerid, 258.4893, -41.4008, 1002.0234);
}