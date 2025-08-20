#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_CitadelBaseAbility.hpp"
#include "source2sdk/client/HeroID_t.hpp"
#include "source2sdk/client/ModelChange_t.hpp"
namespace source2sdk
{
    namespace client
    {
        struct C_CitadelBaseAbility;
    };
};

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
        // Size: 0x1060
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "bool m_bHasUsedCopiedUlt"
        // static metadata: MNetworkVarNames "bool m_bHasCopiedUlt"
        // static metadata: MNetworkVarNames "bool m_bIsModelSwapped"
        // static metadata: MNetworkVarNames "CHandle< CCitadelBaseAbility> m_pCopyUltimateAbility"
        // static metadata: MNetworkVarNames "HeroID_t m_nCopiedHeroID"
        #pragma pack(push, 1)
        class CCitadel_Ability_Magician_CopyUlt : public source2sdk::client::C_CitadelBaseAbility
        {
        public:
            uint8_t _pad0d88[0x100]; // 0xd88
            // metadata: MNetworkEnable
            bool m_bHasUsedCopiedUlt; // 0xe88            
            // metadata: MNetworkEnable
            bool m_bHasCopiedUlt; // 0xe89            
            // metadata: MNetworkEnable
            bool m_bIsModelSwapped; // 0xe8a            
            uint8_t _pad0e8b[0x1]; // 0xe8b
            // metadata: MNetworkEnable
            // m_pCopyUltimateAbility has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_CitadelBaseAbility> m_pCopyUltimateAbility;
            char m_pCopyUltimateAbility[0x4]; // 0xe8c            
            // metadata: MNetworkEnable
            source2sdk::client::HeroID_t m_nCopiedHeroID; // 0xe90            
            uint8_t _pad0e94[0x4]; // 0xe94
            source2sdk::client::ModelChange_t m_ModelChange; // 0xe98            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Magician_CopyUlt because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Ability_Magician_CopyUlt) == 0x1060);
    };
};
