#pragma once
#include "source2sdk/client/C_BaseModelEntity.hpp"
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
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xaa0
    // Has VTable
    // 
    // static metadata: MNetworkIncludeByName "m_flTimeScale"
    // static metadata: MNetworkOverride "m_flTimeScale"
    // static metadata: MNetworkOverride "m_flTimeScale"
    // static metadata: MNetworkVarNames "Vector m_vInitialVelocity"
    // static metadata: MNetworkVarNames "Vector m_vInitialPosition"
    // static metadata: MNetworkVarNames "AbilityID_t m_abilityID"
    // static metadata: MNetworkVarNames "EHANDLE m_hThrower"
    // static metadata: MNetworkVarNames "string_t m_sParticleName"
    // static metadata: MNetworkVarNames "Vector m_vecSpawnPosition"
    // static metadata: MNetworkVarNames "float m_flProjectileSpeed"
    // static metadata: MNetworkVarNames "float m_flMaxLifetime"
    #pragma pack(push, 1)
    class C_CitadelProjectile : public client::C_BaseModelEntity
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x9a8[0x18]; // 0x9a8
        float m_flMaxDistance; // 0x9c0        
        float m_flArmingTime; // 0x9c4        
        float m_flChargeAmount; // 0x9c8        
        bool m_bCollideWithThrower; // 0x9cc        
        bool m_bNewCollideWithThrower; // 0x9cd        
        [[maybe_unused]] std::uint8_t pad_0x9ce[0xa]; // 0x9ce
        float m_flTickSoundInterval; // 0x9d8        
        [[maybe_unused]] std::uint8_t pad_0x9dc[0x4]; // 0x9dc
        // metadata: MNetworkEnable
        Vector m_vInitialVelocity; // 0x9e0        
        // metadata: MNetworkEnable
        Vector m_vInitialPosition; // 0x9ec        
        // metadata: MNetworkEnable
        CUtlStringToken m_abilityID; // 0x9f8        
        // metadata: MNetworkEnable
        // m_hThrower has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hThrower;
        char m_hThrower[0x4]; // 0x9fc        
        // metadata: MNetworkEnable
        CUtlSymbolLarge m_sParticleName; // 0xa00        
        // metadata: MNetworkEnable
        Vector m_vecSpawnPosition; // 0xa08        
        // metadata: MNetworkEnable
        float m_flProjectileSpeed; // 0xa14        
        // metadata: MNetworkEnable
        float m_flMaxLifetime; // 0xa18        
        [[maybe_unused]] std::uint8_t pad_0xa1c[0x4]; // 0xa1c
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "ParticleRadiusChanged"
        float m_flParticleRadius; // 0xa20        
        [[maybe_unused]] std::uint8_t pad_0xa24[0x74]; // 0xa24
        float m_flPreviousTimeScale; // 0xa98        
        [[maybe_unused]] std::uint8_t pad_0xa9c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_CitadelProjectile because it is not a standard-layout class
    static_assert(sizeof(C_CitadelProjectile) == 0xaa0);
};
