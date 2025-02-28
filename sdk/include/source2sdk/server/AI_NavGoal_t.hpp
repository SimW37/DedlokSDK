#pragma once
#include "source2sdk/client/StanceType_t.hpp"
#include "source2sdk/server/AI_NavGoalFlags_t.hpp"
#include "source2sdk/server/GoalType_t.hpp"
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
    // Standard-layout class: true
    // Size: 0x80
    #pragma pack(push, 1)
    struct AI_NavGoal_t
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x00[0x18]; // 0x0
        server::GoalType_t m_type; // 0x18        
        Vector m_vDest; // 0x1c        
        float m_flTolerance; // 0x28        
        float m_flPathEndGoalRange; // 0x2c        
        float m_flPathEndGoalRange_Repathing; // 0x30        
        server::AI_NavGoalFlags_t m_goalFlags; // 0x34        
        // m_pTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_pTarget;
        char m_pTarget[0x4]; // 0x38        
        Vector m_vThreatPos; // 0x3c        
        float m_flMaxPathLength; // 0x48        
        float m_flMaxTravelDist; // 0x4c        
        float m_flMaxTravelDistAdditionalFromRepath; // 0x50        
        Vector m_vLimitRefPos; // 0x54        
        CUtlString m_markupTagRequired; // 0x60        
        Vector m_vArrivalDirection; // 0x68        
        float m_flArrivalDirectionToleranceDot; // 0x74        
        client::StanceType_t m_eArrivalStance; // 0x78        
        float m_flArrivalFlyingSpeedScale; // 0x7c        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(AI_NavGoal_t, m_type) == 0x18);
    static_assert(offsetof(AI_NavGoal_t, m_vDest) == 0x1c);
    static_assert(offsetof(AI_NavGoal_t, m_flTolerance) == 0x28);
    static_assert(offsetof(AI_NavGoal_t, m_flPathEndGoalRange) == 0x2c);
    static_assert(offsetof(AI_NavGoal_t, m_flPathEndGoalRange_Repathing) == 0x30);
    static_assert(offsetof(AI_NavGoal_t, m_goalFlags) == 0x34);
    static_assert(offsetof(AI_NavGoal_t, m_pTarget) == 0x38);
    static_assert(offsetof(AI_NavGoal_t, m_vThreatPos) == 0x3c);
    static_assert(offsetof(AI_NavGoal_t, m_flMaxPathLength) == 0x48);
    static_assert(offsetof(AI_NavGoal_t, m_flMaxTravelDist) == 0x4c);
    static_assert(offsetof(AI_NavGoal_t, m_flMaxTravelDistAdditionalFromRepath) == 0x50);
    static_assert(offsetof(AI_NavGoal_t, m_vLimitRefPos) == 0x54);
    static_assert(offsetof(AI_NavGoal_t, m_markupTagRequired) == 0x60);
    static_assert(offsetof(AI_NavGoal_t, m_vArrivalDirection) == 0x68);
    static_assert(offsetof(AI_NavGoal_t, m_flArrivalDirectionToleranceDot) == 0x74);
    static_assert(offsetof(AI_NavGoal_t, m_eArrivalStance) == 0x78);
    static_assert(offsetof(AI_NavGoal_t, m_flArrivalFlyingSpeedScale) == 0x7c);
    
    static_assert(sizeof(AI_NavGoal_t) == 0x80);
};
