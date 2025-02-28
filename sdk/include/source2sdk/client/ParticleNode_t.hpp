#pragma once
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    class C_BaseEntity;
};

namespace source2sdk::client
{
    // Registered alignment: unknown
    // Alignment: 0x4
    // Standard-layout class: true
    // Size: 0x24
    // Has Trivial Destructor
    #pragma pack(push, 1)
    struct ParticleNode_t
    {
    public:
        // m_hEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hEntity;
        char m_hEntity[0x4]; // 0x0        
        client::ParticleIndex_t m_iIndex; // 0x4        
        entity2::GameTime_t m_flStartTime; // 0x8        
        float m_flGrowthDuration; // 0xc        
        Vector m_vecGrowthOrigin; // 0x10        
        float m_flEndcapTime; // 0x1c        
        bool m_bMarkedForDelete; // 0x20        
        [[maybe_unused]] std::uint8_t pad_0x21[0x3];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(ParticleNode_t, m_hEntity) == 0x0);
    static_assert(offsetof(ParticleNode_t, m_iIndex) == 0x4);
    static_assert(offsetof(ParticleNode_t, m_flStartTime) == 0x8);
    static_assert(offsetof(ParticleNode_t, m_flGrowthDuration) == 0xc);
    static_assert(offsetof(ParticleNode_t, m_vecGrowthOrigin) == 0x10);
    static_assert(offsetof(ParticleNode_t, m_flEndcapTime) == 0x1c);
    static_assert(offsetof(ParticleNode_t, m_bMarkedForDelete) == 0x20);
    
    static_assert(sizeof(ParticleNode_t) == 0x24);
};
