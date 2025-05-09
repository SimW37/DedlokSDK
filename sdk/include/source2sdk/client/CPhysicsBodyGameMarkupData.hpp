#pragma once
#include "source2sdk/client/CPhysicsBodyGameMarkup.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: true
    // Size: 0x28
    // 
    // static metadata: MModelGameData
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CPhysicsBodyGameMarkupData
    {
    public:
        // metadata: MPropertyDescription "Physics Body Data By Bone Name"
        // m_PhysicsBodyMarkupByBoneName has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlOrderedMap<CUtlString,client::CPhysicsBodyGameMarkup> m_PhysicsBodyMarkupByBoneName;
        char m_PhysicsBodyMarkupByBoneName[0x28]; // 0x0        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CPhysicsBodyGameMarkupData, m_PhysicsBodyMarkupByBoneName) == 0x0);
    
    static_assert(sizeof(CPhysicsBodyGameMarkupData) == 0x28);
};
