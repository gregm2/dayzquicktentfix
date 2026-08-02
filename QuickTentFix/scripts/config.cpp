class CfgPatches
{
	class QuickTentFix
	{
		requiredAddons[] =
		{
			"DZ_Scripts"
		};
	};
};

class CfgMods
{
	class QuickTentFix
	{
		type = "mod";
		dir= "QuickTentFix";
		name="QuickTentFix";
		version="0.0.0.1";
		
		class defs
		{
			class worldScriptModule
			{
				value = "";
				files[] = { "QuickTentFix/Scripts/4_world" };
			};
		};
	};
};