#pragma once
#include "source2sdk/client/CRemapFloat.hpp"
#include "source2sdk/client/CitadelAbilityVData.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
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
    // Size: 0x1930
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CAbilityJumpVData : public client::CitadelAbilityVData
    {
    public:
        float m_flShootingLockoutAfterJump; // 0x15c8        
        [[maybe_unused]] std::uint8_t pad_0x15cc[0x4]; // 0x15cc
        // metadata: MPropertyStartGroup "Visuals"
        // m_DashJumpParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_DashJumpParticle;
        char m_DashJumpParticle[0xe0]; // 0x15d0        
        // m_AirJumpParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_AirJumpParticle;
        char m_AirJumpParticle[0xe0]; // 0x16b0        
        // m_WallJumpParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_WallJumpParticle;
        char m_WallJumpParticle[0xe0]; // 0x1790        
        // metadata: MPropertyStartGroup "Air Jump"
        CSoundEventName m_AirJumpExecutedSound; // 0x1870        
        float m_flMantleRefundWindow; // 0x1880        
        float m_flZiplineRefundWindow; // 0x1884        
        float m_flLateJumpGraceWindow; // 0x1888        
        // metadata: MPropertyDescription "The most we'll adjust your speed in the input direction when performing an air jump"
        float m_flMaxSpeedDelta; // 0x188c        
        // metadata: MPropertyStartGroup "Roll Jump"
        CSoundEventName m_strDashJumpActivate; // 0x1890        
        float m_flDashJumpStartTime; // 0x18a0        
        float m_flDashJumpEndTime; // 0x18a4        
        // metadata: MPropertyDescription "How far a dash jump will send you forward.  This is on top of the ~8m already traveled by the dash."
        float m_flDashJumpDistanceInMeters; // 0x18a8        
        [[maybe_unused]] std::uint8_t pad_0x18ac[0x4]; // 0x18ac
        float m_flDashJumpVerticalSpeed; // 0x18b0        
        float m_flDashJumpMissMaxSpeed; // 0x18b4        
        float m_flDashJumpMantleDisableTime; // 0x18b8        
        [[maybe_unused]] std::uint8_t pad_0x18bc[0x4]; // 0x18bc
        // metadata: MPropertyStartGroup "Wall Jump"
        CSoundEventName m_WallJumpExecutedSound; // 0x18c0        
        // metadata: MPropertyDescription "How far we'll trace to see if the wall we collided with is close enough to trigger a wall jump"
        float m_flCollidedWallMaxDist; // 0x18d0        
        // metadata: MPropertyDescription "How far we'll trace using the player's velocity to find a wall to jump off of"
        client::CRemapFloat m_flRemapSpeedToWallJumpVelocityDist; // 0x18d4        
        // metadata: MPropertyDescription "Speed to apply away from the wall"
        float m_flWallJumpNormalSpeed; // 0x18e4        
        // metadata: MPropertyDescription "Air-Drag after using a wall jump"
        CPiecewiseCurve m_WallJumpAirDragCurve; // 0x18e8        
        // metadata: MPropertyDescription "How much player input can steer the velocity relative to the wall normal"
        float m_flMaxWallYawOffset; // 0x1928        
        [[maybe_unused]] std::uint8_t pad_0x192c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CAbilityJumpVData because it is not a standard-layout class
    static_assert(sizeof(CAbilityJumpVData) == 0x1930);
};
