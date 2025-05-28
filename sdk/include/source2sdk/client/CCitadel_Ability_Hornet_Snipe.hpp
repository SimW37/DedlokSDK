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
        // Size: 0x1138
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "GameTime_t m_flScopeStartTime"
        #pragma pack(push, 1)
        class CCitadel_Ability_Hornet_Snipe : public source2sdk::client::C_CitadelBaseAbility
        {
        public:
            uint8_t _pad0dc0[0x314]; // 0xdc0
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::entity2::GameTime_t m_flScopeStartTime; // 0x10d4            
            uint8_t _pad10d8[0x60];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Hornet_Snipe because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Ability_Hornet_Snipe) == 0x1138);
    };
};
