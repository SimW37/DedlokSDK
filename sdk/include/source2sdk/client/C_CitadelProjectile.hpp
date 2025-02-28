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
    // Size: 0x890
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
        [[maybe_unused]] std::uint8_t pad_0x808[0xc]; // 0x808
        float m_flMaxDistance; // 0x814        
        float m_flArmingTime; // 0x818        
        float m_flChargeAmount; // 0x81c        
        bool m_bCollideWithThrower; // 0x820        
        bool m_bNewCollideWithThrower; // 0x821        
        [[maybe_unused]] std::uint8_t pad_0x822[0xe]; // 0x822
        float m_flTickSoundInterval; // 0x830        
        [[maybe_unused]] std::uint8_t pad_0x834[0x4]; // 0x834
        // metadata: MNetworkEnable
        Vector m_vInitialVelocity; // 0x838        
        // metadata: MNetworkEnable
        Vector m_vInitialPosition; // 0x844        
        // metadata: MNetworkEnable
        CUtlStringToken m_abilityID; // 0x850        
        // metadata: MNetworkEnable
        // m_hThrower has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hThrower;
        char m_hThrower[0x4]; // 0x854        
        // metadata: MNetworkEnable
        CUtlSymbolLarge m_sParticleName; // 0x858        
        // metadata: MNetworkEnable
        Vector m_vecSpawnPosition; // 0x860        
        // metadata: MNetworkEnable
        float m_flProjectileSpeed; // 0x86c        
        // metadata: MNetworkEnable
        float m_flMaxLifetime; // 0x870        
        [[maybe_unused]] std::uint8_t pad_0x874[0x4]; // 0x874
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "ParticleRadiusChanged"
        float m_flParticleRadius; // 0x878        
        [[maybe_unused]] std::uint8_t pad_0x87c[0xc]; // 0x87c
        float m_flPreviousTimeScale; // 0x888        
        [[maybe_unused]] std::uint8_t pad_0x88c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_CitadelProjectile because it is not a standard-layout class
    static_assert(sizeof(C_CitadelProjectile) == 0x890);
};
