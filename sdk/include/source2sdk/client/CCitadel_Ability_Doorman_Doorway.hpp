#pragma once
#include "source2sdk/client/C_CitadelBaseAbility.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    class CCitadel_DoorwayPortal;
};

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xe28
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "bool m_bHasPendingDoor"
    #pragma pack(push, 1)
    class CCitadel_Ability_Doorman_Doorway : public client::C_CitadelBaseAbility
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xdc0[0x18]; // 0xdc0
        // m_hPendingDoor has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::CCitadel_DoorwayPortal> m_hPendingDoor;
        char m_hPendingDoor[0x4]; // 0xdd8        
        // metadata: MNetworkEnable
        bool m_bHasPendingDoor; // 0xddc        
        [[maybe_unused]] std::uint8_t pad_0xddd[0x4b];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_Doorman_Doorway because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_Doorman_Doorway) == 0xe28);
};
