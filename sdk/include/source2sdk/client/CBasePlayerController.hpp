#pragma once
#include "source2sdk/client/C_BaseEntity.hpp"
#include "source2sdk/client/C_CommandContext.hpp"
#include "source2sdk/client/PlayerConnectedState.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    class C_BasePlayerPawn;
};

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x718
    // Has VTable
    // 
    // static metadata: MNetworkIncludeByName "m_pEntity"
    // static metadata: MNetworkIncludeByName "m_flSimulationTime"
    // static metadata: MNetworkIncludeByName "m_flCreateTime"
    // static metadata: MNetworkIncludeByName "m_iTeamNum"
    // static metadata: MNetworkIncludeByName "m_nNextThinkTick"
    // static metadata: MNetworkIncludeByName "m_fFlags"
    // static metadata: MNetworkUserGroupProxy "CBasePlayerController"
    // static metadata: MNetworkUserGroupProxy "CBasePlayerController"
    // static metadata: MNetworkIncludeByUserGroup "LocalPlayerExclusive"
    // static metadata: MNetworkVarNames "uint32 m_nTickBase"
    // static metadata: MNetworkVarNames "CHandle< CBasePlayerPawn> m_hPawn"
    // static metadata: MNetworkVarNames "bool m_bKnownTeamMismatch"
    // static metadata: MNetworkVarNames "PlayerConnectedState m_iConnected"
    // static metadata: MNetworkVarNames "char m_iszPlayerName"
    // static metadata: MNetworkVarNames "uint64 m_steamID"
    // static metadata: MNetworkVarNames "uint32 m_iDesiredFOV"
    // static metadata: MNetworkReplayCompatField "m_skeletonInstance\.m_vecOrigin\..*|"
    #pragma pack(push, 1)
    class CBasePlayerController : public client::C_BaseEntity
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x510[0x8]; // 0x510
        int32_t m_nFinalPredictedTick; // 0x518        
        [[maybe_unused]] std::uint8_t pad_0x51c[0x4]; // 0x51c
        client::C_CommandContext m_CommandContext; // 0x520        
        uint64_t m_nInButtonsWhichAreToggles; // 0x5d8        
        // metadata: MNetworkEnable
        // metadata: MNetworkPriority "1"
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        uint32_t m_nTickBase; // 0x5e0        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnPawnChanged"
        // m_hPawn has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BasePlayerPawn> m_hPawn;
        char m_hPawn[0x4]; // 0x5e4        
        // metadata: MNetworkEnable
        bool m_bKnownTeamMismatch; // 0x5e8        
        [[maybe_unused]] std::uint8_t pad_0x5e9[0x3]; // 0x5e9
        // m_hPredictedPawn has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BasePlayerPawn> m_hPredictedPawn;
        char m_hPredictedPawn[0x4]; // 0x5ec        
        CSplitScreenSlot m_nSplitScreenSlot; // 0x5f0        
        // m_hSplitOwner has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::CBasePlayerController> m_hSplitOwner;
        char m_hSplitOwner[0x4]; // 0x5f4        
        // m_hSplitScreenPlayers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<client::CBasePlayerController>> m_hSplitScreenPlayers;
        char m_hSplitScreenPlayers[0x18]; // 0x5f8        
        bool m_bIsHLTV; // 0x610        
        [[maybe_unused]] std::uint8_t pad_0x611[0x3]; // 0x611
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnConnectionStateChanged"
        client::PlayerConnectedState m_iConnected; // 0x614        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnPlayerControllerNameChanged"
        char m_iszPlayerName[128]; // 0x618        
        [[maybe_unused]] std::uint8_t pad_0x698[0x8]; // 0x698
        // metadata: MNetworkEnable
        // metadata: MNetworkEncoder "fixed64"
        // metadata: MNetworkChangeCallback "OnSteamIDChanged"
        uint64_t m_steamID; // 0x6a0        
        bool m_bIsLocalPlayerController; // 0x6a8        
        [[maybe_unused]] std::uint8_t pad_0x6a9[0x3]; // 0x6a9
        // metadata: MNetworkEnable
        uint32_t m_iDesiredFOV; // 0x6ac        
        [[maybe_unused]] std::uint8_t pad_0x6b0[0x68];
        
        // Datamap fields:
        // bool fakeclient; // 0x7fffffff
        // bool is_hltv; // 0x7fffffff
        // const char * playername; // 0x7fffffff
        // bool reserving; // 0x7fffffff
        // void m_pCurrentCommand; // 0x698
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CBasePlayerController because it is not a standard-layout class
    static_assert(sizeof(CBasePlayerController) == 0x718);
};
