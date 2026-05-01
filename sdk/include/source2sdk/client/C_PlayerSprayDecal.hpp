#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CPlayerSprayDecalRenderHelper.hpp"
#include "source2sdk/client/C_BaseModelEntity.hpp"

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
        // Size: 0xa80
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "int m_nUniqueID"
        // static metadata: MNetworkVarNames "uint32 m_unAccountID"
        // static metadata: MNetworkVarNames "uint32 m_unTraceID"
        // static metadata: MNetworkVarNames "Vector m_vecEndPos"
        // static metadata: MNetworkVarNames "Vector m_vecStart"
        // static metadata: MNetworkVarNames "Vector m_vecLeft"
        // static metadata: MNetworkVarNames "Vector m_vecNormal"
        // static metadata: MNetworkVarNames "CPlayerSlot m_nPlayerSlot"
        // static metadata: MNetworkVarNames "int m_nEntity"
        // static metadata: MNetworkVarNames "int m_nHitbox"
        // static metadata: MNetworkVarNames "float m_flCreationTime"
        // static metadata: MNetworkVarNames "int m_nTintID"
        // static metadata: MNetworkVarNames "uint8 m_nVersion"
        // static metadata: MNetworkVarNames "CUtlString m_sTextureName"
        // static metadata: MNetworkVarNames "CUtlString m_sTextureNameDamaged"
        // static metadata: MNetworkVarNames "CUtlString m_sSoundNameDamaged"
        // static metadata: MNetworkVarNames "bool m_bDamaged"
        #pragma pack(push, 1)
        class C_PlayerSprayDecal : public source2sdk::client::C_BaseModelEntity
        {
        public:
            // metadata: MNetworkEnable
            std::int32_t m_nUniqueID; // 0x9a0            
            // metadata: MNetworkEnable
            std::uint32_t m_unAccountID; // 0x9a4            
            // metadata: MNetworkEnable
            std::uint32_t m_unTraceID; // 0x9a8            
            // metadata: MNetworkEnable
            Vector m_vecEndPos; // 0x9ac            
            // metadata: MNetworkEnable
            Vector m_vecStart; // 0x9b8            
            // metadata: MNetworkEnable
            Vector m_vecLeft; // 0x9c4            
            // metadata: MNetworkEnable
            Vector m_vecNormal; // 0x9d0            
            // metadata: MNetworkEnable
            CPlayerSlot m_nPlayerSlot; // 0x9dc            
            // metadata: MNetworkEnable
            std::int32_t m_nEntity; // 0x9e0            
            // metadata: MNetworkEnable
            std::int32_t m_nHitbox; // 0x9e4            
            // metadata: MNetworkEnable
            float m_flCreationTime; // 0x9e8            
            // metadata: MNetworkEnable
            std::int32_t m_nTintID; // 0x9ec            
            // metadata: MNetworkEnable
            std::uint8_t m_nVersion; // 0x9f0            
            uint8_t _pad09f1[0x7]; // 0x9f1
            // metadata: MNetworkEnable
            CUtlString m_sTextureName; // 0x9f8            
            // metadata: MNetworkEnable
            CUtlString m_sTextureNameDamaged; // 0xa00            
            // metadata: MNetworkEnable
            CUtlString m_sSoundNameDamaged; // 0xa08            
            // metadata: MNetworkEnable
            bool m_bDamaged; // 0xa10            
            uint8_t _pad0a11[0xf]; // 0xa11
            source2sdk::client::CPlayerSprayDecalRenderHelper m_SprayRenderHelper; // 0xa20            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_PlayerSprayDecal because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_PlayerSprayDecal) == 0xa80);
    };
};
