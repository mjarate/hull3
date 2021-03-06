class CSAT {
    class Rifleman {
        headGear = "H_HelmetO_ocamo";
        goggles = "";
        uniform = "U_O_CombatUniform_ocamo";
        vest = "MNP_Vest_NZ_2";
        backpack = "B_Kitbag_cbr";
    };

    class Leader : Rifleman {
        vest = "MNP_Vest_NZ_1";
    };

    class Officer : Leader {
        headGear = "H_MilCap_ocamo";
        uniform = "U_O_OfficerUniform_ocamo";
    };

    class Crew : Rifleman {
        headGear = "H_HelmetCrew_O";
        uniform = "U_O_CombatUniform_ocamo";
        vest = "V_BandollierB_cbr_ARM";
        backpack = "B_AssaultPack_rgr";
    };

    class CO : Officer {
    };

    class XO : CO {
    };

    class SL : Officer {
    };

    class Medic : Rifleman {
        backpack = "B_Carryall_khk";
    };

    class FTL : Leader {
    };

    class AR : Rifleman {
    };

    class AAR : Rifleman {
        backpack = "B_Carryall_khk";
    };

    class RAT : Rifleman {
    };

    class MMGG : AR {
        backpack = "B_Carryall_khk";
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
        backpack = "B_Carryall_khk";
    };

    class MATAG : AAR {
    };

    class MATAC : MATAG {
    };

    class HATG : RAT {
        backpack = "B_Carryall_khk";
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
        backpack = "B_Carryall_khk";
    };

    class ENGA : ENG {
    };

    class SN : Rifleman {
        headGear = "H_MilCap_ocamo";
        goggles = "G_Bandanna_tan";
        uniform = "U_O_SpecopsUniform_ocamo";
        vest = "V_HarnessO_brn_ARM";
        backpack = "B_AssaultPack_ocamo";
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
        headGear = "H_PilotHelmetHeli_O";
        uniform = "U_O_PilotCoveralls";
        vest = "V_Rangemaster_belt_ARM";
        backpack = "B_Parachute";
    };

    class PCM : P {
    };
};