#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadelModifier.hpp"
#include "source2sdk/client/CitadelAbilityVData.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeCModel.hpp"

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
        // Size: 0x16f0
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CAbilityCadenceGrandFinaleVData : public source2sdk::client::CitadelAbilityVData
        {
        public:
            // metadata: MPropertyStartGroup "Visuals"
            // m_StageModel has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeCModel>> m_StageModel;
            char m_StageModel[0xe0]; // 0x15f0            
            float m_flStageModelHeight; // 0x16d0            
            float m_flStageModelWidth; // 0x16d4            
            float m_flStageModelLength; // 0x16d8            
            float m_flStageModelScale; // 0x16dc            
            // metadata: MPropertyStartGroup "Modifiers"
            // m_GrandFinaleAOEModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_GrandFinaleAOEModifier;
            char m_GrandFinaleAOEModifier[0x10]; // 0x16e0            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CAbilityCadenceGrandFinaleVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CAbilityCadenceGrandFinaleVData) == 0x16f0);
    };
};
