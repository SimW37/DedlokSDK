#pragma once
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CBaseModelEntity.hpp"
#include "source2sdk/server/TrainOrientationType_t.hpp"
#include "source2sdk/server/TrainVelocityType_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    class CPathTrack;
};

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x928
    // Has VTable
    #pragma pack(push, 1)
    class CFuncTrackTrain : public server::CBaseModelEntity
    {
    public:
        // m_ppath has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CPathTrack> m_ppath;
        char m_ppath[0x4]; // 0x7d0        
        float m_length; // 0x7d4        
        Vector m_vPosPrev; // 0x7d8        
        QAngle m_angPrev; // 0x7e4        
        Vector m_controlMins; // 0x7f0        
        Vector m_controlMaxs; // 0x7fc        
        Vector m_lastBlockPos; // 0x808        
        int32_t m_lastBlockTick; // 0x814        
        float m_flVolume; // 0x818        
        float m_flBank; // 0x81c        
        float m_oldSpeed; // 0x820        
        float m_flBlockDamage; // 0x824        
        float m_height; // 0x828        
        float m_maxSpeed; // 0x82c        
        float m_dir; // 0x830        
        [[maybe_unused]] std::uint8_t pad_0x834[0x4]; // 0x834
        CUtlSymbolLarge m_iszSoundMove; // 0x838        
        CUtlSymbolLarge m_iszSoundMovePing; // 0x840        
        CUtlSymbolLarge m_iszSoundStart; // 0x848        
        CUtlSymbolLarge m_iszSoundStop; // 0x850        
        CUtlSymbolLarge m_strPathTarget; // 0x858        
        float m_flMoveSoundMinDuration; // 0x860        
        float m_flMoveSoundMaxDuration; // 0x864        
        entity2::GameTime_t m_flNextMoveSoundTime; // 0x868        
        float m_flMoveSoundMinPitch; // 0x86c        
        float m_flMoveSoundMaxPitch; // 0x870        
        server::TrainOrientationType_t m_eOrientationType; // 0x874        
        server::TrainVelocityType_t m_eVelocityType; // 0x878        
        [[maybe_unused]] std::uint8_t pad_0x87c[0x14]; // 0x87c
        entity2::CEntityIOOutput m_OnStart; // 0x890        
        entity2::CEntityIOOutput m_OnNext; // 0x8b8        
        entity2::CEntityIOOutput m_OnArrivedAtDestinationNode; // 0x8e0        
        bool m_bManualSpeedChanges; // 0x908        
        [[maybe_unused]] std::uint8_t pad_0x909[0x3]; // 0x909
        float m_flDesiredSpeed; // 0x90c        
        entity2::GameTime_t m_flSpeedChangeTime; // 0x910        
        float m_flAccelSpeed; // 0x914        
        float m_flDecelSpeed; // 0x918        
        bool m_bAccelToSpeed; // 0x91c        
        [[maybe_unused]] std::uint8_t pad_0x91d[0x3]; // 0x91d
        entity2::GameTime_t m_flNextMPSoundTime; // 0x920        
        [[maybe_unused]] std::uint8_t pad_0x924[0x4];
        
        // Datamap fields:
        // void InputStop; // 0x0
        // void InputStartForward; // 0x0
        // void InputStartBackward; // 0x0
        // void InputToggle; // 0x0
        // void InputResume; // 0x0
        // void InputReverse; // 0x0
        // float InputSetSpeed; // 0x0
        // float InputSetSpeedDir; // 0x0
        // float InputSetSpeedReal; // 0x0
        // float InputSetMaxSpeed; // 0x0
        // float InputSetSpeedDirAccel; // 0x0
        // CUtlSymbolLarge InputMoveToPathNode; // 0x0
        // CUtlSymbolLarge InputTeleportToPathNode; // 0x0
        // void InputLockOrientation; // 0x0
        // void InputUnlockOrientation; // 0x0
        // void CFuncTrackTrainNext; // 0x0
        // void CFuncTrackTrainFind; // 0x0
        // void CFuncTrackTrainNearestPath; // 0x0
        // void CFuncTrackTrainDeadEnd; // 0x0
        // int32_t volume; // 0x7fffffff
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CFuncTrackTrain because it is not a standard-layout class
    static_assert(sizeof(CFuncTrackTrain) == 0x928);
};
