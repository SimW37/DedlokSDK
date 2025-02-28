#pragma once
#include "source2sdk/client/C_BaseTrigger.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
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
    // Size: 0xb70
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "bool m_bEnabled"
    // static metadata: MNetworkVarNames "float m_MaxWeight"
    // static metadata: MNetworkVarNames "float m_FadeDuration"
    // static metadata: MNetworkVarNames "float m_Weight"
    // static metadata: MNetworkVarNames "char m_lookupFilename"
    #pragma pack(push, 1)
    class C_ColorCorrectionVolume : public client::C_BaseTrigger
    {
    public:
        float m_LastEnterWeight; // 0x948        
        entity2::GameTime_t m_LastEnterTime; // 0x94c        
        float m_LastExitWeight; // 0x950        
        entity2::GameTime_t m_LastExitTime; // 0x954        
        // metadata: MNetworkEnable
        bool m_bEnabled; // 0x958        
        [[maybe_unused]] std::uint8_t pad_0x959[0x3]; // 0x959
        // metadata: MNetworkEnable
        float m_MaxWeight; // 0x95c        
        // metadata: MNetworkEnable
        float m_FadeDuration; // 0x960        
        // metadata: MNetworkEnable
        float m_Weight; // 0x964        
        // metadata: MNetworkEnable
        char m_lookupFilename[512]; // 0x968        
        [[maybe_unused]] std::uint8_t pad_0xb68[0x8];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_ColorCorrectionVolume because it is not a standard-layout class
    static_assert(sizeof(C_ColorCorrectionVolume) == 0xb70);
};
