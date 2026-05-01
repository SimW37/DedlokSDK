#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/AnimLoopMode_t.hpp"
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/server/CBreakableProp.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x10
        // Alignment: 0x10
        // Standard-layout class: false
        // Size: 0xcc0
        // Has VTable
        // 
        // static metadata: MEntityAllowsPortraitWorldSpawn
        // static metadata: MNetworkVarNames "bool m_bUseHitboxesForRenderBox"
        // static metadata: MNetworkVarNames "bool m_bUseAnimGraph"
        #pragma pack(push, 1)
        class CDynamicProp : public source2sdk::server::CBreakableProp
        {
        public:
            uint8_t _pad0c10[0x8]; // 0xc10
            bool m_bCreateNavObstacle; // 0xc18            
            bool m_bNavObstacleUpdatesOverridden; // 0xc19            
            // metadata: MNetworkEnable
            bool m_bUseHitboxesForRenderBox; // 0xc1a            
            // metadata: MNetworkEnable
            bool m_bUseAnimGraph; // 0xc1b            
            uint8_t _pad0c1c[0x4]; // 0xc1c
            source2sdk::entity2::CEntityIOOutput m_pOutputAnimBegun; // 0xc20            
            source2sdk::entity2::CEntityIOOutput m_pOutputAnimOver; // 0xc38            
            source2sdk::entity2::CEntityIOOutput m_pOutputAnimLoopCycleOver; // 0xc50            
            source2sdk::entity2::CEntityIOOutput m_OnAnimReachedStart; // 0xc68            
            source2sdk::entity2::CEntityIOOutput m_OnAnimReachedEnd; // 0xc80            
            CUtlSymbolLarge m_iszIdleAnim; // 0xc98            
            source2sdk::client::AnimLoopMode_t m_nIdleAnimLoopMode; // 0xca0            
            bool m_bRandomizeCycle; // 0xca4            
            bool m_bStartDisabled; // 0xca5            
            bool m_bFiredStartEndOutput; // 0xca6            
            // metadata: MNotSaved
            bool m_bForceNpcExclude; // 0xca7            
            // metadata: MNotSaved
            bool m_bCreateNonSolid; // 0xca8            
            // metadata: MNotSaved
            bool m_bIsOverrideProp; // 0xca9            
            uint8_t _pad0caa[0x2]; // 0xcaa
            std::int32_t m_iInitialGlowState; // 0xcac            
            std::int32_t m_nGlowRange; // 0xcb0            
            std::int32_t m_nGlowRangeMin; // 0xcb4            
            Color m_glowColor; // 0xcb8            
            std::int32_t m_nGlowTeam; // 0xcbc            
            
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
            // CUtlSymbolLarge InputSetDefaultAnimationLooping; // 0x0
            // CUtlSymbolLarge InputSetDefaultAnimationNotLooping; // 0x0
            // void InputTurnOn; // 0x0
            // void InputTurnOff; // 0x0
            // void InputEnable; // 0x0
            // void InputDisable; // 0x0
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
        
        static_assert(sizeof(source2sdk::server::CDynamicProp) == 0xcc0);
    };
};
