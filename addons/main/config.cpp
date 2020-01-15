#include "script_component.hpp"

class CfgPatches {
	class grad_meh {
		name = "Gruppe Adler Map Exporter";
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.92;
		requiredAddons[] = { "intercept_core" };
		authors[] = { "Willard", "DerZade" };
		url = "";
		VERSION_CONFIG;
	};
};

class Intercept {
    class Willard {
        class grad_meh {
            pluginName = "grad_meh";
        };
    };
};