#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CitadelAbilityVData.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeCModel.hpp"
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
        // Size: 0x1890
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CCitadel_Ability_Doorman_Doorway_VData : public source2sdk::client::CitadelAbilityVData
        {
        public:
            // m_hDoorModel has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeCModel>> m_hDoorModel;
            char m_hDoorModel[0xe0]; // 0x15e8            
            // metadata: MPropertyStartGroup "Visuals"
            // m_CastParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_CastParticle;
            char m_CastParticle[0xe0]; // 0x16c8            
            // m_PlaceDoorParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_PlaceDoorParticle;
            char m_PlaceDoorParticle[0xe0]; // 0x17a8            
            // metadata: MPropertyFriendlyName "Door Spawn Particle Color"
            // metadata: MPropertyDescription "Door Spawn Particle Color"
            Color m_ColorStart; // 0x1888            
            // metadata: MPropertyFriendlyName "Door End Particle Color"
            // metadata: MPropertyDescription "Door End Particle Color"
            Color m_ColorEnd; // 0x188c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Doorman_Doorway_VData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Ability_Doorman_Doorway_VData) == 0x1890);
    };
};
