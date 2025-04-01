#include "define.hpp"
#define SETTINGS_CATEGORY "Puotek's Addons"
//fixme remove settings if unnecessary
[
    QSETTING(useDefaultLoadout),    //id
    "CHECKBOX", //type
    ["Use default player loadout","If enabled default player loadout is added to their personal arsenal"], //[display name, description]
    [SETTINGS_CATEGORY, QPRETTY], //[category, subcategory]
    true, //value info
    1, //0:normal 1:global 2:clientside
    {[] call FNC(content);}, //onSettingChange
    false //reqire mission restart?
] call CBA_fnc_addSetting;

[
    QSETTING(ifak_items),
    "EDITBOX",
    ["Public Items","Whitelist Array of items that should be available to all players in the arsenal"],
    [SETTINGS_CATEGORY, QPRETTY],
    "[]",
    1,
    {[] call FNC(content);},
    false
] call CBA_fnc_addSetting;

[
    QSETTING(walk),
    "SLIDER",
    ["Walk Weight","Weight in lbs at which player will be forced to walk"],
    [SETTINGS_CATEGORY, QPRETTY],
    [0,200,110,0],
    1,
    {},
    false
] call CBA_fnc_addSetting;
