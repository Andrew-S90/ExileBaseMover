class CfgPatches
{
	class BaseMover_server
	{
		requiredVersion = 0.1;
		requiredAddons[] = {"exile_server_config"};
		units[] = {};
		weapons[] = {};
		magazines[] = {};
		ammo[] = {};
	};
};
class CfgFunctions
{
	class BaseMover_server
	{
		class Bootstrap
		{
			file = "BaseMover_server\bootstrap";
			class preInit
			{
				preInit = 1;
			};
			class postInit
			{
				postInit = 1;
			};
		};
	};
};