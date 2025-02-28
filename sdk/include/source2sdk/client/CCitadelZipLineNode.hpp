#pragma once
#include "source2sdk/client/C_BaseModelEntity.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    class C_BaseEntity;
};

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x898
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
    class CCitadelZipLineNode : public client::C_BaseModelEntity
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x808[0x40]; // 0x808
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "connectionsChanged"
        // m_vecConnections has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // C_NetworkUtlVectorBase<CHandle<client::CCitadelZipLineNode>> m_vecConnections;
        char m_vecConnections[0x18]; // 0x848        
        // metadata: MNetworkEnable
        Vector m_vTangentIn; // 0x860        
        // metadata: MNetworkEnable
        Vector m_vTangentOut; // 0x86c        
        // metadata: MNetworkEnable
        float m_flCumulativeDistance; // 0x878        
        // metadata: MNetworkEnable
        int16_t m_iNodeIndex; // 0x87c        
        // metadata: MNetworkEnable
        int16_t m_eCaptureState; // 0x87e        
        // metadata: MNetworkEnable
        int16_t m_iPrimaryLane; // 0x880        
        // metadata: MNetworkEnable
        int16_t m_nRopesParity; // 0x882        
        // metadata: MNetworkEnable
        bool m_bCornerNode; // 0x884        
        // metadata: MNetworkEnable
        bool m_bCapturable; // 0x885        
        // metadata: MNetworkEnable
        bool m_bAlwaysUsable; // 0x886        
        // metadata: MNetworkEnable
        bool m_bOneWay; // 0x887        
        // metadata: MNetworkEnable
        bool m_bDisableZippingToByPlayers; // 0x888        
        // metadata: MNetworkEnable
        bool m_bUseForMinimapDrawing; // 0x889        
        [[maybe_unused]] std::uint8_t pad_0x88a[0x2]; // 0x88a
        // metadata: MNetworkEnable
        // m_hGuardingBoss has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hGuardingBoss;
        char m_hGuardingBoss[0x4]; // 0x88c        
        // metadata: MNetworkEnable
        float m_flRopeRadius; // 0x890        
        // metadata: MNetworkEnable
        bool m_bEnabled; // 0x894        
        [[maybe_unused]] std::uint8_t pad_0x895[0x3];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadelZipLineNode because it is not a standard-layout class
    static_assert(sizeof(CCitadelZipLineNode) == 0x898);
};
