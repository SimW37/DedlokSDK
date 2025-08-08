#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CBaseAnimGraph.hpp"
#include "source2sdk/server/CCitadelMinimapComponent.hpp"

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
        // Size: 0xaf0
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "CCitadelMinimapComponent::Storage_t m_CCitadelMinimapComponent"
        // static metadata: MNetworkVarNames "bool m_bActive"
        // static metadata: MNetworkVarNames "CUtlString m_sPickupName"
        // static metadata: MNetworkVarNames "int m_nNameOffset"
        // static metadata: MNetworkVarNames "CUtlString m_sAmbientNoise"
        #pragma pack(push, 1)
        class CCitadel_BreakablePropPickup : public source2sdk::server::CBaseAnimGraph
        {
        public:
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "CCitadelMinimapComponent"
            // metadata: MNetworkAlias "CCitadelMinimapComponent"
            // metadata: MNetworkTypeAlias "CCitadelMinimapComponent"
            source2sdk::server::CCitadelMinimapComponent m_CCitadelMinimapComponent; // 0xab8            
            uint8_t _pad0ad0[0x4]; // 0xad0
            // metadata: MNetworkEnable
            bool m_bActive; // 0xad4            
            uint8_t _pad0ad5[0x3]; // 0xad5
            // metadata: MNetworkEnable
            CUtlString m_sPickupName; // 0xad8            
            // metadata: MNetworkEnable
            std::int32_t m_nNameOffset; // 0xae0            
            uint8_t _pad0ae4[0x4]; // 0xae4
            // metadata: MNetworkEnable
            CUtlString m_sAmbientNoise; // 0xae8            
            
            // Datamap fields:
            // Vector spawn_position; // 0x7fffffff
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_BreakablePropPickup because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_BreakablePropPickup) == 0xaf0);
    };
};
