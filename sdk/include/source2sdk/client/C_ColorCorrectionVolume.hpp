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
        // Size: 0xc98
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
            // metadata: MNotSaved
            float m_LastEnterWeight; // 0xa70            
            // metadata: MNotSaved
            source2sdk::entity2::GameTime_t m_LastEnterTime; // 0xa74            
            // metadata: MNotSaved
            float m_LastExitWeight; // 0xa78            
            // metadata: MNotSaved
            source2sdk::entity2::GameTime_t m_LastExitTime; // 0xa7c            
            // metadata: MNetworkEnable
            // metadata: MNotSaved
            bool m_bEnabled; // 0xa80            
            uint8_t _pad0a81[0x3]; // 0xa81
            // metadata: MNetworkEnable
            // metadata: MNotSaved
            float m_MaxWeight; // 0xa84            
            // metadata: MNetworkEnable
            // metadata: MNotSaved
            float m_FadeDuration; // 0xa88            
            // metadata: MNetworkEnable
            // metadata: MNotSaved
            float m_Weight; // 0xa8c            
            // metadata: MNetworkEnable
            // metadata: MNotSaved
            char m_lookupFilename[512]; // 0xa90            
            uint8_t _pad0c90[0x8];
            
            // Datamap fields:
            // void m_lookupFilename; // 0xa90
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_ColorCorrectionVolume because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_ColorCorrectionVolume) == 0xc98);
    };
};
