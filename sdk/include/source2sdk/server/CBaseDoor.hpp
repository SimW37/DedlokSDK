#pragma once
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/server/CBaseToggle.hpp"
#include "source2sdk/server/FuncDoorSpawnPos_t.hpp"
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
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xa60
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "bool m_bIsUsable"
    #pragma pack(push, 1)
    class CBaseDoor : public server::CBaseToggle
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x850[0x10]; // 0x850
        QAngle m_angMoveEntitySpace; // 0x860        
        Vector m_vecMoveDirParentSpace; // 0x86c        
        server::locksound_t m_ls; // 0x878        
        bool m_bForceClosed; // 0x898        
        bool m_bDoorGroup; // 0x899        
        bool m_bLocked; // 0x89a        
        bool m_bIgnoreDebris; // 0x89b        
        bool m_bNoNPCs; // 0x89c        
        [[maybe_unused]] std::uint8_t pad_0x89d[0x3]; // 0x89d
        server::FuncDoorSpawnPos_t m_eSpawnPosition; // 0x8a0        
        float m_flBlockDamage; // 0x8a4        
        CUtlSymbolLarge m_NoiseMoving; // 0x8a8        
        CUtlSymbolLarge m_NoiseArrived; // 0x8b0        
        CUtlSymbolLarge m_NoiseMovingClosed; // 0x8b8        
        CUtlSymbolLarge m_NoiseArrivedClosed; // 0x8c0        
        CUtlSymbolLarge m_ChainTarget; // 0x8c8        
        entity2::CEntityIOOutput m_OnBlockedClosing; // 0x8d0        
        entity2::CEntityIOOutput m_OnBlockedOpening; // 0x8f8        
        entity2::CEntityIOOutput m_OnUnblockedClosing; // 0x920        
        entity2::CEntityIOOutput m_OnUnblockedOpening; // 0x948        
        entity2::CEntityIOOutput m_OnFullyClosed; // 0x970        
        entity2::CEntityIOOutput m_OnFullyOpen; // 0x998        
        entity2::CEntityIOOutput m_OnClose; // 0x9c0        
        entity2::CEntityIOOutput m_OnOpen; // 0x9e8        
        entity2::CEntityIOOutput m_OnLockedUse; // 0xa10        
        bool m_bLoopMoveSound; // 0xa38        
        [[maybe_unused]] std::uint8_t pad_0xa39[0x1f]; // 0xa39
        bool m_bCreateNavObstacle; // 0xa58        
        bool m_isChaining; // 0xa59        
        // metadata: MNetworkEnable
        bool m_bIsUsable; // 0xa5a        
        [[maybe_unused]] std::uint8_t pad_0xa5b[0x5];
        
        // Datamap fields:
        // void m_nMovingSoundGUID; // 0xa3c
        //  m_ls.sLockedSound; // 0x880
        //  m_ls.sUnlockedSound; // 0x888
        // void InputOpen; // 0x0
        // void InputClose; // 0x0
        // void InputToggle; // 0x0
        // void InputLock; // 0x0
        // void InputUnlock; // 0x0
        // float InputSetSpeed; // 0x0
        // float InputSetToggleState; // 0x0
        // bool InputSetNoNPCs; // 0x0
        // void CBaseDoorDoorTouch; // 0x0
        // void CBaseDoorDoorGoUp; // 0x0
        // void CBaseDoorDoorGoDown; // 0x0
        // void CBaseDoorDoorHitTop; // 0x0
        // void CBaseDoorDoorHitBottom; // 0x0
        // void CBaseDoorMovingSoundThink; // 0x0
        // void CBaseDoorCloseAreaPortalsThink; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CBaseDoor because it is not a standard-layout class
    static_assert(sizeof(CBaseDoor) == 0xa60);
};
