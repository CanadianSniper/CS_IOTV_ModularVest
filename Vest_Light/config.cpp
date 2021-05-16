class CfgPatches
{
	class CS_Vest_Light
	{
		units[]=
		{
			"Vest_Light_Base",
			"Vest_Light",
			"Vest_Light_Green",
			"Vest_Light_Tan",
			"Vest_Light_UCP",
			"Vest_Light_Woodland",
			
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Characters_Vests",
			"DZ_Characters_Backpacks",
			"DZ_Scripts",
			"DZ_Characters",
			"DZ_Gear_Containers"
		};
	};
};
class CfgMods
{
	class CS_Vest_Light
	{	
		dir = "CS_ModularVest";
		picture = "";
		action = "";
		hideName = 1;
		hidePicture = 1;
		name = "CS_ModularVest";
		author = "CanadianSniper";
		authorID = "2039448058";
		version = "1.0";
		extra = 0;
		
		type = "mod";
		dependencies[]=
		{
			"Game",
			"World"
		};
		
		class defs
		{
			class gameScriptModule
            {
                value = "";
                files[] = {"CS_ModularVest/Scripts/3_Game"};
			};

            class worldScriptModule
            {
                value = "";
                files[] = {"CS_ModularVest/Scripts/4_World"};
			};
		};
	};
};
class CfgVehicles
{
	class Clothing_Base;
	class Clothing: Clothing_Base{};
	class PlateCarrierVest;
	class Vest_Light_Base: PlateCarrierVest
	{
		scope=0;
		displayName="IOTV Ballistic Vest (Light)";
		descriptionShort="Lightweight ballistic vest.";
		model="\CS_ModularVest\Vest_Light\Vest_Light_g.p3d";
		attachments[] = {"CSItem","CSIfak","CSUtility","CSMag"};
		inventorySlot[]={"Vest"};
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		hiddenSelectionsTextures[]=
		{
			"CS_ModularVest\Vest_Light\data\Vest_Light_co.paa",
			"CS_ModularVest\Vest_Light\data\Vest_Light_co.paa",
			"CS_ModularVest\Vest_Light\data\Vest_Light_co.paa"
		};
		class ClothingTypes
		{
			male="\CS_ModularVest\Vest_Light\Vest_Light_m.p3d";
			female="\CS_ModularVest\Vest_Light\Vest_Light_f.p3d";
		};
	};
	class Vest_Light: Vest_Light_Base
	{
		scope = 2;
		displayName="IOTV Ballistic Vest Black (Light)";
		hiddenSelectionsTextures[]=
		{
			"CS_ModularVest\Vest_Light\data\Vest_Light_co.paa",
			"CS_ModularVest\Vest_Light\data\Vest_Light_co.paa",
			"CS_ModularVest\Vest_Light\data\Vest_Light_co.paa"
		};
	};
	class Vest_Light_Green: Vest_Light_Base
	{
		scope = 2;
		displayName="IOTV Ballistic Vest Green (Light)";
		hiddenSelectionsTextures[]=
		{
			"CS_ModularVest\Vest_Light\data\Vest_Light_Green_co.paa",
			"CS_ModularVest\Vest_Light\data\Vest_Light_Green_co.paa",
			"CS_ModularVest\Vest_Light\data\Vest_Light_Green_co.paa"			
		};
	};
	class Vest_Light_Tan: Vest_Light_Base
	{
		scope = 2;
		displayName="IOTV Ballistic Vest Tan (Light)";
		hiddenSelectionsTextures[]=
		{
			"CS_ModularVest\Vest_Light\data\Vest_Light_Tan_co.paa",
			"CS_ModularVest\Vest_Light\data\Vest_Light_Tan_co.paa",
			"CS_ModularVest\Vest_Light\data\Vest_Light_Tan_co.paa"
		};
	};
	class Vest_Light_UCP: Vest_Light_Base
	{
		scope = 2;
		displayName="IOTV Ballistic Vest UCP (Light)";
		hiddenSelectionsTextures[]=
		{
			"CS_ModularVest\Vest_Light\data\Vest_Light_UCP_co.paa",
			"CS_ModularVest\Vest_Light\data\Vest_Light_UCP_co.paa",
			"CS_ModularVest\Vest_Light\data\Vest_Light_UCP_co.paa"
		};
	};
	class Vest_Light_Woodland: Vest_Light_Base
	{
		scope = 2;
		displayName="IOTV Ballistic Vest Woodland (Light)";
		hiddenSelectionsTextures[]=
		{
			"CS_ModularVest\Vest_Light\data\Vest_Light_Woodland_co.paa",
			"CS_ModularVest\Vest_Light\data\Vest_Light_Woodland_co.paa",
			"CS_ModularVest\Vest_Light\data\Vest_Light_Woodland_co.paa"
		};
	};
};

class CfgSlots
{
	class Slot_CSItem
	{
		name="CSItem";
		displayName="IOTV Item Pouch";
		ghostIcon="vestpouches";
	};
	class Slot_CSIfak
	{
		name="CSIfak";
		displayName="IOTV IFAK Pouch";
		ghostIcon="vestpouches";
	};
	class Slot_CSUtility
	{
		name="CSUtility";
		displayName="IOTV Utility Pouch";
		ghostIcon="vestpouches";
	};
	class Slot_CSMag
	{
		name="CSMag";
		displayName="IOTV Mag Pouch";
		ghostIcon="vestpouches";
	};
};
class CfgNonAIVehicles
{
	class ProxyAttachment;
	class ProxyVest_Item_Proxy: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "CSItem";
		model = "\CS_ModularVest\Vest_Light\Proxies\Vest_Item_Proxy.p3d";
	};	
	class ProxyVest_IFAK_Proxy: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "CSIfak";
		model = "\CS_ModularVest\Vest_Light\Proxies\Vest_IFAK_Proxy.p3d";
	};	
	class ProxyVest_Utility_Proxy: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "CSUtility";
		model = "\CS_ModularVest\Vest_Light\Proxies\Vest_Utility_Proxy.p3d";
	};
	class ProxyVest_Mag_Proxy: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "CSMag";
		model = "\CS_ModularVest\Vest_Light\Proxies\Vest_Mag_Proxy.p3d";
	};
};