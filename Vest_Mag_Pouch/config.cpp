class CfgPatches
{
	class CS_Vest_Mag_Pouch
	{
		units[]={"Vest_Mag"};
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
	class Vest_Mag_Base: Container_Base
	{
		scope = 0;
		displayName = "IOTV Mag Pouch";
		descriptionShort = "Attachable magazine pouch for IOTV vests.";
		model = "\CS_ModularVest\Vest_Mag_Pouch\Vest_Mag_Pouch.p3d";
		hiddenSelections[]=
		{
			"Mag_Pouch1",
			"Mag_Pouch2",
			"Mag_Pouch3"
		};
		hiddenSelectionsTextures[]=
		{
			"CS_ModularVest\Vest_Mag_Pouch\data\Vest_Mag_Pouch_co.paa",
			"CS_ModularVest\Vest_Mag_Pouch\data\Vest_Mag_Pouch_co.paa",
			"CS_ModularVest\Vest_Mag_Pouch\data\Vest_Mag_Pouch_co.paa"
		};
		rotationFlags=0;
		itemSize[] = {2,2};
		itemsCargoSize[] = {4,6};
		inventorySlot[] = {"CSMag"};
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
	class Vest_Mag: Vest_Mag_Base
	{
		scope = 2;
		displayName = "IOTV Mag Pouch (Black)";
		hiddenSelectionsTextures[]=
		{
			"CS_ModularVest\Vest_Mag_Pouch\data\Vest_Mag_Pouch_co.paa",
			"CS_ModularVest\Vest_Mag_Pouch\data\Vest_Mag_Pouch_co.paa",
			"CS_ModularVest\Vest_Mag_Pouch\data\Vest_Mag_Pouch_co.paa"
		};
	};
	class Vest_Mag_Green: Vest_Mag_Base
	{
		scope = 2;
		displayName = "IOTV Mag Pouch (Green)";
		hiddenSelectionsTextures[]=
		{
			"CS_ModularVest\Vest_Mag_Pouch\data\Vest_Mag_Pouch_Green_co.paa",
			"CS_ModularVest\Vest_Mag_Pouch\data\Vest_Mag_Pouch_Green_co.paa",
			"CS_ModularVest\Vest_Mag_Pouch\data\Vest_Mag_Pouch_Green_co.paa"
		};
	};
	class Vest_Mag_Tan: Vest_Mag_Base
	{
		scope = 2;
		displayName = "IOTV Mag Pouch (Tan)";
		hiddenSelectionsTextures[]=
		{
			"CS_ModularVest\Vest_Mag_Pouch\data\Vest_Mag_Pouch_Tan_co.paa",
			"CS_ModularVest\Vest_Mag_Pouch\data\Vest_Mag_Pouch_Tan_co.paa",
			"CS_ModularVest\Vest_Mag_Pouch\data\Vest_Mag_Pouch_Tan_co.paa"
		};
	};
};