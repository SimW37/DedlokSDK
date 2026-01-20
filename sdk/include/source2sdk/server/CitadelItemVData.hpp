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
        // Size: 0x1790
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CitadelItemVData : public source2sdk::server::CitadelAbilityVData
        {
        public:
            uint8_t _pad1700[0x4]; // 0x1700
            source2sdk::client::EModTier_t m_iItemTier; // 0x1704            
            std::int8_t m_nUpgradeSlotCost; // 0x1705            
            bool m_bWarnIfNoAffectedAbilities; // 0x1706            
            bool m_bShowTextDescription; // 0x1707            
            bool m_bIsDefensiveItem; // 0x1708            
            uint8_t _pad1709[0x1]; // 0x1709
            source2sdk::client::EShopFilters_t m_eShopFilters; // 0x170a            
            source2sdk::client::EAbilityRequirements_t m_eAbilityRequirements; // 0x170c            
            uint8_t _pad170e[0x2]; // 0x170e
            CPanoramaImageName m_strShopIconLarge; // 0x1710            
            CPanoramaImageName m_strShopIconSmall; // 0x1720            
            // metadata: MPropertyFriendlyName "Item Tooltips"
            // m_vecTooltipSectionInfo has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::ItemSectionInfo_t> m_vecTooltipSectionInfo;
            char m_vecTooltipSectionInfo[0x18]; // 0x1730            
            uint8_t _pad1748[0x18]; // 0x1748
            // m_vecComponentItems has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CSubclassName<4>> m_vecComponentItems;
            char m_vecComponentItems[0x18]; // 0x1760            
            // metadata: MPropertyCustomFGDType "vdata_choice:scripts/heroes.vdata"
            // m_vecDisabledOnHeroes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CUtlString> m_vecDisabledOnHeroes;
            char m_vecDisabledOnHeroes[0x18]; // 0x1778            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CitadelItemVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CitadelItemVData) == 0x1790);
    };
};
