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
        // Size: 0xcd0
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
            bool m_bActive; // 0xc98            
            uint8_t _pad0c99[0x7]; // 0xc99
            // metadata: MNetworkEnable
            CUtlString m_sPickupName; // 0xca0            
            // metadata: MNetworkEnable
            std::int32_t m_nNameOffset; // 0xca8            
            uint8_t _pad0cac[0x4]; // 0xcac
            // metadata: MNetworkEnable
            CUtlString m_sAmbientNoise; // 0xcb0            
            uint8_t _pad0cb8[0x18];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_Citadel_BreakblePropPickup because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_Citadel_BreakblePropPickup) == 0xcd0);
    };
};
