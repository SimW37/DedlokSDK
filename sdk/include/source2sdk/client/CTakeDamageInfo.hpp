#pragma once
#include "source2sdk/client/AmmoIndex_t.hpp"
#include "source2sdk/client/DamageTypes_t.hpp"
#include "source2sdk/client/ECitadelDamageType.hpp"
#include "source2sdk/client/HitGroup_t.hpp"
#include "source2sdk/client/TakeDamageFlags_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    class C_BaseEntity;
};

namespace source2sdk::client
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: true
    // Size: 0xf0
    // Has VTable
    #pragma pack(push, 1)
    class CTakeDamageInfo
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x00[0x8]; // 0x0
        Vector m_vecDamageForce; // 0x8        
        Vector m_vecDamagePosition; // 0x14        
        Vector m_vecReportedPosition; // 0x20        
        Vector m_vecDamageDirection; // 0x2c        
        // m_hInflictor has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hInflictor;
        char m_hInflictor[0x4]; // 0x38        
        // m_hAttacker has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hAttacker;
        char m_hAttacker[0x4]; // 0x3c        
        // m_hAbility has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hAbility;
        char m_hAbility[0x4]; // 0x40        
        float m_flDamage; // 0x44        
        float m_flTotalledDamage; // 0x48        
        client::DamageTypes_t m_bitsDamageType; // 0x4c        
        int32_t m_iDamageCustom; // 0x50        
        client::AmmoIndex_t m_iAmmoType; // 0x54        
        [[maybe_unused]] std::uint8_t pad_0x55[0xb]; // 0x55
        float m_flOriginalDamage; // 0x60        
        bool m_bShouldBleed; // 0x64        
        bool m_bShouldSpark; // 0x65        
        [[maybe_unused]] std::uint8_t pad_0x66[0x2]; // 0x66
        float m_flDamageAbsorbed; // 0x68        
        [[maybe_unused]] std::uint8_t pad_0x6c[0xc]; // 0x6c
        client::TakeDamageFlags_t m_nDamageFlags; // 0x78        
        CGlobalSymbol m_sDamageSourceName; // 0x80        
        client::HitGroup_t m_iHitGroupId; // 0x88        
        client::ECitadelDamageType m_eCitadelDamageType; // 0x8c        
        float m_flAfterBuffDamage; // 0x90        
        float m_flPreResistDamage; // 0x94        
        bool m_bEvaded; // 0x98        
        [[maybe_unused]] std::uint8_t pad_0x99[0x3]; // 0x99
        Vector m_vecDamageNormal; // 0x9c        
        [[maybe_unused]] std::uint8_t pad_0xa8[0x8]; // 0xa8
        // m_hOriginator has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hOriginator;
        char m_hOriginator[0x4]; // 0xb0        
        int32_t m_iBatchCount; // 0xb4        
        float m_flEffectiveness; // 0xb8        
        float m_timeDamage; // 0xbc        
        float m_flCritDamage; // 0xc0        
        [[maybe_unused]] std::uint8_t pad_0xc4[0x20]; // 0xc4
        bool m_bInTakeDamageFlow; // 0xe4        
        [[maybe_unused]] std::uint8_t pad_0xe5[0xb];
        
        // Datamap fields:
        // void m_hScriptInstance; // 0xc8
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CTakeDamageInfo, m_vecDamageForce) == 0x8);
    static_assert(offsetof(CTakeDamageInfo, m_vecDamagePosition) == 0x14);
    static_assert(offsetof(CTakeDamageInfo, m_vecReportedPosition) == 0x20);
    static_assert(offsetof(CTakeDamageInfo, m_vecDamageDirection) == 0x2c);
    static_assert(offsetof(CTakeDamageInfo, m_hInflictor) == 0x38);
    static_assert(offsetof(CTakeDamageInfo, m_hAttacker) == 0x3c);
    static_assert(offsetof(CTakeDamageInfo, m_hAbility) == 0x40);
    static_assert(offsetof(CTakeDamageInfo, m_flDamage) == 0x44);
    static_assert(offsetof(CTakeDamageInfo, m_flTotalledDamage) == 0x48);
    static_assert(offsetof(CTakeDamageInfo, m_bitsDamageType) == 0x4c);
    static_assert(offsetof(CTakeDamageInfo, m_iDamageCustom) == 0x50);
    static_assert(offsetof(CTakeDamageInfo, m_iAmmoType) == 0x54);
    static_assert(offsetof(CTakeDamageInfo, m_flOriginalDamage) == 0x60);
    static_assert(offsetof(CTakeDamageInfo, m_bShouldBleed) == 0x64);
    static_assert(offsetof(CTakeDamageInfo, m_bShouldSpark) == 0x65);
    static_assert(offsetof(CTakeDamageInfo, m_flDamageAbsorbed) == 0x68);
    static_assert(offsetof(CTakeDamageInfo, m_nDamageFlags) == 0x78);
    static_assert(offsetof(CTakeDamageInfo, m_sDamageSourceName) == 0x80);
    static_assert(offsetof(CTakeDamageInfo, m_iHitGroupId) == 0x88);
    static_assert(offsetof(CTakeDamageInfo, m_eCitadelDamageType) == 0x8c);
    static_assert(offsetof(CTakeDamageInfo, m_flAfterBuffDamage) == 0x90);
    static_assert(offsetof(CTakeDamageInfo, m_flPreResistDamage) == 0x94);
    static_assert(offsetof(CTakeDamageInfo, m_bEvaded) == 0x98);
    static_assert(offsetof(CTakeDamageInfo, m_vecDamageNormal) == 0x9c);
    static_assert(offsetof(CTakeDamageInfo, m_hOriginator) == 0xb0);
    static_assert(offsetof(CTakeDamageInfo, m_iBatchCount) == 0xb4);
    static_assert(offsetof(CTakeDamageInfo, m_flEffectiveness) == 0xb8);
    static_assert(offsetof(CTakeDamageInfo, m_timeDamage) == 0xbc);
    static_assert(offsetof(CTakeDamageInfo, m_flCritDamage) == 0xc0);
    static_assert(offsetof(CTakeDamageInfo, m_bInTakeDamageFlow) == 0xe4);
    
    static_assert(sizeof(CTakeDamageInfo) == 0xf0);
};
