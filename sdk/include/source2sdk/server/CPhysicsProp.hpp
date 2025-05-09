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
    // Size: 0xe28
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
        [[maybe_unused]] std::uint8_t pad_0xc88[0x8]; // 0xc88
        entity2::CEntityIOOutput m_MotionEnabled; // 0xc90        
        entity2::CEntityIOOutput m_OnAwakened; // 0xcb8        
        entity2::CEntityIOOutput m_OnAwake; // 0xce0        
        entity2::CEntityIOOutput m_OnAsleep; // 0xd08        
        entity2::CEntityIOOutput m_OnPlayerUse; // 0xd30        
        entity2::CEntityIOOutput m_OnOutOfWorld; // 0xd58        
        entity2::CEntityIOOutput m_OnPlayerPickup; // 0xd80        
        bool m_bForceNavIgnore; // 0xda8        
        bool m_bNoNavmeshBlocker; // 0xda9        
        bool m_bForceNpcExclude; // 0xdaa        
        [[maybe_unused]] std::uint8_t pad_0xdab[0x1]; // 0xdab
        float m_massScale; // 0xdac        
        float m_buoyancyScale; // 0xdb0        
        int32_t m_damageType; // 0xdb4        
        int32_t m_damageToEnableMotion; // 0xdb8        
        float m_flForceToEnableMotion; // 0xdbc        
        bool m_bThrownByPlayer; // 0xdc0        
        bool m_bDroppedByPlayer; // 0xdc1        
        bool m_bTouchedByPlayer; // 0xdc2        
        bool m_bFirstCollisionAfterLaunch; // 0xdc3        
        bool m_bHasBeenAwakened; // 0xdc4        
        bool m_bIsOverrideProp; // 0xdc5        
        physicslib::DynamicContinuousContactBehavior_t m_nDynamicContinuousContactBehavior; // 0xdc6        
        [[maybe_unused]] std::uint8_t pad_0xdc7[0x1]; // 0xdc7
        entity2::GameTime_t m_fNextCheckDisableMotionContactsTime; // 0xdc8        
        int32_t m_iInitialGlowState; // 0xdcc        
        int32_t m_nGlowRange; // 0xdd0        
        int32_t m_nGlowRangeMin; // 0xdd4        
        Color m_glowColor; // 0xdd8        
        bool m_bShouldAutoConvertBackFromDebris; // 0xddc        
        bool m_bMuteImpactEffects; // 0xddd        
        [[maybe_unused]] std::uint8_t pad_0xdde[0x9]; // 0xdde
        bool m_bAcceptDamageFromHeldObjects; // 0xde7        
        bool m_bEnableUseOutput; // 0xde8        
        [[maybe_unused]] std::uint8_t pad_0xde9[0x3]; // 0xde9
        server::CPhysicsProp__CrateType_t m_CrateType; // 0xdec        
        CUtlSymbolLarge m_strItemClass[4]; // 0xdf0        
        int32_t m_nItemCount[4]; // 0xe10        
        bool m_bRemovableForAmmoBalancing; // 0xe20        
        // metadata: MNetworkEnable
        bool m_bAwake; // 0xe21        
        [[maybe_unused]] std::uint8_t pad_0xe22[0x6];
        
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
        // int32_t m_nNavObstacleType; // 0xde0
        // bool m_bUpdateNavWhenMoving; // 0xde4
        // bool m_bForceNavObstacleCut; // 0xde5
        // bool m_bAllowObstacleConvexHullMerging; // 0xde6
        // int32_t health; // 0x7fffffff
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CPhysicsProp because it is not a standard-layout class
    static_assert(sizeof(CPhysicsProp) == 0xe28);
};
