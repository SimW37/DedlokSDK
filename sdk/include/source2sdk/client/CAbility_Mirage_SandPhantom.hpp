#pragma once
#include "source2sdk/client/CCitadelModifier.hpp"
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
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xe60
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "bool m_bHasVictims"
    #pragma pack(push, 1)
    class CAbility_Mirage_SandPhantom : public client::C_CitadelBaseAbility
    {
    public:
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        bool m_bHasVictims; // 0xdc0        
        [[maybe_unused]] std::uint8_t pad_0xdc1[0x7]; // 0xdc1
        // m_vecVictimModifiers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CModifierHandleTyped<client::CCitadelModifier>> m_vecVictimModifiers;
        char m_vecVictimModifiers[0x18]; // 0xdc8        
        [[maybe_unused]] std::uint8_t pad_0xde0[0x80];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CAbility_Mirage_SandPhantom because it is not a standard-layout class
    static_assert(sizeof(CAbility_Mirage_SandPhantom) == 0xe60);
};
