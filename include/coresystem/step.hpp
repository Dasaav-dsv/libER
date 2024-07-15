/**
 * @file step.hpp
 * @brief Namespace CS step task callback interfaces
 *
 * Copyright 2024 libER ELDEN RING API library
 *
 */
#pragma once

#include <detail/preprocessor.hpp>
#include <fd4/detail/fd4_task.hpp>

namespace from {
namespace CS {
class CSFileStep : public FD4::FD4StepTemplateBase<CSFileStep, FD4::FD4TaskBase> {
public:
    FD4_RUNTIME_CLASS(CSFileStep);

    enum step_method_index : int {
        STEP_INVALID = -1,
        STEP_Init = 0,
        STEP_Update,
        STEP_Finish,
        STEP_SIZE
    };
};

class CSDebugBootMenuStep : public FD4::FD4StepTemplateBase<CSDebugBootMenuStep, FD4::FD4TaskBase> {
public:
    FD4_RUNTIME_CLASS(CSDebugBootMenuStep);

    enum step_method_index : int {
        STEP_INVALID = -1,
        STEP_Init = 0,
        STEP_Wait_forList,
        STEP_Update_forList,
        STEP_Wait_forChild,
        STEP_Finish_forChild,
        STEP_Finish,
        STEP_SIZE
    };
};

class CSModelViewerInsStep_forChrId : public FD4::FD4StepTemplateBase<CSModelViewerInsStep_forChrId, FD4::FD4TaskBase> {
public:
    FD4_RUNTIME_CLASS(CSModelViewerInsStep_forChrId);

    enum step_method_index : int {
        STEP_INVALID = -1,
        STEP_Init = 0,
        STEP_Init_forLoadResource,
        STEP_Wait_forLoadResource,
        STEP_Wait_forPlayerResource,
        STEP_Init_forViewer,
        STEP_Update_forViewer,
        STEP_Init_forReleseResource,
        STEP_Wait_forReleseResource,
        STEP_Finish,
        STEP_SIZE
    };
};

class CSModelViewerInsStep_forGeom : public FD4::FD4StepTemplateBase<CSModelViewerInsStep_forGeom, FD4::FD4TaskBase> {
public:
    FD4_RUNTIME_CLASS(CSModelViewerInsStep_forGeom);

    enum step_method_index : int {
        STEP_INVALID = -1,
        STEP_Init = 0,
        STEP_Init_forLoadResource,
        STEP_Wait_forLoadResource,
        STEP_Init_forTexture,
        STEP_Wait_forTexture,
        STEP_Init_forConstructResource,
        STEP_Wait_forConstructResource,
        STEP_Init_forViewer,
        STEP_Update_forViewer,
        STEP_Init_forDestructResource,
        STEP_Wait_forDestructResource,
        STEP_Init_forReleseResource,
        STEP_Wait_forReleseResource,
        STEP_Finish,
        STEP_SIZE
    };
};

class CSModelViewerInsStep_forLoadlist : public FD4::FD4StepTemplateBase<CSModelViewerInsStep_forLoadlist, FD4::FD4TaskBase> {
public:
    FD4_RUNTIME_CLASS(CSModelViewerInsStep_forLoadlist);

    enum step_method_index : int {
        STEP_INVALID = -1,
        STEP_Init = 0,
        STEP_Init_forLoadResource,
        STEP_Wait_forLoadResource,
        STEP_Init_forViewer,
        STEP_Update_forViewer,
        STEP_Init_forReleseResource,
        STEP_Wait_forReleseResource,
        STEP_Finish,
        STEP_SIZE
    };
};

class CSModelViewerInsStep_forMap : public FD4::FD4StepTemplateBase<CSModelViewerInsStep_forMap, FD4::FD4TaskBase> {
public:
    FD4_RUNTIME_CLASS(CSModelViewerInsStep_forMap);

    enum step_method_index : int {
        STEP_INVALID = -1,
        STEP_Init = 0,
        STEP_Init_forLoadResource,
        STEP_Wait_forLoadResource,
        STEP_Init_forTexture,
        STEP_Wait_forTexture,
        STEP_Init_forViewer,
        STEP_Update_forViewer,
        STEP_Init_forReleseResource,
        STEP_Wait_forReleseResource,
        STEP_Finish,
        STEP_SIZE
    };
};

class CSModelViewerInsStep_forMapenv : public FD4::FD4StepTemplateBase<CSModelViewerInsStep_forMapenv, FD4::FD4TaskBase> {
public:
    FD4_RUNTIME_CLASS(CSModelViewerInsStep_forMapenv);

    enum step_method_index : int {
        STEP_INVALID = -1,
        STEP_Init = 0,
        STEP_Init_forLoadResource,
        STEP_Wait_forLoadResource,
        STEP_Init_forViewer,
        STEP_Update_forViewer,
        STEP_Init_forReleseResource,
        STEP_Wait_forReleseResource,
        STEP_Finish,
        STEP_SIZE
    };
};

class CSModelViewerInsStep_forParts : public FD4::FD4StepTemplateBase<CSModelViewerInsStep_forParts, FD4::FD4TaskBase> {
public:
    FD4_RUNTIME_CLASS(CSModelViewerInsStep_forParts);

    enum step_method_index : int {
        STEP_INVALID = -1,
        STEP_Init = 0,
        STEP_Init_forLoadResource,
        STEP_Wait_forLoadResource,
        STEP_Init_forConstructResource,
        STEP_Wait_forConstructResource,
        STEP_Init_forViewer,
        STEP_Update_forViewer,
        STEP_Init_forDestructResource,
        STEP_Wait_forDestructResource,
        STEP_Init_forReleseResource,
        STEP_Wait_forReleseResource,
        STEP_Finish,
        STEP_SIZE
    };
};

class CSModelViewerInsStep_forSkybox : public FD4::FD4StepTemplateBase<CSModelViewerInsStep_forSkybox, FD4::FD4TaskBase> {
public:
    FD4_RUNTIME_CLASS(CSModelViewerInsStep_forSkybox);

    enum step_method_index : int {
        STEP_INVALID = -1,
        STEP_Init = 0,
        STEP_Init_forLoadResource,
        STEP_Wait_forLoadResource,
        STEP_Init_forViewer,
        STEP_Update_forViewer,
        STEP_Init_forReleseEnvMap,
        STEP_Init_forReleseResource,
        STEP_Wait_forReleseResource,
        STEP_Finish,
        STEP_SIZE
    };
};

class CSModelViewerList : public FD4::FD4StepTemplateBase<CSModelViewerList, FD4::FD4TaskBase> {
public:
    FD4_RUNTIME_CLASS(CSModelViewerList);

    enum step_method_index : int {
        STEP_INVALID = -1,
        STEP_Init = 0,
        STEP_Init_forTextlistLoad,
        STEP_Wait_forTextlistLoad,
        STEP_Init_forSelector,
        STEP_Update_forSelector,
        STEP_Finish_forSelector,
        STEP_Finish,
        STEP_SIZE
    };
};

class CSModelViewerListStep : public FD4::FD4StepTemplateBase<CSModelViewerListStep, FD4::FD4TaskBase> {
public:
    FD4_RUNTIME_CLASS(CSModelViewerListStep);

    enum step_method_index : int {
        STEP_INVALID = -1,
        STEP_Init = 0,
        STEP_Update_forList,
        STEP_Wait_forChild,
        STEP_Finish_forChild,
        STEP_Finish,
        STEP_SIZE
    };
};

class CSModelViewerPlayerModelCtrl : public FD4::FD4StepTemplateBase<CSModelViewerPlayerModelCtrl, FD4::FD4StepBaseInterface> {
public:
    FD4_RUNTIME_CLASS(CSModelViewerPlayerModelCtrl);

    enum step_method_index : int {
        STEP_INVALID = -1,
        STEP_Idle = 0,
        STEP_Init,
        STEP_Wait,
        STEP_Playing,
        STEP_SIZE
    };
};

class CSModelViewerStep : public FD4::FD4StepTemplateBase<CSModelViewerStep, FD4::FD4TaskBase> {
public:
    FD4_RUNTIME_CLASS(CSModelViewerStep);

    enum step_method_index : int {
        STEP_INVALID = -1,
        STEP_Init = 0,
        STEP_Init_forParamInitializeStep,
        STEP_Wait_forParamInitializeStep,
        STEP_Init_forConstructScene,
        STEP_Wait_forConstructScene,
        STEP_Init_forViewer,
        STEP_Update_forViewer,
        STEP_Init_forList,
        STEP_Update_forList,
        STEP_Init_forDestructScene,
        STEP_Wait_forDestructScene,
        STEP_Init_forParamFinalizeStep,
        STEP_Wait_forParamFinalizeStep,
        STEP_Finish,
        STEP_SIZE
    };
};

class ModuleNaviMeshTestStep : public FD4::FD4StepTemplateBase<ModuleNaviMeshTestStep, FD4::FD4TaskBase> {
public:
    FD4_RUNTIME_CLASS(ModuleNaviMeshTestStep);

    enum step_method_index : int {
        STEP_INVALID = -1,
        STEP_Init = 0,
        STEP_Init_forConstructScene,
        STEP_Wait_forConstructScene,
        STEP_Init_forTest,
        STEP_Update_forTest,
        STEP_Init_forDestructScene,
        STEP_Wait_forDestructScene,
        STEP_Finish,
        STEP_SIZE
    };
};

class ModuleTestSelectStep : public FD4::FD4StepTemplateBase<ModuleTestSelectStep, FD4::FD4TaskBase> {
public:
    FD4_RUNTIME_CLASS(ModuleTestSelectStep);

    enum step_method_index : int {
        STEP_INVALID = -1,
        STEP_Init = 0,
        STEP_Update_forList,
        STEP_Wait_forChild,
        STEP_Finish_forChild,
        STEP_Finish,
        STEP_SIZE
    };
};

class CSMoveMapListStep : public FD4::FD4StepTemplateBase<CSMoveMapListStep, FD4::FD4TaskBase> {
public:
    FD4_RUNTIME_CLASS(CSMoveMapListStep);

    enum step_method_index : int {
        STEP_INVALID = -1,
        STEP_Init = 0,
        STEP_Init_forData,
        STEP_Wait_forData,
        STEP_Wait,
        STEP_Finish,
        STEP_SIZE
    };
};

class CSSfxViewerStep : public FD4::FD4StepTemplateBase<CSSfxViewerStep, FD4::FD4TaskBase> {
public:
    FD4_RUNTIME_CLASS(CSSfxViewerStep);

    enum step_method_index : int {
        STEP_INVALID = -1,
        STEP_Init = 0,
        STEP_Init_forConstructScene,
        STEP_Wait_forConstructScene,
        STEP_Init_forViewer,
        STEP_Update_forViewer,
        STEP_Init_forDestructScene,
        STEP_Wait_forDestructScene,
        STEP_Finish,
        STEP_SIZE
    };
};

class CSWwiseSoundTestStep : public FD4::FD4StepTemplateBase<CSWwiseSoundTestStep, FD4::FD4TaskBase> {
public:
    FD4_RUNTIME_CLASS(CSWwiseSoundTestStep);

    enum step_method_index : int {
        STEP_INVALID = -1,
        STEP_Init = 0,
        STEP_Update,
        STEP_BankLoad,
        STEP_BankLoadWait,
        STEP_BankTestInit,
        STEP_BankTestUpdate,
        STEP_BankTestRelease,
        STEP_Finish,
        STEP_SIZE
    };
};

class TitleFlowStep : public FD4::FD4StepTemplateBase<TitleFlowStep, FD4::FD4TaskBase> {
public:
    FD4_RUNTIME_CLASS(TitleFlowStep);

    enum step_method_index : int {
        STEP_INVALID = -1,
        STEP_Init = 0,
        STEP_Wait,
        STEP_Finish,
        STEP_SIZE
    };
};

class CSEzTextlistSelector : public FD4::FD4StepTemplateBase<CSEzTextlistSelector, FD4::FD4StepBaseInterface> {
public:
    FD4_RUNTIME_CLASS(CSEzTextlistSelector);

    enum step_method_index : int {
        STEP_INVALID = -1,
        STEP_Init = 0,
        STEP_Wait_forTextlistRequest,
        STEP_Init_forTextlistLoad,
        STEP_Wait_forTextlistLoad,
        STEP_Init_forSelector,
        STEP_Update_forSelector,
        STEP_Finish_forSelector,
        STEP_Finish,
        STEP_SIZE
    };
};

class CSCameraStep : public FD4::FD4StepTemplateBase<CSCameraStep, FD4::FD4TaskBase> {
public:
    FD4_RUNTIME_CLASS(CSCameraStep);

    enum step_method_index : int {
        STEP_INVALID = -1,
        STEP_Init = 0,
        STEP_Update,
        STEP_Finish,
        STEP_SIZE
    };
};

class Generator : public FD4::FD4StepTemplateBase<Generator, FD4::FD4StepBaseInterface> {
public:
    FD4_RUNTIME_CLASS(Generator);

    enum step_method_index : int {
        STEP_INVALID = -1,
        STEP_Check = 0,
        STEP_Wait,
        STEP_Regist,
        STEP_Recovery,
        STEP_SIZE
    };
};

class CSDisplayGhost : public FD4::FD4StepTemplateBase<CSDisplayGhost, FD4::FD4StepBaseInterface> {
public:
    FD4_RUNTIME_CLASS(CSDisplayGhost);

    enum step_method_index : int {
        STEP_INVALID = -1,
        STEP_Init = 0,
        STEP_Wait_forPlayRequest,
        STEP_Init_forLoadResource,
        STEP_Wait_forLoadResource,
        STEP_Init_forBloodMessageGhost,
        STEP_Update_forBloodMessageGhost,
        STEP_Wait_forFadeOut,
        STEP_Init_forReleseResource,
        STEP_Wait_forReleseResource,
        STEP_Finish,
        STEP_SIZE
    };
};

class CSDebugChrCreator : public FD4::FD4StepTemplateBase<CSDebugChrCreator, FD4::FD4StepBaseInterface> {
public:
    FD4_RUNTIME_CLASS(CSDebugChrCreator);

    enum step_method_index : int {
        STEP_INVALID = -1,
        STEP_Idle = 0,
        STEP_Load,
        STEP_LoadWait,
        STEP_SIZE
    };
};

class CSDistViewManagerImp : public FD4::FD4StepTemplateBase<CSDistViewManagerImp, FD4::FD4StepBaseInterface> {
public:
    FD4_RUNTIME_CLASS(CSDistViewManagerImp);

    enum step_method_index : int {
        STEP_INVALID = -1,
        STEP_Init = 0,
        STEP_Wait_forRequest,
        STEP_Init_forEnter,
        STEP_Wait_forEnter,
        STEP_Update,
        STEP_Init_forExit,
        STEP_Wait_forExit,
        STEP_Finish,
        STEP_SIZE
    };
};

class CSEventFlagResStep : public FD4::FD4StepTemplateBase<CSEventFlagResStep, FD4::FD4TaskBase> {
public:
    FD4_RUNTIME_CLASS(CSEventFlagResStep);

    enum step_method_index : int {
        STEP_INVALID = -1,
        STEP_Init = 0,
        STEP_Wait,
        STEP_Update,
        STEP_Finish,
        STEP_SIZE
    };
};

class CSEventCutsceneWarpCtrl : public FD4::FD4StepTemplateBase<CSEventCutsceneWarpCtrl, FD4::FD4StepBaseInterface> {
public:
    FD4_RUNTIME_CLASS(CSEventCutsceneWarpCtrl);

    enum step_method_index : int {
        STEP_INVALID = -1,
        STEP_StandBy = 0,
        STEP_WaitFinishCutscene,
        STEP_SIZE
    };
};

class CSEventFadeWarpCtrl : public FD4::FD4StepTemplateBase<CSEventFadeWarpCtrl, FD4::FD4StepBaseInterface> {
public:
    FD4_RUNTIME_CLASS(CSEventFadeWarpCtrl);

    enum step_method_index : int {
        STEP_INVALID = -1,
        STEP_StandBy = 0,
        STEP_FadeOut,
        STEP_WaitFadeOut,
        STEP_Warp,
        STEP_WaitWaitWarp,
        STEP_WaitWarp,
        STEP_FadeIn,
        STEP_WaitFadeIn,
        STEP_SIZE
    };
};

class CSEventNetworkErrorReturnTitleStep : public FD4::FD4StepTemplateBase<CSEventNetworkErrorReturnTitleStep, FD4::FD4StepBaseInterface> {
public:
    FD4_RUNTIME_CLASS(CSEventNetworkErrorReturnTitleStep);

    enum step_method_index : int {
        STEP_INVALID = -1,
        STEP_StandBy = 0,
        STEP_Wait,
        STEP_WaitDialogOk,
        STEP_ReturnTitle,
        STEP_SIZE
    };
};

class CSEventWorldAreaTimeCtrl : public FD4::FD4StepTemplateBase<CSEventWorldAreaTimeCtrl, FD4::FD4StepBaseInterface> {
public:
    FD4_RUNTIME_CLASS(CSEventWorldAreaTimeCtrl);

    enum step_method_index : int {
        STEP_INVALID = -1,
        STEP_StandBy = 0,
        STEP_FadeOut,
        STEP_WaitFadeOut,
        STEP_ApplyTime,
        STEP_WaitLuaEventRespawn,
        STEP_WaitApplyTime,
        STEP_FadeIn,
        STEP_WaitFadeIn,
        STEP_SIZE
    };
};

class WanderGhostDrawSwitcher : public FD4::FD4StepTemplateBase<WanderGhostDrawSwitcher, FD4::FD4StepBaseInterface> {
public:
    FD4_RUNTIME_CLASS(WanderGhostDrawSwitcher);

    enum step_method_index : int {
        STEP_INVALID = -1,
        STEP_Idle = 0,
        STEP_FadeOut,
        STEP_WaitFadeOut,
        STEP_FadeIn,
        STEP_WaitFadeIn,
        STEP_SIZE
    };
};

class CSBreakInRebreakInPosStep : public FD4::FD4StepTemplateBase<CSBreakInRebreakInPosStep, FD4::FD4StepBaseInterface> {
public:
    FD4_RUNTIME_CLASS(CSBreakInRebreakInPosStep);

    enum step_method_index : int {
        STEP_INVALID = -1,
        STEP_StandBy = 0,
        STEP_WaitReceive,
        STEP_Wait,
        STEP_SIZE
    };
};

class CSQuickMatchingCtrl : public FD4::FD4StepTemplateBase<CSQuickMatchingCtrl, FD4::FD4StepBaseInterface> {
public:
    FD4_RUNTIME_CLASS(CSQuickMatchingCtrl);

    enum step_method_index : int {
        STEP_INVALID = -1,
        STEP_None = 0,
        STEP_SearchRegister,
        STEP_SearchRegister_Wait,
        STEP_GuestInviteWait,
        STEP_GuestWaitSession,
        STEP_GuestReadyWait,
        STEP_GuestMoveMap,
        STEP_GuestInGame,
        STEP_HostWaitSesstion,
        STEP_HostInvite,
        STEP_HostReadyWait,
        STEP_HostReadyWaitBlockList,
        STEP_HostMoveMap,
        STEP_HostInGame,
        STEP_Unregister,
        STEP_SIZE
    };
};

class CSNetDomainCollector : public FD4::FD4StepTemplateBase<CSNetDomainCollector, FD4::FD4StepBaseInterface> {
public:
    FD4_RUNTIME_CLASS(CSNetDomainCollector);

    enum step_method_index : int {
        STEP_INVALID = -1,
        STEP_CollectFromGeom = 0,
        STEP_CollectFromHit,
        STEP_CollectFromPoint,
        STEP_CollectFromMapPieceTex,
        STEP_UpdateResult,
        STEP_SIZE
    };
};

class CSRemoStep : public FD4::FD4StepTemplateBase<CSRemoStep, FD4::FD4TaskBase> {
public:
    FD4_RUNTIME_CLASS(CSRemoStep);

    enum step_method_index : int {
        STEP_INVALID = -1,
        STEP_Init = 0,
        STEP_Update,
        STEP_Finish,
        STEP_SIZE
    };
};

class CSRemoIns : public FD4::FD4StepTemplateBase<CSRemoIns, FD4::FD4StepBaseInterface> {
public:
    FD4_RUNTIME_CLASS(CSRemoIns);

    enum step_method_index : int {
        STEP_INVALID = -1,
        STEP_Init = 0,
        STEP_Play_Init,
        STEP_Play_WaitSoundRes,
        STEP_Play_Wait,
        STEP_Finish,
        STEP_Finish_Wait,
        STEP_DummyForWarp_Init,
        STEP_DummyForWarp_Update,
        STEP_DummyForWarp_Finish,
        STEP_SIZE
    };
};

class CSRemoMan : public FD4::FD4StepTemplateBase<CSRemoMan, FD4::FD4StepBaseInterface> {
public:
    FD4_RUNTIME_CLASS(CSRemoMan);

    enum step_method_index : int {
        STEP_INVALID = -1,
        STEP_Init = 0,
        STEP_RegistWait,
        STEP_Prologue,
        STEP_PrologueWait,
        STEP_Update,
        STEP_Epilog,
        STEP_EpilogWait,
        STEP_IngameFadeInStartWait,
        STEP_FinishWait,
        STEP_Finish,
        STEP_SIZE
    };
};

class CSRemoRes : public FD4::FD4StepTemplateBase<CSRemoRes, FD4::FD4StepBaseInterface> {
public:
    FD4_RUNTIME_CLASS(CSRemoRes);

    enum step_method_index : int {
        STEP_INVALID = -1,
        STEP_Init = 0,
        STEP_Load_Init,
        STEP_LoadRemobnd_Init,
        STEP_LoadRemobnd_Wait,
        STEP_LoadExtraResource_Init,
        STEP_LoadExtraResource_Wait,
        STEP_LoadExtraResource2_Init,
        STEP_LoadExtraResource2_Wait,
        STEP_LoadMapTpf_Init,
        STEP_LoadMapTpf_Wait,
        STEP_ResourceIsReady,
        STEP_Unload_Init,
        STEP_Unload_Wait,
        STEP_ResourceIsEmpty,
        STEP_Finish,
        STEP_SIZE
    };
};

class CSSystemParamStep : public FD4::FD4StepTemplateBase<CSSystemParamStep, FD4::FD4TaskBase> {
public:
    FD4_RUNTIME_CLASS(CSSystemParamStep);

    enum step_method_index : int {
        STEP_INVALID = -1,
        STEP_Load = 0,
        STEP_LoadWait,
        STEP_Wait,
        STEP_Unload,
        STEP_SIZE
    };
};

class EndingStep : public FD4::FD4StepTemplateBase<EndingStep, FD4::FD4TaskBase> {
public:
    FD4_RUNTIME_CLASS(EndingStep);

    enum step_method_index : int {
        STEP_INVALID = -1,
        STEP_PlayEndingMovie = 0,
        STEP_PlayEndingMovieWait,
        STEP_NextLapQuestion,
        STEP_MenuJobWait,
        STEP_Finish,
        STEP_SIZE
    };
};

class GameRootStep : public FD4::FD4StepTemplateBase<GameRootStep, FD4::FD4TaskBase> {
public:
    FD4_RUNTIME_CLASS(GameRootStep);

    enum step_method_index : int {
        STEP_INVALID = -1,
        STEP_BootInit_A = 0,
        STEP_BootInitWait_A,
        STEP_BootInit_B,
        STEP_BootInitWait_B,
        STEP_BootInit_C,
        STEP_BootInitWait_C,
        STEP_BootInit_D,
        STEP_BootInitWait_D,
        STEP_BootUpdate,
        STEP_ShutdownWait,
        STEP_Shutdown,
        STEP_SIZE
    };
};

class InGameStayStep : public FD4::FD4StepTemplateBase<InGameStayStep, FD4::FD4TaskBase> {
public:
    FD4_RUNTIME_CLASS(InGameStayStep);

    enum step_method_index : int {
        STEP_INVALID = -1,
        STEP_InGameStayLoad = 0,
        STEP_InGameStayLoadWait,
        STEP_PlayerDataLoad,
        STEP_PlayerDataLoadWait,
        STEP_FaceGenDataLoad,
        STEP_FaceGenDataLoadWait,
        STEP_LoadFinish,
        STEP_Unload,
        STEP_Finish,
        STEP_SIZE
    };
};

class InGameStep : public FD4::FD4StepTemplateBase<InGameStep, FD4::FD4TaskBase> {
public:
    FD4_RUNTIME_CLASS(InGameStep);

    enum step_method_index : int {
        STEP_INVALID = -1,
        STEP_Initialize = 0,
        STEP_InitWait,
        STEP_RequestWait,
        STEP_Finalize,
        STEP_MoveMap_LoadlistInit,
        STEP_MoveMap_LoadlistWait,
        STEP_MoveMap_Init,
        STEP_MoveMap_Update,
        STEP_MoveMap_Finish,
        STEP_SIZE
    };
};

class CharaSelectStep : public FD4::FD4StepTemplateBase<CharaSelectStep, FD4::FD4TaskBase> {
public:
    FD4_RUNTIME_CLASS(CharaSelectStep);

    enum step_method_index : int {
        STEP_INVALID = -1,
        STEP_InitCharaSelect = 0,
        STEP_CharaSelect,
        STEP_SIZE
    };
};

class MoveMapListStep : public FD4::FD4StepTemplateBase<MoveMapListStep, FD4::FD4TaskBase> {
public:
    FD4_RUNTIME_CLASS(MoveMapListStep);

    enum step_method_index : int {
        STEP_INVALID = -1,
        STEP_LoadList = 0,
        STEP_LoadListWait,
        STEP_InitProfile,
        STEP_ListSelect,
        STEP_LoadSaveData,
        STEP_LoadSaveData_Wait,
        STEP_MoveMapWait,
        STEP_CharaSelect,
        STEP_Finish,
        STEP_SIZE
    };
};

class MoveMapStep : public FD4::FD4StepTemplateBase<MoveMapStep, FD4::FD4TaskBase> {
public:
    FD4_RUNTIME_CLASS(MoveMapStep);

    enum step_method_index : int {
        STEP_INVALID = -1,
        STEP_BeginInit = 0,
        STEP_MsbLoad,
        STEP_MsbLoadWait,
        STEP_WorldResWait,
        STEP_CurrentLodBlockWait,
        STEP_LeaveSessionWait,
        STEP_SignIn,
        STEP_SignInWaitAndLogIn,
        STEP_WaitChrTypeSyncReady_forInvadeNpcWorld,
        STEP_CreateDrawPlan,
        STEP_InitAnim,
        STEP_FixedGridInitPos,
        STEP_EscapeDeathLoop_forGrSEQ44762,
        STEP_HitStabilizeWait,
        STEP_HitStabilizeWaitPost,
        STEP_HitStabilizeWaitPostPost,
        STEP_TexStabilizeWait,
        STEP_HorseWait,
        STEP_MoveMap,
        STEP_Cleanup,
        STEP_Finish,
        STEP_SIZE
    };
};

class MsgStep : public FD4::FD4StepTemplateBase<MsgStep, FD4::FD4TaskBase> {
public:
    FD4_RUNTIME_CLASS(MsgStep);

    enum step_method_index : int {
        STEP_INVALID = -1,
        STEP_Load = 0,
        STEP_LoadWait,
        STEP_Wait,
        STEP_Unload,
        STEP_SIZE
    };
};

class TestNetStep : public FD4::FD4StepTemplateBase<TestNetStep, FD4::FD4TaskBase> {
public:
    FD4_RUNTIME_CLASS(TestNetStep);

    enum step_method_index : int {
        STEP_INVALID = -1,
        STEP_Update = 0,
        STEP_Finish,
        STEP_SIZE
    };
};

class ParamStep : public FD4::FD4StepTemplateBase<ParamStep, FD4::FD4TaskBase> {
public:
    FD4_RUNTIME_CLASS(ParamStep);

    enum step_method_index : int {
        STEP_INVALID = -1,
        STEP_Load = 0,
        STEP_LoadWait,
        STEP_Wait,
        STEP_Unload,
        STEP_SIZE
    };
};

class SimpleTitleStep : public FD4::FD4StepTemplateBase<SimpleTitleStep, FD4::FD4TaskBase> {
public:
    FD4_RUNTIME_CLASS(SimpleTitleStep);

    enum step_method_index : int {
        STEP_INVALID = -1,
        STEP_MenuInit = 0,
        STEP_MenuLoop,
        STEP_IngameInit,
        STEP_IngameStandby,
        STEP_Ingame,
        STEP_End,
        STEP_SIZE
    };
};

class TitleStep : public FD4::FD4StepTemplateBase<TitleStep, FD4::FD4TaskBase> {
public:
    FD4_RUNTIME_CLASS(TitleStep);

    enum step_method_index : int {
        STEP_INVALID = -1,
        STEP_InitMenu = 0,
        STEP_BeginXR117Dialog,
        STEP_BeginLogo,
        STEP_BeginTitle,
        STEP_BeginNewGame,
        STEP_PlayGame,
        STEP_GameStepWait,
        STEP_EndFlow,
        STEP_EndFlowWait,
        STEP_NextLap,
        STEP_MenuJobWait,
        STEP_Finish,
        STEP_SIZE
    };
};

class CSDrawStep : public FD4::FD4StepTemplateBase<CSDrawStep, FD4::FD4TaskBase> {
public:
    FD4_RUNTIME_CLASS(CSDrawStep);

    enum step_method_index : int {
        STEP_INVALID = -1,
        STEP_Init = 0,
        STEP_Update,
        STEP_Finish,
        STEP_SIZE
    };
};

class CSGraphicsStep : public FD4::FD4StepTemplateBase<CSGraphicsStep, FD4::FD4TaskBase> {
public:
    FD4_RUNTIME_CLASS(CSGraphicsStep);

    enum step_method_index : int {
        STEP_INVALID = -1,
        STEP_Init = 0,
        STEP_Prepare_forSystem,
        STEP_Initialize_forSystem,
        STEP_Prepare_forGraphicsFramework,
        STEP_Initialize_forGraphicsFramework,
        STEP_Prepare_forGuiFramework,
        STEP_Initialize_forGuiFramework,
        STEP_Prepare_forRenderingSystem,
        STEP_Initialize_forRenderingSystem,
        STEP_Prepare_forSfxSystem,
        STEP_Initialize_forSfxSystem,
        STEP_Prepare_forDecalSystem,
        STEP_Initialize_forDecalSystem,
        STEP_Initialize_forPipelineStateCache,
        STEP_BeginDrawStep,
        STEP_Update,
        STEP_WaitFinishDrawStep,
        STEP_Finish,
        STEP_SIZE
    };
};

class CSFD4LocationStep : public FD4::FD4StepTemplateBase<CSFD4LocationStep, FD4::FD4TaskBase> {
public:
    FD4_RUNTIME_CLASS(CSFD4LocationStep);

    enum step_method_index : int {
        STEP_INVALID = -1,
        STEP_Init = 0,
        STEP_Update,
        STEP_Finish,
        STEP_SIZE
    };
};

class CsEnvMapCaptureIns : public FD4::FD4StepTemplateBase<CsEnvMapCaptureIns, FD4::FD4StepBaseInterface> {
public:
    FD4_RUNTIME_CLASS(CsEnvMapCaptureIns);

    enum step_method_index : int {
        STEP_INVALID = -1,
        STEP_Initialize = 0,
        STEP_Update,
        STEP_Finalize,
        STEP_SIZE
    };
};

class CSMenuAsmModelRend : public FD4::FD4StepTemplateBase<CSMenuAsmModelRend, FD4::FD4StepBaseInterface> {
public:
    FD4_RUNTIME_CLASS(CSMenuAsmModelRend);

    enum step_method_index : int {
        STEP_INVALID = -1,
        STEP_Init = 0,
        STEP_Wait_Request,
        STEP_Init_Setup,
        STEP_Wait_Setup,
        STEP_Finish_Setup,
        STEP_Init_Play,
        STEP_Wait_Play,
        STEP_Finish_Play,
        STEP_Finish,
        STEP_SIZE
    };
};

class CSCollectNearNaviMeshParts : public FD4::FD4StepTemplateBase<CSCollectNearNaviMeshParts, FD4::FD4StepBaseInterface> {
public:
    FD4_RUNTIME_CLASS(CSCollectNearNaviMeshParts);

    enum step_method_index : int {
        STEP_INVALID = -1,
        STEP_Wait = 0,
        STEP_GetPathDist,
        STEP_CollectNearby,
        STEP_Result,
        STEP_Finish,
        STEP_SIZE
    };
};

class CSBehCommonScript : public FD4::FD4StepTemplateBase<CSBehCommonScript, FD4::FD4StepBaseInterface> {
public:
    FD4_RUNTIME_CLASS(CSBehCommonScript);

    enum step_method_index : int {
        STEP_INVALID = -1,
        STEP_Idle = 0,
        STEP_Unload,
        STEP_UnloadWait,
        STEP_Load,
        STEP_LoadWait,
        STEP_SIZE
    };
};

class CSBehStringStep : public FD4::FD4StepTemplateBase<CSBehStringStep, FD4::FD4TaskBase> {
public:
    FD4_RUNTIME_CLASS(CSBehStringStep);

    enum step_method_index : int {
        STEP_INVALID = -1,
        STEP_Init = 0,
        STEP_Wait,
        STEP_Update,
        STEP_Finish,
        STEP_SIZE
    };
};

class CSNetworkFlowStep : public FD4::FD4StepTemplateBase<CSNetworkFlowStep, FD4::FD4StepBaseInterface> {
public:
    FD4_RUNTIME_CLASS(CSNetworkFlowStep);

    enum step_method_index : int {
        STEP_INVALID = -1,
        STEP_Init = 0,
        STEP_OfflineMode,
        STEP_OnlineMode,
        STEP_OfflineModeWait,
        STEP_Finish,
        STEP_SIZE
    };
};

class CSStayInMultiplayAreaWarpStep : public FD4::FD4StepTemplateBase<CSStayInMultiplayAreaWarpStep, FD4::FD4StepBaseInterface> {
public:
    FD4_RUNTIME_CLASS(CSStayInMultiplayAreaWarpStep);

    enum step_method_index : int {
        STEP_INVALID = -1,
        STEP_StandBy = 0,
        STEP_WaitFadeOut,
        STEP_WaitWarp,
        STEP_WaitAnim,
        STEP_WaitFadeIn,
        STEP_WaitCoolTime,
        STEP_SIZE
    };
};

class CSMultiplayPrivilegeCheckStep : public FD4::FD4StepTemplateBase<CSMultiplayPrivilegeCheckStep, FD4::FD4StepBaseInterface> {
public:
    FD4_RUNTIME_CLASS(CSMultiplayPrivilegeCheckStep);

    enum step_method_index : int {
        STEP_INVALID = -1,
        STEP_Init = 0,
        STEP_RequestCheck,
        STEP_WaitCheckResult,
        STEP_ApplyResult,
        STEP_WaitNextCheck,
        STEP_Finish,
        STEP_SIZE
    };
};

class CSNetFpsCheckStep : public FD4::FD4StepTemplateBase<CSNetFpsCheckStep, FD4::FD4StepBaseInterface> {
public:
    FD4_RUNTIME_CLASS(CSNetFpsCheckStep);

    enum step_method_index : int {
        STEP_INVALID = -1,
        STEP_Init = 0,
        STEP_Checking,
        STEP_ApplyResult,
        STEP_Finish,
        STEP_SIZE
    };
};

class CSPSPlusCheckStep : public FD4::FD4StepTemplateBase<CSPSPlusCheckStep, FD4::FD4StepBaseInterface> {
public:
    FD4_RUNTIME_CLASS(CSPSPlusCheckStep);

    enum step_method_index : int {
        STEP_INVALID = -1,
        STEP_Init = 0,
        STEP_RegistCallback,
        STEP_WaitRecheckEvent,
        STEP_ReqestCheck,
        STEP_WaitCheckResult,
        STEP_UnresistCallback,
        STEP_Finish,
        STEP_SIZE
    };
};

class CSResStep : public FD4::FD4StepTemplateBase<CSResStep, FD4::FD4TaskBase> {
public:
    FD4_RUNTIME_CLASS(CSResStep);

    enum step_method_index : int {
        STEP_INVALID = -1,
        STEP_Init = 0,
        STEP_Update,
        STEP_Finish,
        STEP_SIZE
    };
};

class CSScaleformStep : public FD4::FD4StepTemplateBase<CSScaleformStep, FD4::FD4TaskBase> {
public:
    FD4_RUNTIME_CLASS(CSScaleformStep);

    enum step_method_index : int {
        STEP_INVALID = -1,
        STEP_Init = 0,
        STEP_Begin,
        STEP_InitUnicodeLoad,
        STEP_WaitUnicodeLoad,
        STEP_Init_forGfxFileLoad,
        STEP_Wait_forGfxFileLoad,
        STEP_Init_forResidentTextureLoad,
        STEP_Wait_forResidentTextureLoad,
        STEP_FontSetup,
        STEP_RegistMainFont,
        STEP_RegistSubFont,
        STEP_Init_forResidentResourceLoad,
        STEP_Wait_forResidentResourceLoad,
        STEP_Wait_ForMapTileMaskLoad,
        STEP_UpdateB,
        STEP_Init_forResidentTextureReload,
        STEP_Wait_forResidentTextureReload,
        STEP_Finish,
        STEP_SIZE
    };
};

class CSSoundStep : public FD4::FD4StepTemplateBase<CSSoundStep, FD4::FD4TaskBase> {
public:
    FD4_RUNTIME_CLASS(CSSoundStep);

    enum step_method_index : int {
        STEP_INVALID = -1,
        STEP_Init = 0,
        STEP_WaitInitInfo,
        STEP_InitSoundMan,
        STEP_RegisterFirstChunkPackage,
        STEP_WaitRegisterFirstChunkPackage,
        STEP_LoadInitializeBank,
        STEP_WaitInitializeBank,
        STEP_WaitLoadResidentData,
        STEP_Update,
        STEP_WaitUnloadResidentData,
        STEP_UnregisterPackage,
        STEP_WaitUnregisterPackage,
        STEP_Finish,
        STEP_SIZE
    };
};

class CSFD4MoWwisebankResCapTask : public FD4::FD4StepTemplateBase<CSFD4MoWwisebankResCapTask, FD4::FD4TaskBase> {
public:
    FD4_RUNTIME_CLASS(CSFD4MoWwisebankResCapTask);

    enum step_method_index : int {
        STEP_INVALID = -1,
        STEP_Init = 0,
        STEP_LoadWait,
        STEP_Stabilized,
        STEP_Finish,
        STEP_SIZE
    };
};

class CSSystemStep : public FD4::FD4StepTemplateBase<CSSystemStep, FD4::FD4TaskBase> {
public:
    FD4_RUNTIME_CLASS(CSSystemStep);

    enum step_method_index : int {
        STEP_INVALID = -1,
        STEP_Init = 0,
        STEP_Init_forBootPhase1,
        STEP_Wait_forBootPhase1,
        STEP_Init_forBootPhase2,
        STEP_Wait_forBootPhase2,
        STEP_Init_forBootPhase3,
        STEP_Wait_forBootPhase3,
        STEP_Init_forBootPhase4,
        STEP_Wait_forBootPhase4,
        STEP_Init_forBootPhase5,
        STEP_Wait_forBootPhase5,
        STEP_Init_forGameFlow,
        STEP_Wait_forGameFlow,
        STEP_Finish_forGameFlow,
        STEP_Wait_forPreGraphicsStep,
        STEP_Wait_forGraphicsStep,
        STEP_Wait_forPadStep,
        STEP_Wait_forResStep,
        STEP_Wait_forSoundStep,
        STEP_Wait_forFileStep,
        STEP_Finish,
        STEP_SIZE
    };
};

class CSDbgDispStep : public FD4::FD4StepTemplateBase<CSDbgDispStep, FD4::FD4TaskBase> {
public:
    FD4_RUNTIME_CLASS(CSDbgDispStep);

    enum step_method_index : int {
        STEP_INVALID = -1,
        STEP_Init = 0,
        STEP_Update,
        STEP_Finish,
        STEP_SIZE
    };
};

class CSDevInfoNotifyStep : public FD4::FD4StepTemplateBase<CSDevInfoNotifyStep, FD4::FD4TaskBase> {
public:
    FD4_RUNTIME_CLASS(CSDevInfoNotifyStep);

    enum step_method_index : int {
        STEP_INVALID = -1,
        STEP_Init = 0,
        STEP_RequestDevInfo,
        STEP_Update,
        STEP_Finish,
        STEP_SIZE
    };
};

class CSDbgIdNameStep : public FD4::FD4StepTemplateBase<CSDbgIdNameStep, FD4::FD4TaskBase> {
public:
    FD4_RUNTIME_CLASS(CSDbgIdNameStep);

    enum step_method_index : int {
        STEP_INVALID = -1,
        STEP_Init = 0,
        STEP_Update,
        STEP_Finish,
        STEP_SIZE
    };
};

class CSDbgMenuStep : public FD4::FD4StepTemplateBase<CSDbgMenuStep, FD4::FD4TaskBase> {
public:
    FD4_RUNTIME_CLASS(CSDbgMenuStep);

    enum step_method_index : int {
        STEP_INVALID = -1,
        STEP_Init = 0,
        STEP_Update,
        STEP_Finish,
        STEP_SIZE
    };
};

class DbgRemoteStep : public FD4::FD4StepTemplateBase<DbgRemoteStep, FD4::FD4TaskBase> {
public:
    FD4_RUNTIME_CLASS(DbgRemoteStep);

    enum step_method_index : int {
        STEP_INVALID = -1,
        STEP_Init = 0,
        STEP_Update,
        STEP_Finish,
        STEP_SIZE
    };
};

class CSRegulationStep : public FD4::FD4StepTemplateBase<CSRegulationStep, FD4::FD4TaskBase> {
public:
    FD4_RUNTIME_CLASS(CSRegulationStep);

    enum step_method_index : int {
        STEP_INVALID = -1,
        STEP_Init = 0,
        STEP_WaitLoadLocalFile,
        STEP_Idle,
        STEP_RequestDownload,
        STEP_WaitDownload,
        STEP_Applay,
        STEP_Cancel,
        STEP_Finish,
        STEP_SIZE
    };
};

class CSMovieIns : public FD4::FD4StepTemplateBase<CSMovieIns, FD4::FD4StepBaseInterface> {
public:
    FD4_RUNTIME_CLASS(CSMovieIns);

    enum step_method_index : int {
        STEP_INVALID = -1,
        STEP_Init = 0,
        STEP_Wait_Request,
        STEP_Init_Setup,
        STEP_Wait_Setup,
        STEP_Finish_Setup,
        STEP_Init_Play,
        STEP_Wait_Play,
        STEP_Finish_Play,
        STEP_Finish,
        STEP_SIZE
    };
};

class CSPadStep : public FD4::FD4StepTemplateBase<CSPadStep, FD4::FD4TaskBase> {
public:
    FD4_RUNTIME_CLASS(CSPadStep);

    enum step_method_index : int {
        STEP_INVALID = -1,
        STEP_Init = 0,
        STEP_InitWait,
        STEP_Update,
        STEP_Finish,
        STEP_SIZE
    };
};

class CSPlaygoWaitStabilizeSecondChunkBackread : public FD4::FD4StepTemplateBase<CSPlaygoWaitStabilizeSecondChunkBackread, FD4::FD4StepBaseInterface> {
public:
    FD4_RUNTIME_CLASS(CSPlaygoWaitStabilizeSecondChunkBackread);

    enum step_method_index : int {
        STEP_INVALID = -1,
        STEP_Initialize = 0,
        STEP_WaitStartBackread,
        STEP_WaitStabilizeBackread,
        STEP_Finalize,
        STEP_SIZE
    };
};

class CSPrefetchForSlowStorageStep : public FD4::FD4StepTemplateBase<CSPrefetchForSlowStorageStep, FD4::FD4StepBaseInterface> {
public:
    FD4_RUNTIME_CLASS(CSPrefetchForSlowStorageStep);

    enum step_method_index : int {
        STEP_INVALID = -1,
        STEP_Init = 0,
        STEP_Init_Chache,
        STEP_Wait_Chache,
        STEP_Finish,
        STEP_SIZE
    };
};

class CSPlaylogSystemStep : public FD4::FD4StepTemplateBase<CSPlaylogSystemStep, FD4::FD4TaskBase> {
public:
    FD4_RUNTIME_CLASS(CSPlaylogSystemStep);

    enum step_method_index : int {
        STEP_INVALID = -1,
        STEP_Init = 0,
        STEP_Update,
        STEP_Finish,
        STEP_SIZE
    };
};

class CSReportSystemStep : public FD4::FD4StepTemplateBase<CSReportSystemStep, FD4::FD4TaskBase> {
public:
    FD4_RUNTIME_CLASS(CSReportSystemStep);

    enum step_method_index : int {
        STEP_INVALID = -1,
        STEP_Init = 0,
        STEP_Update,
        STEP_Finish,
        STEP_SIZE
    };
};

class CSDelayDeleteStep : public FD4::FD4StepTemplateBase<CSDelayDeleteStep, FD4::FD4TaskBase> {
public:
    FD4_RUNTIME_CLASS(CSDelayDeleteStep);

    enum step_method_index : int {
        STEP_INVALID = -1,
        STEP_Init = 0,
        STEP_Update,
        STEP_Finish,
        STEP_SIZE
    };
};

class CSScreenModeCtrl : public FD4::FD4StepTemplateBase<CSScreenModeCtrl, FD4::FD4StepBaseInterface> {
public:
    FD4_RUNTIME_CLASS(CSScreenModeCtrl);

    enum step_method_index : int {
        STEP_INVALID = -1,
        STEP_Standby = 0,
        STEP_ActivateWindow,
        STEP_ChangeScreenMode,
        STEP_ChangeWindowStyle,
        STEP_SIZE
    };
};

class CSDummyStep : public FD4::FD4StepTemplateBase<CSDummyStep, FD4::FD4TaskBase> {
public:
    FD4_RUNTIME_CLASS(CSDummyStep);

    enum step_method_index : int {
        STEP_INVALID = -1,
        STEP_Waiting = 0,
        STEP_SIZE
    };
};
} // namespace CS
} // namespace from
