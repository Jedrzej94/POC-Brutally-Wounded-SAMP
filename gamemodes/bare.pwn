#include <a_samp>

#include <sscanf2>

#include <YSI_Visual\y_commands>

#include <modules\players>
#include <modules\damages>

#include <modules\server\main>

// Debug command
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