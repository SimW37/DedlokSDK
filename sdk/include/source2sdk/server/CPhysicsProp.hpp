#pragma once
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/physicslib/DynamicContinuousContactBehavior_t.hpp"
#include "source2sdk/server/CBreakableProp.hpp"
#include "source2sdk/server/CPhysicsProp__CrateType_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xdd8
    // Has VTable
    // 
    // static metadata: MNetworkExcludeByName "m_flAnimTime"
    // static metadata: MNetworkExcludeByName "m_flexWeight"
    // static metadata: MNetworkExcludeByName "m_blinktoggle"
    // static metadata: MNetworkExcludeByUserGroup "m_flPoseParameter"
    // static metadata: MNetworkExcludeByName "m_animationController.m_flPlaybackRate"
    // static metadata: MNetworkExcludeByUserGroup "overlay_vars"
    // static metadata: MNetworkIncludeByName "m_spawnflags"
    // static metadata: MNetworkVarNames "bool m_bAwake"
    #pragma pack(push, 1)
    class CPhysicsProp : public server::CBreakableProp
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xc38[0x8]; // 0xc38
        entity2::CEntityIOOutput m_MotionEnabled; // 0xc40        
        entity2::CEntityIOOutput m_OnAwakened; // 0xc68        
        entity2::CEntityIOOutput m_OnAwake; // 0xc90        
        entity2::CEntityIOOutput m_OnAsleep; // 0xcb8        
        entity2::CEntityIOOutput m_OnPlayerUse; // 0xce0        
        entity2::CEntityIOOutput m_OnOutOfWorld; // 0xd08        
        entity2::CEntityIOOutput m_OnPlayerPickup; // 0xd30        
        bool m_bForceNavIgnore; // 0xd58        
        bool m_bNoNavmeshBlocker; // 0xd59        
        bool m_bForceNpcExclude; // 0xd5a        
        [[maybe_unused]] std::uint8_t pad_0xd5b[0x1]; // 0xd5b
        float m_massScale; // 0xd5c        
        float m_buoyancyScale; // 0xd60        
        int32_t m_damageType; // 0xd64        
        int32_t m_damageToEnableMotion; // 0xd68        
        float m_flForceToEnableMotion; // 0xd6c        
        bool m_bThrownByPlayer; // 0xd70        
        bool m_bDroppedByPlayer; // 0xd71        
        bool m_bTouchedByPlayer; // 0xd72        
        bool m_bFirstCollisionAfterLaunch; // 0xd73        
        bool m_bHasBeenAwakened; // 0xd74        
        bool m_bIsOverrideProp; // 0xd75        
        physicslib::DynamicContinuousContactBehavior_t m_nDynamicContinuousContactBehavior; // 0xd76        
        [[maybe_unused]] std::uint8_t pad_0xd77[0x1]; // 0xd77
        entity2::GameTime_t m_fNextCheckDisableMotionContactsTime; // 0xd78        
        int32_t m_iInitialGlowState; // 0xd7c        
        int32_t m_nGlowRange; // 0xd80        
        int32_t m_nGlowRangeMin; // 0xd84        
        Color m_glowColor; // 0xd88        
        bool m_bShouldAutoConvertBackFromDebris; // 0xd8c        
        bool m_bMuteImpactEffects; // 0xd8d        
        [[maybe_unused]] std::uint8_t pad_0xd8e[0x9]; // 0xd8e
        bool m_bAcceptDamageFromHeldObjects; // 0xd97        
        bool m_bEnableUseOutput; // 0xd98        
        [[maybe_unused]] std::uint8_t pad_0xd99[0x3]; // 0xd99
        server::CPhysicsProp__CrateType_t m_CrateType; // 0xd9c        
        CUtlSymbolLarge m_strItemClass[4]; // 0xda0        
        int32_t m_nItemCount[4]; // 0xdc0        
        bool m_bRemovableForAmmoBalancing; // 0xdd0        
        // metadata: MNetworkEnable
        bool m_bAwake; // 0xdd1        
        [[maybe_unused]] std::uint8_t pad_0xdd2[0x6];
        
        // Datamap fields:
        // void InputEnableMotion; // 0x0
        // void InputDisableMotion; // 0x0
        // void InputWake; // 0x0
        // bool InputSetAutoConvertBackFromDebris; // 0x0
        // void InputSleep; // 0x0
        // void InputStartGlowing; // 0x0
        // void InputStopGlowing; // 0x0
        // Vector InputSetGlowOverride; // 0x0
        // int32_t InputSetGlowRange; // 0x0
        // float InputSetMass; // 0x0
        // void InputEnableGravity; // 0x0
        // void InputDisableGravity; // 0x0
        // void InputEnableDrag; // 0x0
        // void InputDisableDrag; // 0x0
        // void InputEnableCollisions; // 0x0
        // void InputDisableCollisions; // 0x0
        // bool forcemotiondisabled; // 0x7fffffff
        // bool phys_start_asleep; // 0x7fffffff
        // void CPhysicsPropClearFlagsThink; // 0x0
        // int32_t m_nNavObstacleType; // 0xd90
        // bool m_bUpdateNavWhenMoving; // 0xd94
        // bool m_bForceNavObstacleCut; // 0xd95
        // bool m_bAllowObstacleConvexHullMerging; // 0xd96
        // int32_t health; // 0x7fffffff
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CPhysicsProp because it is not a standard-layout class
    static_assert(sizeof(CPhysicsProp) == 0xdd8);
};
