#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/server/CBaseModelEntity.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CInfoLadderDismount;
    };
};

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
        // Size: 0x808
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "Vector m_vecLadderDir"
        // static metadata: MNetworkVarNames "VectorWS m_vecPlayerMountPositionTop"
        // static metadata: MNetworkVarNames "VectorWS m_vecPlayerMountPositionBottom"
        // static metadata: MNetworkVarNames "float m_flAutoRideSpeed"
        // static metadata: MNetworkVarNames "bool m_bFakeLadder"
        #pragma pack(push, 1)
        class CFuncLadder : public source2sdk::server::CBaseModelEntity
        {
        public:
            // metadata: MNetworkEnable
            // metadata: MNetworkEncoder "coord"
            Vector m_vecLadderDir; // 0x778            
            uint8_t _pad0784[0x4]; // 0x784
            // metadata: MNotSaved
            // m_Dismounts has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CInfoLadderDismount>> m_Dismounts;
            char m_Dismounts[0x18]; // 0x788            
            Vector m_vecLocalTop; // 0x7a0            
            // metadata: MNetworkEnable
            // metadata: MNetworkEncoder "coord"
            VectorWS m_vecPlayerMountPositionTop; // 0x7ac            
            // metadata: MNetworkEnable
            // metadata: MNetworkEncoder "coord"
            VectorWS m_vecPlayerMountPositionBottom; // 0x7b8            
            // metadata: MNetworkEnable
            float m_flAutoRideSpeed; // 0x7c4            
            bool m_bDisabled; // 0x7c8            
            // metadata: MNetworkEnable
            bool m_bFakeLadder; // 0x7c9            
            bool m_bHasSlack; // 0x7ca            
            uint8_t _pad07cb[0x5]; // 0x7cb
            CUtlSymbolLarge m_surfacePropName; // 0x7d0            
            source2sdk::entity2::CEntityIOOutput m_OnPlayerGotOnLadder; // 0x7d8            
            source2sdk::entity2::CEntityIOOutput m_OnPlayerGotOffLadder; // 0x7f0            
            
            // Datamap fields:
            // void InputEnable; // 0x0
            // void InputDisable; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CFuncLadder because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CFuncLadder) == 0x808);
    };
};
