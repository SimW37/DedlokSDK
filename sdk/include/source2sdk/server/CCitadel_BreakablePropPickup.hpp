#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CBaseAnimGraph.hpp"
#include "source2sdk/server/CCitadelMinimapComponent.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CCitadelPlayerPawn;
    };
};

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x10
        // Alignment: 0x10
        // Standard-layout class: false
        // Size: 0xb20
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "CCitadelMinimapComponent::Storage_t m_CCitadelMinimapComponent"
        // static metadata: MNetworkVarNames "bool m_bActive"
        // static metadata: MNetworkVarNames "CUtlString m_sPickupName"
        // static metadata: MNetworkVarNames "int m_nNameOffset"
        // static metadata: MNetworkVarNames "CUtlString m_sAmbientNoise"
        // static metadata: MNetworkVarNames "Vector m_vVacuumStartPos"
        // static metadata: MNetworkVarNames "Vector m_vInitialVacuumVel"
        // static metadata: MNetworkVarNames "CHandle< CCitadelPlayerPawn> m_hVacuumTarget"
        #pragma pack(push, 1)
        class CCitadel_BreakablePropPickup : public source2sdk::server::CBaseAnimGraph
        {
        public:
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "CCitadelMinimapComponent"
            // metadata: MNetworkAlias "CCitadelMinimapComponent"
            // metadata: MNetworkTypeAlias "CCitadelMinimapComponent"
            source2sdk::server::CCitadelMinimapComponent m_CCitadelMinimapComponent; // 0xa80            
            // metadata: MNetworkEnable
            bool m_bActive; // 0xaa0            
            uint8_t _pad0aa1[0x7]; // 0xaa1
            // metadata: MNetworkEnable
            CUtlString m_sPickupName; // 0xaa8            
            // metadata: MNetworkEnable
            std::int32_t m_nNameOffset; // 0xab0            
            uint8_t _pad0ab4[0x4]; // 0xab4
            // metadata: MNetworkEnable
            CUtlString m_sAmbientNoise; // 0xab8            
            // metadata: MNetworkEnable
            Vector m_vVacuumStartPos; // 0xac0            
            // metadata: MNetworkEnable
            Vector m_vInitialVacuumVel; // 0xacc            
            // metadata: MNetworkEnable
            // m_hVacuumTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CCitadelPlayerPawn> m_hVacuumTarget;
            char m_hVacuumTarget[0x4]; // 0xad8            
            uint8_t _pad0adc[0x10]; // 0xadc
            VectorWS m_vVacuumPos; // 0xaec            
            source2sdk::entity2::GameTime_t m_flVacuumStartTime; // 0xaf8            
            Vector m_vImpactVel; // 0xafc            
            Vector m_vImpactPos; // 0xb08            
            source2sdk::entity2::GameTime_t m_flImpactTime; // 0xb14            
            uint8_t _pad0b18[0x8];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_BreakablePropPickup because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_BreakablePropPickup) == 0xb20);
    };
};
