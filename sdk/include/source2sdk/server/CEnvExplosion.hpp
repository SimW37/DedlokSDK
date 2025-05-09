#pragma once
#include "source2sdk/client/Class_T.hpp"
#include "source2sdk/client/DamageTypes_t.hpp"
#include "source2sdk/server/CModelPointEntity.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    class CBaseEntity;
};

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x828
    // Has VTable
    #pragma pack(push, 1)
    class CEnvExplosion : public server::CModelPointEntity
    {
    public:
        int32_t m_iMagnitude; // 0x7d0        
        float m_flPlayerDamage; // 0x7d4        
        int32_t m_iRadiusOverride; // 0x7d8        
        float m_flInnerRadius; // 0x7dc        
        float m_flDamageForce; // 0x7e0        
        // m_hInflictor has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hInflictor;
        char m_hInflictor[0x4]; // 0x7e4        
        client::DamageTypes_t m_iCustomDamageType; // 0x7e8        
        bool m_bCreateDebris; // 0x7ec        
        [[maybe_unused]] std::uint8_t pad_0x7ed[0xb]; // 0x7ed
        CUtlSymbolLarge m_iszCustomEffectName; // 0x7f8        
        CUtlSymbolLarge m_iszCustomSoundName; // 0x800        
        bool m_bSuppressParticleImpulse; // 0x808        
        [[maybe_unused]] std::uint8_t pad_0x809[0x3]; // 0x809
        client::Class_T m_iClassIgnore; // 0x80c        
        client::Class_T m_iClassIgnore2; // 0x810        
        [[maybe_unused]] std::uint8_t pad_0x814[0x4]; // 0x814
        CUtlSymbolLarge m_iszEntityIgnoreName; // 0x818        
        // m_hEntityIgnore has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hEntityIgnore;
        char m_hEntityIgnore[0x4]; // 0x820        
        [[maybe_unused]] std::uint8_t pad_0x824[0x4];
        
        // Datamap fields:
        // CUtlSymbolLarge explosion_type; // 0x7fffffff
        // uint32_t m_nExplosionType; // 0x7f0
        // void InputExplode; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CEnvExplosion because it is not a standard-layout class
    static_assert(sizeof(CEnvExplosion) == 0x828);
};
