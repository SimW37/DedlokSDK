#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_CitadelBaseAbility.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
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
        // Size: 0xfd0
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "bool m_bInGround"
        // static metadata: MNetworkVarNames "GameTime_t m_flLastDamageTime"
        // static metadata: MNetworkVarNames "GameTime_t m_SpinEndTime"
        #pragma pack(push, 1)
        class CCitadel_Ability_Burrow : public source2sdk::client::C_CitadelBaseAbility
        {
        public:
            uint8_t _pad0dc0[0x200]; // 0xdc0
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            bool m_bInGround; // 0xfc0            
            uint8_t _pad0fc1[0x3]; // 0xfc1
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flLastDamageTime; // 0xfc4            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::entity2::GameTime_t m_SpinEndTime; // 0xfc8            
            source2sdk::client::ParticleIndex_t m_nBurrowEffect; // 0xfcc            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Burrow because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Ability_Burrow) == 0xfd0);
    };
};
