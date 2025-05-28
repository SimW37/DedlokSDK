#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_BaseModelEntity.hpp"
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
        // Size: 0xa38
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
        class CCitadelZipLineNode : public source2sdk::client::C_BaseModelEntity
        {
        public:
            uint8_t _pad09a8[0x40]; // 0x9a8
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "connectionsChanged"
            // m_vecConnections has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_NetworkUtlVectorBase<CHandle<source2sdk::client::CCitadelZipLineNode>> m_vecConnections;
            char m_vecConnections[0x18]; // 0x9e8            
            // metadata: MNetworkEnable
            Vector m_vTangentIn; // 0xa00            
            // metadata: MNetworkEnable
            Vector m_vTangentOut; // 0xa0c            
            // metadata: MNetworkEnable
            float m_flCumulativeDistance; // 0xa18            
            // metadata: MNetworkEnable
            std::int16_t m_iNodeIndex; // 0xa1c            
            // metadata: MNetworkEnable
            std::int16_t m_eCaptureState; // 0xa1e            
            // metadata: MNetworkEnable
            std::int16_t m_iPrimaryLane; // 0xa20            
            // metadata: MNetworkEnable
            std::int16_t m_nRopesParity; // 0xa22            
            // metadata: MNetworkEnable
            bool m_bCornerNode; // 0xa24            
            // metadata: MNetworkEnable
            bool m_bCapturable; // 0xa25            
            // metadata: MNetworkEnable
            bool m_bAlwaysUsable; // 0xa26            
            // metadata: MNetworkEnable
            bool m_bOneWay; // 0xa27            
            // metadata: MNetworkEnable
            bool m_bDisableZippingToByPlayers; // 0xa28            
            // metadata: MNetworkEnable
            bool m_bUseForMinimapDrawing; // 0xa29            
            uint8_t _pad0a2a[0x2]; // 0xa2a
            // metadata: MNetworkEnable
            // m_hGuardingBoss has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hGuardingBoss;
            char m_hGuardingBoss[0x4]; // 0xa2c            
            // metadata: MNetworkEnable
            float m_flRopeRadius; // 0xa30            
            // metadata: MNetworkEnable
            bool m_bEnabled; // 0xa34            
            uint8_t _pad0a35[0x3];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadelZipLineNode because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadelZipLineNode) == 0xa38);
    };
};
