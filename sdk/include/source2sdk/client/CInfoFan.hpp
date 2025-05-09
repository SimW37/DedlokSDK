#pragma once
#include "source2sdk/client/C_PointEntity.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x638
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "float m_fFanForceMaxRadius"
    // static metadata: MNetworkVarNames "float m_fFanForceMinRadius"
    // static metadata: MNetworkVarNames "float m_flCurveDistRange"
    // static metadata: MNetworkVarNames "string_t m_FanForceCurveString"
    #pragma pack(push, 1)
    class CInfoFan : public client::C_PointEntity
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x5e0[0x40]; // 0x5e0
        // metadata: MNetworkEnable
        float m_fFanForceMaxRadius; // 0x620        
        // metadata: MNetworkEnable
        float m_fFanForceMinRadius; // 0x624        
        // metadata: MNetworkEnable
        float m_flCurveDistRange; // 0x628        
        [[maybe_unused]] std::uint8_t pad_0x62c[0x4]; // 0x62c
        // metadata: MNetworkEnable
        CUtlSymbolLarge m_FanForceCurveString; // 0x630        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CInfoFan because it is not a standard-layout class
    static_assert(sizeof(CInfoFan) == 0x638);
};
