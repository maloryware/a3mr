#define PREFIX puo
#define COMPONENT template
#define PRETTY Puotek's Template

////////////////////////////////

#define QPRETTY #PRETTY
#define FLOOR(var1,var2) var1##_##var2
#define ADDON FLOOR(PREFIX,COMPONENT)
#define COMMA(var1,var2) var1,var2
#define Q(var) #var
#define TAG(var) FLOOR(ADDON,var)
#define QTAG(var) #TAG(var)
#define SETTING(var) TAG(FLOOR(setting,var))
#define QSETTING(var) #SETTING(var)
#define EVENT(var) #TAG(FLOOR(event,var))
#define FNC(var) TAG(FLOOR(fnc,var))
#define QFNC(var) #FNC(var)
#define PATH(var) \ADDON\var
#define QPATH(var) #PATH(var)
#define PREP(var) ['PATH(functions\FLOOR(fnc,var).sqf)', 'FNC(var)'] call CBA_fnc_compileFunction
#define COMPILE(var) compile preprocessFileLineNumbers 'PATH(var.sqf)'
#define CALL_COMPILE(var) call compile preprocessFileLineNumbers 'PATH(var.sqf)'
#define XEH(var) TAG(FLOOR(XEH,var)) = Q(CALL_COMPILE(var))

///////// GEAR CONFIGS /////////

#define MODEL(var) #PATH(data\models\var.p3d)
#define PAA(var) #PATH(data\var.paa)
#define TEXTURE(var) #PATH(data\textures\var.paa)

////////////////////////////////

#define TAG_AA(var) FLOOR(AA,var)
