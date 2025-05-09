#pragma once
#include "source2sdk/client/CPathQueryComponent.hpp"
#include "source2sdk/client/C_BaseEntity.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: 0x10
    // Alignment: 0x10
    // Standard-layout class: false
    // Size: 0x6f0
    // Has VTable
    // 
    // static metadata: MEntityAllowsPortraitWorldSpawn
    // static metadata: MNetworkVarNames "CPathQueryComponent::Storage_t m_CPathQueryComponent"
    // static metadata: MNetworkVarNames "CUtlString m_pathString"
    #pragma pack(push, 1)
    class CPathSimple : public client::C_BaseEntity
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x5e0[0x10]; // 0x5e0
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "CPathQueryComponent"
        // metadata: MNetworkAlias "CPathQueryComponent"
        // metadata: MNetworkTypeAlias "CPathQueryComponent"
        client::CPathQueryComponent m_CPathQueryComponent; // 0x5f0        
        [[maybe_unused]] std::uint8_t pad_0x690[0x50]; // 0x690
        // metadata: MNetworkEnable
        CUtlString m_pathString; // 0x6e0        
        [[maybe_unused]] std::uint8_t pad_0x6e8[0x8];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CPathSimple because it is not a standard-layout class
    static_assert(sizeof(CPathSimple) == 0x6f0);
};
