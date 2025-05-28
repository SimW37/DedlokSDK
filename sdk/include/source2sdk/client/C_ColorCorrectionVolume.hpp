#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_BaseTrigger.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0xd10
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "bool m_bEnabled"
        // static metadata: MNetworkVarNames "float m_MaxWeight"
        // static metadata: MNetworkVarNames "float m_FadeDuration"
        // static metadata: MNetworkVarNames "float m_Weight"
        // static metadata: MNetworkVarNames "char m_lookupFilename"
        #pragma pack(push, 1)
        class C_ColorCorrectionVolume : public source2sdk::client::C_BaseTrigger
        {
        public:
            float m_LastEnterWeight; // 0xae8            
            source2sdk::entity2::GameTime_t m_LastEnterTime; // 0xaec            
            float m_LastExitWeight; // 0xaf0            
            source2sdk::entity2::GameTime_t m_LastExitTime; // 0xaf4            
            // metadata: MNetworkEnable
            bool m_bEnabled; // 0xaf8            
            uint8_t _pad0af9[0x3]; // 0xaf9
            // metadata: MNetworkEnable
            float m_MaxWeight; // 0xafc            
            // metadata: MNetworkEnable
            float m_FadeDuration; // 0xb00            
            // metadata: MNetworkEnable
            float m_Weight; // 0xb04            
            // metadata: MNetworkEnable
            char m_lookupFilename[512]; // 0xb08            
            uint8_t _pad0d08[0x8];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_ColorCorrectionVolume because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_ColorCorrectionVolume) == 0xd10);
    };
};
