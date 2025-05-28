#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CitadelAbilityVData.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeCModel.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x16f8
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CCitadel_Ability_Doorman_Wall_VData : public source2sdk::client::CitadelAbilityVData
        {
        public:
            // m_hWallModel has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeCModel>> m_hWallModel;
            char m_hWallModel[0xe0]; // 0x15f0            
            float m_flDistanceAboveGround; // 0x16d0            
            float m_flWallSectionWidth; // 0x16d4            
            float m_flDropDownSpeed; // 0x16d8            
            float m_flClimbHeight; // 0x16dc            
            float m_flStepDownHeight; // 0x16e0            
            float m_flInitialUpwardSpeed; // 0x16e4            
            float m_flWallSectionInitialVerticalOffset; // 0x16e8            
            float m_flTossUpSpeed; // 0x16ec            
            float m_flTossSideSpeed; // 0x16f0            
            uint8_t _pad16f4[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Doorman_Wall_VData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Ability_Doorman_Wall_VData) == 0x16f8);
    };
};
