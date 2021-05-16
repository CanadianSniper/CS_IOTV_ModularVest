class CfgPatches
{
	class CS_Vest_IFAK_Pouch
	{
		units[]={"Vest_IFAK"};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[] = 
		{
			"DZ_Data",
			"DZ_Gear_Medical",
			"DZ_Gear_Containers"
		};
	};
};
class cfgVehicles
{	
	class Container_Base;
	class Vest_IFAK_Base: Container_Base
	{
		scope = 0;
		displayName = "IOTV IFAK Pouch";
		descriptionShort = "Attachable medical pouch for IOTV vests.";
		model = "\CS_ModularVest\Vest_IFAK_Pouch\Vest_IFAK_Pouch.p3d";
		hiddenSelections[]=
		{
			"Ifak_Pouch"
		};
		hiddenSelectionsTextures[]=
		{
			"CS_ModularVest\Vest_IFAK_Pouch\data\Vest_IFAK_Pouch_co.paa"
		};
		rotationFlags=0;
		itemSize[] = {2,2};
		itemsCargoSize[] = {4,4};
		inventorySlot[] = {"CSIfak"};
		weight=250;
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
		allowOwnedCargoManipulation=1;
		randomQuantity=2;
		lootTag[]=
		{
			"Military_east",
			"Military_west"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\characters\vests\Data\BallisticVest.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\characters\vests\Data\BallisticVest.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\characters\vests\Data\BallisticVest_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\characters\vests\Data\BallisticVest_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\characters\vests\Data\Ballisticvest_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem_Light
				{
					soundSet="pickUpCourierBag_Light_SoundSet";
					id=796;
				};
				class pickUpItem
				{
					soundSet="pickUpCourierBag_SoundSet";
					id=797;
				};
			};
		};
	};
	class Vest_IFAK: Vest_IFAK_Base
	{
		scope = 2;
		displayName = "IOTV IFAK Pouch (Black)";
		hiddenSelectionsTextures[]=
		{
			"CS_ModularVest\Vest_IFAK_Pouch\data\Vest_IFAK_Pouch_co.paa"
		};
	};
	class Vest_IFAK_Green: Vest_IFAK_Base
	{
		scope = 2;
		displayName = "IOTV IFAK Pouch (Green)";
		hiddenSelectionsTextures[]=
		{
			"CS_ModularVest\Vest_IFAK_Pouch\data\Vest_IFAK_Pouch_Green_co.paa"
		};
	};
	class Vest_IFAK_Tan: Vest_IFAK_Base
	{
		scope = 2;
		displayName = "IOTV IFAK Pouch (Tan)";
		hiddenSelectionsTextures[]=
		{
			"CS_ModularVest\Vest_IFAK_Pouch\data\Vest_IFAK_Pouch_Tan_co.paa"
		};
	};
	class Vest_IFAK_UCP: Vest_IFAK_Base
	{
		scope = 2;
		displayName = "IOTV IFAK Pouch (UCP)";
		hiddenSelectionsTextures[]=
		{
			"CS_ModularVest\Vest_IFAK_Pouch\data\Vest_IFAK_Pouch_UCP_co.paa"
		};
	};
	class Vest_IFAK_Woodland: Vest_IFAK_Base
	{
		scope = 2;
		displayName = "IOTV IFAK Pouch (Woodland)";
		hiddenSelectionsTextures[]=
		{
			"CS_ModularVest\Vest_IFAK_Pouch\data\Vest_IFAK_Pouch_Woodland_co.paa"
		};
	};
};