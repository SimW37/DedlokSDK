#pragma once
#include "source2sdk/server/CCitadelBaseAbility.hpp"
#include "source2sdk/server/CCitadelModifier.hpp"
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
    // Size: 0xc40
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "bool m_bHasVictims"
    #pragma pack(push, 1)
    class CAbility_Mirage_SandPhantom : public server::CCitadelBaseAbility
    {
    public:
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        bool m_bHasVictims; // 0xba0        
        [[maybe_unused]] std::uint8_t pad_0xba1[0x7]; // 0xba1
        // m_vecVictimModifiers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CModifierHandleTyped<server::CCitadelModifier>> m_vecVictimModifiers;
        char m_vecVictimModifiers[0x18]; // 0xba8        
        [[maybe_unused]] std::uint8_t pad_0xbc0[0x80];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CAbility_Mirage_SandPhantom because it is not a standard-layout class
    static_assert(sizeof(CAbility_Mirage_SandPhantom) == 0xc40);
};
