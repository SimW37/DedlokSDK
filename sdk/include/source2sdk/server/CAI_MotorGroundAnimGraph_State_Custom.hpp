#pragma once
#include "source2sdk/server/AI_CustomMoveRequest.hpp"
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
    // Size: 0x78
    // Has VTable
    // Has Trivial Destructor
    #pragma pack(push, 1)
    class CAI_MotorGroundAnimGraph_State_Custom : public server::CAI_MotorGroundAnimGraph_State
    {
    public:
        bool m_bFromMovement; // 0x20        
        bool m_bWasMovingOffPath; // 0x21        
        bool m_bRepathed; // 0x22        
        [[maybe_unused]] std::uint8_t pad_0x23[0x5]; // 0x23
        server::AI_CustomMoveRequest m_request; // 0x28        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CAI_MotorGroundAnimGraph_State_Custom because it is not a standard-layout class
    static_assert(sizeof(CAI_MotorGroundAnimGraph_State_Custom) == 0x78);
};
