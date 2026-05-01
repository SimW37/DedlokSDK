#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
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
        // Size: 0x1048
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "Vector m_vLiftPosition"
        // static metadata: MNetworkVarNames "Vector m_vCrashPosition"
        #pragma pack(push, 1)
        class CCitadel_Ability_PsychicLift : public source2sdk::server::CCitadelBaseAbility
        {
        public:
            uint8_t _pad0f90[0x80]; // 0xf90
            // metadata: MNetworkEnable
            Vector m_vLiftPosition; // 0x1010            
            // metadata: MNetworkEnable
            Vector m_vCrashPosition; // 0x101c            
            uint8_t _pad1028[0x8]; // 0x1028
            // m_vecLiftTargets has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_vecLiftTargets;
            char m_vecLiftTargets[0x18]; // 0x1030            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_PsychicLift because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Ability_PsychicLift) == 0x1048);
    };
};
