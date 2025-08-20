#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CEntitySubclassVDataBase.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeCModel.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "source2sdk/tier2/CRangeFloat.hpp"
#include "source2sdk/tier2/CRangeInt.hpp"

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
        // Size: 0x418
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CNPC_Neutral_Hideout_CatVData : public source2sdk::client::CEntitySubclassVDataBase
        {
        public:
            float m_flCollisionRadius; // 0x28            
            float m_flTraceRadius; // 0x2c            
            float m_flParticleRadius; // 0x30            
            source2sdk::tier2::CRangeFloat m_flLifeTime; // 0x34            
            source2sdk::tier2::CRangeInt m_iHitsToDisappear; // 0x3c            
            float m_flRespawnTime; // 0x44            
            source2sdk::tier2::CRangeFloat m_flModelScale; // 0x48            
            float m_flWalkSpeed; // 0x50            
            float m_flRunSpeed; // 0x54            
            source2sdk::tier2::CRangeFloat m_flRunDistanceMax; // 0x58            
            float m_flDropDownRate; // 0x60            
            float m_flDistTolerance; // 0x64            
            float m_flValidDirectionDist; // 0x68            
            source2sdk::tier2::CRangeFloat m_flMoveAwayTime; // 0x6c            
            float m_flChaseDistanceStart; // 0x74            
            float m_flChaseDistanceEnd; // 0x78            
            float m_flChaseDistTolerance; // 0x7c            
            float m_flChaseAtTarget; // 0x80            
            float m_flBallSpeedMin; // 0x84            
            // metadata: MPropertyStartGroup "Visuals"
            // m_hModel has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeCModel>> m_hModel;
            char m_hModel[0xe0]; // 0x88            
            // m_SpawnParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_SpawnParticle;
            char m_SpawnParticle[0xe0]; // 0x168            
            // m_AmbientParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_AmbientParticle;
            char m_AmbientParticle[0xe0]; // 0x248            
            // m_DestroyParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_DestroyParticle;
            char m_DestroyParticle[0xe0]; // 0x328            
            // metadata: MPropertyStartGroup "Sounds"
            CSoundEventName m_strDestroySound; // 0x408            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CNPC_Neutral_Hideout_CatVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CNPC_Neutral_Hideout_CatVData) == 0x418);
    };
};
