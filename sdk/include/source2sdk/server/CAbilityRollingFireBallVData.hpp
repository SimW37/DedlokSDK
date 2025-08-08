#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
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
        // Size: 0x1638
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CAbilityRollingFireBallVData : public source2sdk::server::CitadelAbilityVData
        {
        public:
            // metadata: MPropertyStartGroup "Visuals"
            // metadata: MPropertyStartGroup "Sounds"
            // metadata: MPropertyStartGroup "Modifiers"
            // metadata: MPropertyStartGroup "Gameplay"
            float m_flBallLifetime; // 0x1620            
            float m_flBallStepUpHeight; // 0x1624            
            float m_flBallDistAboveGround; // 0x1628            
            float m_flBallFloatDownRate; // 0x162c            
            float m_flBallSpeed; // 0x1630            
            float m_flBallTraceRadius; // 0x1634            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CAbilityRollingFireBallVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CAbilityRollingFireBallVData) == 0x1638);
    };
};
