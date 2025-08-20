#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ParticleIndex_t.hpp"
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
        // Size: 0xde8
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "bool m_bInGround"
        // static metadata: MNetworkVarNames "GameTime_t m_flLastDamageTime"
        // static metadata: MNetworkVarNames "GameTime_t m_SpinEndTime"
        #pragma pack(push, 1)
        class CCitadel_Ability_Burrow : public source2sdk::server::CCitadelBaseAbility
        {
        public:
            uint8_t _pad0b98[0x240]; // 0xb98
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            bool m_bInGround; // 0xdd8            
            uint8_t _pad0dd9[0x3]; // 0xdd9
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flLastDamageTime; // 0xddc            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::entity2::GameTime_t m_SpinEndTime; // 0xde0            
            source2sdk::client::ParticleIndex_t m_nBurrowEffect; // 0xde4            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Burrow because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Ability_Burrow) == 0xde8);
    };
};
