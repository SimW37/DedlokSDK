#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CCitadelBaseAbility.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0xd08
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "bool m_bBulletFlying"
        // static metadata: MNetworkVarNames "bool m_bHasLatchedOnce"
        // static metadata: MNetworkVarNames "bool m_bLatched"
        // static metadata: MNetworkVarNames "Vector m_vHarpoonTarget"
        // static metadata: MNetworkVarNames "float m_flLatchedYaw"
        // static metadata: MNetworkVarNames "GameTime_t m_flCloseEnoughStartTime"
        // static metadata: MNetworkVarNames "GameTime_t m_flStuckStartTime"
        // static metadata: MNetworkVarNames "GameTime_t m_flReelStartTime"
        #pragma pack(push, 1)
        class CAbility_Fathom_ReefdwellerHarpoon : public source2sdk::server::CCitadelBaseAbility
        {
        public:
            bool m_bHitTarget; // 0xb98            
            uint8_t _pad0b99[0x3]; // 0xb99
            Vector m_vPrevPos; // 0xb9c            
            // metadata: MNetworkEnable
            bool m_bBulletFlying; // 0xba8            
            // metadata: MNetworkEnable
            bool m_bHasLatchedOnce; // 0xba9            
            // metadata: MNetworkEnable
            bool m_bLatched; // 0xbaa            
            uint8_t _pad0bab[0x1]; // 0xbab
            // metadata: MNetworkEnable
            Vector m_vHarpoonTarget; // 0xbac            
            // metadata: MNetworkEnable
            float m_flLatchedYaw; // 0xbb8            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flCloseEnoughStartTime; // 0xbbc            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flStuckStartTime; // 0xbc0            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flReelStartTime; // 0xbc4            
            uint8_t _pad0bc8[0x140];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CAbility_Fathom_ReefdwellerHarpoon because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CAbility_Fathom_ReefdwellerHarpoon) == 0xd08);
    };
};
