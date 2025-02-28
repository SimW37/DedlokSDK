#pragma once
#include "source2sdk/server/CBaseEntity.hpp"
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
    // Size: 0x520
    // Has VTable
    #pragma pack(push, 1)
    class CCitadelZipLinePathNode : public server::CBaseEntity
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x4e0[0x18]; // 0x4e0
        bool m_bCornerNode; // 0x4f8        
        bool m_bDisableZippingToByPlayers; // 0x4f9        
        bool m_bEnabled; // 0x4fa        
        bool m_bCapturable; // 0x4fb        
        bool m_bAlwaysUsable; // 0x4fc        
        bool m_bOneWay; // 0x4fd        
        [[maybe_unused]] std::uint8_t pad_0x4fe[0x2]; // 0x4fe
        CUtlSymbolLarge m_strGuardBossName; // 0x500        
        CUtlSymbolLarge m_strGuardBossName2; // 0x508        
        CUtlSymbolLarge m_strGuardBossName3; // 0x510        
        [[maybe_unused]] std::uint8_t pad_0x518[0x4]; // 0x518
        bool m_bUseForMinimapDrawing; // 0x51c        
        [[maybe_unused]] std::uint8_t pad_0x51d[0x3];
        
        // Datamap fields:
        // void m_pNode; // 0x518
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadelZipLinePathNode because it is not a standard-layout class
    static_assert(sizeof(CCitadelZipLinePathNode) == 0x520);
};
