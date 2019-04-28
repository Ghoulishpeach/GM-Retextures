class CfgPatches {
	class unit_config {
		units[] = {
		 "", "", "",

		 "", "", "",

		 "", "", "", ""
		};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"", "", ""};
	};
};

class CfgFactionClasses
{
	class gmre_nor
	{
		displayName = "Forsvaret";
		author = "Peach";
		icon = "Directory to faction Icon"; // Needs to be 16x16 in resolution and it needs to be in the form of a PAA.
		priority = 2;
		side = 0;
	};
};
class CfgVehicleClasses
{
	class forsvaret
	{
		displayName = "Infantry"; // Rename to what you want the sub group of the faction will be. You can have multiple subfactions (VehicleClasses) as long as the class name of the VehicleClass is different. Makes it work with zeus
		side = 0;
	};
};
class CfgVehicles
{
	#include "cfgVehicles.hpp"
};
class cfgGroups
{
	#include "cfgGroups.hpp"
};
