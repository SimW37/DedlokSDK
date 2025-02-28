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
    // Size: 0x568
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
        [[maybe_unused]] std::uint8_t pad_0x510[0x40]; // 0x510
        // metadata: MNetworkEnable
        float m_fFanForceMaxRadius; // 0x550        
        // metadata: MNetworkEnable
        float m_fFanForceMinRadius; // 0x554        
        // metadata: MNetworkEnable
        float m_flCurveDistRange; // 0x558        
        [[maybe_unused]] std::uint8_t pad_0x55c[0x4]; // 0x55c
        // metadata: MNetworkEnable
        CUtlSymbolLarge m_FanForceCurveString; // 0x560        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CInfoFan because it is not a standard-layout class
    static_assert(sizeof(CInfoFan) == 0x568);
};
