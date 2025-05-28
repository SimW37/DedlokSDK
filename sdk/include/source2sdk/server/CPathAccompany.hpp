#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CBaseEntity.hpp"
#include "source2sdk/server/PathAccompanyNode_t.hpp"

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
        // Size: 0x510
        // Has VTable
        #pragma pack(push, 1)
        class CPathAccompany : public source2sdk::server::CBaseEntity
        {
        public:
            float m_flPathLength; // 0x4e0            
            uint8_t _pad04e4[0x4]; // 0x4e4
            // m_vecNodes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::server::PathAccompanyNode_t> m_vecNodes;
            char m_vecNodes[0x18]; // 0x4e8            
            source2sdk::entity2::GameTime_t m_flLastPathRecalc; // 0x500            
            float m_flAutoLeadRange; // 0x504            
            float m_flAutoBreakRange; // 0x508            
            uint8_t _pad050c[0x4];
            
            // Datamap fields:
            // CUtlSymbolLarge pathNodes; // 0x7fffffff
            // CUtlSymbolLarge pathNodeRadiusScales; // 0x7fffffff
            // CUtlSymbolLarge deformable_prop; // 0x7fffffff
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPathAccompany because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CPathAccompany) == 0x510);
    };
};
