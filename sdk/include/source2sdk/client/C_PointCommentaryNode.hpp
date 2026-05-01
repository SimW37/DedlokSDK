#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CBaseAnimGraph.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
namespace source2sdk
{
    namespace client
    {
        struct CSoundPatch;
    };
};
namespace source2sdk
{
    namespace client
    {
        struct C_BaseEntity;
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
        // Size: 0xd00
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "bool m_bActive"
        // static metadata: MNetworkVarNames "GameTime_t m_flStartTime"
        // static metadata: MNetworkVarNames "float32 m_flStartTimeInCommentary"
        // static metadata: MNetworkVarNames "string_t m_iszCommentaryFile"
        // static metadata: MNetworkVarNames "string_t m_iszTitle"
        // static metadata: MNetworkVarNames "string_t m_iszSpeakers"
        // static metadata: MNetworkVarNames "int m_iNodeNumber"
        // static metadata: MNetworkVarNames "int m_iNodeNumberMax"
        // static metadata: MNetworkVarNames "bool m_bListenedTo"
        // static metadata: MNetworkVarNames "CHandle< C_BaseEntity> m_hViewPosition"
        #pragma pack(push, 1)
        class C_PointCommentaryNode : public source2sdk::client::CBaseAnimGraph
        {
        public:
            uint8_t _pad0ca0[0x18]; // 0xca0
            // metadata: MNetworkEnable
            bool m_bActive; // 0xcb8            
            bool m_bWasActive; // 0xcb9            
            uint8_t _pad0cba[0x2]; // 0xcba
            source2sdk::entity2::GameTime_t m_flEndTime; // 0xcbc            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flStartTime; // 0xcc0            
            // metadata: MNetworkEnable
            float m_flStartTimeInCommentary; // 0xcc4            
            // metadata: MNetworkEnable
            CUtlSymbolLarge m_iszCommentaryFile; // 0xcc8            
            // metadata: MNetworkEnable
            CUtlSymbolLarge m_iszTitle; // 0xcd0            
            // metadata: MNetworkEnable
            CUtlSymbolLarge m_iszSpeakers; // 0xcd8            
            // metadata: MNetworkEnable
            std::int32_t m_iNodeNumber; // 0xce0            
            // metadata: MNetworkEnable
            std::int32_t m_iNodeNumberMax; // 0xce4            
            // metadata: MNetworkEnable
            bool m_bListenedTo; // 0xce8            
            uint8_t _pad0ce9[0x7]; // 0xce9
            // metadata: MSaveOpsForField
            source2sdk::client::CSoundPatch* m_sndCommentary; // 0xcf0            
            // metadata: MNetworkEnable
            // m_hViewPosition has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hViewPosition;
            char m_hViewPosition[0x4]; // 0xcf8            
            // metadata: MNotSaved
            bool m_bRestartAfterRestore; // 0xcfc            
            uint8_t _pad0cfd[0x3];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_PointCommentaryNode because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_PointCommentaryNode) == 0xd00);
    };
};
