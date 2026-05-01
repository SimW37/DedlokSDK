#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CCitadelBaseAbility.hpp"
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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x11c0
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "EHANDLE m_hTeleportTarget"
        // static metadata: MNetworkVarNames "bool m_bTeleported"
        // static metadata: MNetworkVarNames "QAngle m_qPostTeleportAngles"
        #pragma pack(push, 1)
        class CAbility_Drifter_ShadowMark : public source2sdk::server::CCitadelBaseAbility
        {
        public:
            Vector m_vLastValidTeleportPosition; // 0xf90            
            // metadata: MNetworkEnable
            // m_hTeleportTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hTeleportTarget;
            char m_hTeleportTarget[0x4]; // 0xf9c            
            // metadata: MNetworkEnable
            bool m_bTeleported; // 0xfa0            
            uint8_t _pad0fa1[0x3]; // 0xfa1
            // metadata: MNetworkEnable
            // metadata: MNetworkEncoder "qangle"
            // metadata: MNetworkChangeCallback "OnTeleportAnglesChanged"
            QAngle m_qPostTeleportAngles; // 0xfa4            
            uint8_t _pad0fb0[0x4]; // 0xfb0
            source2sdk::entity2::GameTime_t m_flExpireTime; // 0xfb4            
            source2sdk::entity2::GameTime_t m_flTeleportedTime; // 0xfb8            
            uint8_t _pad0fbc[0x204];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CAbility_Drifter_ShadowMark because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CAbility_Drifter_ShadowMark) == 0x11c0);
    };
};
