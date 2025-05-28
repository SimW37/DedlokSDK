#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CBaseModelEntity.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBaseEntity;
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
        // Size: 0x888
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "CHandle<CCitadelZipLineNode> m_vecConnections"
        // static metadata: MNetworkVarNames "Vector m_vTangentIn"
        // static metadata: MNetworkVarNames "Vector m_vTangentOut"
        // static metadata: MNetworkVarNames "float m_flCumulativeDistance"
        // static metadata: MNetworkVarNames "int16 m_iNodeIndex"
        // static metadata: MNetworkVarNames "int16 m_eCaptureState"
        // static metadata: MNetworkVarNames "int16 m_iPrimaryLane"
        // static metadata: MNetworkVarNames "int16 m_nRopesParity"
        // static metadata: MNetworkVarNames "bool m_bCornerNode"
        // static metadata: MNetworkVarNames "bool m_bCapturable"
        // static metadata: MNetworkVarNames "bool m_bAlwaysUsable"
        // static metadata: MNetworkVarNames "bool m_bOneWay"
        // static metadata: MNetworkVarNames "bool m_bDisableZippingToByPlayers"
        // static metadata: MNetworkVarNames "bool m_bUseForMinimapDrawing"
        // static metadata: MNetworkVarNames "EHANDLE m_hGuardingBoss"
        // static metadata: MNetworkVarNames "float m_flRopeRadius"
        // static metadata: MNetworkVarNames "bool m_bEnabled"
        #pragma pack(push, 1)
        class CCitadelZipLineNode : public source2sdk::server::CBaseModelEntity
        {
        public:
            uint8_t _pad07d0[0x10]; // 0x7d0
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "connectionsChanged"
            // m_vecConnections has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CNetworkUtlVectorBase<CHandle<source2sdk::server::CCitadelZipLineNode>> m_vecConnections;
            char m_vecConnections[0x18]; // 0x7e0            
            // metadata: MNetworkEnable
            Vector m_vTangentIn; // 0x7f8            
            // metadata: MNetworkEnable
            Vector m_vTangentOut; // 0x804            
            // metadata: MNetworkEnable
            float m_flCumulativeDistance; // 0x810            
            uint8_t _pad0814[0x3c]; // 0x814
            CUtlSymbolLarge m_strGuardBossName; // 0x850            
            CUtlSymbolLarge m_strGuardBossName2; // 0x858            
            CUtlSymbolLarge m_strGuardBossName3; // 0x860            
            // metadata: MNetworkEnable
            std::int16_t m_iNodeIndex; // 0x868            
            // metadata: MNetworkEnable
            std::int16_t m_eCaptureState; // 0x86a            
            // metadata: MNetworkEnable
            std::int16_t m_iPrimaryLane; // 0x86c            
            // metadata: MNetworkEnable
            std::int16_t m_nRopesParity; // 0x86e            
            // metadata: MNetworkEnable
            bool m_bCornerNode; // 0x870            
            // metadata: MNetworkEnable
            bool m_bCapturable; // 0x871            
            // metadata: MNetworkEnable
            bool m_bAlwaysUsable; // 0x872            
            // metadata: MNetworkEnable
            bool m_bOneWay; // 0x873            
            // metadata: MNetworkEnable
            bool m_bDisableZippingToByPlayers; // 0x874            
            // metadata: MNetworkEnable
            bool m_bUseForMinimapDrawing; // 0x875            
            uint8_t _pad0876[0x2]; // 0x876
            // metadata: MNetworkEnable
            // m_hGuardingBoss has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hGuardingBoss;
            char m_hGuardingBoss[0x4]; // 0x878            
            // metadata: MNetworkEnable
            float m_flRopeRadius; // 0x87c            
            // metadata: MNetworkEnable
            bool m_bEnabled; // 0x880            
            uint8_t _pad0881[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadelZipLineNode because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadelZipLineNode) == 0x888);
    };
};
