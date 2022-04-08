#include <a_samp>

// #include <modules\server\main>

#include <sscanf2>
#include <modules\players>
#include <modules\damages>

#include <YSI_Visual\y_commands>

CMD:sethp(playerid, params[])
{
    new Float:health;
    if(sscanf(params, "f", health))
    {
        return SendClientMessage(playerid, -1, "/sethp (value)");
    }

    SetPlayerHealth(playerid, -health);
    return 1;
}