#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/server/CBaseToggle.hpp"
#include "source2sdk/server/MoveLinearAuthoredPos_t.hpp"

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
        // Size: 0x880
        // Has VTable
        // 
        // static metadata: MNetworkIncludeByName "m_fFlags"
        // static metadata: MNetworkIncludeByName "m_vecVelocity"
        // static metadata: MNetworkOverride "m_fFlags CBaseEntity"
        #pragma pack(push, 1)
        class CFuncMoveLinear : public source2sdk::server::CBaseToggle
        {
        public:
            source2sdk::server::MoveLinearAuthoredPos_t m_authoredPosition; // 0x7f8            
            QAngle m_angMoveEntitySpace; // 0x7fc            
            Vector m_vecMoveDirParentSpace; // 0x808            
            uint8_t _pad0814[0x4]; // 0x814
            CUtlSymbolLarge m_soundStart; // 0x818            
            CUtlSymbolLarge m_soundStop; // 0x820            
            CUtlSymbolLarge m_currentSound; // 0x828            
            float m_flBlockDamage; // 0x830            
            float m_flStartPosition; // 0x834            
            uint8_t _pad0838[0x8]; // 0x838
            source2sdk::entity2::CEntityIOOutput m_OnFullyOpen; // 0x840            
            source2sdk::entity2::CEntityIOOutput m_OnFullyClosed; // 0x858            
            bool m_bCreateMovableNavMesh; // 0x870            
            bool m_bAllowMovableNavMeshDockingOnEntireEntity; // 0x871            
            bool m_bCreateNavObstacle; // 0x872            
            uint8_t _pad0873[0xd];
            
            // Datamap fields:
            // bool movewithoutpushingblockers; // 0x7fffffff
            // void CFuncMoveLinearNavObstacleThink; // 0x0
            // void CFuncMoveLinearNavMovableThink; // 0x0
            // void InputOpen; // 0x0
            // void InputClose; // 0x0
            // float InputSetPosition; // 0x0
            // float InputSetSpeed; // 0x0
            // CUtlSymbolLarge InputTeleportToTarget; // 0x0
            // float InputResetPosition; // 0x0
            // float InputSetMoveDistanceFromStart; // 0x0
            // float InputSetMoveDistanceFromEnd; // 0x0
            // void CFuncMoveLinearStopMoveSound; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CFuncMoveLinear because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CFuncMoveLinear) == 0x880);
    };
};
