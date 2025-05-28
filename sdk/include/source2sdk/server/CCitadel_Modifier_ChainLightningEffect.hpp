#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CCitadelModifier.hpp"
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
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x248
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Modifier_ChainLightningEffect : public source2sdk::server::CCitadelModifier
        {
        public:
            std::int32_t m_nChainCount; // 0xc0            
            uint8_t _pad00c4[0x4]; // 0xc4
            // m_hHitEntities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_hHitEntities;
            char m_hHitEntities[0x18]; // 0xc8            
            // m_hUnhitEnts has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_hUnhitEnts;
            char m_hUnhitEnts[0x18]; // 0xe0            
            Vector m_vLastSource; // 0xf8            
            uint8_t _pad0104[0x144];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_ChainLightningEffect because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Modifier_ChainLightningEffect) == 0x248);
    };
};
