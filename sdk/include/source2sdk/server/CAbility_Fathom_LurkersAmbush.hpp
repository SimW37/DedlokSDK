#pragma once
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
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
    // Size: 0xd50
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "bool m_bIsVisibleOnMinimap"
    // static metadata: MNetworkVarNames "GameTime_t m_flStoppedMovingStartTime"
    #pragma pack(push, 1)
    class CAbility_Fathom_LurkersAmbush : public server::CCitadelBaseAbility
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xb00[0x1f8]; // 0xb00
        // m_hRegenModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CModifierHandleTyped<server::CCitadelModifier> m_hRegenModifier;
        char m_hRegenModifier[0x18]; // 0xcf8        
        // m_hInvisModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CModifierHandleTyped<server::CCitadelModifier> m_hInvisModifier;
        char m_hInvisModifier[0x18]; // 0xd10        
        // metadata: MNetworkEnable
        bool m_bIsVisibleOnMinimap; // 0xd28        
        [[maybe_unused]] std::uint8_t pad_0xd29[0x3]; // 0xd29
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flStoppedMovingStartTime; // 0xd2c        
        Vector m_vLastPos; // 0xd30        
        float m_flDebuffDuration; // 0xd3c        
        entity2::GameTime_t m_flChannelTimeStarted; // 0xd40        
        bool m_bWasLatchedWhenCast; // 0xd44        
        [[maybe_unused]] std::uint8_t pad_0xd45[0x3]; // 0xd45
        client::ParticleIndex_t m_ChargeUpParticle; // 0xd48        
        [[maybe_unused]] std::uint8_t pad_0xd4c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CAbility_Fathom_LurkersAmbush because it is not a standard-layout class
    static_assert(sizeof(CAbility_Fathom_LurkersAmbush) == 0xd50);
};
