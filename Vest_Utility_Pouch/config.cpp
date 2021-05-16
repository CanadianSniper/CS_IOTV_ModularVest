class CfgPatches
{
	class CS_Vest_Utility_Pouch
	{
		units[]={"Vest_Utility"};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[] = 
		{
			"DZ_Data",
			"DZ_Gear_Containers"
		};
	};
};
class cfgVehicles
{	
	class Container_Base;
	class Vest_Utility_Base: Container_Base
	{
		scope = 0;
		displayName = "IOTV Utility Pouch";
		descriptionShort = "Attachable utility pouch for IOTV vests.";
		model = "\CS_ModularVest\Vest_Utility_Pouch\Vest_Utility_Pouch.p3d";
		hiddenSelections[]=
		{
			"Utility_Pouch"
		};
		hiddenSelectionsTextures[]=
		{
			"CS_ModularVest\Vest_Utility_Pouch\data\Vest_Utility_Pouch_co.paa"
		};
		rotationFlags=0;
		itemSize[] = {2,2};
		itemsCargoSize[] = {4,4};
		inventorySlot[] = {"CSUtility"};
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
	class Vest_Utility: Vest_Utility_Base
	{
		scope = 2;
		displayName = "IOTV Utility Pouch (Black)";
		hiddenSelectionsTextures[]=
		{
			"CS_ModularVest\Vest_Utility_Pouch\data\Vest_Utility_Pouch_co.paa"
		};
	};
	class Vest_Utility_Green: Vest_Utility_Base
	{
		scope = 2;
		displayName = "IOTV Utility Pouch (Green)";
		hiddenSelectionsTextures[]=
		{
			"CS_ModularVest\Vest_Utility_Pouch\data\Vest_Utility_Pouch_Green_co.paa"
		};
	};
	class Vest_Utility_Tan: Vest_Utility_Base
	{
		scope = 2;
		displayName = "IOTV Utility Pouch (Tan)";
		hiddenSelectionsTextures[]=
		{
			"CS_ModularVest\Vest_Utility_Pouch\data\Vest_Utility_Pouch_Tan_co.paa"
		};
	};
	class Vest_Utility_UCP: Vest_Utility_Base
	{
		scope = 2;
		displayName = "IOTV Utility Pouch (UCP)";
		hiddenSelectionsTextures[]=
		{
			"CS_ModularVest\Vest_Utility_Pouch\data\Vest_Utility_Pouch_UCP_co.paa"
		};
	};
	class Vest_Utility_Woodland: Vest_Utility_Base
	{
		scope = 2;
		displayName = "IOTV Utility Pouch (Woodland)";
		hiddenSelectionsTextures[]=
		{
			"CS_ModularVest\Vest_Utility_Pouch\data\Vest_Utility_Pouch_Woodland_co.paa"
		};
	};
};