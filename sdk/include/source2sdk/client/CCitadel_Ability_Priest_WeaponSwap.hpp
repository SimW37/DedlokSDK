#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_CitadelBaseAbility.hpp"
#include "source2sdk/client/EWeaponSwapState_t.hpp"
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
        // Size: 0xf48
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "GameTime_t m_SwapFinishTime"
        // static metadata: MNetworkVarNames "EWeaponSwapState_t m_eWeaponSwapState"
        #pragma pack(push, 1)
        class CCitadel_Ability_Priest_WeaponSwap : public source2sdk::client::C_CitadelBaseAbility
        {
        public:
            uint8_t _pad0dc0[0x180]; // 0xdc0
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_SwapFinishTime; // 0xf40            
            // metadata: MNetworkEnable
            source2sdk::client::EWeaponSwapState_t m_eWeaponSwapState; // 0xf44            
            uint8_t _pad0f45[0x3];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Priest_WeaponSwap because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Ability_Priest_WeaponSwap) == 0xf48);
    };
};
