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
    // Size: 0x1058
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "bool m_bIsVisibleOnMinimap"
    // static metadata: MNetworkVarNames "GameTime_t m_flStoppedMovingStartTime"
    #pragma pack(push, 1)
    class CAbility_Fathom_LurkersAmbush : public client::C_CitadelBaseAbility
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xdc0[0x240]; // 0xdc0
        // m_hRegenModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CModifierHandleTyped<client::CCitadelModifier> m_hRegenModifier;
        char m_hRegenModifier[0x18]; // 0x1000        
        // m_hInvisModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CModifierHandleTyped<client::CCitadelModifier> m_hInvisModifier;
        char m_hInvisModifier[0x18]; // 0x1018        
        // metadata: MNetworkEnable
        bool m_bIsVisibleOnMinimap; // 0x1030        
        [[maybe_unused]] std::uint8_t pad_0x1031[0x3]; // 0x1031
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flStoppedMovingStartTime; // 0x1034        
        Vector m_vLastPos; // 0x1038        
        float m_flDebuffDuration; // 0x1044        
        entity2::GameTime_t m_flChannelTimeStarted; // 0x1048        
        bool m_bWasLatchedWhenCast; // 0x104c        
        [[maybe_unused]] std::uint8_t pad_0x104d[0x3]; // 0x104d
        client::ParticleIndex_t m_ChargeUpParticle; // 0x1050        
        [[maybe_unused]] std::uint8_t pad_0x1054[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CAbility_Fathom_LurkersAmbush because it is not a standard-layout class
    static_assert(sizeof(CAbility_Fathom_LurkersAmbush) == 0x1058);
};
