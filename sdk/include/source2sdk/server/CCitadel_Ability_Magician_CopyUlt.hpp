#pragma once
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
    class CCitadelBaseAbility;
};

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xcc0
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "bool m_bHasUsedCopiedUlt"
    // static metadata: MNetworkVarNames "bool m_bHasCopiedUlt"
    // static metadata: MNetworkVarNames "bool m_bIsModelSwapped"
    // static metadata: MNetworkVarNames "CHandle< CCitadelBaseAbility> m_pCopyUltimateAbility"
    #pragma pack(push, 1)
    class CCitadel_Ability_Magician_CopyUlt : public server::CCitadelBaseAbility
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xba0[0x100]; // 0xba0
        // metadata: MNetworkEnable
        bool m_bHasUsedCopiedUlt; // 0xca0        
        // metadata: MNetworkEnable
        bool m_bHasCopiedUlt; // 0xca1        
        // metadata: MNetworkEnable
        bool m_bIsModelSwapped; // 0xca2        
        [[maybe_unused]] std::uint8_t pad_0xca3[0x1]; // 0xca3
        // metadata: MNetworkEnable
        // m_pCopyUltimateAbility has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CCitadelBaseAbility> m_pCopyUltimateAbility;
        char m_pCopyUltimateAbility[0x4]; // 0xca4        
        [[maybe_unused]] std::uint8_t pad_0xca8[0x18];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_Magician_CopyUlt because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_Magician_CopyUlt) == 0xcc0);
};
