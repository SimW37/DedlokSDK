#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/EObjectivePositions_t.hpp"
#include "source2sdk/server/CCitadelMinimapComponent.hpp"
#include "source2sdk/server/CPhysicsProp.hpp"
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
        // Registered alignment: 0x10
        // Alignment: 0x10
        // Standard-layout class: false
        // Size: 0xd90
        // Has VTable
        // 
        // static metadata: MNetworkIncludeByName "m_iHealth"
        // static metadata: MNetworkIncludeByName "m_iMaxHealth"
        // static metadata: MNetworkVarNames "CCitadelMinimapComponent::Storage_t m_CCitadelMinimapComponent"
        // static metadata: MNetworkVarNames "int m_eLootType"
        #pragma pack(push, 1)
        class CItemCrate : public source2sdk::server::CPhysicsProp
        {
        public:
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "CCitadelMinimapComponent"
            // metadata: MNetworkAlias "CCitadelMinimapComponent"
            // metadata: MNetworkTypeAlias "CCitadelMinimapComponent"
            source2sdk::server::CCitadelMinimapComponent m_CCitadelMinimapComponent; // 0xd50            
            // m_hSpawner has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hSpawner;
            char m_hSpawner[0x4]; // 0xd70            
            uint8_t _pad0d74[0x8]; // 0xd74
            source2sdk::client::EObjectivePositions_t m_eObjectivePosition; // 0xd7c            
            uint8_t _pad0d80[0x4]; // 0xd80
            // metadata: MNetworkEnable
            std::int32_t m_eLootType; // 0xd84            
            uint8_t _pad0d88[0x8];
            
            // Datamap fields:
            // void InputAttachedToParachute; // 0x0
            // void InputDetachedFromParachute; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CItemCrate because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CItemCrate) == 0xd90);
    };
};
