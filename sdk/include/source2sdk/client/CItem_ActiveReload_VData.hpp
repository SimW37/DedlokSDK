#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadelModifier.hpp"
#include "source2sdk/client/CitadelItemVData.hpp"
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
        // Size: 0x18b8
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CItem_ActiveReload_VData : public source2sdk::client::CitadelItemVData
        {
        public:
            // metadata: MPropertyStartGroup "Modifiers"
            // m_SuccessModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_SuccessModifier;
            char m_SuccessModifier[0x10]; // 0x16b0            
            // metadata: MPropertyStartGroup "Sounds"
            CSoundEventName m_strSuccessSound; // 0x16c0            
            CSoundEventName m_strFailureSound; // 0x16d0            
            CSoundEventName m_strWindowEnteredSound; // 0x16e0            
            // metadata: MPropertyStartGroup "Visuals"
            // m_SuccessParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_SuccessParticle;
            char m_SuccessParticle[0xe0]; // 0x16f0            
            // m_FailureParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_FailureParticle;
            char m_FailureParticle[0xe0]; // 0x17d0            
            // metadata: MPropertyStartGroup "Gameplay"
            float m_flGraceTime; // 0x18b0            
            uint8_t _pad18b4[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CItem_ActiveReload_VData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CItem_ActiveReload_VData) == 0x18b8);
    };
};
