#pragma once
#include "source2sdk/client/CCitadelBaseAbilityGraphController.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x108
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Ability_Shiv_KillingBlow_GraphController : public client::CCitadelBaseAbilityGraphController
    {
    public:
        // m_bSlashLeap has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraphParamRef<bool> m_bSlashLeap;
        char m_bSlashLeap[0x20]; // 0xc8        
        // m_bSlashAttack has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraphParamRef<bool> m_bSlashAttack;
        char m_bSlashAttack[0x20]; // 0xe8        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_Shiv_KillingBlow_GraphController because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_Shiv_KillingBlow_GraphController) == 0x108);
};
