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
        // Size: 0x1748
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CCitadel_Ability_SwingLineVData : public source2sdk::client::CitadelAbilityVData
        {
        public:
            // metadata: MPropertyStartGroup "Modifiers"
            // m_SwingModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_SwingModifier;
            char m_SwingModifier[0x10]; // 0x15f0            
            // metadata: MPropertyStartGroup "Visuals"
            // m_SwingAttachParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_SwingAttachParticle;
            char m_SwingAttachParticle[0xe0]; // 0x1600            
            // metadata: MPropertyStartGroup "Sounds"
            CSoundEventName m_strDaggerHitSound; // 0x16e0            
            CSoundEventName m_strDaggerExplodeSound; // 0x16f0            
            // metadata: MPropertyStartGroup "Gameplay"
            float m_flSwingStartDelay; // 0x1700            
            float m_flSwingMaxDuration; // 0x1704            
            float m_flMass; // 0x1708            
            float m_flBodyForwardForce; // 0x170c            
            float m_flCameraForwardForce; // 0x1710            
            float m_flInputForce; // 0x1714            
            float m_flPullForce; // 0x1718            
            float m_flGravityForce; // 0x171c            
            float m_flDampingConstant; // 0x1720            
            float m_flIdealSpringLengthOverride; // 0x1724            
            float m_flTensionSpringConstant; // 0x1728            
            float m_flMaxSpringForce; // 0x172c            
            float m_flMaxSpeed; // 0x1730            
            float m_flWhiskerLength; // 0x1734            
            float m_flWhiskerOffset; // 0x1738            
            float m_flWhiskerForce; // 0x173c            
            float m_flWhiskerPositionVerticalOffset; // 0x1740            
            uint8_t _pad1744[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_SwingLineVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Ability_SwingLineVData) == 0x1748);
    };
};
