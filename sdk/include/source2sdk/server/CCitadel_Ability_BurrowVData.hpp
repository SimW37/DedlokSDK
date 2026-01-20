#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CitadelCameraOperationsSequence_t.hpp"
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
        // Size: 0x1b40
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CCitadel_Ability_BurrowVData : public source2sdk::server::CitadelAbilityVData
        {
        public:
            // metadata: MPropertyStartGroup "Visuals"
            // m_ExplodeParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ExplodeParticle;
            char m_ExplodeParticle[0xe0]; // 0x1700            
            // m_BurrowStartParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_BurrowStartParticle;
            char m_BurrowStartParticle[0xe0]; // 0x17e0            
            // m_BurrowEndParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_BurrowEndParticle;
            char m_BurrowEndParticle[0xe0]; // 0x18c0            
            // m_BurrowInGroundParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_BurrowInGroundParticle;
            char m_BurrowInGroundParticle[0xe0]; // 0x19a0            
            // metadata: MPropertyStartGroup "Modifiers"
            // m_BurrowModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CCitadelModifier> m_BurrowModifier;
            char m_BurrowModifier[0x10]; // 0x1a80            
            // m_SpinModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CCitadelModifier> m_SpinModifier;
            char m_SpinModifier[0x10]; // 0x1a90            
            // metadata: MPropertyStartGroup "Sounds"
            CSoundEventName m_strBurrowEndSound; // 0x1aa0            
            // metadata: MPropertyStartGroup "+Burrow Properties"
            float m_flChannelEndEnemyPopUpForce; // 0x1ab0            
            float m_flChannelEndEnemyPopUpCylinderHeight; // 0x1ab4            
            // metadata: MPropertyDescription "Spin Camera Controller that matches the modifier for client"
            source2sdk::client::CitadelCameraOperationsSequence_t m_cameraSpinStart; // 0x1ab8            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_BurrowVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Ability_BurrowVData) == 0x1b40);
    };
};
