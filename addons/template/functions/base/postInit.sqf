#include "define.hpp"

if hasInterface then { //fixme remove if unnecessary
    [{!isNull findDisplay 46 && !isNull ace_player}, {
        systemChat "Post Init Started";
        ["fixtemplate", {[] call FNC(template)}, "all"] call CBA_fnc_registerChatCommand;

    }] call CBA_fnc_waitUntilAndExecute;
};
