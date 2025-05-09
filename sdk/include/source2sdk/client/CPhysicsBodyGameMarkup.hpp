#pragma once
#include "source2sdk/client/HitGroup_t.hpp"
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
    // Size: 0x18
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CPhysicsBodyGameMarkup
    {
    public:
        // metadata: MPropertyDescription "The name for the body (bone) that we're targeting."
        CUtlString m_TargetBody; // 0x0        
        // metadata: MPropertyDescription "The hitgroup for this body."
        client::HitGroup_t m_nHitGroup; // 0x8        
        [[maybe_unused]] std::uint8_t pad_0x0c[0x4]; // 0xc
        // metadata: MPropertyDescription "An identifier for this physics body."
        CGlobalSymbol m_Tag; // 0x10        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CPhysicsBodyGameMarkup, m_TargetBody) == 0x0);
    static_assert(offsetof(CPhysicsBodyGameMarkup, m_nHitGroup) == 0x8);
    static_assert(offsetof(CPhysicsBodyGameMarkup, m_Tag) == 0x10);
    
    static_assert(sizeof(CPhysicsBodyGameMarkup) == 0x18);
};
