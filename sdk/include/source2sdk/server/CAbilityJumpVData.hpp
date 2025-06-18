#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CRemapFloat.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "source2sdk/server/CitadelAbilityVData.hpp"

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
        // Size: 0x19d0
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CAbilityJumpVData : public source2sdk::server::CitadelAbilityVData
        {
        public:
            float m_flShootingLockoutAfterJump; // 0x15e8            
            uint8_t _pad15ec[0x4]; // 0x15ec
            // metadata: MPropertyStartGroup "Visuals"
            // m_DashJumpParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_DashJumpParticle;
            char m_DashJumpParticle[0xe0]; // 0x15f0            
            // m_AirJumpParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_AirJumpParticle;
            char m_AirJumpParticle[0xe0]; // 0x16d0            
            // m_WallJumpParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_WallJumpParticle;
            char m_WallJumpParticle[0xe0]; // 0x17b0            
            // metadata: MPropertyGroupName "Sounds"
            CSoundEventName m_GroundJumpExecutedSound; // 0x1890            
            // metadata: MPropertyGroupName "Sounds"
            CSoundEventName m_AirJumpExecutedSound; // 0x18a0            
            // metadata: MPropertyStartGroup "Air Jump"
            float m_flMantleRefundWindow; // 0x18b0            
            float m_flZiplineRefundWindow; // 0x18b4            
            float m_flLateJumpGraceWindow; // 0x18b8            
            // metadata: MPropertyDescription "The most we'll adjust your speed in the input direction when performing an air jump"
            float m_flMaxSpeedDelta; // 0x18bc            
            // metadata: MPropertyGroupName "Sounds"
            CSoundEventName m_strDashJumpActivate; // 0x18c0            
            // metadata: MPropertyStartGroup "Roll Jump"
            float m_flDashJumpStartTime; // 0x18d0            
            float m_flDashJumpEndTime; // 0x18d4            
            // metadata: MPropertyDescription "How far a dash jump will send you forward.  This is on top of the ~8m already traveled by the dash."
            float m_flDashJumpDistanceInMeters; // 0x18d8            
            uint8_t _pad18dc[0x4]; // 0x18dc
            float m_flDashJumpVerticalSpeed; // 0x18e0            
            float m_flDashJumpMissMaxSpeed; // 0x18e4            
            float m_flDashJumpMantleDisableTime; // 0x18e8            
            uint8_t _pad18ec[0x4]; // 0x18ec
            // metadata: MPropertyStartGroup "Wall Jump"
            // metadata: MPropertyDescription "Basic wall jump sound"
            CSoundEventName m_WallJumpExecutedSound; // 0x18f0            
            // metadata: MPropertyDescription "Corner Boost sound - a tricky to execute wall jump, off of an upward turned collision contact"
            CSoundEventName m_CornerBoostExecutedSound; // 0x1900            
            // metadata: MPropertyDescription "How far we'll trace to see if the wall we collided with is close enough to trigger a wall jump"
            float m_flCollidedWallMaxDist; // 0x1910            
            // metadata: MPropertyDescription "How far we'll trace using the player's velocity to find a wall to jump off of"
            source2sdk::client::CRemapFloat m_flRemapSpeedToWallJumpVelocityDist; // 0x1914            
            uint8_t _pad1924[0x4]; // 0x1924
            // metadata: MPropertyDescription "Air-Drag after using a wall jump"
            CPiecewiseCurve m_WallJumpAirDragCurve; // 0x1928            
            // metadata: MPropertyDescription "Fatigue recovery: How long after the last wall jump does it take to recover a full wall jump. Seconds."
            float m_flWallJumpFullPowerRechargeTime; // 0x1968            
            // metadata: MPropertyDescription "Smallest possible fraction of a full wall jump you can perform regardless of really small times since last button press."
            float m_flWallJumpPowerMin; // 0x196c            
            // metadata: MPropertyDescription "How much does fatigue affect the power of the wall jump. 0.0 = aggressive (full power earlier) 0.5 = linear. 1.0 = gentle (full power later)"
            float m_flWallJumpPowerBias; // 0x1970            
            // metadata: MPropertyDescription "How much vertical speed do we give the player, before fatigue is applied. Fatigue only applies to vertical speed."
            float m_flWallJumpUpSpeed; // 0x1974            
            // metadata: MPropertyDescription "Extra velocity along the wall, either direction, based on wish direction."
            float m_flWallJumpMaxLateralSpeed; // 0x1978            
            uint8_t _pad197c[0x4]; // 0x197c
            // metadata: MPropertyDescription "How does the power of 'Wall Jump Max Lateral Speed' fall off with speed along the wall (so that players can't stack this speed forever). X axis is speed along the wall in meters per second (using METERS_PER_INCH). Values from this curve are clamped to 0..1 output. "
            CPiecewiseCurve m_WallJumpLateralSpeedFalloffVsAlongSpeed; // 0x1980            
            // metadata: MPropertyDescription "Velocity away from the wall when pressing wish direction toward the wall"
            float m_flWallJumpMinOutSpeed; // 0x19c0            
            // metadata: MPropertyDescription "Velocity away from the wall when pressing wish direction away from the wall"
            float m_flWallJumpMaxOutSpeed; // 0x19c4            
            // metadata: MPropertyDescription "Shortly after a wall jump, acceleration back toward the wall is increased. This is the period this exists for. Strength fades over this time to zero."
            float m_flWallJumpLateralInputSuppressTime; // 0x19c8            
            // metadata: MPropertyDescription "Shortly after a wall jump, acceleration back toward the wall is increased. This is the maximum bonus (immediately after the wall jump). "
            float m_flWallJumpReturnToWallBonusAccel; // 0x19cc            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CAbilityJumpVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CAbilityJumpVData) == 0x19d0);
    };
};
