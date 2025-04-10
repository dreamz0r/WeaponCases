class CfgPatches
{
	class WeaponCases
	{
		units[]={};
		requiredVersion=1.1;
		requiredAddons[]=
		{
			"DZ_Data"
		};
	};
};
class CfgMods
{
	class WeaponCases
	{
		dir="WeaponCases";
		picture="";
		action="";
		hideName=0;
		hidePicture=1;
		name="WeaponCases";
		author="";
		authorID="";
		version="1.0";
		extra=0;
		type="mod";
	};
};

class CfgVehicles
{
	class SmallProtectorCase;
	class Melee_Case: SmallProtectorCase
	{
		scope=2;
		displayName="Melee Case";
		descriptionShort="A melee case";
		model="\dz\gear\containers\Protector_Case.p3d";
		attachments[]=
		{
			"Melee"
		};
		itemSize[]={3,3};
		itemsCargoSize[]={0,0};
		inventorySlot[]+=
		{};
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"WeaponCases\data\melee_case_co.paa",
			"WeaponCases\data\melee_case_co.paa",
			"WeaponCases\data\melee_case_co.paa"
		};
	};
	class Pistol_Case: SmallProtectorCase
	{
		scope=2;
		displayName="Pistol Case";
		descriptionShort="A pistol case";
		model="\dz\gear\containers\Protector_Case.p3d";
		attachments[]=
		{
			"Pistol",
			"magazine2",
			"magazine2"
		};
		itemSize[]={3,3};
		itemsCargoSize[]={0,0};
		inventorySlot[]+=
		{};
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"WeaponCases\data\pistol_case_co.paa",
			"WeaponCases\data\pistol_case_co.paa",
			"WeaponCases\data\pistol_case_co.paa"
		};
	};
	class Shotgun_Case: SmallProtectorCase
	{
		scope=2;
		displayName="Shotgun Case";
		descriptionShort="A shotgun case";
		model="\dz\gear\containers\Protector_Case.p3d";
		attachments[]=
		{};
		itemSize[]={3,3};
		itemsCargoSize[]={0,0};
		inventorySlot[]+=
		{};
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"WeaponCases\data\shotgun_case_co.paa",
			"WeaponCases\data\shotgun_case_co.paa",
			"WeaponCases\data\shotgun_case_co.paa"
		};
	};
	class SMG_Case: SmallProtectorCase
	{
		scope=2;
		displayName="Sub Machine Gun Case";
		descriptionShort="A sub machine gun case";
		model="\dz\gear\containers\Protector_Case.p3d";
		attachments[]=
		{
			"magazine2",
			"magazine2",
			"magazine2"
		};
		itemSize[]={3,3};
		itemsCargoSize[]={0,0};
		inventorySlot[]+=
		{};
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"WeaponCases\data\smg_case_co.paa",
			"WeaponCases\data\smg_case_co.paa",
			"WeaponCases\data\smg_case_co.paa"
		};
	};
	class AR_Case: SmallProtectorCase
	{
		scope=2;
		displayName="Assault Rifle Case";
		descriptionShort="An assault rifle case";
		model="\dz\gear\containers\Protector_Case.p3d";
		attachments[]=
		{
			"magazine2",
			"magazine2",
			"magazine2"
		};
		itemSize[]={3,3};
		itemsCargoSize[]={0,0};
		inventorySlot[]+=
		{};
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"WeaponCases\data\ar_case_co.paa",
			"WeaponCases\data\ar_case_co.paa",
			"WeaponCases\data\ar_case_co.paa"
		};
	};
	class Sniper_Case: SmallProtectorCase
	{
		scope=2;
		displayName="Sniper Case";
		descriptionShort="A sniper case";
		model="\dz\gear\containers\Protector_Case.p3d";
		attachments[]=
		{
			"magazine2",
			"magazine2",
			"magazine2"
		};
		itemSize[]={3,3};
		itemsCargoSize[]={0,0};
		inventorySlot[]+=
		{};
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"WeaponCases\data\sniper_case_co.paa",
			"WeaponCases\data\sniper_case_co.paa",
			"WeaponCases\data\sniper_case_co.paa"
		};
	};
	class Explosives_Case: SmallProtectorCase
	{
		scope=2;
		displayName="Explosives Case";
		descriptionShort="An explosives case";
		model="\dz\gear\containers\Protector_Case.p3d";
		attachments[]=
		{
			"VestGrenadeA",
			"VestGrenadeB",
			"VestGrenadeC",
			"VestGrenadeD"
		};
		itemSize[]={3,3};
		itemsCargoSize[]={0,0};
		inventorySlot[]+=
		{};
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"WeaponCases\data\explosives_case_co.paa",
			"WeaponCases\data\explosives_case_co.paa",
			"WeaponCases\data\explosives_case_co.paa"
		};
	};
	class Ammo_Case: SmallProtectorCase
	{
		scope=2;
		displayName="Ammo Case";
		descriptionShort="An ammo case";
		model="\dz\gear\containers\Protector_Case.p3d";
		attachments[]=
		{};
		itemSize[]={3,3};
		itemsCargoSize[]={4,1};
		inventorySlot[]+=
		{};
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"WeaponCases\data\ammo_case_co.paa",
			"WeaponCases\data\ammo_case_co.paa",
			"WeaponCases\data\ammo_case_co.paa"
		};
	};
};
