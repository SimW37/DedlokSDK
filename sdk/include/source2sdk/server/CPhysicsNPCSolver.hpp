#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CLogicalEntity.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CAI_BaseNPC;
    };
};
namespace source2sdk
{
    namespace server
    {
        struct CBaseEntity;
    };
};

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
        class CPhysicsNPCSolver : public source2sdk::server::CLogicalEntity
        {
        public:
            uint8_t _pad04e0[0x8]; // 0x4e0
            source2sdk::server::CPhysicsNPCSolver* m_pNext; // 0x4e8            
            // m_hNPC has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CAI_BaseNPC> m_hNPC;
            char m_hNPC[0x4]; // 0x4f0            
            // m_hEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hEntity;
            char m_hEntity[0x4]; // 0x4f4            
            uint8_t _pad04f8[0x8]; // 0x4f8
            float m_separationDuration; // 0x500            
            source2sdk::entity2::GameTime_t m_cancelTime; // 0x504            
            bool m_allowIntersection; // 0x508            
            uint8_t _pad0509[0x7];
            
            // Datamap fields:
            // void m_pController; // 0x4f8
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPhysicsNPCSolver because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CPhysicsNPCSolver) == 0x510);
    };
};
