#pragma once
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CBaseTrigger.hpp"
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
    // Size: 0xbb0
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "float32 m_MaxWeight"
    // static metadata: MNetworkVarNames "float32 m_FadeDuration"
    // static metadata: MNetworkVarNames "float32 m_Weight"
    // static metadata: MNetworkVarNames "char m_lookupFilename"
    #pragma pack(push, 1)
    class CColorCorrectionVolume : public server::CBaseTrigger
    {
    public:
        // metadata: MNetworkEnable
        float m_MaxWeight; // 0x990        
        // metadata: MNetworkEnable
        float m_FadeDuration; // 0x994        
        // metadata: MNetworkEnable
        float m_Weight; // 0x998        
        // metadata: MNetworkEnable
        char m_lookupFilename[512]; // 0x99c        
        float m_LastEnterWeight; // 0xb9c        
        entity2::GameTime_t m_LastEnterTime; // 0xba0        
        float m_LastExitWeight; // 0xba4        
        entity2::GameTime_t m_LastExitTime; // 0xba8        
        [[maybe_unused]] std::uint8_t pad_0xbac[0x4];
        
        // Datamap fields:
        // void CColorCorrectionVolumeThinkFunc; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CColorCorrectionVolume because it is not a standard-layout class
    static_assert(sizeof(CColorCorrectionVolume) == 0xbb0);
};
