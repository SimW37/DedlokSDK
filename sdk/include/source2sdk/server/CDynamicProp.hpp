#pragma once
#include "source2sdk/client/AnimLoopMode_t.hpp"
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/server/CBreakableProp.hpp"
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
    // Size: 0xd38
    // Has VTable
    // 
    // static metadata: MEntityAllowsPortraitWorldSpawn
    // static metadata: MNetworkVarNames "bool m_bUseHitboxesForRenderBox"
    // static metadata: MNetworkVarNames "bool m_bUseAnimGraph"
    #pragma pack(push, 1)
    class CDynamicProp : public server::CBreakableProp
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xc38[0x8]; // 0xc38
        bool m_bCreateNavObstacle; // 0xc40        
        bool m_bNavObstacleUpdatesOverridden; // 0xc41        
        // metadata: MNetworkEnable
        bool m_bUseHitboxesForRenderBox; // 0xc42        
        // metadata: MNetworkEnable
        bool m_bUseAnimGraph; // 0xc43        
        [[maybe_unused]] std::uint8_t pad_0xc44[0x4]; // 0xc44
        entity2::CEntityIOOutput m_pOutputAnimBegun; // 0xc48        
        entity2::CEntityIOOutput m_pOutputAnimOver; // 0xc70        
        entity2::CEntityIOOutput m_pOutputAnimLoopCycleOver; // 0xc98        
        entity2::CEntityIOOutput m_OnAnimReachedStart; // 0xcc0        
        entity2::CEntityIOOutput m_OnAnimReachedEnd; // 0xce8        
        CUtlSymbolLarge m_iszIdleAnim; // 0xd10        
        client::AnimLoopMode_t m_nIdleAnimLoopMode; // 0xd18        
        bool m_bRandomizeCycle; // 0xd1c        
        bool m_bStartDisabled; // 0xd1d        
        bool m_bFiredStartEndOutput; // 0xd1e        
        bool m_bForceNpcExclude; // 0xd1f        
        bool m_bCreateNonSolid; // 0xd20        
        bool m_bIsOverrideProp; // 0xd21        
        [[maybe_unused]] std::uint8_t pad_0xd22[0x2]; // 0xd22
        int32_t m_iInitialGlowState; // 0xd24        
        int32_t m_nGlowRange; // 0xd28        
        int32_t m_nGlowRangeMin; // 0xd2c        
        Color m_glowColor; // 0xd30        
        int32_t m_nGlowTeam; // 0xd34        
        
        // Datamap fields:
        // CUtlSymbolLarge StartingAnim; // 0x7fffffff
        // CUtlSymbolLarge StartingAnimationLoopMode; // 0x7fffffff
        // CUtlSymbolLarge InputSetAnimationLooping; // 0x0
        // CUtlSymbolLarge InputSetAnimationNoResetLooping; // 0x0
        // CUtlSymbolLarge InputSetIdleAnimationLooping; // 0x0
        // CUtlSymbolLarge InputSetAnimationNotLooping; // 0x0
        // CUtlSymbolLarge InputSetAnimationNoResetNotLooping; // 0x0
        // CUtlSymbolLarge InputSetIdleAnimationNotLooping; // 0x0
        // CUtlSymbolLarge InputSetAnimation; // 0x0
        // CUtlSymbolLarge InputSetAnimationNoReset; // 0x0
        // CUtlSymbolLarge InputSetIdleAnimation; // 0x0
        // CUtlSymbolLarge InputSetIdleAnimationLooping; // 0x0
        // CUtlSymbolLarge InputSetIdleAnimationNotLooping; // 0x0
        // void InputTurnOn; // 0x0
        // void InputTurnOff; // 0x0
        // void InputTurnOn; // 0x0
        // void InputTurnOff; // 0x0
        // void InputEnableCollision; // 0x0
        // void InputDisableCollision; // 0x0
        // float InputSetPlaybackRate; // 0x0
        // void InputStartGlowing; // 0x0
        // void InputStopGlowing; // 0x0
        // Vector InputSetGlowOverride; // 0x0
        // int32_t InputSetGlowRange; // 0x0
        // void CDynamicPropAnimThink; // 0x0
        // int32_t health; // 0x7fffffff
        // bool HoldAnimation; // 0x7fffffff
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDynamicProp because it is not a standard-layout class
    static_assert(sizeof(CDynamicProp) == 0xd38);
};
