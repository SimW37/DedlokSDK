#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CCitadel_Item.hpp"
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
        // Size: 0x10a8
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_ArmorUpgrade_AutoCleanse : public source2sdk::server::CCitadel_Item
        {
        public:
            CUtlStringToken m_nAbilityBlocking; // 0xf98            
            source2sdk::entity2::GameTime_t m_nAbilityBlockTime; // 0xf9c            
            // m_hModifierCaster has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hModifierCaster;
            char m_hModifierCaster[0x4]; // 0xfa0            
            uint8_t _pad0fa4[0x104];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_ArmorUpgrade_AutoCleanse because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_ArmorUpgrade_AutoCleanse) == 0x10a8);
    };
};
