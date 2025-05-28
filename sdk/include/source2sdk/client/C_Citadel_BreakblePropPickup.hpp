#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CBaseAnimGraph.hpp"

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
        // Size: 0xce8
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "bool m_bActive"
        // static metadata: MNetworkVarNames "CUtlString m_sPickupName"
        // static metadata: MNetworkVarNames "int m_nNameOffset"
        // static metadata: MNetworkVarNames "CUtlString m_sAmbientNoise"
        #pragma pack(push, 1)
        class C_Citadel_BreakblePropPickup : public source2sdk::client::CBaseAnimGraph
        {
        public:
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnActiveChanged"
            bool m_bActive; // 0xcb0            
            uint8_t _pad0cb1[0x7]; // 0xcb1
            // metadata: MNetworkEnable
            CUtlString m_sPickupName; // 0xcb8            
            // metadata: MNetworkEnable
            std::int32_t m_nNameOffset; // 0xcc0            
            uint8_t _pad0cc4[0x4]; // 0xcc4
            // metadata: MNetworkEnable
            CUtlString m_sAmbientNoise; // 0xcc8            
            uint8_t _pad0cd0[0x18];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_Citadel_BreakblePropPickup because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_Citadel_BreakblePropPickup) == 0xce8);
    };
};
