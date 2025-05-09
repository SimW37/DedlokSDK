#pragma once
#include "source2sdk/client/CLogicalEntity.hpp"
#include "source2sdk/client/PointTemplateClientOnlyEntityBehavior_t.hpp"
#include "source2sdk/client/PointTemplateOwnerSpawnGroupType_t.hpp"
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
    // Standard-layout class: false
    // Size: 0x648
    // Has VTable
    #pragma pack(push, 1)
    class CPointTemplate : public client::CLogicalEntity
    {
    public:
        CUtlSymbolLarge m_iszWorldName; // 0x5e0        
        CUtlSymbolLarge m_iszSource2EntityLumpName; // 0x5e8        
        CUtlSymbolLarge m_iszEntityFilterName; // 0x5f0        
        float m_flTimeoutInterval; // 0x5f8        
        bool m_bAsynchronouslySpawnEntities; // 0x5fc        
        [[maybe_unused]] std::uint8_t pad_0x5fd[0x3]; // 0x5fd
        client::PointTemplateClientOnlyEntityBehavior_t m_clientOnlyEntityBehavior; // 0x600        
        client::PointTemplateOwnerSpawnGroupType_t m_ownerSpawnGroupType; // 0x604        
        // m_createdSpawnGroupHandles has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<uint32_t> m_createdSpawnGroupHandles;
        char m_createdSpawnGroupHandles[0x18]; // 0x608        
        // m_SpawnedEntityHandles has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CEntityHandle> m_SpawnedEntityHandles;
        char m_SpawnedEntityHandles[0x18]; // 0x620        
        HSCRIPT m_ScriptSpawnCallback; // 0x638        
        HSCRIPT m_ScriptCallbackScope; // 0x640        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CPointTemplate because it is not a standard-layout class
    static_assert(sizeof(CPointTemplate) == 0x648);
};
