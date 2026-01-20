#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadelModifier.hpp"
#include "source2sdk/client/CitadelAbilityVData.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x1ad0
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CAbilityTokamakHotShotVData : public source2sdk::client::CitadelAbilityVData
        {
        public:
            // metadata: MPropertyGroupName "Modifiers"
            // m_LaserModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_LaserModifier;
            char m_LaserModifier[0x10]; // 0x1700            
            // metadata: MPropertyStartGroup "Sounds"
            CSoundEventName m_strLaserStartSound; // 0x1710            
            CSoundEventName m_strLaserEndSound; // 0x1720            
            CSoundEventName m_strLaserLoopSound; // 0x1730            
            CSoundEventName m_strLaserHitSound; // 0x1740            
            // metadata: MPropertyStartGroup "Visuals"
            // m_ChargeParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ChargeParticle;
            char m_ChargeParticle[0xe0]; // 0x1750            
            // m_BeamParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_BeamParticle;
            char m_BeamParticle[0xe0]; // 0x1830            
            // m_HitParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_HitParticle;
            char m_HitParticle[0xe0]; // 0x1910            
            // m_GroundParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_GroundParticle;
            char m_GroundParticle[0xe0]; // 0x19f0            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CAbilityTokamakHotShotVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CAbilityTokamakHotShotVData) == 0x1ad0);
    };
};
