#pragma once
#include "source2sdk/client/CCitadelModifier.hpp"
#include "source2sdk/client/C_CitadelBaseAbility.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
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
    // Size: 0xea0
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "bool m_bIsVisibleOnMinimap"
    // static metadata: MNetworkVarNames "GameTime_t m_flStoppedMovingStartTime"
    #pragma pack(push, 1)
    class CAbility_Fathom_LurkersAmbush : public client::C_CitadelBaseAbility
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xc50[0x1f8]; // 0xc50
        // m_hRegenModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CModifierHandleTyped<client::CCitadelModifier> m_hRegenModifier;
        char m_hRegenModifier[0x18]; // 0xe48        
        // m_hInvisModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CModifierHandleTyped<client::CCitadelModifier> m_hInvisModifier;
        char m_hInvisModifier[0x18]; // 0xe60        
        // metadata: MNetworkEnable
        bool m_bIsVisibleOnMinimap; // 0xe78        
        [[maybe_unused]] std::uint8_t pad_0xe79[0x3]; // 0xe79
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flStoppedMovingStartTime; // 0xe7c        
        Vector m_vLastPos; // 0xe80        
        float m_flDebuffDuration; // 0xe8c        
        entity2::GameTime_t m_flChannelTimeStarted; // 0xe90        
        bool m_bWasLatchedWhenCast; // 0xe94        
        [[maybe_unused]] std::uint8_t pad_0xe95[0x3]; // 0xe95
        client::ParticleIndex_t m_ChargeUpParticle; // 0xe98        
        [[maybe_unused]] std::uint8_t pad_0xe9c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CAbility_Fathom_LurkersAmbush because it is not a standard-layout class
    static_assert(sizeof(CAbility_Fathom_LurkersAmbush) == 0xea0);
};
