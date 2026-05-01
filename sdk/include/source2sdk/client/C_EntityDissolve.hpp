#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_BaseModelEntity.hpp"
#include "source2sdk/client/EntityDisolveType_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"

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
        // Size: 0x9e8
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "GameTime_t m_flStartTime"
        // static metadata: MNetworkVarNames "float32 m_flFadeInStart"
        // static metadata: MNetworkVarNames "float32 m_flFadeInLength"
        // static metadata: MNetworkVarNames "float32 m_flFadeOutModelStart"
        // static metadata: MNetworkVarNames "float32 m_flFadeOutModelLength"
        // static metadata: MNetworkVarNames "float32 m_flFadeOutStart"
        // static metadata: MNetworkVarNames "float32 m_flFadeOutLength"
        // static metadata: MNetworkVarNames "EntityDisolveType_t m_nDissolveType"
        // static metadata: MNetworkVarNames "Vector m_vDissolverOrigin"
        // static metadata: MNetworkVarNames "uint32 m_nMagnitude"
        #pragma pack(push, 1)
        class C_EntityDissolve : public source2sdk::client::C_BaseModelEntity
        {
        public:
            uint8_t _pad09a0[0x8]; // 0x9a0
            // metadata: MNetworkEnable
            // metadata: MNotSaved
            source2sdk::entity2::GameTime_t m_flStartTime; // 0x9a8            
            // metadata: MNetworkEnable
            // metadata: MNotSaved
            float m_flFadeInStart; // 0x9ac            
            // metadata: MNetworkEnable
            // metadata: MNotSaved
            float m_flFadeInLength; // 0x9b0            
            // metadata: MNetworkEnable
            // metadata: MNotSaved
            float m_flFadeOutModelStart; // 0x9b4            
            // metadata: MNetworkEnable
            // metadata: MNotSaved
            float m_flFadeOutModelLength; // 0x9b8            
            // metadata: MNetworkEnable
            // metadata: MNotSaved
            float m_flFadeOutStart; // 0x9bc            
            // metadata: MNetworkEnable
            // metadata: MNotSaved
            float m_flFadeOutLength; // 0x9c0            
            // metadata: MNotSaved
            source2sdk::entity2::GameTime_t m_flNextSparkTime; // 0x9c4            
            // metadata: MNetworkEnable
            // metadata: MNotSaved
            source2sdk::client::EntityDisolveType_t m_nDissolveType; // 0x9c8            
            // metadata: MNetworkEnable
            // metadata: MNotSaved
            Vector m_vDissolverOrigin; // 0x9cc            
            // metadata: MNetworkEnable
            // metadata: MNotSaved
            std::uint32_t m_nMagnitude; // 0x9d8            
            // metadata: MNotSaved
            bool m_bCoreExplode; // 0x9dc            
            // metadata: MNotSaved
            bool m_bLinkedToServerEnt; // 0x9dd            
            uint8_t _pad09de[0xa];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_EntityDissolve because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_EntityDissolve) == 0x9e8);
    };
};
