#pragma once
#include "source2sdk/client/CFloatExponentialMovingAverage.hpp"
#include "source2sdk/server/AI_MotorGroundAnimGraph_Flags_t.hpp"
#include "source2sdk/server/CAI_MotorGroundAnimGraph_State_Custom.hpp"
#include "source2sdk/server/CAI_MotorGroundAnimGraph_State_Hop.hpp"
#include "source2sdk/server/CAI_MotorGroundAnimGraph_State_Idle.hpp"
#include "source2sdk/server/CAI_MotorGroundAnimGraph_State_IdleTurn.hpp"
#include "source2sdk/server/CAI_MotorGroundAnimGraph_State_InstantStop.hpp"
#include "source2sdk/server/CAI_MotorGroundAnimGraph_State_Loop.hpp"
#include "source2sdk/server/CAI_MotorGroundAnimGraph_State_Other.hpp"
#include "source2sdk/server/CAI_MotorGroundAnimGraph_State_PlantedTurn.hpp"
#include "source2sdk/server/CAI_MotorGroundAnimGraph_State_Start.hpp"
#include "source2sdk/server/CAI_MotorGroundAnimGraph_State_Stop.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x320
    #pragma pack(push, 1)
    class CAI_MotorGroundAnimGraph
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x00[0x10]; // 0x0
        server::CAI_MotorGroundAnimGraph_State_Idle m_stateIdle; // 0x10        
        server::CAI_MotorGroundAnimGraph_State_IdleTurn m_stateIdleTurn; // 0x30        
        server::CAI_MotorGroundAnimGraph_State_Loop m_stateLoop; // 0x78        
        server::CAI_MotorGroundAnimGraph_State_Start m_stateStart; // 0xa0        
        server::CAI_MotorGroundAnimGraph_State_Stop m_stateStop; // 0xc8        
        server::CAI_MotorGroundAnimGraph_State_InstantStop m_stateInstantStop; // 0x120        
        server::CAI_MotorGroundAnimGraph_State_Hop m_stateHop; // 0x178        
        server::CAI_MotorGroundAnimGraph_State_Custom m_stateCustom; // 0x1d0        
        server::CAI_MotorGroundAnimGraph_State_PlantedTurn m_statePlantedTurn; // 0x248        
        server::CAI_MotorGroundAnimGraph_State_Other m_stateOther; // 0x270        
        [[maybe_unused]] std::uint8_t pad_0x290[0x18]; // 0x290
        int32_t m_nCurrentState; // 0x2a8        
        float m_flDistanceCoveredInCurrentState; // 0x2ac        
        bool m_bEnableStop; // 0x2b0        
        bool m_bEnableStart; // 0x2b1        
        bool m_bHadPath; // 0x2b2        
        bool m_bEnableAdvancedFeatures; // 0x2b3        
        server::AI_MotorGroundAnimGraph_Flags_t m_eFlags; // 0x2b4        
        Vector m_vPreviousPosition; // 0x2b8        
        [[maybe_unused]] std::uint8_t pad_0x2c4[0x4]; // 0x2c4
        float m_flCurrentLean; // 0x2c8        
        RotationVector m_vDesiredMovementHeadingChangeVelocity; // 0x2cc        
        client::CFloatExponentialMovingAverage m_smoothedDesiredMoveHeading; // 0x2d8        
        [[maybe_unused]] std::uint8_t pad_0x2ec[0x34];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CAI_MotorGroundAnimGraph because it is not a standard-layout class
    static_assert(sizeof(CAI_MotorGroundAnimGraph) == 0x320);
};
