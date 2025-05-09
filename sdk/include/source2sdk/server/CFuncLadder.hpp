#pragma once
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/server/CBaseModelEntity.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    class CInfoLadderDismount;
};

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x880
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "Vector m_vecLadderDir"
    // static metadata: MNetworkVarNames "Vector m_vecPlayerMountPositionTop"
    // static metadata: MNetworkVarNames "Vector m_vecPlayerMountPositionBottom"
    // static metadata: MNetworkVarNames "float m_flAutoRideSpeed"
    // static metadata: MNetworkVarNames "bool m_bFakeLadder"
    #pragma pack(push, 1)
    class CFuncLadder : public server::CBaseModelEntity
    {
    public:
        // metadata: MNetworkEnable
        // metadata: MNetworkEncoder "coord"
        Vector m_vecLadderDir; // 0x7d0        
        [[maybe_unused]] std::uint8_t pad_0x7dc[0x4]; // 0x7dc
        // m_Dismounts has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CInfoLadderDismount>> m_Dismounts;
        char m_Dismounts[0x18]; // 0x7e0        
        Vector m_vecLocalTop; // 0x7f8        
        // metadata: MNetworkEnable
        // metadata: MNetworkEncoder "coord"
        Vector m_vecPlayerMountPositionTop; // 0x804        
        // metadata: MNetworkEnable
        // metadata: MNetworkEncoder "coord"
        Vector m_vecPlayerMountPositionBottom; // 0x810        
        // metadata: MNetworkEnable
        float m_flAutoRideSpeed; // 0x81c        
        bool m_bDisabled; // 0x820        
        // metadata: MNetworkEnable
        bool m_bFakeLadder; // 0x821        
        bool m_bHasSlack; // 0x822        
        [[maybe_unused]] std::uint8_t pad_0x823[0x5]; // 0x823
        CUtlSymbolLarge m_surfacePropName; // 0x828        
        entity2::CEntityIOOutput m_OnPlayerGotOnLadder; // 0x830        
        entity2::CEntityIOOutput m_OnPlayerGotOffLadder; // 0x858        
        
        // Datamap fields:
        // void InputEnable; // 0x0
        // void InputDisable; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CFuncLadder because it is not a standard-layout class
    static_assert(sizeof(CFuncLadder) == 0x880);
};
