class CAR95_CSAT {
    class Rifleman {
        primaryWeapon = "arifle_CTAR_blk_F";
        primaryWeaponItems[] = {"RH_SFM952V"};
        secondaryWeapon = "";
        secondaryWeaponItems[] = {};
        handgunWeapon = "";
        addHandgunItems[] = {};
        uniformWeapons[] = {};
        vestWeapons[] = {};
        backpackWeapons[] = {};
        uniformMagazines[] = {
            {"HandGrenade", 1},
            {"Chemlight_green", 2},
            {"SmokeShell", 1}
        };
        vestMagazines[] = {
            {"30Rnd_580x42_Mag_F", 6},
            {"30Rnd_65x39_caseless_green_mag_Tracer", 2}
        };
        backpackMagazines[] = {
            {"HandGrenade", 1},
            {"SmokeShell", 1},
            {"30Rnd_580x42_Mag_F", 4},
            {"30Rnd_580x42_Mag_Tracer_F", 2}
        };
        basicAssignItems[] = {"ItemMap", "ItemCompass", "ItemWatch"};
        assignItems[] = {};
        binocular = "";
        uniformItems[] = {{"ACE_Flashlight_KSF1", 1}};
        vestItems[] = {};
        backpackItems[] = {};
        uniformRadios[] = {"ACRE_PRC343"};
        vestRadios[] = {};
        backpackRadios[] = {};
        uniformMedicalItems[] = {{"ACE_fieldDressing", 6}};
        vestMedicalItems[] = {};
        backpackMedicalItems[] = {{"ACE_fieldDressing", 4}};
        code = "";
        headGear = "";
        uniform = "";
        goggles = "";
        vest = "";
        backpack = "";
    };

    class Leader : Rifleman {
        primaryWeapon = "arifle_CTAR_GL_blk_F";
        uniformMagazines[] = {
            {"Chemlight_green", 2},
            {"SmokeShell", 1}
        };
        vestMagazines[] = {
            {"30Rnd_580x42_Mag_F", 6},
            {"1Rnd_HE_Grenade_shell", 4},
            {"1Rnd_Smoke_Grenade_shell", 2},
            {"1Rnd_SmokeRed_Grenade_shell", 2},
            {"30Rnd_580x42_Mag_Tracer_F", 2}
        };
        backpackMagazines[] = {
            {"HandGrenade", 1},
            {"SmokeShell", 1},
            {"30Rnd_580x42_Mag_F", 4},
            {"30Rnd_580x42_Mag_Tracer_F", 2},
            {"1Rnd_Smoke_Grenade_shell", 2},
            {"1Rnd_SmokeRed_Grenade_shell", 2},
            {"UGL_FlareWhite_F", 2}
        };
        assignItems[] = {"ItemGPS"};
        binocular = "Binocular";
    };

    class Officer : Leader {
        assignItems[] = {"ItemGPS"};
        binocular = "ACE_VectorDay";
        uniformRadios[] = {"ACRE_PRC343", "ACRE_PRC152"};
    };

    class Crew : Rifleman {
        primaryWeapon = "SMG_02_F";
        primaryWeaponItems[] = {"RH_SFM952V"};
        uniformMagazines[] = {
            {"Chemlight_green", 2},
            {"SmokeShell", 1}
        };
        uniformRadios[] = {"ACRE_PRC343", "ACRE_PRC152"};
        assignItems[] = {"ItemGPS", "ACE_NVG_Wide"};
        vestMagazines[] = {{"30Rnd_9x21_Mag", 4}};
        backpackMagazines[] = {};
    };

    class CO : Officer {
    };

    class XO : CO {
        backpackMagazines[] = {
            {"1Rnd_Smoke_Grenade_shell", 8},
            {"1Rnd_SmokeRed_Grenade_shell", 8}
        };
        backpackRadios[] = {"ACRE_PRC117F"};
    };

    class SL : Officer {
    };

    class Medic : Rifleman {
        primaryWeapon = "arifle_CTAR_blk_F";
        uniformMagazines[] = {
            {"Chemlight_green", 2},
            {"SmokeShell", 1}
        };
        vestMagazines[] = {
            {"30Rnd_580x42_Mag_F", 6},
            {"30Rnd_580x42_Mag_Tracer_F", 2},
            {"SmokeShell", 4}
        };
        backpackMagazines[] = {
            {"SmokeShellBlue", 4},
            {"30Rnd_580x42_Mag_Tracer_F", 2}
        };
        assignItems[] = {"ItemGPS"};
        binocular = "Binocular";
        uniformRadios[] = {"ACRE_PRC343", "ACRE_PRC152"};
        backpackMedicalItems[] = {
            {"ACE_fieldDressing", 30},
            {"ACE_morphine", 30},
            {"ACE_epinephrine", 30},
            {"ACE_bloodIV", 12}
        };
    };

    class FTL : Leader {
    };

    class AR : Rifleman {
        primaryWeapon = "arifle_CTARS_blk_F";
        primaryWeaponItems[] = {"RH_SFM952V"};
        vestMagazines[] = {{"100Rnd_580x42_Mag_F", 4}};
        backpackMagazines[] = {
            {"HandGrenade", 1},
            {"SmokeShell", 1},
            {"100Rnd_580x42_Mag_F", 2},
            {"100Rnd_580x42_Mag_Tracer_F", 3}
        };
    };

    class AAR : Rifleman {
        binocular = "Binocular";
        backpackMagazines[] = {
            {"HandGrenade", 1},
            {"SmokeShell", 1},
            {"100Rnd_580x42_Mag_F", 2},
            {"100Rnd_580x42_Mag_Tracer_F", 2}
        };
    };

    class RAT : Rifleman {
        primaryWeapon = "arifle_CTAR_blk_F";
        primaryWeaponItems[] = {"RH_SFM952V"};
        secondaryWeapon = "CUP_launch_RPG18";
        vestMagazines[] = {
            {"30Rnd_580x42_Mag_F", 6},
            {"30Rnd_580x42_Mag_Tracer_F", 2}
        };
        backpackMagazines[] = {
            {"HandGrenade", 1},
            {"SmokeShell", 1},
            {"30Rnd_580x42_Mag_F", 4},
            {"30Rnd_580x42_Mag_Tracer_F", 2}
        };
    };

    class MMGG : Rifleman {
        primaryWeapon = "CUP_lmg_Pecheneg";
        primaryWeaponItems[] = {};
        vestMagazines[] = {{"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M", 1}};
        backpackMagazines[] = {
            {"HandGrenade", 1},
            {"SmokeShell", 1},
            {"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M", 3}
        };
    };

    class MMGAG : Rifleman {
        uniformMagazines[] = {
            {"Chemlight_green", 2},
            {"SmokeShell", 1}
        };
        backpackMagazines[] = {
            {"HandGrenade", 1},
            {"SmokeShell", 1},
            {"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M", 3}
        };
        binocular = "ACE_VectorDay";
        assignItems[] = {"ItemGPS"};
        uniformRadios[] = {"ACRE_PRC343", "ACRE_PRC152"};
    };

    class HMGG : Rifleman {
        primaryWeapon = "arifle_CTAR_blk_F";
        backpack = "O_HMG_01_weapon_F";
        backpackMagazines[] = {};
        backpackMedicalItems[] = {};
    };

    class HMGAG : HMGG {
        uniformMagazines[] = {
            {"Chemlight_green", 2},
            {"SmokeShell", 1}
        };
        backpack = "O_HMG_01_support_F";
        uniformRadios[] = {"ACRE_PRC343", "ACRE_PRC152"};
        binocular = "ACE_VectorDay";
        assignItems[] = {"ItemGPS"};
    };

    class HMGAC : Rifleman {
    };

    class MATG : RAT {
        secondaryWeapon = "launch_RPG32_F";
        secondaryWeaponItems[] = {"RPG32_F"};
        backpackMagazines[] = {
            {"RPG32_F", 2},
            {"RPG32_HE_F", 1}
        };
    };

    class MATAG : Rifleman {
        uniformMagazines[] = {
            {"Chemlight_green", 2},
            {"SmokeShell", 1}
        };
        backpackMagazines[] = {
            {"RPG32_F", 2},
            {"RPG32_HE_F", 1}
        };
        binocular = "ACE_VectorDay";
        assignItems[] = {"ItemGPS"};
        uniformRadios[] = {"ACRE_PRC343", "ACRE_PRC152"};
    };

    class MATAC : MATAG {
        assignItems[] = {};
        binocular = "Binocular";
        uniformRadios[] = {"ACRE_PRC343"};
    };

    class HATG : MATG {
        secondaryWeapon = "launch_O_Titan_short_F";
        secondaryWeaponItems[] = {"Titan_AT"};
        backpackMagazines[] = {{"Titan_AT", 1}};
    };

    class HATAG : MATAG {
        uniformMagazines[] = {
            {"Chemlight_green", 2},
            {"SmokeShell", 1}
        };
        backpackMagazines[] = {
            {"HandGrenade", 1},
            {"Titan_AT", 1}
        };
    };

    class HATAC : HATAG {
    };

    class DHATG : Rifleman {
        primaryWeapon = "arifle_CTAR_blk_F";
        backpack = "O_AT_01_weapon_F";
        backpackMagazines[] = {};
        backpackMedicalItems[] = {};
    };

    class DHATAG : HMGG {
        backpack = "O_HMG_01_support_F";
        uniformRadios[] = {"ACRE_PRC343", "ACRE_PRC152"};
        uniformMagazines[] = {
            {"Chemlight_green", 2},
            {"SmokeShell", 1}
        };
        binocular = "ACE_VectorDay";
        assignItems[] = {"ItemGPS"};
    };

    class DHATAC : Rifleman {
    };

    class SAMG : Rifleman {
        primaryWeapon = "arifle_CTAR_blk_F";
        secondaryWeapon = "launch_O_Titan_F";
        secondaryWeaponItems[] = {"Titan_AA"};
        backpackMagazines[] = {{"Titan_AA", 2}};
    };

    class SAMAG : Rifleman {
        backpackMagazines[] = {
            {"HandGrenade", 1},
            {"Titan_AA", 2}
        };
        uniformMagazines[] = {
            {"Chemlight_green", 2},
            {"SmokeShell", 1}
        };
        uniformRadios[] = {"ACRE_PRC343", "ACRE_PRC152"};
        binocular = "ACE_VectorDay";
        assignItems[] = {"ItemGPS"};
    };

    class SAMAC : SAMAG {
        uniformRadios[] = {"ACRE_PRC343"};
        binocular = "Binocular";
        assignItems[] = {};
    };

    class GMGG : Rifleman {
        primaryWeapon = "arifle_CTAR_blk_F";
        backpack = "O_GMG_01_weapon_F";
        backpackMagazines[] = {};
        backpackMedicalItems[] = {};
    };

    class GMGAG : HMGG {
        backpack = "O_HMG_01_support_F";
        uniformRadios[] = {"ACRE_PRC343", "ACRE_PRC152"};
        uniformMagazines[] = {
            {"Chemlight_green", 2},
            {"SmokeShell", 1}
        };
        binocular = "ACE_VectorDay";
        assignItems[] = {"ItemGPS"};
    };

    class GMGAC : Rifleman {
    };

    class MTRG : Rifleman {
        primaryWeapon = "arifle_CTAR_blk_F";
        backpack = "O_Mortar_01_weapon_F";
        backpackMagazines[] = {};
        backpackMedicalItems[] = {};
    };

    class MTRAG : MTRG {
        backpack = "O_Mortar_01_support_F";
        uniformRadios[] = {"ACRE_PRC343", "ACRE_PRC152"};
        uniformMagazines[] = {
            {"Chemlight_green", 2},
            {"SmokeShell", 1}
        };
        binocular = "ACE_VectorDay";
        assignItems[] = {"ItemGPS"};
    };

    class MTRAC : Rifleman {
    };

    class ENG : Rifleman {
        primaryWeapon = "arifle_CTAR_blk_F";
        uniformMagazines[] = {
            {"Chemlight_green", 2},
            {"SmokeShell", 1}
        };
        vestMagazines[] = {
            {"30Rnd_580x42_Mag_F", 6},
            {"30Rnd_580x42_Mag_Tracer_F", 2}
        };
        backpackMagazines[] = {
            {"Toolkit", 1},
            {"DemoCharge_Remote_Mag", 3},
            {"SLAMDirectionalMine_Wire_Mag", 2}
        };
        assignItems[] = {"ItemGPS"};
        vestItems[] = {
            {"ACE_DefusalKit", 1},
            {"ACE_M26_Clacker", 1}
        };
        uniformRadios[] = {"ACRE_PRC343", "ACRE_PRC152"};
    };

    class ENGA : ENG {
        uniformRadios[] = {"ACRE_PRC343"};
    };

    class SN : Rifleman {
        primaryWeapon = "srifle_DMR_07_blk_F";
        handgunWeapon = "hgun_Rook40_F";
        primaryWeaponItems[] = {"optic_MRCO"};
        uniformMagazines[] = {
            {"Chemlight_green", 2},
            {"SmokeShell", 1}
        };
        vestMagazines[] = {
            {"20Rnd_650x39_Cased_Mag_F", 4},
            {"16Rnd_9x21_Mag", 3}
        };
        backpackMagazines[] = {
            {"HandGrenade", 1},
            {"SmokeShell", 1},
            {"20Rnd_650x39_Cased_Mag_F", 3}
        };
        assignItems[] = {"ItemGPS"};
        uniformRadios[] = {"ACRE_PRC343", "ACRE_PRC152"};
    };

    class SP : Rifleman {
        binocular = "ACE_VectorDay";
    };

    class VC : Crew {
        binocular = "ACE_VectorDay";
    };

    class VG : Crew {
    };

    class VD : Crew {
    };

    class P : Crew {
        backpackMedicalItems[] = {};
    };

    class PCM : P {
    };

    class Vehicle {
        weapons[] = {
            {"arifle_CTAR_blk_F", 2},
            {"CUP_launch_RPG18", 5},
            {"arifle_CTAR_blk_F", 2}
        };
        magazines[] = {
            {"30Rnd_580x42_Mag_F", 30},
            {"100Rnd_580x42_Mag_F", 10},
            {"1Rnd_Smoke_Grenade_shell", 5},
            {"UGL_FlareWhite_F", 5},
            {"ACE_HandFlare_White", 5},
            {"HandGrenade", 5},
            {"SmokeShell", 5}
        };
        items[] = {
            {"ItemGPS", 1},
            {"Toolkit", 1}
        };
        radios[] = {
            {"ACRE_PRC343", 2},
            {"ACRE_PRC152", 2}
        };
        medicalItems[] = {{"ACE_fieldDressing", 6}};
    };

    class Car : Vehicle {
    };

    class Truck : Vehicle {
        weapons[] = {
            {"arifle_CTAR_blk_F", 2},
            {"CUP_launch_RPG18", 10},
            {"arifle_CTAR_blk_F", 2}
        };
        magazines[] = {
            {"30Rnd_580x42_Mag_F", 60},
            {"100Rnd_580x42_Mag_F", 20},
            {"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M", 10},
            {"1Rnd_Smoke_Grenade_shell", 10},
            {"UGL_FlareWhite_F", 10},
            {"SatchelCharge_Remote_Mag", 5},
            {"ACE_HandFlare_White", 10},
            {"RPG32_F", 5},
            {"HandGrenade", 10},
            {"SmokeShell", 10}
        };
        items[] = {
            {"ACE_M26_Clacker", 1},
            {"Toolkit", 1},
            {"ItemGPS", 1}
        };
        radios[] = {
            {"ACRE_PRC343", 2},
            {"ACRE_PRC152", 2}
        };
        medicalItems[] = {{"ACE_fieldDressing", 6}};
    };

    class Armored : Truck {
        weapons[] = {{"CUP_launch_RPG18", 10}};
        magazines[] = {
            {"30Rnd_580x42_Mag_F", 60},
            {"100Rnd_580x42_Mag_F", 20},
            {"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M", 10},
            {"1Rnd_Smoke_Grenade_shell", 10},
            {"UGL_FlareWhite_F", 10},
            {"RPG32_F", 5},
            {"SatchelCharge_Remote_Mag", 5},
            {"ACE_HandFlare_White", 10},
            {"HandGrenade", 10},
            {"SmokeShell", 10}
        };
        items[] = {
            {"ACE_M26_Clacker", 1},
            {"Toolkit", 1},
            {"ItemGPS", 1}
        };
        radios[] = {
            {"ACRE_PRC343", 2},
            {"ACRE_PRC152", 2}
        };
        medicalItems[] = {{"ACE_fieldDressing", 6}};
    };

};
