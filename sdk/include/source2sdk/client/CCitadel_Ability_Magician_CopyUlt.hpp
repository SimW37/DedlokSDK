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
    class C_CitadelBaseAbility;
};

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xd38
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "bool m_bHasUsedCopiedUlt"
    // static metadata: MNetworkVarNames "bool m_bHasCopiedUlt"
    // static metadata: MNetworkVarNames "bool m_bIsModelSwapped"
    // static metadata: MNetworkVarNames "CHandle< CCitadelBaseAbility> m_pCopyUltimateAbility"
    #pragma pack(push, 1)
    class CCitadel_Ability_Magician_CopyUlt : public client::C_CitadelBaseAbility
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xc50[0xe0]; // 0xc50
        // metadata: MNetworkEnable
        bool m_bHasUsedCopiedUlt; // 0xd30        
        // metadata: MNetworkEnable
        bool m_bHasCopiedUlt; // 0xd31        
        // metadata: MNetworkEnable
        bool m_bIsModelSwapped; // 0xd32        
        [[maybe_unused]] std::uint8_t pad_0xd33[0x1]; // 0xd33
        // metadata: MNetworkEnable
        // m_pCopyUltimateAbility has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_CitadelBaseAbility> m_pCopyUltimateAbility;
        char m_pCopyUltimateAbility[0x4]; // 0xd34        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_Magician_CopyUlt because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_Magician_CopyUlt) == 0xd38);
};
