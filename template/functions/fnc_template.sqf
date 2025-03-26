#include "..\define.hpp"
//fixme remove if unnecessary
params [
    ["_param", /*defult value*/"Default Value", [/*accepted input types*/"",null,true]]
];

if isNull _param exitWith {
    diag_log format ["*** ERROR *** %1: %2", QFNC(template), "Provided param is null!"];
};
