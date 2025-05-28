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
        // Size: 0x1680
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CitadelItemVData : public source2sdk::server::CitadelAbilityVData
        {
        public:
            uint8_t _pad15f0[0x4]; // 0x15f0
            source2sdk::client::EModTier_t m_iItemTier; // 0x15f4            
            std::int8_t m_nUpgradeSlotCost; // 0x15f5            
            bool m_bWarnIfNoAffectedAbilities; // 0x15f6            
            bool m_bShowTextDescription; // 0x15f7            
            bool m_bIsDefensiveItem; // 0x15f8            
            uint8_t _pad15f9[0x1]; // 0x15f9
            source2sdk::client::EShopFilters_t m_eShopFilters; // 0x15fa            
            source2sdk::client::EAbilityRequirements_t m_eAbilityRequirements; // 0x15fc            
            uint8_t _pad15fe[0x2]; // 0x15fe
            CPanoramaImageName m_strShopIconLarge; // 0x1600            
            CPanoramaImageName m_strShopIconSmall; // 0x1610            
            // metadata: MPropertyFriendlyName "Item Tooltips"
            // m_vecTooltipSectionInfo has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::ItemSectionInfo_t> m_vecTooltipSectionInfo;
            char m_vecTooltipSectionInfo[0x18]; // 0x1620            
            uint8_t _pad1638[0x18]; // 0x1638
            // m_vecComponentItems has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CSubclassName<4>> m_vecComponentItems;
            char m_vecComponentItems[0x18]; // 0x1650            
            // metadata: MPropertyCustomFGDType "vdata_choice:scripts/heroes.vdata"
            // m_vecDisabledOnHeroes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CUtlString> m_vecDisabledOnHeroes;
            char m_vecDisabledOnHeroes[0x18]; // 0x1668            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CitadelItemVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CitadelItemVData) == 0x1680);
    };
};
