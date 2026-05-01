#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_BaseModelEntity.hpp"
namespace source2sdk
{
    namespace client
    {
        struct C_InfoLadderDismount;
    };
};

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
        // Size: 0x9f8
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "Vector m_vecLadderDir"
        // static metadata: MNetworkVarNames "VectorWS m_vecPlayerMountPositionTop"
        // static metadata: MNetworkVarNames "VectorWS m_vecPlayerMountPositionBottom"
        // static metadata: MNetworkVarNames "float m_flAutoRideSpeed"
        // static metadata: MNetworkVarNames "bool m_bFakeLadder"
        #pragma pack(push, 1)
        class C_FuncLadder : public source2sdk::client::C_BaseModelEntity
        {
        public:
            // metadata: MNetworkEnable
            // metadata: MNetworkEncoder "coord"
            Vector m_vecLadderDir; // 0x9a0            
            uint8_t _pad09ac[0x4]; // 0x9ac
            // metadata: MNotSaved
            // m_Dismounts has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::client::C_InfoLadderDismount>> m_Dismounts;
            char m_Dismounts[0x18]; // 0x9b0            
            Vector m_vecLocalTop; // 0x9c8            
            // metadata: MNetworkEnable
            // metadata: MNetworkEncoder "coord"
            VectorWS m_vecPlayerMountPositionTop; // 0x9d4            
            // metadata: MNetworkEnable
            // metadata: MNetworkEncoder "coord"
            VectorWS m_vecPlayerMountPositionBottom; // 0x9e0            
            // metadata: MNetworkEnable
            float m_flAutoRideSpeed; // 0x9ec            
            bool m_bDisabled; // 0x9f0            
            // metadata: MNetworkEnable
            bool m_bFakeLadder; // 0x9f1            
            bool m_bHasSlack; // 0x9f2            
            uint8_t _pad09f3[0x5];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_FuncLadder because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_FuncLadder) == 0x9f8);
    };
};
