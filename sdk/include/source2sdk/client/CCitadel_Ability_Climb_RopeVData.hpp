#pragma once
#include "source2sdk/client/CCitadelModifier.hpp"
#include "source2sdk/client/CitadelAbilityVData.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x1668
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CCitadel_Ability_Climb_RopeVData : public client::CitadelAbilityVData
    {
    public:
        float m_flMinButtonHoldTimeToActivate; // 0x15f0        
        float m_flClimbSpeedUp; // 0x15f4        
        float m_flClimbSpeedDown; // 0x15f8        
        float m_flClimbSpeedDownMax; // 0x15fc        
        float m_flClimbDownAccelTime; // 0x1600        
        float m_flLatchSpeed; // 0x1604        
        float m_flAttachOffset; // 0x1608        
        float m_flMinReconnectTime; // 0x160c        
        float m_flSideMoveReduction; // 0x1610        
        float m_flTopOffset; // 0x1614        
        float m_flBottomOffset; // 0x1618        
        float m_flTraceRadiusSize; // 0x161c        
        float m_flStopTimeToShoot; // 0x1620        
        float m_flJumpOffVertical; // 0x1624        
        float m_flJumpOffHorizontal; // 0x1628        
        float m_flDuckOffVertical; // 0x162c        
        float m_flDuckOffHorizontal; // 0x1630        
        float m_flActivateRange; // 0x1634        
        float m_flJumpToRoofRayCheckDist; // 0x1638        
        float m_flMinTimeToRoofCheck; // 0x163c        
        float m_flTimeToHintRefresh; // 0x1640        
        float m_iMaxHintCount; // 0x1644        
        float m_flClimbRopeSlowDurationOnHit; // 0x1648        
        float m_flCameraRotateSpeed; // 0x164c        
        float m_flCameraRotateMaxTime; // 0x1650        
        [[maybe_unused]] std::uint8_t pad_0x1654[0x4]; // 0x1654
        // metadata: MPropertyStartGroup "Modifiers"
        // m_ClimbRopeSlowOnHitModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_ClimbRopeSlowOnHitModifier;
        char m_ClimbRopeSlowOnHitModifier[0x10]; // 0x1658        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_Climb_RopeVData because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_Climb_RopeVData) == 0x1668);
};
