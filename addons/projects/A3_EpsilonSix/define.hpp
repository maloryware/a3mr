#define PREFIX scratchware
#define COMPONENT A3_EpsilonSix
#define PRETTY MTF Epsilon-6 Core

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
#define PATH(var) \COMPONENT\var
#define QPATH(var) #PATH(var)
#define PREP(var) ['PATH(functions\FLOOR(fnc,var).sqf)', 'FNC(var)'] call CBA_fnc_compileFunction
#define COMPILE(var) compile preprocessFileLineNumbers 'PATH(var.sqf)'
#define CALL_COMPILE(var) call compile preprocessFileLineNumbers 'PATH(var.sqf)'
#define XEH(var) TAG(FLOOR(XEH,var)) = Q(CALL_COMPILE(var))

///////// GEAR CONFIGS /////////

#define MODEL(var) #PATH(data\models\var.p3d)
#define PAA(var) #PATH(data\var.paa)
#define ICON(var) #PATH(data\icon\var.paa)
#define TEXTURE(var) #PATH(data\textures\var.paa)

////////////////////////////////

#define TAG_PAA(var) FLOOR(PAA,var)

//
#define TFAR_BACKPACK(radioRange) \
    tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;"; \
    tf_hasLRradio = 1;                                          \
    tf_encryptionCode = "tf_west_radio_code";                   \
    tf_dialog = "rt1523g_radio_dialog";                         \
    tf_subtype = "digital_lr";                                  \
    tf_range = radioRange;
#define TFAR_SR TFAR_BACKPACK(5000)
#define TFAR_MR TFAR_BACKPACK(10000)
#define TFAR_LR TFAR_BACKPACK(45000)