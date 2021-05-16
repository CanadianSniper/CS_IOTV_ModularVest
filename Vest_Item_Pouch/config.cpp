class CfgPatches
{
	class CS_Vest_Item_Pouch
	{
		units[]={"Vest_Item"};
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
	class Vest_Item_Base: Container_Base
	{
		scope = 0;
		displayName = "IOTV Item Pouch";
		descriptionShort = "Attachable item pouch for IOTV vests.";
		model = "\CS_ModularVest\Vest_Item_Pouch\Vest_Item_Pouch.p3d";
		hiddenSelections[]=
		{
			"Item_Pouch"
		};
		hiddenSelectionsTextures[]=
		{
			"CS_ModularVest\Vest_Item_Pouch\data\Vest_Item_Pouch_co.paa"
		};
		rotationFlags=0;
		itemSize[] = {4,4};
		itemsCargoSize[] = {6,6};
		inventorySlot[] = {"CSItem"};
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
	class Vest_Item: Vest_Item_Base
	{
		scope = 2;
		displayName = "IOTV IFAK Pouch (Black)";
		hiddenSelectionsTextures[]=
		{
			"CS_ModularVest\Vest_Item_Pouch\data\Vest_Item_Pouch_co.paa"
		};
	};
	class Vest_Item_Green: Vest_Item_Base
	{
		scope = 2;
		displayName = "IOTV IFAK Pouch (Green)";
		hiddenSelectionsTextures[]=
		{
			"CS_ModularVest\Vest_Item_Pouch\data\Vest_Item_Pouch_Green_co.paa"
		};
	};
	class Vest_Item_Tan: Vest_Item_Base
	{
		scope = 2;
		displayName = "IOTV IFAK Pouch (Tan)";
		hiddenSelectionsTextures[]=
		{
			"CS_ModularVest\Vest_Item_Pouch\data\Vest_Item_Pouch_Tan_co.paa"
		};
	};
};