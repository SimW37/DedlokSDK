#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadelModifier.hpp"
#include "source2sdk/client/CitadelAbilityVData.hpp"

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
        // Size: 0x1650
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CCitadel_Ability_IcePathVData : public source2sdk::client::CitadelAbilityVData
        {
        public:
            // metadata: MPropertyStartGroup "Modifiers"
            // m_IcePathModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_IcePathModifier;
            char m_IcePathModifier[0x10]; // 0x1620            
            // metadata: MPropertyStartGroup "Gameplay"
            float m_flMomentumDecayRate; // 0x1630            
            float m_flMomentumWeight; // 0x1634            
            float m_flMaxPitchChange; // 0x1638            
            float m_flMaxPitchUp; // 0x163c            
            float m_flMaxPitchDown; // 0x1640            
            float m_flMaxHeight; // 0x1644            
            float m_flForwardAngleBias; // 0x1648            
            uint8_t _pad164c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_IcePathVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Ability_IcePathVData) == 0x1650);
    };
};
