INCLUDES += -I$(srcdir)/logic/
INCLUDES += -I$(srcdir)/../../sdk/
INCLUDES += -I$(srcdir)/../../../Shared/sdk/
INCLUDES += -I$(srcdir)/../../../Shared/publicsdk/include/
INCLUDES += -I$(srcdir)/../../../vendor/
INCLUDES += -I$(srcdir)/../../../vendor/pme/
INCLUDES += -I$(srcdir)/../../../vendor/json-c/

UTILS = ./utils/CHTTPClient.cpp ./utils/CHTTPRequest.cpp ./utils/CHTTPResponse.cpp ./utils/CTCPClientSocketImpl.cpp ./utils/CTCPImpl.cpp ./utils/base64.cpp ./utils/zip/crc32.cpp ./utils/zip/ioapi.c ./utils/zip/iowin32.c ./utils/zip/mztools.c ./utils/zip/unzip.c ./utils/zip/zip.c
LOGIC = ./logic/ASE.cpp ./logic/CAccessControlList.cpp ./logic/CAccessControlListGroup.cpp ./logic/CAccessControlListManager.cpp ./logic/CAccessControlListRight.cpp ./logic/CAccount.cpp ./logic/CAccountManager.cpp ./logic/CBan.cpp ./logic/CBanManager.cpp ./logic/CBlendedWeather.cpp ./logic/CBlip.cpp ./logic/CBlipManager.cpp ./logic/CClient.cpp ./logic/CClock.cpp ./logic/CColCircle.cpp ./logic/CColCuboid.cpp ./logic/CColManager.cpp ./logic/CColPolygon.cpp ./logic/CColRectangle.cpp ./logic/CColShape.cpp ./logic/CColSphere.cpp ./logic/CColTube.cpp ./logic/CCommandFile.cpp ./logic/CCommandLineParser.cpp ./logic/CConfig.cpp ./logic/CConnectHistory.cpp ./logic/CConsole.cpp ./logic/CConsoleClient.cpp ./logic/CConsoleCommand.cpp ./logic/CConsoleCommands.cpp ./logic/CCustomData.cpp ./logic/CDummy.cpp ./logic/CElement.cpp ./logic/CElementDeleter.cpp ./logic/CElementGroup.cpp ./logic/CElementIDs.cpp ./logic/CEvents.cpp ./logic/CGame.cpp ./logic/CGroups.cpp ./logic/CHTTPD.cpp ./logic/CHandling.cpp ./logic/CHandlingManager.cpp ./logic/CKeyBinds.cpp ./logic/CLanBroadcast.cpp ./logic/CLogger.cpp ./logic/CMD5Hasher.cpp ./logic/CMainConfig.cpp ./logic/CMapEvent.cpp ./logic/CMapEventManager.cpp ./logic/CMapManager.cpp ./logic/CMarker.cpp ./logic/CMarkerManager.cpp ./logic/CObject.cpp ./logic/CObjectManager.cpp ./logic/CPacketTranslator.cpp ./logic/CPad.cpp ./logic/CPed.cpp ./logic/CPedManager.cpp ./logic/CPedSync.cpp ./logic/CPerPlayerEntity.cpp ./logic/CPickup.cpp ./logic/CPickupManager.cpp ./logic/CPlayer.cpp ./logic/CPlayerCamera.cpp ./logic/CPlayerClothes.cpp ./logic/CPlayerManager.cpp ./logic/CPlayerStats.cpp ./logic/CPlayerTasks.cpp ./logic/CPlayerTextManager.cpp ./logic/CRPCFunctions.cpp ./logic/CRadarArea.cpp ./logic/CRadarAreaManager.cpp ./logic/CRegisteredCommands.cpp ./logic/CRegistry.cpp ./logic/CRemoteCalls.cpp ./logic/CResource.cpp ./logic/CResourceChecker.cpp ./logic/CResourceClientConfigItem.cpp ./logic/CResourceClientFileItem.cpp ./logic/CResourceClientScriptItem.cpp ./logic/CResourceConfigItem.cpp ./logic/CResourceDownloader.cpp ./logic/CResourceFile.cpp ./logic/CResourceHTMLItem.cpp ./logic/CResourceManager.cpp ./logic/CResourceMapItem.cpp ./logic/CResourceScriptItem.cpp ./logic/CScriptDebugging.cpp ./logic/CScriptFile.cpp ./logic/CSerialManager.cpp ./logic/CSettings.cpp ./logic/CStaticFunctionDefinitions.cpp ./logic/CTeam.cpp ./logic/CTeamManager.cpp ./logic/CTextDisplay.cpp ./logic/CTextItem.cpp ./logic/CUnoccupiedVehicleSync.cpp ./logic/CVehicle.cpp ./logic/CVehicleColor.cpp ./logic/CVehicleColorManager.cpp ./logic/CVehicleDefaultColors.cpp ./logic/CVehicleManager.cpp ./logic/CVehicleNames.cpp ./logic/CVehicleUpgrades.cpp ./logic/CWater.cpp ./logic/CWaterManager.cpp ./logic/CWeaponNames.cpp ./logic/CWhoWas.cpp ./logic/CXMLConfig.cpp ./logic/CZoneNames.cpp ./logic/TaskNames.cpp ./logic/Utils.cpp ./logic/lua/CLuaArgument.cpp ./logic/lua/CLuaArguments.cpp ./logic/lua/CLuaCFunctions.cpp ./logic/lua/CLuaFunctionDefinitions.cpp ./logic/lua/CLuaMain.cpp ./logic/lua/CLuaManager.cpp ./logic/lua/CLuaModuleManager.cpp ./logic/lua/CLuaTimer.cpp ./logic/lua/CLuaTimerManager.cpp ./logic/lua/LuaCommon.cpp ./logic/luadefs/CLuaACLDefs.cpp ./logic/luadefs/CLuaCameraDefs.cpp ./logic/luadefs/CLuaDefs.cpp ./logic/luadefs/CLuaElementDefs.cpp ./logic/luadefs/CLuaFileDefs.cpp ./logic/luadefs/CLuaHTTPDefs.cpp ./logic/luadefs/CLuaHandlingDefs.cpp ./logic/luadefs/CLuaPickupDefs.cpp ./logic/luadefs/CLuaResourceDefs.cpp ./logic/luadefs/CLuaTextDefs.cpp ./logic/luadefs/CLuaWorldDefs.cpp ./logic/luadefs/CLuaXMLDefs.cpp ./logic/packets/CCameraSyncPacket.cpp ./logic/packets/CChatEchoPacket.cpp ./logic/packets/CCommandPacket.cpp ./logic/packets/CConsoleEchoPacket.cpp ./logic/packets/CCustomDataPacket.cpp ./logic/packets/CDebugEchoPacket.cpp ./logic/packets/CDetonateSatchelsPacket.cpp ./logic/packets/CEntityAddPacket.cpp ./logic/packets/CEntityRemovePacket.cpp ./logic/packets/CExplosionSyncPacket.cpp ./logic/packets/CFireSyncPacket.cpp ./logic/packets/CKeysyncPacket.cpp ./logic/packets/CLuaEventPacket.cpp ./logic/packets/CLuaPacket.cpp ./logic/packets/CMapInfoPacket.cpp ./logic/packets/CPacket.cpp ./logic/packets/CPedStartSyncPacket.cpp ./logic/packets/CPedSyncPacket.cpp ./logic/packets/CPedWastedPacket.cpp ./logic/packets/CPickupHideShowPacket.cpp ./logic/packets/CPickupHitConfirmPacket.cpp ./logic/packets/CPlayerChangeNickPacket.cpp ./logic/packets/CPlayerClothesPacket.cpp ./logic/packets/CPlayerConnectCompletePacket.cpp ./logic/packets/CPlayerDisconnectedPacket.cpp ./logic/packets/CPlayerJoinCompletePacket.cpp ./logic/packets/CPlayerJoinDataPacket.cpp ./logic/packets/CPlayerJoinPacket.cpp ./logic/packets/CPlayerListPacket.cpp ./logic/packets/CPlayerPuresyncPacket.cpp ./logic/packets/CPlayerQuitPacket.cpp ./logic/packets/CPlayerSpawnPacket.cpp ./logic/packets/CPlayerStatsPacket.cpp ./logic/packets/CPlayerTimeoutPacket.cpp ./logic/packets/CPlayerWastedPacket.cpp ./logic/packets/CProjectileSyncPacket.cpp ./logic/packets/CResourceStartPacket.cpp ./logic/packets/CResourceStopPacket.cpp ./logic/packets/CReturnSyncPacket.cpp ./logic/packets/CServerTextItemPacket.cpp ./logic/packets/CUnoccupiedVehicleStartSyncPacket.cpp ./logic/packets/CUnoccupiedVehicleSyncPacket.cpp ./logic/packets/CVehicleDamageSyncPacket.cpp ./logic/packets/CVehicleInOutPacket.cpp ./logic/packets/CVehiclePuresyncPacket.cpp ./logic/packets/CVehicleSpawnPacket.cpp ./logic/packets/CVehicleTrailerPacket.cpp ./logic/packets/CVoiceDataPacket.cpp

if PRECOMPILE_HEADERS
BUILT_SOURCES = StdInc.h.gch
AM_CXXFLAGS += -Winvalid-pch

StdInc.h.gch: StdInc.h
	-rm -f StdInc.h.gch
	$(CXX) -fPIC -DPIC $(DEFS) $(DEFAULT_INCLUDES) \
		$(AM_CXXFLAGS) $(CXXFLAGS) $(CPPFLAGS) \
		$(INCLUDES) -o StdInc.h.gch -xc++-header StdInc.h

clean-local:
	-rm -f StdInc.h.gch
endif

lib_LTLIBRARIES = \
	libdeathmatch.la

libdeathmatch_la_SOURCES = \
	Server.cpp \
	CServer.cpp \
	$(UTILS) \
	$(LOGIC) \
	StdInc.cpp

libdeathmatch_la_LIBADD = \
	@PCRE_LIBS@ \
	-lehs \
	-lpme \
	-lplatform \
	-lsqlite3 \
	-llua \
	-ljson \
	-lrt

libdeathmatch_la_LDFLAGS = \
	-Wl,-export-dynamic \
	-L../../sdk/ \
	-L../../../vendor/json-c/ \
	-L../../../vendor/ehs/ \
	-L../../../vendor/pme/ \
	-L../../../libs/ \
	-L../../../libs/lua \
	-L/usr/lib

