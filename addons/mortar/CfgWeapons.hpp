class CfgWeapons
{
	class CannonCore;
    class mortar_82mm: CannonCore {
        class Single1;
    };
	class LIB_BM37_ACE: mortar_82mm {
		author = "IFA3 Team";
		displayname = "$STR_DN_LIB_BM37";
		magazines[] = {"LIB_1Rnd_82mm_Mo_HE","LIB_1Rnd_82mm_Mo_Smoke","LIB_1Rnd_82mm_Mo_Illum"};
		modes[] = {"Single1","Single2","Single3"};
		reloadTime = 0.5;
        magazineReloadTime = 0.5;
		class Single1: Single1 {
            reloadTime = 0.5;
        };
	};
	class LIB_GrWr34_ACE: mortar_82mm {
		author = "IFA3 Team";
		displayname = "$STR_DN_LIB_GRWR34";
		magazines[] = {"LIB_1Rnd_81mm_Mo_HE","LIB_1Rnd_81mm_Mo_Smoke","LIB_1Rnd_81mm_Mo_Illum"};
		modes[] = {"Single1","Single2","Single3"};
		reloadTime = 0.5;
        magazineReloadTime = 0.5;
		class Single1: Single1 {
            reloadTime = 0.5;
        };
	};
	class LIB_M2_60_ACE: mortar_82mm {
		author = "IFA3 Team";
		displayname = "$STR_DN_LIB_M2_60";
		magazines[] = {"LIB_1Rnd_60mm_Mo_HE","LIB_1Rnd_60mm_Mo_Smoke","LIB_1Rnd_60mm_Mo_Illum"};
		modes[] = {"Single1","Single2"};
		reloadTime = 0.5;
        magazineReloadTime = 0.5;
		class Single1: Single1 {
            reloadTime = 0.5;
        };
	};

	class LIB_Slung_Static_Weapon_Base;
	class LIB_BM37_Tripod: LIB_Slung_Static_Weapon_Base {
		magazines[] = {"LIB_1Rnd_82mm_Mo_HE","LIB_1Rnd_82mm_Mo_Smoke","LIB_1Rnd_82mm_Mo_Illum"};
	};
	class LIB_BM37_Barrel: LIB_Slung_Static_Weapon_Base {
		magazines[] = {"LIB_1Rnd_82mm_Mo_HE","LIB_1Rnd_82mm_Mo_Smoke","LIB_1Rnd_82mm_Mo_Illum"};
	};
	class LIB_GrWr34_Tripod: LIB_Slung_Static_Weapon_Base {
		magazines[] = {"LIB_1Rnd_81mm_Mo_HE","LIB_1Rnd_81mm_Mo_Smoke","LIB_1Rnd_81mm_Mo_Illum"};
	};
	class LIB_GrWr34_Barrel: LIB_Slung_Static_Weapon_Base {
		magazines[] = {"LIB_1Rnd_81mm_Mo_HE","LIB_1Rnd_81mm_Mo_Smoke","LIB_1Rnd_81mm_Mo_Illum"};
	};
	class LIB_M2_60_Tripod: LIB_Slung_Static_Weapon_Base {
		magazines[] = {"LIB_1Rnd_60mm_Mo_HE","LIB_1Rnd_60mm_Mo_Smoke","LIB_1Rnd_60mm_Mo_Illum"};
	};
	class LIB_M2_60_Barrel: LIB_Slung_Static_Weapon_Base {
		magazines[] = {"LIB_1Rnd_60mm_Mo_HE","LIB_1Rnd_60mm_Mo_Smoke","LIB_1Rnd_60mm_Mo_Illum"};
	};	
};
