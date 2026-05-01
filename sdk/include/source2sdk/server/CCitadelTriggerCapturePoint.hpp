#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CBaseTrigger.hpp"
#include "source2sdk/server/CCitadelMinimapComponent.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CNPC_Escort;
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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x10e0
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "CCitadelMinimapComponent::Storage_t m_CCitadelMinimapComponent"
        // static metadata: MNetworkVarNames "GameTime_t m_tQueuedEnableTime"
        // static metadata: MNetworkVarNames "float m_flCaptureProgress"
        // static metadata: MNetworkVarNames "int m_nCaptureProgressOwner"
        // static metadata: MNetworkVarNames "int m_nActivelyCapturingTeam"
        // static metadata: MNetworkVarNames "int m_nActiveCapturers"
        // static metadata: MNetworkVarNames "uint8 m_nEnableState"
        #pragma pack(push, 1)
        class CCitadelTriggerCapturePoint : public source2sdk::server::CBaseTrigger
        {
        public:
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "CCitadelMinimapComponent"
            // metadata: MNetworkAlias "CCitadelMinimapComponent"
            // metadata: MNetworkTypeAlias "CCitadelMinimapComponent"
            source2sdk::server::CCitadelMinimapComponent m_CCitadelMinimapComponent; // 0x8d8            
            source2sdk::entity2::CEntityIOOutput m_OnBecomeCapturable; // 0x8f8            
            // m_OnFullyCaptured has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEntityOutputTemplate<std::int32_t> m_OnFullyCaptured;
            char m_OnFullyCaptured[0x20]; // 0x910            
            CUtlSymbolLarge m_iszGroupName; // 0x930            
            source2sdk::client::ParticleIndex_t m_nEnabledParticle; // 0x938            
            source2sdk::client::ParticleIndex_t m_nPreEnableFX; // 0x93c            
            uint8_t _pad0940[0x780]; // 0x940
            // m_hEscort has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CNPC_Escort> m_hEscort;
            char m_hEscort[0x4]; // 0x10c0            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnQueuedEnableTimeChanged"
            source2sdk::entity2::GameTime_t m_tQueuedEnableTime; // 0x10c4            
            // metadata: MNetworkEnable
            float m_flCaptureProgress; // 0x10c8            
            // metadata: MNetworkEnable
            std::int32_t m_nCaptureProgressOwner; // 0x10cc            
            // metadata: MNetworkEnable
            std::int32_t m_nActivelyCapturingTeam; // 0x10d0            
            // metadata: MNetworkEnable
            std::int32_t m_nActiveCapturers; // 0x10d4            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnEnableStateChanged"
            std::uint8_t m_nEnableState; // 0x10d8            
            uint8_t _pad10d9[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadelTriggerCapturePoint because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadelTriggerCapturePoint) == 0x10e0);
    };
};
