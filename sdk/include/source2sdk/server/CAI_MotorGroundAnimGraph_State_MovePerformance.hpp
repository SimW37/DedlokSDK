#pragma once
#include "source2sdk/server/AI_MovePerformance_DynamicSettings_t.hpp"
#include "source2sdk/server/CAI_MotorGroundAnimGraph_State.hpp"
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
    // Size: 0x68
    // Has VTable
    // Has Trivial Destructor
    #pragma pack(push, 1)
    class CAI_MotorGroundAnimGraph_State_MovePerformance : public server::CAI_MotorGroundAnimGraph_State
    {
    public:
        bool m_bWasMovingOffPath; // 0x20        
        bool m_bRepathed; // 0x21        
        [[maybe_unused]] std::uint8_t pad_0x22[0x6]; // 0x22
        CGlobalSymbol m_sHandshake; // 0x28        
        server::AI_MovePerformance_DynamicSettings_t m_dynamicSettings; // 0x30        
        [[maybe_unused]] std::uint8_t pad_0x64[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CAI_MotorGroundAnimGraph_State_MovePerformance because it is not a standard-layout class
    static_assert(sizeof(CAI_MotorGroundAnimGraph_State_MovePerformance) == 0x68);
};
