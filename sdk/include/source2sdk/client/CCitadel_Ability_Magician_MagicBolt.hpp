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
    class C_CitadelProjectile;
};

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xee0
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Ability_Magician_MagicBolt : public client::C_CitadelBaseAbility
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xc50[0x8]; // 0xc50
        // m_vecDeployedProjectiles has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<client::C_CitadelProjectile>> m_vecDeployedProjectiles;
        char m_vecDeployedProjectiles[0x18]; // 0xc58        
        int32_t m_iCurrentRedirects; // 0xc70        
        [[maybe_unused]] std::uint8_t pad_0xc74[0x26c];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_Magician_MagicBolt because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_Magician_MagicBolt) == 0xee0);
};
