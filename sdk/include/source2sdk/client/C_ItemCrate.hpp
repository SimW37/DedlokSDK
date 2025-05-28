#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_PhysicsProp.hpp"

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
        // Size: 0xe70
        // Has VTable
        // 
        // static metadata: MNetworkIncludeByName "m_iHealth"
        // static metadata: MNetworkIncludeByName "m_iMaxHealth"
        // static metadata: MNetworkVarNames "int m_eLootType"
        #pragma pack(push, 1)
        class C_ItemCrate : public source2sdk::client::C_PhysicsProp
        {
        public:
            // metadata: MNetworkEnable
            std::int32_t m_eLootType; // 0xe68            
            uint8_t _pad0e6c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_ItemCrate because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_ItemCrate) == 0xe70);
    };
};
