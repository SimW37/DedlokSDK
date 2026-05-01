#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/modellib/AttachmentHandle_t.hpp"
#include "source2sdk/server/CCitadelBaseAbilityServerOnly.hpp"
#include "source2sdk/server/CCitadelModifier.hpp"

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
        // Size: 0x1030
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Ability_Tier2Boss_LaserBeam : public source2sdk::server::CCitadelBaseAbilityServerOnly
        {
        public:
            uint8_t _pad0f90[0x80]; // 0xf90
            source2sdk::modellib::AttachmentHandle_t m_hAttackPosHigh; // 0x1010            
            source2sdk::modellib::AttachmentHandle_t m_hAttackPosLow; // 0x1011            
            source2sdk::modellib::AttachmentHandle_t m_hAttackPosLeft; // 0x1012            
            source2sdk::modellib::AttachmentHandle_t m_hAttackPosRight; // 0x1013            
            source2sdk::entity2::GameTime_t m_tCastCompleteTime; // 0x1014            
            // m_pBeamModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CModifierHandleTyped<source2sdk::server::CCitadelModifier> m_pBeamModifier;
            char m_pBeamModifier[0x18]; // 0x1018            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Tier2Boss_LaserBeam because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Ability_Tier2Boss_LaserBeam) == 0x1030);
    };
};
