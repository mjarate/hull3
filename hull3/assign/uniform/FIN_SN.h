class FIN_SN {
    class Rifleman {
        headGear = "MNP_Helmet_FIN_A";
        goggles = "";
        uniform = "MNP_CombatUniform_Finarctic_A";
        vest = "MNP_Vest_FIN_2";
        backpack = "MNP_B_WB_KB";
    };

    class Leader : Rifleman {
        uniform = "MNP_CombatUniform_Finarctic_B";
        vest = "MNP_Vest_FIN_1";
    };

    class Officer : Leader {
    };

    class Crew : Rifleman {
        headGear = "H_HelmetCrew_I";
        uniform = "MNP_CombatUniform_Finarctic_B";
        vest = "V_BandollierB_oli_ARM";
        backpack = "MNP_B_WB_AP";
    };

    class CO : Officer {
    };

    class XO : CO {
    };

    class SL : Officer {
    };

    class Medic : Rifleman {
        backpack = "MNP_B_RUW_CA";
    };

    class FTL : Leader {
    };

    class AR : Rifleman {
        uniform = "MNP_CombatUniform_Finarctic_B";
    };

    class AAR : Rifleman {
        backpack = "MNP_B_RUW_CA";
    };

    class RAT : Rifleman {
    };

    class MMGG : AR {
        backpack = "B_Carryall_oli";
    };

    class MMGAG : AAR {
    };

    class HMGG : AR {
    };

    class HMGAG : AAR {
    };

    class HMGAC : AAR {
    };

    class MATG : RAT {
        backpack = "B_Carryall_oli";
    };

    class MATAG : AAR {
    };

    class MATAC : MATAG {
    };

    class HATG : RAT {
        backpack = "B_Carryall_oli";
    };

    class HATAG : AAR {
    };

    class HATAC : HATAG {
    };
    
    class DHATG : AR {
    };

    class DHATAG : AAR {
    };

    class DHATAC : AAR {
    };

    class SAMG : AR {
    };

    class SAMAG : AAR {
    };

    class SAMAC : AAR {
    };

    class GMGG : AR {
    };

    class GMGAG : AAR {
    };

    class GMGAC : AAR {
    };

    class MTRG : AR {
    };

    class MTRAG : AAR {
    };

    class MTRAC : AAR {
    };

    class ENG : Rifleman {
        backpack = "MNP_B_RUW_CA";
    };

    class ENGA : ENG {
    };

    class SN : Rifleman {
        headGear = "MNP_Boonie_AFIN";
        goggles = "G_Bandanna_blk";
        uniform = "MNP_CombatUniform_Finarctic_B";
        vest = "V_BandollierB_blk_ARM";
        backpack = "MNP_B_WB_AP";
    };

    class SP : SN {
    };

    class VC : Crew {
    };

    class VG : Crew {
    };

    class VD : Crew {
    };

    class P : Crew {
        headGear = "H_PilotHelmetHeli_I";
        uniform = "MNP_CombatUniform_Finarctic_A";
        vest = "V_TacVest_oli_ARM";
        backpack = "B_Parachute";
    };

    class PCM : P {
    };
};