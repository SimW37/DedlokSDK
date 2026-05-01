#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CBaseTrigger.hpp"

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
        // Size: 0xaf8
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "float32 m_MaxWeight"
        // static metadata: MNetworkVarNames "float32 m_FadeDuration"
        // static metadata: MNetworkVarNames "float32 m_Weight"
        // static metadata: MNetworkVarNames "char m_lookupFilename"
        #pragma pack(push, 1)
        class CColorCorrectionVolume : public source2sdk::server::CBaseTrigger
        {
        public:
            // metadata: MNetworkEnable
            float m_MaxWeight; // 0x8d8            
            // metadata: MNetworkEnable
            float m_FadeDuration; // 0x8dc            
            // metadata: MNetworkEnable
            float m_Weight; // 0x8e0            
            // metadata: MNetworkEnable
            char m_lookupFilename[512]; // 0x8e4            
            float m_LastEnterWeight; // 0xae4            
            source2sdk::entity2::GameTime_t m_LastEnterTime; // 0xae8            
            float m_LastExitWeight; // 0xaec            
            source2sdk::entity2::GameTime_t m_LastExitTime; // 0xaf0            
            uint8_t _pad0af4[0x4];
            
            // Datamap fields:
            // void CColorCorrectionVolumeThinkFunc; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CColorCorrectionVolume because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CColorCorrectionVolume) == 0xaf8);
    };
};
