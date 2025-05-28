#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ObserverMode_t.hpp"
#include "source2sdk/server/CPlayer_ObserverServices.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBaseEntity;
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
        // Registered alignment: unknown
        // Alignment: 0x4
        // Standard-layout class: false
        // Size: 0x88
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "CHandle< CBaseEntity> m_hOverrideObserverTarget"
        // static metadata: MNetworkVarNames "ObserverMode_t m_iOverrideObserverMode"
        // static metadata: MNetworkVarNames "int32 m_iSecondsAfterDeathToAllowObserving"
        // static metadata: MNetworkVarNames "QAngle m_angTargetCamera"
        // static metadata: MNetworkVarNames "Vector m_vTargetCameraPos"
        #pragma pack(push, 1)
        class CCitadelPlayer_ObserverServices : public source2sdk::server::CPlayer_ObserverServices
        {
        public:
            std::int32_t m_nLastObservedTeam; // 0x50            
            std::int32_t m_nCurrentObservedTeam; // 0x54            
            // m_hLastObserverTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hLastObserverTarget;
            char m_hLastObserverTarget[0x4]; // 0x58            
            // m_hPreviousTeamTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hPreviousTeamTarget;
            char m_hPreviousTeamTarget[0x4]; // 0x5c            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerExclusive"
            // m_hOverrideObserverTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hOverrideObserverTarget;
            char m_hOverrideObserverTarget[0x4]; // 0x60            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerExclusive"
            source2sdk::client::ObserverMode_t m_iOverrideObserverMode; // 0x64            
            // metadata: MNetworkEnable
            std::int32_t m_iSecondsAfterDeathToAllowObserving; // 0x68            
            // metadata: MNetworkEnable
            // metadata: MNetworkEncoder "qangle"
            // metadata: MNetworkUserGroup "LocalPlayerExclusive"
            // metadata: MNetworkBitCount "11"
            // metadata: MNetworkPriority "32"
            QAngle m_angTargetCamera; // 0x6c            
            // metadata: MNetworkEnable
            // metadata: MNetworkEncoder "coord"
            // metadata: MNetworkUserGroup "LocalPlayerExclusive"
            // metadata: MNetworkPriority "32"
            Vector m_vTargetCameraPos; // 0x78            
            uint8_t _pad0084[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadelPlayer_ObserverServices because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadelPlayer_ObserverServices) == 0x88);
    };
};
