
class cfgMagazines
{
	class VehicleMagazine;
	class lib_47Rnd_762x54;
	class IFa3_35x_SprGr38_KWK_39;
	class IFa3_45x_Pzgr39_KWK_39;
	class IFa3_12x_Pzgr40_KWK_39;
	class IFa3_20x_HI_Gr38C_KWK_37;
	class IFa3_12x_K_Gr_rotPz_KWK_37;
	class IFa3_30x_SprGr34_KWK_37;
	class IFa3_19x_0240_k_20;
	class IFa3_25x_BR240_k_20;
	class IFa3_5x_BR240P_k_20;
	class LIB_16Rnd_BM13;

	// ПИОНЕР
	class sc9_5Rnd_NW42_HE: LIB_16Rnd_BM13
	{
		count = 5;
		displayName = "$STR_ACE_ifa3reload_nebel";
		displayNameShort = "$STR_ACE_ifa3reload_disp_he";
		descriptionShort = "$STR_ACE_ifa3reload_shell_he_150";
		model = "\WW2\Assets_m\Weapons\Misc_m\Weapons\IF_Mag_Univ.p3d";
		picture = "\z\ifa3_comp_ace\addons\reload\UI\ui_shell_he.paa";
		allowedSlots[] = {901};
		mass = 70;
	};
	class ifr_lg40_HE: VehicleMagazine
	{
		count = 1;
		displayName = "$STR_ACE_ifa3reload_shell_he_Leichtgeschütz";
		displayNameShort = "$STR_ACE_ifa3reload_disp_he";
		descriptionShort = "$STR_ACE_ifa3reload_shell_he_75";
		model="\z\ifa3_comp_ace\addons\reload\models\zis3_76mm_round_he.p3d";
		picture = "\z\ifa3_comp_ace\addons\reload\UI\ui_shell_he.paa";
		allowedSlots[] = {901};
		mass = 30;
	};
	class ifr_lg40_AP: VehicleMagazine
	{
		count = 1;
		displayName = "$STR_ACE_ifa3reload_shell_ap_Leichtgeschütz";
		displayNameShort = "$STR_ACE_ifa3reload_disp_ap";
		descriptionShort = "$STR_ACE_ifa3reload_shell_ap_75";
			model="\z\ifa3_comp_ace\addons\reload\models\zis3_76mm_round_apc.p3d";
		picture = "\z\ifa3_comp_ace\addons\reload\UI\ui_shell_ap.paa";
		allowedSlots[] = {901};
		mass = 30;
	};
	// ПИОНЕР

	class IFa3_1x_SprGr38_KWK_39: IFa3_35x_SprGr38_KWK_39
	{
		count = 1;
		displayName = "$STR_ACE_ifa3reload_disp_he";
		displayNameShort = "$STR_ACE_ifa3reload_disp_he";
		descriptionShort = "$STR_ACE_ifa3reload_shell_he_50";
			model="\z\ifa3_comp_ace\addons\reload\models\45mm_round_he.p3d";
		picture = "\z\ifa3_comp_ace\addons\reload\UI\ui_shell_he.paa";
		allowedSlots[] = {901};
		mass = 70;
	};
	class IFa3_1x_Pzgr39_KWK_39: IFa3_45x_Pzgr39_KWK_39
	{
		count = 1;
		displayName = "$STR_ACE_ifa3reload_disp_ap";
		displayNameShort = "$STR_ACE_ifa3reload_disp_ap";
		descriptionShort = "$STR_ACE_ifa3reload_shell_ap_50";
			model="\z\ifa3_comp_ace\addons\reload\models\45mm_round_apc.p3d";
		picture = "\z\ifa3_comp_ace\addons\reload\UI\ui_shell_ap.paa";
		allowedSlots[] = {901};
		mass = 70;
	};
	class IFa3_1x_Pzgr40_KWK_39: IFa3_12x_Pzgr40_KWK_39
	{
		count = 1;
		displayName = "$STR_ACE_ifa3reload_disp_apcr";
		displayNameShort = "$STR_ACE_ifa3reload_disp_apcr";
		descriptionShort = "$STR_ACE_ifa3reload_shell_apcr_50";
			model="\z\ifa3_comp_ace\addons\reload\models\45mm_round_apc.p3d";
		picture = "\z\ifa3_comp_ace\addons\reload\UI\ui_shell_apcr.paa";
		allowedSlots[] = {901};
		mass = 70;
	};

	class IFa3_1x_HI_Gr38C_KWK_37: IFa3_20x_HI_Gr38C_KWK_37
	{
		count = 1;
		displayName = "$STR_ACE_ifa3reload_disp_heat";
		displayNameShort = "$STR_ACE_ifa3reload_disp_heat";
		descriptionShort = "$STR_ACE_ifa3reload_shell_heat_75";
			model="\z\ifa3_comp_ace\addons\reload\models\zis3_76mm_round_he.p3d";
		picture = "\z\ifa3_comp_ace\addons\reload\UI\ui_shell_heat.paa";
		allowedSlots[] = {901};
		tracersEvery = 1;
		mass = 80;
	};
	class IFa3_1x_K_Gr_rotPz_KWK_37: IFa3_12x_K_Gr_rotPz_KWK_37
	{
		count = 1;
		displayName = "$STR_ACE_ifa3reload_disp_ap";
		displayNameShort = "$STR_ACE_ifa3reload_disp_ap";
		descriptionShort = "$STR_ACE_ifa3reload_shell_ap_75";
			model="\z\ifa3_comp_ace\addons\reload\models\zis3_76mm_round_apc.p3d";
		picture = "\z\ifa3_comp_ace\addons\reload\UI\ui_shell_ap.paa";
		tracersEvery = 1;
		allowedSlots[] = {901};
		mass = 80;
	};
	class IFa3_1x_SprGr34_KWK_37: IFa3_30x_SprGr34_KWK_37
	{
		count = 1;
		displayName = "$STR_ACE_ifa3reload_disp_he";
		displayNameShort = "$STR_ACE_ifa3reload_disp_he";
		descriptionShort = "$STR_ACE_ifa3reload_shell_he_75";
			model="\z\ifa3_comp_ace\addons\reload\models\zis3_76mm_round_he.p3d";
		picture = "\z\ifa3_comp_ace\addons\reload\UI\ui_shell_he.paa";
		allowedSlots[] = {901};
		mass = 80;
	};

	class LIB_HE_VehicleMagazine_base;
	class LIB_OF350_HE: LIB_HE_VehicleMagazine_base
	{
		displayName = "$STR_ACE_ifa3reload_disp_he";
		displayNameShort = "$STR_ACE_ifa3reload_disp_he";
		descriptionShort = "$STR_ACE_ifa3reload_shell_he_76";
		//model = "\WW2\Assets_m\Weapons\Misc_m\Weapons\IF_Mag_Univ.p3d";
			model="\z\ifa3_comp_ace\addons\reload\models\zis3_76mm_round_he.p3d";
		picture = "\z\ifa3_comp_ace\addons\reload\UI\ui_shell_he.paa";
		allowedSlots[] = {901};
		mass = 80;
	};

	class LIB_AP_VehicleMagazine_base;
	class LIB_BR350B_AP: LIB_AP_VehicleMagazine_base
	{
		displayName = "$STR_ACE_ifa3reload_disp_ap";
		displayNameShort = "$STR_ACE_ifa3reload_disp_ap";
		descriptionShort = "$STR_ACE_ifa3reload_shell_ap_76";
		//model = "\WW2\Assets_m\Weapons\Misc_m\Weapons\IF_Mag_Univ.p3d";
			model="\z\ifa3_comp_ace\addons\reload\models\zis3_76mm_round_apc.p3d";
		picture = "\z\ifa3_comp_ace\addons\reload\UI\ui_shell_ap.paa";
		tracersEvery = 1;
		allowedSlots[] = {901};
		mass = 80;
	};

	class LIB_APCR_VehicleMagazine_base;
	class LIB_BR350P_APCR: LIB_APCR_VehicleMagazine_base
	{
		displayName = "$STR_ACE_ifa3reload_disp_apcr";
		displayNameShort = "$STR_ACE_ifa3reload_disp_apcr";
		descriptionShort = "$STR_ACE_ifa3reload_shell_apcr_76";
			model="\z\ifa3_comp_ace\addons\reload\models\zis3_76mm_round_apc.p3d";
		picture = "\z\ifa3_comp_ace\addons\reload\UI\ui_shell_apcr.paa";
		tracersEvery = 1;
		allowedSlots[] = {901};
		mass = 80;
	};

	class lib_63Rnd_762x54: lib_47Rnd_762x54
	{
		initSpeed = 795;
		displayName = "$STR_LIB_MN_DT";
		displayNameShort = "$STR_LIB_MN_DT";
		descriptionShort = "$STR_ACE_ifa3reload_tape_round_63";
		model = "\WW2\Assets_m\Weapons\Misc_m\Weapons\IF_Mag_Univ.p3d";
		picture = "\z\ifa3_comp_ace\addons\reload\UI\DT.paa";
		allowedSlots[] = {901,701};
		mass = 25;
	};

	class LIB_M42A1_M1_HE: LIB_HE_VehicleMagazine_base
	{
		displayName = "M4A3";
		displayNameShort = "$STR_ACE_ifa3reload_disp_he";
		descriptionShort = "$STR_ACE_ifa3reload_shell_he_75";
			model="\z\ifa3_comp_ace\addons\reload\models\zis3_76mm_round_he.p3d";
		picture = "\z\ifa3_comp_ace\addons\reload\UI\ui_shell_he.paa";
		allowedSlots[] = {901};
		mass = 80;
	};
	class LIB_M61_M1_AP: LIB_AP_VehicleMagazine_base
	{
		displayName = "M4A3";
		displayNameShort = "$STR_ACE_ifa3reload_disp_ap";
		descriptionShort = "$STR_ACE_ifa3reload_shell_ap_75";
			model="\z\ifa3_comp_ace\addons\reload\models\zis3_76mm_round_apc.p3d";
		picture = "\z\ifa3_comp_ace\addons\reload\UI\ui_shell_ap.paa";
		allowedSlots[] = {901};
		mass = 80;
		tracersEvery = 1;
	};
	class LIB_T45_M1_APCR: LIB_APCR_VehicleMagazine_base
	{
		displayName = "M4A3";
		displayNameShort = "$STR_ACE_ifa3reload_disp_apcr";
		descriptionShort = "$STR_ACE_ifa3reload_shell_apcr_75";
			model="\z\ifa3_comp_ace\addons\reload\models\zis3_76mm_round_apc.p3d";
		picture = "\z\ifa3_comp_ace\addons\reload\UI\ui_shell_apcr.paa";
		allowedSlots[] = {901};
		mass = 80;
		tracersEvery = 1;
	};
	class LIB_250Rnd_M1919A4: VehicleMagazine
	{
		displayName = "$STR_ACE_ifa3reload_tape_browning";
		displayNameShort = "$STR_ACE_ifa3reload_tape_browning_desc";
		descriptionShort = "$STR_ACE_ifa3reload_tape_round_250";
		model = "\WW2\Assets_m\Weapons\Misc_m\Weapons\IF_Mag_Univ.p3d";
		picture = "\z\ifa3_comp_ace\addons\reload\UI\ui_brow_corob_ico.paa";
		allowedSlots[] = {901};
		mass = 50;
	};
	class LIB_SprGr34_KWK40_HE: LIB_HE_VehicleMagazine_base
	{
		displayName = "$STR_ACE_ifa3reload_disp_he";
		displayNameShort = "$STR_ACE_ifa3reload_disp_he";
		descriptionShort = "$STR_ACE_ifa3reload_shell_he_75";
			model="\z\ifa3_comp_ace\addons\reload\models\zis3_76mm_round_he.p3d";
		picture = "\z\ifa3_comp_ace\addons\reload\UI\ui_shell_he.paa";
		allowedSlots[] = {901};
		mass = 80;
	};
	class LIB_PzGr39_KWK40_AP: LIB_AP_VehicleMagazine_base
	{
		displayName = "$STR_ACE_ifa3reload_disp_ap";
		displayNameShort = "$STR_ACE_ifa3reload_disp_ap";
		descriptionShort = "$STR_ACE_ifa3reload_shell_ap_75";
			model="\z\ifa3_comp_ace\addons\reload\models\zis3_76mm_round_apc.p3d";
		picture = "\z\ifa3_comp_ace\addons\reload\UI\ui_shell_ap.paa";
		allowedSlots[] = {901};
		mass = 80;
		tracersEvery = 1;
	};
	class LIB_PzGr40_KWK40_APCR: LIB_APCR_VehicleMagazine_base
	{
		displayName = "$STR_ACE_ifa3reload_disp_apcr";
		displayNameShort = "$STR_ACE_ifa3reload_disp_apcr";
		descriptionShort = "$STR_ACE_ifa3reload_shell_apcr_75";
			model="\z\ifa3_comp_ace\addons\reload\models\zis3_76mm_round_apc.p3d";
		picture = "\z\ifa3_comp_ace\addons\reload\UI\ui_shell_apcr.paa";
		allowedSlots[] = {901};
		mass = 80;
		tracersEvery = 1;
	};
	class LIB_150rnd_MG34: VehicleMagazine
	{
		displayName = "$STR_ACE_ifa3reload_tape_mg34";
//		displayNameShort = "$STR_ACE_ifa3reload_tape_mg34_desc";
		descriptionShort = "$STR_ACE_ifa3reload_tape_round_150";
		model = "\WW2\Assets_m\Weapons\Misc_m\Weapons\IF_Mag_Univ.p3d";
		initSpeed = 755;
		picture = "\z\ifa3_comp_ace\addons\reload\UI\lib_250Rnd_792x57.paa";
		mass = 40;
	};
	class LIB_PzGr_leFH18_AP: VehicleMagazine
	{
		displayName = "StuH 42";
		displayNameShort = "$STR_ACE_ifa3reload_disp_ap";
		descriptionShort = "$STR_ACE_ifa3reload_shell_ap_105";
			model="\z\ifa3_comp_ace\addons\reload\models\zis3_76mm_round_apc.p3d";
		picture = "\z\ifa3_comp_ace\addons\reload\UI\ui_shell_ap.paa";
		allowedSlots[] = {901};
		mass = 90;
		tracersEvery = 1;
	};

	class LIB_GR39rot_leFH18_HI: VehicleMagazine
	{
		displayName = "StuH 42";
		displayNameShort = "$STR_ACE_ifa3reload_disp_heat";
		descriptionShort = "$STR_ACE_ifa3reload_shell_heat_105";
			model="\z\ifa3_comp_ace\addons\reload\models\zis3_76mm_round_he.p3d";
		picture = "\z\ifa3_comp_ace\addons\reload\UI\ui_shell_heat.paa";
		allowedSlots[] = {901};
		mass = 90;
		tracersEvery = 1;
	};

	class LIB_FHGr_leFH18_HE: VehicleMagazine
	{
		displayName = "StuH 42";
		displayNameShort = "$STR_ACE_ifa3reload_disp_he";
		descriptionShort = "$STR_ACE_ifa3reload_shell_he_105";
			model="\z\ifa3_comp_ace\addons\reload\models\zis3_76mm_round_he.p3d";
		picture = "\z\ifa3_comp_ace\addons\reload\UI\ui_shell_he.paa";
		allowedSlots[] = {901};
		mass = 90;
	};

	class ifa3_UOF353: VehicleMagazine
	{
		displayName = "P27";
		displayNameShort = "$STR_ACE_ifa3reload_disp_he";
		descriptionShort = "$STR_ACE_ifa3reload_shell_he_76";
			model="\z\ifa3_comp_ace\addons\reload\models\zis3_76mm_round_he.p3d";
		picture = "\z\ifa3_comp_ace\addons\reload\UI\ui_shell_he.paa";
		allowedSlots[] = {901};
		mass = 80;
		tracersEvery = 1;
	};

	class ifa3_UBR353: VehicleMagazine
	{
		displayName = "P27";
		displayNameShort = "$STR_ACE_ifa3reload_disp_ap";
		descriptionShort = "$STR_ACE_ifa3reload_shell_ap_76";
			model="\z\ifa3_comp_ace\addons\reload\models\zis3_76mm_round_apc.p3d";
		picture = "\z\ifa3_comp_ace\addons\reload\UI\ui_shell_ap.paa";
		allowedSlots[] = {901};
		mass = 80;
	};


	class ifa3_USHC353: VehicleMagazine
	{
		displayName = "P27";
		displayNameShort = "$STR_ACE_ifa3reload_disp_Buckshot";
		descriptionShort = "$STR_ACE_ifa3reload_shell_Buckshot_76";
			model="\z\ifa3_comp_ace\addons\reload\models\zis3_76mm_round_apc.p3d";
		picture = "\z\ifa3_comp_ace\addons\reload\UI\ui_shell_he.paa";
		allowedSlots[] = {901};
		mass = 80;
	};

	class LIB_10x_SprGr_KWK_38: VehicleMagazine
	{
		displayName = "PZ II";
		displayNameShort = "$STR_ACE_ifa3reload_disp_he";
		descriptionShort = "$STR_ACE_ifa3reload_shell_he_20";
		model = "\WW2\Assets_m\Weapons\Misc_m\Weapons\IF_Mag_Univ.p3d";
		picture = "\z\ifa3_comp_ace\addons\reload\UI\ui_shell_he.paa";
		allowedSlots[] = {901};
		mass = 33;
	};

	class LIB_10x_Pzgr_KWK_38: LIB_10x_SprGr_KWK_38
	{
		displayName = "PZ II";
		displayNameShort = "$STR_ACE_ifa3reload_disp_ap";
		descriptionShort = "$STR_ACE_ifa3reload_shell_ap_20";
		model = "\WW2\Assets_m\Weapons\Misc_m\Weapons\IF_Mag_Univ.p3d";
		picture = "\z\ifa3_comp_ace\addons\reload\UI\ui_shell_ap.paa";
		allowedSlots[] = {901};
		mass = 33;
	};

	class LIB_10x_Pzgr40_KWK_38: LIB_10x_SprGr_KWK_38
	{
		displayName = "PZ II";
		displayNameShort = "$STR_ACE_ifa3reload_disp_apcr";
		descriptionShort = "$STR_ACE_ifa3reload_shell_apcr_20";
		model = "\WW2\Assets_m\Weapons\Misc_m\Weapons\IF_Mag_Univ.p3d";
		picture = "\z\ifa3_comp_ace\addons\reload\UI\ui_shell_apcr.paa";
		allowedSlots[] = {901};
		mass = 33;
	};


	class IFa3_1x_0240_k_20: IFa3_19x_0240_k_20
	{
		count = 1;
		displayName = "$STR_ACE_ifa3reload_ba10_vehicle";
		displayNameShort = "$STR_ACE_ifa3reload_disp_he";
		descriptionShort = "$STR_ACE_ifa3reload_shell_he_45";
			model="\z\ifa3_comp_ace\addons\reload\models\45mm_round_he.p3d";
		picture = "\z\ifa3_comp_ace\addons\reload\UI\ui_shell_he.paa";
		allowedSlots[] = {901};
		mass = 70;
	};


	class IFa3_1x_BR240_k_20: IFa3_25x_BR240_k_20
	{
		count = 1;
		displayName = "$STR_ACE_ifa3reload_ba10_vehicle";
		displayNameShort = "$STR_ACE_ifa3reload_disp_ap";
		descriptionShort = "$STR_ACE_ifa3reload_shell_ap_45";
			model="\z\ifa3_comp_ace\addons\reload\models\45mm_round_apc.p3d";
		picture = "\z\ifa3_comp_ace\addons\reload\UI\ui_shell_ap.paa";
		allowedSlots[] = {901};
		mass = 70;
	};

	class IFa3_1x_BR240P_k_20: IFa3_5x_BR240P_k_20
	{
		count = 1;
		displayName = "$STR_ACE_ifa3reload_ba10_vehicle";
		displayNameShort = "$STR_ACE_ifa3reload_disp_apcr";
		descriptionShort = "$STR_ACE_ifa3reload_shell_apcr_45";
			model="\z\ifa3_comp_ace\addons\reload\models\45mm_round_apc.p3d";
		picture = "\z\ifa3_comp_ace\addons\reload\UI\ui_shell_apcr.paa";
		allowedSlots[] = {901};
		mass = 70;
	};
	class ifa3_58x_OT_20: VehicleMagazine
	{
		displayName = "T60";
		displayNameShort = "$STR_ACE_ifa3reload_disp_he";
		descriptionShort = "$STR_ACE_ifa3reload_shell_he_5820";
		model = "\WW2\Assets_m\Weapons\Misc_m\Weapons\IF_Mag_Univ.p3d";
		picture = "\z\ifa3_comp_ace\addons\reload\UI\ui_shell_he.paa";
		allowedSlots[] = {901};
		mass = 100;
	};

	class ifa3_58x_BZT_20: ifa3_58x_OT_20
	{
		displayName = "T60";
		displayNameShort = "$STR_ACE_ifa3reload_disp_ap";
		descriptionShort = "$STR_ACE_ifa3reload_shell_ap_5820";
		model = "\WW2\Assets_m\Weapons\Misc_m\Weapons\IF_Mag_Univ.p3d";
		picture = "\z\ifa3_comp_ace\addons\reload\UI\ui_shell_ap.paa";
		allowedSlots[] = {901};
		mass = 100;
	};

	class ifa3_58x_BP_20: ifa3_58x_BZT_20
	{
		displayName = "T60";
		displayNameShort = "$STR_ACE_ifa3reload_disp_apcr";
		descriptionShort = "$STR_ACE_ifa3reload_shell_apcr_5820";
		model = "\WW2\Assets_m\Weapons\Misc_m\Weapons\IF_Mag_Univ.p3d";
		picture = "\z\ifa3_comp_ace\addons\reload\UI\ui_shell_apcr.paa";
		allowedSlots[] = {901};
		mass = 100;
	};

	class LIB_5x_61k: VehicleMagazine
	{
		displayName = "61K";
		displayNameShort = "$STR_ACE_ifa3reload_disp_he";
		descriptionShort = "$STR_ACE_ifa3reload_shell_he_37";
		model = "\WW2\Assets_m\Weapons\Misc_m\Weapons\IF_Mag_Univ.p3d";
		picture = "\z\ifa3_comp_ace\addons\reload\UI\ui_shell_he.paa";
		allowedSlots[] = {901};
		mass = 33;
	};

	class LIB_5x_61kAP: LIB_5x_61k
	{
		displayName = "61K";
		displayNameShort = "$STR_ACE_ifa3reload_disp_ap";
		descriptionShort = "$STR_ACE_ifa3reload_shell_ap_37";
		model = "\WW2\Assets_m\Weapons\Misc_m\Weapons\IF_Mag_Univ.p3d";
		picture = "\z\ifa3_comp_ace\addons\reload\UI\ui_shell_ap.paa";
		allowedSlots[] = {901};
		mass = 33;
	};
	class LIB_80x_SprGr_FlaK_38: VehicleMagazine
	{
		displayName = "FlaK 38x4";
		displayNameShort = "$STR_ACE_ifa3reload_disp_he";
		descriptionShort = "$STR_ACE_ifa3reload_shell_he_8020";
		model = "\WW2\Assets_m\Weapons\Misc_m\Weapons\IF_Mag_Univ.p3d";
		picture = "\z\ifa3_comp_ace\addons\reload\UI\ui_shell_he.paa";
		allowedSlots[] = {901};
		mass = 100;
	};
	class LIB_20x_SprGr_FlaK_38: VehicleMagazine
{
		displayName = "FlaK 38";
		displayNameShort = "$STR_ACE_ifa3reload_disp_he";
		descriptionShort = "$STR_ACE_ifa3reload_shell_he_2020";
		model = "\WW2\Assets_m\Weapons\Misc_m\Weapons\IF_Mag_Univ.p3d";
		picture = "\z\ifa3_comp_ace\addons\reload\UI\ui_shell_he.paa";
		allowedSlots[] = {901};
		mass = 50;
	};
	class LIB_100Rnd_127x99_M2: VehicleMagazine
	{
		displayName = "$STR_ACE_ifa3reload_tape_m2";
		displayNameShort = "$STR_ACE_ifa3reload_tape_m2_desc";
		descriptionShort = "$STR_ACE_ifa3reload_tape_round_100";
		model = "\WW2\Assets_m\Weapons\Misc_m\Weapons\IF_Mag_Univ.p3d";
		picture = "\z\ifa3_comp_ace\addons\reload\UI\ui_brow_corob_ico.paa";
		allowedSlots[] = {901};
		mass = 50;
	};
	class ifa3_50Rnd_127x108: LIB_100Rnd_127x99_M2
	{
		ammo = "LIB_B_127x108_Ball";
		count = 50;
		displayName = "$STR_ACE_ifa3reload_tape_dshk";
		displayNameShort = "$STR_ACE_ifa3reload_tape_dshk_desc";
		descriptionShort = "$STR_ACE_ifa3reload_tape_round_50";
		model = "\WW2\Assets_m\Weapons\Misc_m\Weapons\IF_Mag_Univ.p3d";
		picture = "\z\ifa3_comp_ace\addons\reload\UI\Dshk.paa";
		allowedSlots[] = {901};
		mass = 35;
	};
	class lib_250rnd_7_62x54R_maxim: VehicleMagazine
	{
		displayName = "$STR_ACE_ifa3reload_tape_max";
		displayNameShort = "$STR_ACE_ifa3reload_tape_max_desc";
		descriptionShort = "$STR_ACE_ifa3reload_tape_round_250";
		model = "\WW2\Assets_m\Weapons\Misc_m\Weapons\IF_Mag_Univ.p3d";
		picture = "\z\ifa3_comp_ace\addons\reload\UI\Maxim_box.paa";
		mass = 50;
		allowedSlots[] = {901};
	};
};
