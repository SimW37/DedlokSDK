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
        // Size: 0xcc8
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "EHANDLE m_hTeleportTarget"
        // static metadata: MNetworkVarNames "bool m_bTeleported"
        // static metadata: MNetworkVarNames "QAngle m_qPostTeleportAngles"
        #pragma pack(push, 1)
        class CAbility_Drifter_ShadowMark : public source2sdk::server::CCitadelBaseAbility
        {
        public:
            Vector m_vLastValidTeleportPosition; // 0xb98            
            // metadata: MNetworkEnable
            // m_hTeleportTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hTeleportTarget;
            char m_hTeleportTarget[0x4]; // 0xba4            
            // metadata: MNetworkEnable
            bool m_bTeleported; // 0xba8            
            uint8_t _pad0ba9[0x3]; // 0xba9
            // metadata: MNetworkEnable
            // metadata: MNetworkEncoder "qangle"
            // metadata: MNetworkChangeCallback "OnTeleportAnglesChanged"
            QAngle m_qPostTeleportAngles; // 0xbac            
            uint8_t _pad0bb8[0x4]; // 0xbb8
            source2sdk::entity2::GameTime_t m_flExpireTime; // 0xbbc            
            source2sdk::entity2::GameTime_t m_flTeleportedTime; // 0xbc0            
            uint8_t _pad0bc4[0x104];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CAbility_Drifter_ShadowMark because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CAbility_Drifter_ShadowMark) == 0xcc8);
    };
};
