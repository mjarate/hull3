class CUP_CDF_MOU_UN {
    class Rifleman {
        headGear = "CUP_H_CDF_H_PASGT_UN";
        goggles = "";
        uniform = "CUP_U_B_CDF_MNT_1";
        vest = "CUP_V_CDF_6B3_1_MNT";
        backpack = "CUP_B_AlicePack_Khaki";
    };

    class Leader : Rifleman {
        uniform = "CUP_U_B_CDF_MNT_2";
        vest = "CUP_V_CDF_6B3_5_MNT";
    };

    class Officer : Leader {
        headGear = "CUP_H_CDF_OfficerCap_UN";
    };

    class Crew : Rifleman {
        headGear = "CUP_H_RUS_TSH_4_Brown";
        vest = "CUP_V_CDF_6B3_2_MNT";
        backpack = "CUP_B_SLA_Medicbag";
    };

    class CO : Officer {
    };

    class XO : CO {
    };

    class SL : Officer {
    };

    class Medic : Rifleman {
        backpack = "CUP_B_AlicePack_Khaki";
    };

    class FTL : Leader {
        vest = "CUP_V_CDF_6B3_4_MNT";
    };

    class AR : Rifleman {
        vest = "CUP_V_CDF_6B3_3_MNT";
    };

    class AAR : Rifleman {
        backpack = "CUP_B_AlicePack_Khaki";
    };

    class RAT : Rifleman {
    };

    class MMGG : AR {
        vest = "CUP_V_CDF_6B3_3_MNT";
        backpack = "CUP_B_AlicePack_Khaki";
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
        backpack = "CUP_B_AlicePack_Khaki";
    };

    class MATAG : AAR {
    };

    class MATAC : MATAG {
    };

    class HATG : RAT {
        backpack = "CUP_B_AlicePack_Khaki";
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
        backpack = "CUP_B_AlicePack_Khaki";
    };

    class ENGA : ENG {
    };

    class SN : Rifleman {
        headGear = "H_Bandanna_khk";
        uniform = "CUP_U_B_CDF_MNT_2";
        goggles = "G_Bandanna_khk";
        vest = "CUP_V_CDF_6B3_2_MNT";
        backpack = "CUP_B_SLA_Medicbag";
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
        headGear = "CUP_H_RUS_ZSH_Shield_Up";
        uniform = "CUP_U_B_CDF_MNT_1";
        vest = "CUP_V_CDF_6B3_2_MNT";
        backpack = "B_Parachute";
    };

    class PCM : P {
    };

};
