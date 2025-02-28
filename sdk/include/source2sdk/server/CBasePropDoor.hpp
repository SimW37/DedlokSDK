#pragma once
#include "source2sdk/client/DoorState_t.hpp"
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/server/CDynamicProp.hpp"
#include "source2sdk/server/locksound_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    class CBaseEntity;
};

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xfc8
    // Has VTable
    // Is Abstract
    // 
    // static metadata: MNetworkExcludeByName "m_flAnimTime"
    // static metadata: MNetworkExcludeByName "m_flexWeight"
    // static metadata: MNetworkExcludeByName "m_blinktoggle"
    // static metadata: MNetworkExcludeByUserGroup "m_flPoseParameter"
    // static metadata: MNetworkExcludeByName "m_animationController.m_flPlaybackRate"
    // static metadata: MNetworkExcludeByUserGroup "overlay_vars"
    // static metadata: MNetworkIncludeByName "m_spawnflags"
    // static metadata: MNetworkVarNames "DoorState_t m_eDoorState"
    // static metadata: MNetworkVarNames "bool m_bLocked"
    // static metadata: MNetworkVarNames "bool m_bNoNPCs"
    // static metadata: MNetworkVarNames "Vector m_closedPosition"
    // static metadata: MNetworkVarNames "QAngle m_closedAngles"
    // static metadata: MNetworkVarNames "CHandle< CBasePropDoor> m_hMaster"
    #pragma pack(push, 1)
    class CBasePropDoor : public server::CDynamicProp
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xd38[0x10]; // 0xd38
        float m_flAutoReturnDelay; // 0xd48        
        [[maybe_unused]] std::uint8_t pad_0xd4c[0x4]; // 0xd4c
        // m_hDoorList has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBasePropDoor>> m_hDoorList;
        char m_hDoorList[0x18]; // 0xd50        
        int32_t m_nHardwareType; // 0xd68        
        bool m_bNeedsHardware; // 0xd6c        
        [[maybe_unused]] std::uint8_t pad_0xd6d[0x3]; // 0xd6d
        // metadata: MNetworkEnable
        client::DoorState_t m_eDoorState; // 0xd70        
        // metadata: MNetworkEnable
        bool m_bLocked; // 0xd74        
        // metadata: MNetworkEnable
        bool m_bNoNPCs; // 0xd75        
        [[maybe_unused]] std::uint8_t pad_0xd76[0x2]; // 0xd76
        // metadata: MNetworkEnable
        Vector m_closedPosition; // 0xd78        
        // metadata: MNetworkEnable
        QAngle m_closedAngles; // 0xd84        
        // m_hBlocker has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hBlocker;
        char m_hBlocker[0x4]; // 0xd90        
        bool m_bFirstBlocked; // 0xd94        
        [[maybe_unused]] std::uint8_t pad_0xd95[0x3]; // 0xd95
        server::locksound_t m_ls; // 0xd98        
        bool m_bForceClosed; // 0xdb8        
        [[maybe_unused]] std::uint8_t pad_0xdb9[0x3]; // 0xdb9
        Vector m_vecLatchWorldPosition; // 0xdbc        
        // m_hActivator has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hActivator;
        char m_hActivator[0x4]; // 0xdc8        
        [[maybe_unused]] std::uint8_t pad_0xdcc[0xc]; // 0xdcc
        CUtlSymbolLarge m_SoundMoving; // 0xdd8        
        CUtlSymbolLarge m_SoundOpen; // 0xde0        
        CUtlSymbolLarge m_SoundClose; // 0xde8        
        CUtlSymbolLarge m_SoundLock; // 0xdf0        
        CUtlSymbolLarge m_SoundUnlock; // 0xdf8        
        CUtlSymbolLarge m_SoundLatch; // 0xe00        
        CUtlSymbolLarge m_SoundPound; // 0xe08        
        CUtlSymbolLarge m_SoundJiggle; // 0xe10        
        CUtlSymbolLarge m_SoundLockedAnim; // 0xe18        
        int32_t m_numCloseAttempts; // 0xe20        
        CUtlStringToken m_nPhysicsMaterial; // 0xe24        
        CUtlSymbolLarge m_SlaveName; // 0xe28        
        // metadata: MNetworkEnable
        // m_hMaster has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBasePropDoor> m_hMaster;
        char m_hMaster[0x4]; // 0xe30        
        [[maybe_unused]] std::uint8_t pad_0xe34[0x4]; // 0xe34
        entity2::CEntityIOOutput m_OnBlockedClosing; // 0xe38        
        entity2::CEntityIOOutput m_OnBlockedOpening; // 0xe60        
        entity2::CEntityIOOutput m_OnUnblockedClosing; // 0xe88        
        entity2::CEntityIOOutput m_OnUnblockedOpening; // 0xeb0        
        entity2::CEntityIOOutput m_OnFullyClosed; // 0xed8        
        entity2::CEntityIOOutput m_OnFullyOpen; // 0xf00        
        entity2::CEntityIOOutput m_OnClose; // 0xf28        
        entity2::CEntityIOOutput m_OnOpen; // 0xf50        
        entity2::CEntityIOOutput m_OnLockedUse; // 0xf78        
        entity2::CEntityIOOutput m_OnAjarOpen; // 0xfa0        
        
        // Datamap fields:
        // void m_hSoundMoving; // 0xdcc
        //  m_ls.sLockedSound; // 0xda0
        //  m_ls.sUnlockedSound; // 0xda8
        // void InputOpen; // 0x0
        // CUtlSymbolLarge InputOpenAwayFrom; // 0x0
        // float InputOpenAwayFromActivator; // 0x0
        // void InputClose; // 0x0
        // void InputToggle; // 0x0
        // void InputLock; // 0x0
        // void InputUnlock; // 0x0
        // void InputPlayerOpen; // 0x0
        // void InputPlayerClose; // 0x0
        // bool InputSetNoNPCs; // 0x0
        // void CBasePropDoorDoorOpenMoveDone; // 0x0
        // void CBasePropDoorDoorCloseMoveDone; // 0x0
        // void CBasePropDoorDoorAutoCloseThink; // 0x0
        // void CBasePropDoorDisableAreaPortalThink; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CBasePropDoor because it is not a standard-layout class
    static_assert(sizeof(CBasePropDoor) == 0xfc8);
};
