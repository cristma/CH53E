
class CfgPatches {

	class USMC_CH53E {
		units[] = {"USMC_CH53E"};
		weapons[] = {};
		requiredAddons[] = {};
		requiredVersion = 1.000000;
	};
};

class CfgVehicles {/*extern*/ class AllVehicles;

	class Air: AllVehicles {
		/*extern*/ class NewTurret;
		/*extern*/ class ViewPilot;
		accuracy = 0;
		flareVelocity = 100;
		/*extern*/ class AnimationSources;
		class AnimationTypes;
	};

	class Helicopter: Air {	};
	class UH60_Base : Helicopter { };

	class USMC_CH53E: UH60_Base {
		displayName = "CH-53E Super Stallion";
		model = "\H53\H53";
		side = 1;
		weapons[] = {};
		magazines[] = {};
		transportSoldier = 1;
		hasGunner = 0;
		soundEngine[] = { "\H53\main_rotor.wav", db31, 1 };
	};
};