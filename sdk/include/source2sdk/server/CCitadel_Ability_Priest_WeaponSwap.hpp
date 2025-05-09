#pragma once
#include "source2sdk/client/EWeaponSwapState_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CCitadelBaseAbility.hpp"
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
    // Size: 0xd28
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "GameTime_t m_SwapFinishTime"
    // static metadata: MNetworkVarNames "EWeaponSwapState_t m_eWeaponSwapState"
    #pragma pack(push, 1)
    class CCitadel_Ability_Priest_WeaponSwap : public server::CCitadelBaseAbility
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xba0[0x180]; // 0xba0
        // metadata: MNetworkEnable
        entity2::GameTime_t m_SwapFinishTime; // 0xd20        
        // metadata: MNetworkEnable
        client::EWeaponSwapState_t m_eWeaponSwapState; // 0xd24        
        [[maybe_unused]] std::uint8_t pad_0xd25[0x3];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_Priest_WeaponSwap because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_Priest_WeaponSwap) == 0xd28);
};
