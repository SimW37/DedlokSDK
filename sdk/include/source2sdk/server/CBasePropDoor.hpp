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
    // Size: 0x1020
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
        [[maybe_unused]] std::uint8_t pad_0xd88[0x10]; // 0xd88
        float m_flAutoReturnDelay; // 0xd98        
        [[maybe_unused]] std::uint8_t pad_0xd9c[0x4]; // 0xd9c
        // m_hDoorList has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBasePropDoor>> m_hDoorList;
        char m_hDoorList[0x18]; // 0xda0        
        int32_t m_nHardwareType; // 0xdb8        
        bool m_bNeedsHardware; // 0xdbc        
        [[maybe_unused]] std::uint8_t pad_0xdbd[0x3]; // 0xdbd
        // metadata: MNetworkEnable
        client::DoorState_t m_eDoorState; // 0xdc0        
        // metadata: MNetworkEnable
        bool m_bLocked; // 0xdc4        
        // metadata: MNetworkEnable
        bool m_bNoNPCs; // 0xdc5        
        [[maybe_unused]] std::uint8_t pad_0xdc6[0x2]; // 0xdc6
        // metadata: MNetworkEnable
        Vector m_closedPosition; // 0xdc8        
        // metadata: MNetworkEnable
        QAngle m_closedAngles; // 0xdd4        
        // m_hBlocker has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hBlocker;
        char m_hBlocker[0x4]; // 0xde0        
        bool m_bFirstBlocked; // 0xde4        
        [[maybe_unused]] std::uint8_t pad_0xde5[0x3]; // 0xde5
        server::locksound_t m_ls; // 0xde8        
        bool m_bForceClosed; // 0xe08        
        [[maybe_unused]] std::uint8_t pad_0xe09[0x3]; // 0xe09
        Vector m_vecLatchWorldPosition; // 0xe0c        
        // m_hActivator has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hActivator;
        char m_hActivator[0x4]; // 0xe18        
        [[maybe_unused]] std::uint8_t pad_0xe1c[0x14]; // 0xe1c
        CUtlSymbolLarge m_SoundMoving; // 0xe30        
        CUtlSymbolLarge m_SoundOpen; // 0xe38        
        CUtlSymbolLarge m_SoundClose; // 0xe40        
        CUtlSymbolLarge m_SoundLock; // 0xe48        
        CUtlSymbolLarge m_SoundUnlock; // 0xe50        
        CUtlSymbolLarge m_SoundLatch; // 0xe58        
        CUtlSymbolLarge m_SoundPound; // 0xe60        
        CUtlSymbolLarge m_SoundJiggle; // 0xe68        
        CUtlSymbolLarge m_SoundLockedAnim; // 0xe70        
        int32_t m_numCloseAttempts; // 0xe78        
        CUtlStringToken m_nPhysicsMaterial; // 0xe7c        
        CUtlSymbolLarge m_SlaveName; // 0xe80        
        // metadata: MNetworkEnable
        // m_hMaster has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBasePropDoor> m_hMaster;
        char m_hMaster[0x4]; // 0xe88        
        [[maybe_unused]] std::uint8_t pad_0xe8c[0x4]; // 0xe8c
        entity2::CEntityIOOutput m_OnBlockedClosing; // 0xe90        
        entity2::CEntityIOOutput m_OnBlockedOpening; // 0xeb8        
        entity2::CEntityIOOutput m_OnUnblockedClosing; // 0xee0        
        entity2::CEntityIOOutput m_OnUnblockedOpening; // 0xf08        
        entity2::CEntityIOOutput m_OnFullyClosed; // 0xf30        
        entity2::CEntityIOOutput m_OnFullyOpen; // 0xf58        
        entity2::CEntityIOOutput m_OnClose; // 0xf80        
        entity2::CEntityIOOutput m_OnOpen; // 0xfa8        
        entity2::CEntityIOOutput m_OnLockedUse; // 0xfd0        
        entity2::CEntityIOOutput m_OnAjarOpen; // 0xff8        
        
        // Datamap fields:
        // void m_hSoundMoving; // 0xe1c
        //  m_ls.sLockedSound; // 0xdf0
        //  m_ls.sUnlockedSound; // 0xdf8
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
    static_assert(sizeof(CBasePropDoor) == 0x1020);
};
