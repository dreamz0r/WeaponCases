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
	class Container_Base;
	class Melee_Case: Container_Base
	{
		scope=2;
		displayName="Melee Case";
		descriptionShort="A melee case";
		model="\dz\gear\containers\Protector_Case.p3d";
		attachments[]=
		{
			"Melee"
		};
		weight=1000;
		rotationFlags=17;
		itemSize[]={3,3};
		itemsCargoSize[]={0,0};
		inventorySlot[]+=
		{};
		stackedRandom=0;
		allowOwnedCargoManipulation=1;
		randomQuantity=2;
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
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=500;
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="Shirt_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="Shirt_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class Pistol_Case: Container_Base
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
		weight=1000;
		rotationFlags=17;
		itemSize[]={3,3};
		itemsCargoSize[]={0,0};
		inventorySlot[]+=
		{};
		stackedRandom=0;
		allowOwnedCargoManipulation=1;
		randomQuantity=2;
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
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=500;
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="Shirt_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="Shirt_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class Shotgun_Case: Container_Base
	{
		scope=2;
		displayName="Shotgun Case";
		descriptionShort="A shotgun case";
		model="\dz\gear\containers\Protector_Case.p3d";
		attachments[]=
		{};
		weight=1000;
		rotationFlags=17;
		itemSize[]={3,3};
		itemsCargoSize[]={0,0};
		inventorySlot[]+=
		{};
		stackedRandom=0;
		allowOwnedCargoManipulation=1;
		randomQuantity=2;
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
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=500;
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="Shirt_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="Shirt_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class SMG_Case: Container_Base
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
		weight=1000;
		rotationFlags=17;
		itemSize[]={3,3};
		itemsCargoSize[]={0,0};
		inventorySlot[]+=
		{};
		stackedRandom=0;
		allowOwnedCargoManipulation=1;
		randomQuantity=2;
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
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=500;
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="Shirt_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="Shirt_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class AR_Case: Container_Base
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
		weight=1000;
		rotationFlags=17;
		itemSize[]={3,3};
		itemsCargoSize[]={0,0};
		inventorySlot[]+=
		{};
		stackedRandom=0;
		allowOwnedCargoManipulation=1;
		randomQuantity=2;
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
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=500;
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="Shirt_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="Shirt_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class Sniper_Case: Container_Base
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
		weight=1000;
		rotationFlags=17;
		itemSize[]={3,3};
		itemsCargoSize[]={0,0};
		inventorySlot[]+=
		{};
		stackedRandom=0;
		allowOwnedCargoManipulation=1;
		randomQuantity=2;
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
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=500;
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="Shirt_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="Shirt_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class Explosives_Case: Container_Base
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
		weight=1000;
		rotationFlags=17;
		itemSize[]={3,3};
		itemsCargoSize[]={0,0};
		inventorySlot[]+=
		{};
		stackedRandom=0;
		allowOwnedCargoManipulation=1;
		randomQuantity=2;
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
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=500;
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="Shirt_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="Shirt_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class Ammo_Case: Container_Base
	{
		scope=2;
		displayName="Ammo Case";
		descriptionShort="An ammo case";
		model="\dz\gear\containers\Protector_Case.p3d";
		attachments[]=
		{};
		weight=1000;
		rotationFlags=17;
		itemSize[]={3,3};
		itemsCargoSize[]={4,1};
		inventorySlot[]+=
		{};
		stackedRandom=0;
		allowOwnedCargoManipulation=1;
		randomQuantity=2;
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
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=500;
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="Shirt_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="Shirt_drop_SoundSet";
					id=898;
				};
			};
		};
	};
};
