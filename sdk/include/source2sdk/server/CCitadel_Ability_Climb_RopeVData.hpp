#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CCitadelModifier.hpp"
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
        // Size: 0x16a0
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CCitadel_Ability_Climb_RopeVData : public source2sdk::server::CitadelAbilityVData
        {
        public:
            float m_flMinButtonHoldTimeToActivate; // 0x1618            
            float m_flClimbSpeedUp; // 0x161c            
            float m_flClimbSpeedDown; // 0x1620            
            float m_flClimbSpeedDownMax; // 0x1624            
            float m_flClimbDownAccelTime; // 0x1628            
            float m_flLatchSpeed; // 0x162c            
            float m_flAttachOffset; // 0x1630            
            float m_flMinReconnectTime; // 0x1634            
            float m_flSideMoveReduction; // 0x1638            
            float m_flTopOffset; // 0x163c            
            float m_flBottomOffset; // 0x1640            
            float m_flTraceRadiusSize; // 0x1644            
            float m_flStopTimeToShoot; // 0x1648            
            float m_flJumpOffVertical; // 0x164c            
            float m_flJumpOffHorizontal; // 0x1650            
            float m_flDuckOffVertical; // 0x1654            
            float m_flDuckOffHorizontal; // 0x1658            
            float m_flActivateRange; // 0x165c            
            float m_flJumpToRoofRayCheckDist; // 0x1660            
            float m_flMinTimeToRoofCheck; // 0x1664            
            float m_flTimeToHintRefresh; // 0x1668            
            float m_iMaxHintCount; // 0x166c            
            float m_flClimbRopeSlowDurationOnHit; // 0x1670            
            float m_flCameraRotateSpeed; // 0x1674            
            float m_flCameraRotateMaxTime; // 0x1678            
            uint8_t _pad167c[0x4]; // 0x167c
            // metadata: MPropertyStartGroup "Modifiers"
            // m_ClimbRopeSlowOnHitModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CCitadelModifier> m_ClimbRopeSlowOnHitModifier;
            char m_ClimbRopeSlowOnHitModifier[0x10]; // 0x1680            
            // m_ClimbRopeSlowFromRecentDamageModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CCitadelModifier> m_ClimbRopeSlowFromRecentDamageModifier;
            char m_ClimbRopeSlowFromRecentDamageModifier[0x10]; // 0x1690            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Climb_RopeVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Ability_Climb_RopeVData) == 0x16a0);
    };
};
