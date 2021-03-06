/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "LTAVPlayerDelegate.h"
#import "AppleTV-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "ATVPushNotificationListener.h"

@class ATVDataCollection, ATVDataQuery, NSString, ATVRadioSkipLimiter, NSMutableArray, NSTimer, NSData, NSMutableDictionary, NSDate, NSArray, RadioModel, NSNumber, ATVBackgroundTask;

__attribute__((visibility("hidden")))
@interface ATVRadioDataClient : XXUnknownSuperclass <ATVPushNotificationListener, LTAVPlayerDelegate> {
	BOOL _explicitContentWasAllowed;	// 4 = 0x4
	BOOL _deviceActivated;	// 5 = 0x5
	BOOL _lastPlayerStatePaused;	// 6 = 0x6
	BOOL _iTunesMatchPurchased;	// 7 = 0x7
	NSString *_iAdID;	// 8 = 0x8
	RadioModel *_radioModel;	// 12 = 0xc
	NSNumber *_accountDSID;	// 16 = 0x10
	ATVBackgroundTask *_radioPushNotificationTask;	// 20 = 0x14
	NSDate *_lastSyncTime;	// 24 = 0x18
	ATVDataQuery *_playbackItemsQuery;	// 28 = 0x1c
	id _playbackCompletionHandler;	// 32 = 0x20
	ATVDataCollection *_playbackStation;	// 36 = 0x24
	NSArray *_playbackStationInitialTracks;	// 40 = 0x28
	NSTimer *_playerIdlePlayingStopTimer;	// 44 = 0x2c
	NSTimer *_playerPausedStopTimer;	// 48 = 0x30
	NSDate *_userActionPauseTimeStamp;	// 52 = 0x34
	NSMutableArray *_jinglePlayEvents;	// 56 = 0x38
	ATVRadioSkipLimiter *_skipLimiter;	// 60 = 0x3c
	NSData *_iAdJingleHeartBeatToken;	// 64 = 0x40
	NSData *_songAdData;	// 68 = 0x44
	NSMutableDictionary *_songBreakAd;	// 72 = 0x48
	NSMutableDictionary *_songSkipAd;	// 76 = 0x4c
	unsigned long long _radioModelUpdateGlobalVersion;	// 80 = 0x50
	double _serverDurationToCountAsPlayed;	// 88 = 0x58
	double _playerIdlePlayingStopTime;	// 96 = 0x60
	double _playerPausedStopTime;	// 104 = 0x68
	unsigned long long _songStationAdamID;	// 112 = 0x70
}
@property(retain, nonatomic) NSNumber *accountDSID;	// G=0x4c135; S=0x4c145; @synthesize=_accountDSID
@property(assign, nonatomic) BOOL deviceActivated;	// G=0x4c1a5; S=0x4c1b5; @synthesize=_deviceActivated
@property(copy, nonatomic) NSString *iAdID;	// G=0x4c0ad; S=0x4c0c1; @synthesize=_iAdID
@property(copy) NSData *iAdJingleHeartBeatToken;	// G=0x4c47d; S=0x4c491; @synthesize=_iAdJingleHeartBeatToken
@property(assign, nonatomic) BOOL iTunesMatchPurchased;	// G=0x4c45d; S=0x4c46d; @synthesize=_iTunesMatchPurchased
@property(retain, nonatomic) NSMutableArray *jinglePlayEvents;	// G=0x4c3ed; S=0x4c3fd; @synthesize=_jinglePlayEvents
@property(assign, nonatomic) BOOL lastPlayerStatePaused;	// G=0x4c2a1; S=0x4c2b1; @synthesize=_lastPlayerStatePaused
@property(retain, nonatomic) NSDate *lastSyncTime;	// G=0x4c1c5; S=0x4c1d5; @synthesize=_lastSyncTime
@property(copy, nonatomic) id playbackCompletionHandler;	// G=0x4c235; S=0x4c249; @synthesize=_playbackCompletionHandler
@property(retain, nonatomic) ATVDataQuery *playbackItemsQuery;	// G=0x4c1fd; S=0x4c20d; @synthesize=_playbackItemsQuery
@property(retain, nonatomic) ATVDataCollection *playbackStation;	// G=0x4c259; S=0x4a401; @synthesize=_playbackStation
@property(retain, nonatomic) NSArray *playbackStationInitialTracks;	// G=0x4c269; S=0x4c279; @synthesize=_playbackStationInitialTracks
@property(assign, nonatomic) double playerIdlePlayingStopTime;	// G=0x4c2ed; S=0x4c305; @synthesize=_playerIdlePlayingStopTime
@property(retain, nonatomic) NSTimer *playerIdlePlayingStopTimer;	// G=0x4c319; S=0x4c329; @synthesize=_playerIdlePlayingStopTimer
@property(assign, nonatomic) double playerPausedStopTime;	// G=0x4c351; S=0x4c369; @synthesize=_playerPausedStopTime
@property(retain, nonatomic) NSTimer *playerPausedStopTimer;	// G=0x4c37d; S=0x4c38d; @synthesize=_playerPausedStopTimer
@property(retain, nonatomic) RadioModel *radioModel;	// G=0x4c0d1; S=0x4c0e1; @synthesize=_radioModel
@property(assign, nonatomic) unsigned long long radioModelUpdateGlobalVersion;	// G=0x4c109; S=0x4c121; @synthesize=_radioModelUpdateGlobalVersion
@property(retain, nonatomic) ATVBackgroundTask *radioPushNotificationTask;	// G=0x4c16d; S=0x4c17d; @synthesize=_radioPushNotificationTask
@property(assign, nonatomic) double serverDurationToCountAsPlayed;	// G=0x4c2c1; S=0x4c2d9; @synthesize=_serverDurationToCountAsPlayed
@property(retain, nonatomic) ATVRadioSkipLimiter *skipLimiter;	// G=0x4c425; S=0x4c435; @synthesize=_skipLimiter
@property(copy, nonatomic) NSData *songAdData;	// G=0x4c4cd; S=0x4c4e1; @synthesize=_songAdData
@property(retain, nonatomic) NSMutableDictionary *songBreakAd;	// G=0x4c4f1; S=0x4c501; @synthesize=_songBreakAd
@property(retain, nonatomic) NSMutableDictionary *songSkipAd;	// G=0x4c529; S=0x4c539; @synthesize=_songSkipAd
@property(assign, nonatomic) unsigned long long songStationAdamID;	// G=0x4c4a1; S=0x4c4b9; @synthesize=_songStationAdamID
@property(retain, nonatomic) NSDate *userActionPauseTimeStamp;	// G=0x4c3b5; S=0x4c3c5; @synthesize=_userActionPauseTimeStamp
+ (void)purchaseRadioTrack:(id)track reporting:(id)reporting;	// 0x4b9f9
+ (id)radioDataClient;	// 0x49de1
+ (id)radioKeyBagDict;	// 0x4a045
- (id)init;	// 0x4a0fd
- (void).cxx_destruct;	// 0x4c561
- (void)_adPlayerDidPlayToEnd:(id)_adPlayer;	// 0x57929
- (void)_adPlayerWillStop:(id)_adPlayer;	// 0x578f9
- (void)_appendTracks:(id)tracks;	// 0x5b989
- (BOOL)_canPlayerSkipTrack;	// 0x59cdd
- (void)_cleanupPlayback;	// 0x583c1
- (id)_clientBundleID;	// 0x5f27d
- (void)_getPersonalizedStations:(id *)stations sponsoredStationIDs:(id *)ids stationHashes:(id *)hashes;	// 0x521b5
- (BOOL)_handleAdRequestConstructionWithServerURL:(id)serverURL adType:(int)type headers:(id)headers requestProperties:(id)properties requesterIdentifiers:(id)identifiers;	// 0x5e369
- (void)_handleFeaturedStationsQuery:(id)query withNumberOfFeaturedStations:(unsigned)featuredStations completionQueue:(id)queue completionHandler:(id)handler;	// 0x523cd
- (void)_handleGenreStationsQuery:(id)query withGenreIdentifier:(id)genreIdentifier completionQueue:(id)queue completionHandler:(id)handler;	// 0x52f55
- (void)_handleJingleRequestWithToken:(long)token urlKeyInBag:(id)bag requestBody:(id)body requestHeaders:(id)headers;	// 0x5ecf9
- (void)_handleSearchStationsQuery:(id)query withSearchTerm:(id)searchTerm completionQueue:(id)queue completionHandler:(id)handler;	// 0x52b6d
- (void)_heartBeatTokenChangedNotification:(id)notification;	// 0x5d84d
- (void)_iTunesAccountActivity:(id)activity;	// 0x4cead
- (void)_iTunesAccountChanged;	// 0x4cf4d
- (void)_iTunesAccountReauthenticated;	// 0x4d065
- (BOOL)_initRadioClient;	// 0x4a679
- (void)_initializeAdEngine;	// 0x5d091
- (void)_initiateHiddenStationPlaybackWithTracks:(id)tracks;	// 0x58039
- (void)_initiatePlayerWithTracks:(id)tracks station:(id)station;	// 0x57899
- (void)_initiateStationPlaybackWithInitialAd:(id)initialAd;	// 0x5804d
- (void)_initiateStationPlaybackWithTracks:(id)tracks;	// 0x58025
- (void)_initiateStationPlaybackWithTracks:(id)tracks presentPlayer:(BOOL)player;	// 0x57d49
- (void)_initiateStreamingStationPlaybackWithInitialAd:(id)initialAd;	// 0x57b39
- (id)_itemDataDictWithStoreDict:(id)storeDict responseDict:(id)dict;	// 0x4fb69
- (id)_newItemsQueryWithStation:(id)station;	// 0x5b85d
- (BOOL)_parentalAccessRestricted;	// 0x4bdd5
- (void)_parentalControlAccessChanged:(id)changed;	// 0x4bd25
- (void)_performInitialSync;	// 0x4ad51
- (void)_playerAssetChanged:(id)changed;	// 0x58581
- (void)_playerAssetWillChangeWithReason:(unsigned)_playerAsset;	// 0x58c09
- (void)_playerNextMediaAssetAction:(id)action;	// 0x58acd
- (void)_playerPlaylistAssetPlayedToEndTime:(id)endTime;	// 0x58bf5
- (void)_playerSkippedTrack:(id)track;	// 0x5a0d1
- (void)_playerStateChanged:(id)changed;	// 0x58e99
- (void)_playerStopTimerHandler:(id)handler;	// 0x598d1
- (void)_preemptivelySchedulePolicyEngineSongBreakAd:(id)ad songSkipAd:(id)ad2 forTrackWithData:(id)data stationAdamID:(unsigned long long)anId;	// 0x5e175
- (void)_purchaseRadioItemForPlayer:(id)player;	// 0x5bb31
- (void)_radioModelUpdated:(id)updated;	// 0x4c6d5
- (void)_recordAdEventsForAdItem:(id)adItem avAsset:(id)asset;	// 0x5b3ad
- (void)_recordJinglePlayEventWithItem:(id)item endReason:(int)reason;	// 0x5ad89
- (void)_registerPushForUser:(id)user;	// 0x4d5b1
- (void)_removeObservers;	// 0x58451
- (void)_replacePlaybackStationTracks;	// 0x57045
- (void)_reportJinglePlayEvents;	// 0x5b169
- (void)_reportTileImpressionWithStation:(id)station timeStamp:(double)stamp;	// 0x5f089
- (void)_schedulePolicyEngineAd:(id)ad forTrackWithAdData:(id)adData stationAdamID:(unsigned long long)anId;	// 0x5db69
- (void)_schedulePolicyEngineStationEntryAd:(id)ad stationAdamID:(unsigned long long)anId;	// 0x5dfa9
- (void)_screenSaverStarted:(id)started;	// 0x59a55
- (void)_screenSaverStopped:(id)stopped;	// 0x59ab9
- (void)_sendPlaybackStarted:(BOOL)started;	// 0x57539
- (void)_setActivePlaybackStation:(id)station;	// 0x58211
- (void)_setSponsoredStationIDs:(id)ids;	// 0x5f219
- (void)_shutDownPlayback;	// 0x58261
- (void)_startPlaybackWithStation:(id)station startupTracks:(id)tracks completionHandler:(id)handler;	// 0x56651
- (void)_syncToServer:(id)server;	// 0x4b761
- (id)_trackDictFromDataItem:(id)dataItem;	// 0x54089
- (void)_unregisterPush;	// 0x4d645
- (void)_updateAdActivity;	// 0x5f1c9
- (void)_updateAdPolicyEngineWithStation:(id)station initialTracks:(id)tracks;	// 0x5d925
- (void)_updateHeartBeatToken;	// 0x5d879
- (void)_updatePlayerWithTracks:(id)tracks station:(id)station;	// 0x5762d
- (void)_updateUserData;	// 0x5d631
- (void)_userActionHandler:(id)handler;	// 0x59b1d
// declared property getter: - (id)accountDSID;	// 0x4c135
- (void)cancelLoad:(id)load;	// 0x4d559
- (void)concreteDataClientConnect;	// 0x4a489
- (void)concreteDataClientDisconnect;	// 0x4b059
- (void)connectionCompletedWithStatus:(int)status;	// 0x4b2f9
- (id)currentPlayingStation;	// 0x4bcd1
- (void)dealloc;	// 0x4a2e1
// declared property getter: - (BOOL)deviceActivated;	// 0x4c1a5
- (void)executeQuery:(id)query withCompletionQueue:(id)completionQueue completionHandler:(id)handler;	// 0x4b459
- (void)handleAddStationQuery:(id)query completionQueue:(id)queue completionHandler:(id)handler;	// 0x534ed
- (void)handleDeleteQuery:(id)query completionQueue:(id)queue completionHandler:(id)handler;	// 0x545ed
- (void)handleHistoryItemsQuery:(id)query completionQueue:(id)queue completionHandler:(id)handler;	// 0x4ffe9
- (void)handleItemQuery:(id)query completionQueue:(id)queue completionHandler:(id)handler;	// 0x4db01
- (void)handleLikesBansQuery:(id)query completionQueue:(id)queue completionHandler:(id)handler;	// 0x4eaf5
- (void)handleStationItemsQuery:(id)query completionQueue:(id)queue completionHandler:(id)handler;	// 0x4dec9
- (void)handleStationsQuery:(id)query completionQueue:(id)queue completionHandler:(id)handler;	// 0x51dc9
- (void)handleStationsSortQuery:(id)query completionQueue:(id)queue completionHandler:(id)handler;	// 0x54e2d
- (void)handleUpdateQuery:(id)query completionQueue:(id)queue completionHandler:(id)handler;	// 0x55305
- (void)handleWishListItemsQuery:(id)query completionQueue:(id)queue completionHandler:(id)handler;	// 0x51a19
// declared property getter: - (id)iAdID;	// 0x4c0ad
// declared property getter: - (id)iAdJingleHeartBeatToken;	// 0x4c47d
// declared property getter: - (BOOL)iTunesMatchPurchased;	// 0x4c45d
- (id)imageKeyForObject:(id)object;	// 0x4d33d
- (BOOL)isExplicitContentAllowed;	// 0x4bf9d
// declared property getter: - (id)jinglePlayEvents;	// 0x4c3ed
// declared property getter: - (BOOL)lastPlayerStatePaused;	// 0x4c2a1
// declared property getter: - (id)lastSyncTime;	// 0x4c1c5
- (id)loadImageForObject:(id)object size:(CGSize)size crop:(BOOL)crop completionHandler:(id)handler;	// 0x4d49d
- (void)optOut;	// 0x4be49
// declared property getter: - (id)playbackCompletionHandler;	// 0x4c235
// declared property getter: - (id)playbackItemsQuery;	// 0x4c1fd
// declared property getter: - (id)playbackStation;	// 0x4c259
// declared property getter: - (id)playbackStationInitialTracks;	// 0x4c269
- (void)player:(id)player currentAssetWillChangeWithAVAsset:(id)currentAsset;	// 0x5a3c1
- (BOOL)player:(id)player shouldHandleEvent:(id)event playerTime:(double)time;	// 0x5a2b9
- (void)player:(id)player willStopWithAVAsset:(id)avasset;	// 0x5a84d
// declared property getter: - (double)playerIdlePlayingStopTime;	// 0x4c2ed
// declared property getter: - (id)playerIdlePlayingStopTimer;	// 0x4c319
// declared property getter: - (double)playerPausedStopTime;	// 0x4c351
// declared property getter: - (id)playerPausedStopTimer;	// 0x4c37d
- (BOOL)processQueryAsync:(id)async;	// 0x4b3e5
- (void)purchaseRadioItemForPlayer:(id)player;	// 0x4b9e9
- (void)pushNotificationServer:(id)server didReceiveMessageForTopic:(id)topic userInfo:(id)info;	// 0x4d721
- (void)pushNotificationServerTokenDidChange:(id)pushNotificationServerToken;	// 0x4dac1
// declared property getter: - (id)radioModel;	// 0x4c0d1
// declared property getter: - (unsigned long long)radioModelUpdateGlobalVersion;	// 0x4c109
// declared property getter: - (id)radioPushNotificationTask;	// 0x4c16d
- (void)radioTrackPurchaseComplete:(id)complete;	// 0x5ce95
- (void)replacePlaybackStationTracks;	// 0x4bce1
- (void)reportTileImpressionWithStation:(id)station timeStamp:(double)stamp;	// 0x4bcf1
// declared property getter: - (double)serverDurationToCountAsPlayed;	// 0x4c2c1
// declared property setter: - (void)setAccountDSID:(id)dsid;	// 0x4c145
// declared property setter: - (void)setDeviceActivated:(BOOL)activated;	// 0x4c1b5
// declared property setter: - (void)setIAdID:(id)anId;	// 0x4c0c1
// declared property setter: - (void)setIAdJingleHeartBeatToken:(id)token;	// 0x4c491
// declared property setter: - (void)setITunesMatchPurchased:(BOOL)purchased;	// 0x4c46d
// declared property setter: - (void)setJinglePlayEvents:(id)events;	// 0x4c3fd
// declared property setter: - (void)setLastPlayerStatePaused:(BOOL)paused;	// 0x4c2b1
// declared property setter: - (void)setLastSyncTime:(id)time;	// 0x4c1d5
// declared property setter: - (void)setPlaybackCompletionHandler:(id)handler;	// 0x4c249
// declared property setter: - (void)setPlaybackItemsQuery:(id)query;	// 0x4c20d
// declared property setter: - (void)setPlaybackStation:(id)station;	// 0x4a401
// declared property setter: - (void)setPlaybackStationInitialTracks:(id)tracks;	// 0x4c279
// declared property setter: - (void)setPlayerIdlePlayingStopTime:(double)time;	// 0x4c305
// declared property setter: - (void)setPlayerIdlePlayingStopTimer:(id)timer;	// 0x4c329
// declared property setter: - (void)setPlayerPausedStopTime:(double)time;	// 0x4c369
// declared property setter: - (void)setPlayerPausedStopTimer:(id)timer;	// 0x4c38d
// declared property setter: - (void)setRadioModel:(id)model;	// 0x4c0e1
// declared property setter: - (void)setRadioModelUpdateGlobalVersion:(unsigned long long)version;	// 0x4c121
// declared property setter: - (void)setRadioPushNotificationTask:(id)task;	// 0x4c17d
// declared property setter: - (void)setServerDurationToCountAsPlayed:(double)countAsPlayed;	// 0x4c2d9
// declared property setter: - (void)setSkipLimiter:(id)limiter;	// 0x4c435
// declared property setter: - (void)setSongAdData:(id)data;	// 0x4c4e1
// declared property setter: - (void)setSongBreakAd:(id)ad;	// 0x4c501
// declared property setter: - (void)setSongSkipAd:(id)ad;	// 0x4c539
// declared property setter: - (void)setSongStationAdamID:(unsigned long long)anId;	// 0x4c4b9
// declared property setter: - (void)setUserActionPauseTimeStamp:(id)stamp;	// 0x4c3c5
// declared property getter: - (id)skipLimiter;	// 0x4c425
// declared property getter: - (id)songAdData;	// 0x4c4cd
// declared property getter: - (id)songBreakAd;	// 0x4c4f1
// declared property getter: - (id)songSkipAd;	// 0x4c529
// declared property getter: - (unsigned long long)songStationAdamID;	// 0x4c4a1
- (void)startPlaybackWithStation:(id)station startupTracks:(id)tracks completionHandler:(id)handler;	// 0x4b9a1
- (BOOL)supportsProperty:(id)property;	// 0x4b3b1
- (void)updateAdActivity;	// 0x4bd15
// declared property getter: - (id)userActionPauseTimeStamp;	// 0x4c3b5
@end

