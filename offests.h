namespace offsets
{
	namespace DT_BasePlayer
	{
		int m_iFOV = 0x10510EA4;
		int m_iFOVStart = 0x10510EAC;
		int m_flFOVTime = 0x10510EB8;
		int m_bIsScoped = 0;
		int m_iDefaultFOV = 0x10510EC4;
		int m_hZoomOwner = 0x10510ED4;
		int m_hVehicle = 0x10510EE4;
		int m_hUseEntity = 0x10510EF0;
		int m_iHealth = 0x1050E754;
		int m_lifeState = 0x1050A374;
		int m_iBonusProgress = 0x10510F00;
		int m_iBonusChallenge = 0x10510F14;
		int m_flMaxspeed = 0x10510F28;
		int m_fFlags = 0x10508414;
		int m_iObserverMode = 0x10510F38;
		int m_hObserverTarget = 0x10510F48;
		int m_szLastPlaceName = 0x10510F7C;
		int m_bUseWeaponsInVehicle = 0x10510F90;
	};
	namespace DT_HL2MP_Player
	{
		int m_hRagdoll = 0x10581690;
		int m_iSpawnInterpCounter = 0x1058169C;
		int m_iPlayerSoundType = 0x105816B4;
		int m_fIsWalking = 0x105816C8;
	};
	namespace DT_GMOD_Player
	{
		int m_iGModPlayerFlags = 0x10558210;
		int m_HoveredWidget = 0x10558224;
		int m_PressedWidget = 0x10558234;
		int m_Driving = 0x10558244;
		int m_DrivingMode = 0x10558250;
		int m_PlayerClass = 0x10558260;
		int m_bCanZoom = 0x10558270;
		int m_bCanWalk = 0x1055827C;
		int m_bIsTyping = 0x10558288;
		int m_StepSize = 0x10558294;
		int m_JumpPower = 0x105582A0;
		int m_ViewOffset = 0x105582A0;
		int m_ViewOffsetDucked = 0x105582BC;
		int m_fGestureEndTime = 0x105582D0;
		int m_PlayerColor = 0x105582E4;
		int m_WeaponColor = 0x105582F4;
		int m_Hands = 0x10558304;
		int m_nWaterLevel = 0x1050E9B8;
	};
	namespace DT_BaseEntity
	{
		int m_flSimulationTime = 0x1050E5A4;
		int m_ubInterpolationFrame = 0x1050E5B8;
		int m_vecOrigin = 0x105099F0;
		int m_angRotation = 0x1050E5D0;
		int m_nModelIndex = 0x105092E8;
		int m_fEffects = 0x10509328;
		int m_nRenderMode = 0x105099B8;
		int m_nRenderFX = 0x105099AC;
		int m_clrRender = 0x105099A0;
		int m_iTeamNum = 0x1050E5E0;
		int m_CollisionGroup = 0x1050E5EC;
		int m_flElasticity = 0x1050E600;
		int m_flShadowCastDistance = 0x1050E610;
		int m_hOwnerEntity = 0x1050E628;
		int m_hEffectEntity = 0x1050E638;
		int moveparent = 0x105099FC;
		int m_iParentAttachment = 0x1050E648;
		int m_Collision = 0x1050E674;
		int m_iTextureFrameIndex = 0x1050E680;
		int m_bSimulatedEveryTick = 0x1050E6A8;
		int m_bAnimatedEveryTick = 0x1050E6C0;
		int m_bAlternateSorting = 0x1050E6D8;
		int m_takedamage = 0x1050E6EC;
		int m_RealClassName = 0x1050E6FC;
		int m_OverrideMaterial = 0x1050E70C;
		int m_iHealth = 0x1050E754;
		int m_iMaxHealth = 0x1050E760;
		int m_spawnflags = 0x1050E770;
		int m_iGModFlags = 0x1050E780;
		int m_bOnFire = 0x1050E790;
		int m_vecPunchAngleVel = 0x10510A78;
		int m_vecPunchAngle = 0x10510A68;
		int m_CreationTime = 0x1050E79C;
		int m_vecVelocity0 = 0x1050E7AC;
		int m_vecVelocity1 = 0x1050E7C0;
		int m_vecVelocity2 = 0x1050E7D4;
		int m_GMOD_DataTable = 0x1050E7E8;
		int m_GMOD_bool = 0x1050E80C;
		int m_GMOD_float = 0x1050E82C;
		int m_GMOD_int = 0x1050E84C;
		int m_GMOD_Vector = 0x1050E86C;
		int m_GMOD_QAngle = 0x1050E890;
		int m_GMOD_EHANDLE = 0x1050E890;
		int m_GMOD_String0 = 0x1050E8C4;
		int m_GMOD_String1 = 0x1050E8D4;
		int m_GMOD_String2 = 0x1050E8E4;
		int m_GMOD_String3 = 0x1050E8F4;
	};
	namespace DT_BaseCombatCharacter
	{
		int m_hActiveWeapon = 0x1050D678;
		int m_hMyWeapons = 0x1050D698;
	};
	namespace DT_BaseAnimating
	{
		int m_nSequence = 0x10509308;
		int m_nForceBone = 0x1050BB88;
		int m_vecForce = 0x1050BB98;
		int m_nSkin = 0x105092F8;
		int m_nBody = 0x10509300;
		int m_nHitboxSet = 0x1050BBA4;
		int m_flModelScale = 0x1050BBB4;
		int m_flModelWidthScale = 0x1050BBC4;
		int m_flPoseParameter = 0x105093B4;
		int m_flPlaybackRate = 0x10509314;
		int m_flEncodedController = 0x1050BBF4;
		int m_bClientSideAnimation = 0x1050BC0C;
		int m_bClientSideFrameReset = 0x1050BC24;
		int m_nNewSequenceParity = 0x10509354;
		int m_nResetEventsParity = 0x1050936C;
		int m_nMuzzleFlashParity = 0x10509384;
		int m_hLightingOrigin = 0x1050BC3C;
		int m_hLightingOriginRelative = 0x1050BC50;
		int m_fadeMinDist = 0x1050BC7C;
		int m_flFadeScale = 0x1050BC9C;
		int m_pBoneManipulator = 0x1050BCAC;
		int m_pFlexManipulator = 0x1050BCC0;
		int m_OverrideViewTarget = 0x1050BCD4;
	};
};