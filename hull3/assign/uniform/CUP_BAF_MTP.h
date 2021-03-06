class CUP_BAF_MTP {
    class Rifleman {
        headGear = "CUP_H_BAF_Helmet_4_MTP";
        goggles = "";
        uniform = "CUP_U_B_BAF_MTP_S4_UnRolled";
        vest = "CUP_V_BAF_Osprey_Mk4_MTP_Rifleman";
        backpack = "CUP_B_Bergen_BAF";
    };

    class Leader : Rifleman {
        headGear = "CUP_H_BAF_Helmet_4_MTP";
        uniform = "CUP_U_B_BAF_MTP_S1_RolledUp";
        vest = "CUP_V_BAF_Osprey_Mk4_MTP_SquadLeader";
    };

    class Officer : Leader {
        headGear = "CUP_H_BAF_Officer_Beret_PRR_O";
        vest = "CUP_V_BAF_Osprey_Mk4_MTP_SquadLeader";
    };

    class Crew : Rifleman {
        headGear = "CUP_H_BAF_Crew_Helmet_MTP";
        uniform = "CUP_U_B_BAF_MTP_S1_RolledUp";
        vest = "CUP_V_BAF_Osprey_Mk4_MTP_Rifleman";
        backpack = "B_AssaultPack_cbr";
        goggles = "CUP_FR_NeckScarf2";
    };

    class CO : Officer {
    };

    class XO : CO {
    };

    class SL : Officer {
    };

    class Medic : Rifleman {
        headGear = "CUP_H_BAF_Helmet_3_MTP";
        uniform = "CUP_U_B_BAF_MTP_S4_UnRolled";
        vest = "CUP_V_BAF_Osprey_Mk4_MTP_Rifleman";
        backpack = "CUP_B_Bergen_BAF";
    };

    class FTL : Leader {
        vest = "CUP_V_BAF_Osprey_Mk4_MTP_Grenadier";
    };

    class AR : Rifleman {
        headGear = "CUP_H_BAF_Helmet_Net_2_MTP";
        uniform = "CUP_U_B_BAF_MTP_S5_UnRolled";
        vest = "CUP_V_BAF_Osprey_Mk4_MTP_MachineGunner";
    };

    class AAR : Rifleman {
    };

    class RAT : Rifleman {
        uniform = "CUP_U_B_BAF_MTP_S6_UnRolled";
    };

    class MMGG : AR {
        backpack = "CUP_B_Bergen_BAF";
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
        backpack = "CUP_B_Bergen_BAF";
    };

    class MATAG : AAR {
    };

    class MATAC : MATAG {
    };

    class HATG : RAT {
        backpack = "CUP_B_Bergen_BAF";
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
        uniform = "CUP_V_BAF_Osprey_Mk4_MTP_Rifleman";
        vest = "CUP_V_BAF_Osprey_Mk2_DDPM_Sapper";
        backpack = "CUP_B_Bergen_BAF";
        headGear = "CUP_H_BAF_Helmet_4_MTP";
    };

    class ENGA : ENG {
    };

    class SN : Rifleman {
        headGear = "CUP_H_BAF_Helmet_4_MTP";
        goggles = "CUP_FR_NeckScarf2";
        uniform = "CUP_U_B_BAF_MTP_S3_RolledUp";
        vest = "CUP_V_BAF_Osprey_Mk4_MTP_SquadLeader";
        backpack = "B_AssaultPack_cbr";
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
        headGear = "CUP_H_BAF_Helmet_Pilot";
        uniform = "CUP_U_B_BAF_MTP_S6_UnRolled";
        vest = "CUP_V_BAF_Osprey_Mk4_MTP_Rifleman";
        backpack = "B_Parachute";
    };

    class PCM : P {
    };

};
