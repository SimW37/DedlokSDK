#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/modellib/AttachmentHandle_t.hpp"
#include "source2sdk/server/CTier3BossAbility.hpp"
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
        // Size: 0xfb8
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Ability_Tier3Boss_DropBombs : public source2sdk::server::CTier3BossAbility
        {
        public:
            uint8_t _pad0f90[0x4]; // 0xf90
            source2sdk::entity2::GameTime_t m_tNextBombTime; // 0xf94            
            // m_vHitTargets has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_vHitTargets;
            char m_vHitTargets[0x18]; // 0xf98            
            source2sdk::modellib::AttachmentHandle_t m_hShootPos; // 0xfb0            
            uint8_t _pad0fb1[0x3]; // 0xfb1
            float m_flDetonationTime; // 0xfb4            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Tier3Boss_DropBombs because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Ability_Tier3Boss_DropBombs) == 0xfb8);
    };
};
