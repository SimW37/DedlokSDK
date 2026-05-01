#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_NPC_SimpleAnimatingAI.hpp"

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
        // Size: 0xcc0
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "float m_flAttackRange"
        // static metadata: MNetworkVarNames "float m_flAimPitch"
        #pragma pack(push, 1)
        class C_NPC_FieldSentry : public source2sdk::client::C_NPC_SimpleAnimatingAI
        {
        public:
            uint8_t _pad0cb0[0x4]; // 0xcb0
            // metadata: MNetworkEnable
            // metadata: MNotSaved
            float m_flAttackRange; // 0xcb4            
            // metadata: MNetworkEnable
            // metadata: MNotSaved
            float m_flAimPitch; // 0xcb8            
            uint8_t _pad0cbc[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_NPC_FieldSentry because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_NPC_FieldSentry) == 0xcc0);
    };
};
