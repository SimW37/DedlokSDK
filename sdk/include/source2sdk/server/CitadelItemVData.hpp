#pragma once
#include "source2sdk/client/EModTier_t.hpp"
#include "source2sdk/client/EShopFilters_t.hpp"
#include "source2sdk/client/ItemSectionInfo_t.hpp"
#include "source2sdk/server/CitadelAbilityVData.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x1610
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CitadelItemVData : public server::CitadelAbilityVData
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x15c8[0x4]; // 0x15c8
        client::EModTier_t m_iItemTier; // 0x15cc        
        int8_t m_nUpgradeSlotCost; // 0x15cd        
        bool m_bWarnIfNoAffectedAbilities; // 0x15ce        
        bool m_bRequiresChargedAbility; // 0x15cf        
        bool m_bRequiresChanelledAbility; // 0x15d0        
        [[maybe_unused]] std::uint8_t pad_0x15d1[0x7]; // 0x15d1
        // m_vecComponentItems has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CSubclassName<4>> m_vecComponentItems;
        char m_vecComponentItems[0x18]; // 0x15d8        
        bool m_bShowTextDescription; // 0x15f0        
        bool m_bIsDefensiveItem; // 0x15f1        
        client::EShopFilters_t m_eShopFilters; // 0x15f2        
        [[maybe_unused]] std::uint8_t pad_0x15f4[0x4]; // 0x15f4
        // metadata: MPropertyFriendlyName "Item Tooltips"
        // m_vecTooltipSectionInfo has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<client::ItemSectionInfo_t> m_vecTooltipSectionInfo;
        char m_vecTooltipSectionInfo[0x18]; // 0x15f8        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CitadelItemVData because it is not a standard-layout class
    static_assert(sizeof(CitadelItemVData) == 0x1610);
};
