#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "source2sdk/server/CCitadelModifier.hpp"
#include "source2sdk/server/CitadelAbilityVData.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x1ad8
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CCitadel_Ability_Bebop_LaserBeamVData : public source2sdk::server::CitadelAbilityVData
        {
        public:
            // metadata: MPropertyGroupName "Modifiers"
            // m_RestrictionModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CCitadelModifier> m_RestrictionModifier;
            char m_RestrictionModifier[0x10]; // 0x1700            
            // metadata: MPropertyStartGroup "Visuals"
            // m_ChargeParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ChargeParticle;
            char m_ChargeParticle[0xe0]; // 0x1710            
            // metadata: MPropertyStartGroup "GamePlay"
            float m_flCancelCooldown; // 0x17f0            
            uint8_t _pad17f4[0x4]; // 0x17f4
            // metadata: MPropertyStartGroup "Visuals"
            // m_BeamParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_BeamParticle;
            char m_BeamParticle[0xe0]; // 0x17f8            
            // m_BeamParticleLocal has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_BeamParticleLocal;
            char m_BeamParticleLocal[0xe0]; // 0x18d8            
            // m_BeamHitParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_BeamHitParticle;
            char m_BeamHitParticle[0xe0]; // 0x19b8            
            // metadata: MPropertyStartGroup "Sounds"
            CSoundEventName m_strLaserStartSound; // 0x1a98            
            CSoundEventName m_strLaserEndSound; // 0x1aa8            
            CSoundEventName m_strLaserLoopSound; // 0x1ab8            
            CSoundEventName m_strLaserHitSound; // 0x1ac8            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Bebop_LaserBeamVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Ability_Bebop_LaserBeamVData) == 0x1ad8);
    };
};
