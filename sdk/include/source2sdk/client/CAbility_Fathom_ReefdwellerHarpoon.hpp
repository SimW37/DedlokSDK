#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_CitadelBaseAbility.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0xef8
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
        class CAbility_Fathom_ReefdwellerHarpoon : public source2sdk::client::C_CitadelBaseAbility
        {
        public:
            bool m_bHitTarget; // 0xd88            
            uint8_t _pad0d89[0x3]; // 0xd89
            Vector m_vPrevPos; // 0xd8c            
            // metadata: MNetworkEnable
            bool m_bBulletFlying; // 0xd98            
            // metadata: MNetworkEnable
            bool m_bHasLatchedOnce; // 0xd99            
            // metadata: MNetworkEnable
            bool m_bLatched; // 0xd9a            
            uint8_t _pad0d9b[0x1]; // 0xd9b
            // metadata: MNetworkEnable
            Vector m_vHarpoonTarget; // 0xd9c            
            // metadata: MNetworkEnable
            float m_flLatchedYaw; // 0xda8            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flCloseEnoughStartTime; // 0xdac            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flStuckStartTime; // 0xdb0            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flReelStartTime; // 0xdb4            
            uint8_t _pad0db8[0x140];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CAbility_Fathom_ReefdwellerHarpoon because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CAbility_Fathom_ReefdwellerHarpoon) == 0xef8);
    };
};
