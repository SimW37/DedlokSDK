#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CCitadelModifier.hpp"
#include "source2sdk/server/CCitadel_Modifier_PsychicDagger_MakeDaggers_Dagger_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x640
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Modifier_PsychicDagger_MakeDaggers : public source2sdk::server::CCitadelModifier
        {
        public:
            std::int32_t m_iCurrentProjectile; // 0xd0            
            std::int32_t m_nDaggerCount; // 0xd4            
            uint8_t _pad00d8[0x460]; // 0xd8
            source2sdk::entity2::GameTime_t m_flLastDaggerSpawn; // 0x538            
            source2sdk::entity2::GameTime_t m_flLastDaggerShoot; // 0x53c            
            bool m_bIsSpawning; // 0x540            
            bool m_bInterrupted; // 0x541            
            uint8_t _pad0542[0x6]; // 0x542
            // m_vecDaggers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::server::CCitadel_Modifier_PsychicDagger_MakeDaggers_Dagger_t> m_vecDaggers;
            char m_vecDaggers[0x18]; // 0x548            
            uint8_t _pad0560[0xe0];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_PsychicDagger_MakeDaggers because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Modifier_PsychicDagger_MakeDaggers) == 0x640);
    };
};
