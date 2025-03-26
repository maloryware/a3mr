#include "define.hpp"

CALL_COMPILE(settings);

PREP(template); //todo prep fnc

if hasInterface then { //fixme remove if unnecessary
    [EVENT(example), {
        _this call FNC(template);
        systemChat "EVENT!";
    }] call CBA_fnc_addEventHandler;
};
