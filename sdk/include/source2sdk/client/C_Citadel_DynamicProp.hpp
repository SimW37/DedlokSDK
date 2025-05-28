#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_DynamicProp.hpp"

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
        // Size: 0xfb0
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "CUtlString m_strDefaultSkin"
        // static metadata: MNetworkVarNames "CUtlString m_strFriendlySkin"
        // static metadata: MNetworkVarNames "CUtlString m_strEnemySkin"
        // static metadata: MNetworkVarNames "bool m_bIsWorld"
        #pragma pack(push, 1)
        class C_Citadel_DynamicProp : public source2sdk::client::C_DynamicProp
        {
        public:
            uint8_t _pad0f78[0x10]; // 0xf78
            std::int32_t m_nPlayerTeamEvent; // 0xf88            
            uint8_t _pad0f8c[0x4]; // 0xf8c
            // metadata: MNetworkEnable
            CUtlString m_strDefaultSkin; // 0xf90            
            // metadata: MNetworkEnable
            CUtlString m_strFriendlySkin; // 0xf98            
            // metadata: MNetworkEnable
            CUtlString m_strEnemySkin; // 0xfa0            
            // metadata: MNetworkEnable
            bool m_bIsWorld; // 0xfa8            
            uint8_t _pad0fa9[0x7];
            
            // Datamap fields:
            // CUtlSymbolLarge SetFriendlySkin; // 0x0
            // CUtlSymbolLarge SetEnemySkin; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_Citadel_DynamicProp because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_Citadel_DynamicProp) == 0xfb0);
    };
};
