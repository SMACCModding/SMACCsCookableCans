class CfgPatches {
	class SMACCsCookableCans {
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
		    "DZ_Gear_Food"
		};
	};
};
class CfgMods {
	class SMACCsCookableCans {
		name="SMACCsCookableCans";
		author="SMACC";
		credits="";
		version="0.1"; // Pre Release!
		type="mod";
		dependencies[]=
		{
			"World",
			"Mission"
		};
		class defs {
			class worldScriptModule {
				value="";
				files[]=
				{
				    "SMACCsCookableCans/scripts/4_world"
				};
			};
			class missionScriptModule {
				value="";
				files[]=
				{
                    "SMACCsCookableCans/scripts/common" //For the "Def"
				};
			};
		};
	};
};
class FruitStageTransitions;
class CfgVehicles {
	class Edible_Base;
	class BakedBeansCan_Opened: Edible_Base {
        inventorySlot[]+=
        {
            "DirectCookingA",
            "DirectCookingB",
            "DirectCookingC"
        };
        ContinuousActions[]={101,105};
        InteractActions[]={};
		class Food {
			class FoodStages {
				class Raw {
					visual_properties[]={0,0,0};
					nutrition_properties[]={1,100,75,1,0};
					cooking_properties[]={0,0};
				};
				class Baked {
					visual_properties[]={1,1,1};
					nutrition_properties[]={1,250,75,1,0};
					cooking_properties[]={70,35};
				};
				class Boiled {
					visual_properties[]={1,2,2};
					nutrition_properties[]={1,200,100,1,0};
					cooking_properties[]={70,45};
				};
				class Burned {
					visual_properties[]={1,4,4};
					nutrition_properties[]={5,100,0,1,0,16};
					cooking_properties[]={100,20};
				};
			};
			class FoodStageTransitions: FruitStageTransitions {};
		};
	};
	class PeachesCan_Opened: Edible_Base {
        inventorySlot[]+=
        {
            "DirectCookingA",
            "DirectCookingB",
            "DirectCookingC"
        };
        ContinuousActions[]={101,105};
        InteractActions[]={};
		class Food {
			class FoodStages {
				class Raw {
					visual_properties[]={0,0,0};
					nutrition_properties[]={1,100,75,1,0};
					cooking_properties[]={0,0};
				};
				class Baked {
					visual_properties[]={1,1,1};
					nutrition_properties[]={1,250,75,1,0};
					cooking_properties[]={70,35};
				};
				class Boiled {
					visual_properties[]={1,2,2};
					nutrition_properties[]={1,200,100,1,0};
					cooking_properties[]={70,45};
				};
				class Burned {
					visual_properties[]={1,4,4};
					nutrition_properties[]={5,100,0,1,0,16};
					cooking_properties[]={100,20};
				};
			};
			class FoodStageTransitions: FruitStageTransitions {};
		};
    };
	class TacticalBaconCan_Opened: Edible_Base {
        inventorySlot[]+=
        {
            "DirectCookingA",
            "DirectCookingB",
            "DirectCookingC"
        };
        ContinuousActions[]={101,105};
        InteractActions[]={};
		class Food {
			class FoodStages {
				class Raw {
					visual_properties[]={0,0,0};
					nutrition_properties[]={1,100,75,1,0};
					cooking_properties[]={0,0};
				};
				class Baked {
					visual_properties[]={1,1,1};
					nutrition_properties[]={1,250,75,1,0};
					cooking_properties[]={70,35};
				};
				class Boiled {
					visual_properties[]={1,2,2};
					nutrition_properties[]={1,200,100,1,0};
					cooking_properties[]={70,45};
				};
				class Burned {
					visual_properties[]={1,4,4};
					nutrition_properties[]={5,100,0,1,0,16};
					cooking_properties[]={100,20};
				};
			};
			class FoodStageTransitions: FruitStageTransitions {};
		};
    };
	class SpaghettiCan_Opened: Edible_Base {
        inventorySlot[]+=
        {
            "DirectCookingA",
            "DirectCookingB",
            "DirectCookingC"
        };
        ContinuousActions[]={101,105};
        InteractActions[]={};
		class Food {
			class FoodStages {
				class Raw {
					visual_properties[]={0,0,0};
					nutrition_properties[]={1,100,75,1,0};
					cooking_properties[]={0,0};
				};
				class Baked {
					visual_properties[]={1,1,1};
					nutrition_properties[]={1,250,75,1,0};
					cooking_properties[]={70,35};
				};
				class Boiled {
					visual_properties[]={1,2,2};
					nutrition_properties[]={1,200,100,1,0};
					cooking_properties[]={70,45};
				};
				class Burned {
					visual_properties[]={1,4,4};
					nutrition_properties[]={5,100,0,1,0,16};
					cooking_properties[]={100,20};
				};
			};
			class FoodStageTransitions: FruitStageTransitions {};
		};
    };
	class SardinesCan_Opened: Edible_Base {
        inventorySlot[]+=
        {
            "DirectCookingA",
            "DirectCookingB",
            "DirectCookingC"
        };
        ContinuousActions[]={101,105};
        InteractActions[]={};
		class Food {
			class FoodStages {
				class Raw {
					visual_properties[]={0,0,0};
					nutrition_properties[]={1,100,75,1,0};
					cooking_properties[]={0,0};
				};
				class Baked {
					visual_properties[]={1,1,1};
					nutrition_properties[]={1,250,75,1,0};
					cooking_properties[]={70,35};
				};
				class Boiled {
					visual_properties[]={1,2,2};
					nutrition_properties[]={1,200,100,1,0};
					cooking_properties[]={70,45};
				};
				class Burned {
					visual_properties[]={1,4,4};
					nutrition_properties[]={5,100,0,1,0,16};
					cooking_properties[]={100,20};
				};
			};
			class FoodStageTransitions: FruitStageTransitions {};
		};
    };
	class TunaCan_Opened: Edible_Base {
        inventorySlot[]+=
        {
            "DirectCookingA",
            "DirectCookingB",
            "DirectCookingC"
        };
        ContinuousActions[]={101,105};
        InteractActions[]={};
		class Food {
			class FoodStages {
				class Raw {
					visual_properties[]={0,0,0};
					nutrition_properties[]={1,100,75,1,0};
					cooking_properties[]={0,0};
				};
				class Baked {
					visual_properties[]={1,1,1};
					nutrition_properties[]={1,250,75,1,0};
					cooking_properties[]={70,35};
				};
				class Boiled {
					visual_properties[]={1,2,2};
					nutrition_properties[]={1,200,100,1,0};
					cooking_properties[]={70,45};
				};
				class Burned {
					visual_properties[]={1,4,4};
					nutrition_properties[]={5,100,0,1,0,16};
					cooking_properties[]={100,20};
				};
			};
			class FoodStageTransitions: FruitStageTransitions {};
		};
    };
	class FoodCan_250g_Opened_ColorBase: Edible_Base {
        inventorySlot[]+=
        {
            "DirectCookingA",
            "DirectCookingB",
            "DirectCookingC"
        };
        ContinuousActions[]={101,105};
        InteractActions[]={};
		class Food {
			class FoodStages {
				class Raw {
					visual_properties[]={0,0,0};
					nutrition_properties[]={1,100,75,1,0};
					cooking_properties[]={0,0};
				};
				class Baked {
					visual_properties[]={1,1,1};
					nutrition_properties[]={1,250,75,1,0};
					cooking_properties[]={70,35};
				};
				class Boiled {
					visual_properties[]={1,2,2};
					nutrition_properties[]={1,200,100,1,0};
					cooking_properties[]={70,45};
				};
				class Burned {
					visual_properties[]={1,4,4};
					nutrition_properties[]={5,100,0,1,0,16};
					cooking_properties[]={100,20};
				};
			};
			class FoodStageTransitions: FruitStageTransitions {};
		};
    }
	class UnknownFoodCan_Opened: Edible_Base {
        inventorySlot[]+=
        {
            "DirectCookingA",
            "DirectCookingB",
            "DirectCookingC"
        };
        ContinuousActions[]={101,105};
        InteractActions[]={};
		class Food {
			class FoodStages {
				class Raw {
					visual_properties[]={0,0,0};
					nutrition_properties[]={1,100,75,1,0};
					cooking_properties[]={0,0};
				};
				class Baked {
					visual_properties[]={1,1,1};
					nutrition_properties[]={1,250,75,1,0};
					cooking_properties[]={70,35};
				};
				class Boiled {
					visual_properties[]={1,2,2};
					nutrition_properties[]={1,200,100,1,0};
					cooking_properties[]={70,45};
				};
				class Burned {
					visual_properties[]={1,4,4};
					nutrition_properties[]={5,100,0,1,0,16};
					cooking_properties[]={100,20};
				};
			};
			class FoodStageTransitions: FruitStageTransitions {};
		};
    };
	class FoodCan_100g_Opened_ColorBase: Edible_Base {
        inventorySlot[]+=
        {
            "DirectCookingA",
            "DirectCookingB",
            "DirectCookingC"
        };
        ContinuousActions[]={101,105};
        InteractActions[]={};
		class Food {
			class FoodStages {
				class Raw {
					visual_properties[]={0,0,0};
					nutrition_properties[]={1,100,75,1,0};
					cooking_properties[]={0,0};
				};
				class Baked {
					visual_properties[]={1,1,1};
					nutrition_properties[]={1,250,75,1,0};
					cooking_properties[]={70,35};
				};
				class Boiled {
					visual_properties[]={1,2,2};
					nutrition_properties[]={1,200,100,1,0};
					cooking_properties[]={70,45};
				};
				class Burned {
					visual_properties[]={1,4,4};
					nutrition_properties[]={5,100,0,1,0,16};
					cooking_properties[]={100,20};
				};
			};
			class FoodStageTransitions: FruitStageTransitions {};
		};
    };
};