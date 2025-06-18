#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/EAbilityRequirements_t.hpp"
#include "source2sdk/client/EModTier_t.hpp"
#include "source2sdk/client/EShopFilters_t.hpp"
#include "source2sdk/client/ItemSectionInfo_t.hpp"
#include "source2sdk/server/CitadelAbilityVData.hpp"

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
        // Size: 0x1678
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CitadelItemVData : public source2sdk::server::CitadelAbilityVData
        {
        public:
            uint8_t _pad15e8[0x4]; // 0x15e8
            source2sdk::client::EModTier_t m_iItemTier; // 0x15ec            
            std::int8_t m_nUpgradeSlotCost; // 0x15ed            
            bool m_bWarnIfNoAffectedAbilities; // 0x15ee            
            bool m_bShowTextDescription; // 0x15ef            
            bool m_bIsDefensiveItem; // 0x15f0            
            uint8_t _pad15f1[0x1]; // 0x15f1
            source2sdk::client::EShopFilters_t m_eShopFilters; // 0x15f2            
            source2sdk::client::EAbilityRequirements_t m_eAbilityRequirements; // 0x15f4            
            uint8_t _pad15f6[0x2]; // 0x15f6
            CPanoramaImageName m_strShopIconLarge; // 0x15f8            
            CPanoramaImageName m_strShopIconSmall; // 0x1608            
            // metadata: MPropertyFriendlyName "Item Tooltips"
            // m_vecTooltipSectionInfo has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::ItemSectionInfo_t> m_vecTooltipSectionInfo;
            char m_vecTooltipSectionInfo[0x18]; // 0x1618            
            uint8_t _pad1630[0x18]; // 0x1630
            // m_vecComponentItems has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CSubclassName<4>> m_vecComponentItems;
            char m_vecComponentItems[0x18]; // 0x1648            
            // metadata: MPropertyCustomFGDType "vdata_choice:scripts/heroes.vdata"
            // m_vecDisabledOnHeroes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CUtlString> m_vecDisabledOnHeroes;
            char m_vecDisabledOnHeroes[0x18]; // 0x1660            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CitadelItemVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CitadelItemVData) == 0x1678);
    };
};
