#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadel_Modifier_InvisVData.hpp"

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
        // Size: 0x938
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CCitadel_Modifier_LurkersAmbush_InvisVData : public source2sdk::client::CCitadel_Modifier_InvisVData
        {
        public:
            // metadata: MPropertyStartGroup "+Properties"
            float m_flMaxCameraAngleForSeeing; // 0x928            
            // metadata: MPropertyDescription "Max distance a player can look at Fathom to reveal him"
            float m_flMaxDistanceForSeeing; // 0x92c            
            // metadata: MPropertyDescription "Visual bias on how the invis is applied"
            float m_flInvisBias; // 0x930            
            // metadata: MPropertyDescription "How long a player needs to look at Fathom before the invis even starts to reveal"
            float m_flSpottedMinTimeToStart; // 0x934            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_LurkersAmbush_InvisVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Modifier_LurkersAmbush_InvisVData) == 0x938);
    };
};
