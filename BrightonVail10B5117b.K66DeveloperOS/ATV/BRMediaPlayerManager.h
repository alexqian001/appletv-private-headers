/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRSingleton.h"

@class NSMutableArray, NSDictionary, BRMediaPlayerController, NSTimer, BRWindow, NSObject;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface BRMediaPlayerManager : BRSingleton {
	NSObject<OS_dispatch_queue> *_nowPlayingQueue;	// 4 = 0x4
	NSMutableArray *_registrations;	// 8 = 0x8
	NSDictionary *_singletons;	// 12 = 0xc
	BRWindow *_shroudyMcShroud;	// 16 = 0x10
	BRWindow *_playerWindow;	// 20 = 0x14
	NSTimer *_popupDelay;	// 24 = 0x18
	NSTimer *_autoPresentTimer;	// 28 = 0x1c
	NSTimer *_safetyTimer;	// 32 = 0x20
	NSTimer *_cloudMusicStopTimer;	// 36 = 0x24
	double _autoPresentTimeout;	// 40 = 0x28
	int _playerWindowState;	// 48 = 0x30
	BOOL _screensaverUp;	// 52 = 0x34
	BOOL _playerInOwnWindow;	// 53 = 0x35
	float _savedVolume;	// 56 = 0x38
	BRMediaPlayerController *_externallyPresentedPlayerController;	// 60 = 0x3c
}
@property(assign) double autoPresentTimeout;	// G=0x3709d5; S=0x37099d; converted property
@property(retain, nonatomic) BRMediaPlayerController *externallyPresentedPlayerController;	// G=0x37129d; S=0x3712ad; @synthesize=_externallyPresentedPlayerController
+ (void)setSingleton:(id)singleton;	// 0x36f589
+ (id)singleton;	// 0x36f579
- (id)init;	// 0x36f599
- (void)_addPlayerWindowForController:(id)controller;	// 0x3725ad
- (void)_addPlayerWindowUnderShroud;	// 0x37290d
- (void)_addShroudWindowWithSelector:(SEL)selector;	// 0x371fa9
- (id)_autoPresentPlayer;	// 0x372fb9
- (void)_autoPresentTimerFired:(id)fired;	// 0x3730f5
- (int)_calculateAccessModeForExtrasAsset:(id)extrasAsset;	// 0x371885
- (void)_cloudMusicStopTimerFired:(id)fired;	// 0x371a09
- (id)_copyAirPlayMetaDataTimeForPlayer:(id)player;	// 0x371a99
- (void)_dataClientStatusChanged:(id)changed;	// 0x373a75
- (void)_deferredPresentPlayerAndOptions:(id)options;	// 0x3719c5
- (id)_fetchCoverArtForPlayer:(id)player insertPlaceholder:(BOOL)placeholder;	// 0x371f01
- (Class)_findRegisteredPlayerClassForType:(id)type visualContent:(BOOL)content;	// 0x3714ad
- (void)_initializeMediaRemote;	// 0x3712bd
- (void)_networkStatusChanged:(id)changed;	// 0x373c19
- (void)_periodicMetadataChanged:(id)changed;	// 0x373de9
- (void)_playerAssetChanged:(id)changed;	// 0x3735c1
- (void)_playerControllerUserEvent:(id)event;	// 0x372bf9
- (void)_playerControllerWasPopped:(id)popped;	// 0x373d91
- (id)_playerInstanceForAssetAtIndex:(long)index inTrackList:(id)trackList;	// 0x371565
- (id)_playerInstanceForClass:(Class)aClass;	// 0x371715
- (void)_playerStackBankrupt:(id)bankrupt;	// 0x372c19
- (void)_playerStateChanged:(id)changed;	// 0x3732d9
- (void)_playerVolumeChanged:(id)changed;	// 0x373669
- (void)_popupDelayTimerFired:(id)fired;	// 0x372f79
- (id)_presentedPlayer;	// 0x372501
- (id)_presentedPlayerController;	// 0x372529
- (void)_removePlayerWindow:(BOOL)window;	// 0x3729c1
- (void)_removePlayerWindowUnderShroud;	// 0x372af9
- (void)_removeShroudWindow;	// 0x3724a1
- (void)_removeShroudWindowWithAnimation;	// 0x37222d
- (void)_removeTrackPopup;	// 0x372c8d
- (void)_safetyTimerFired:(id)fired;	// 0x372419
- (void)_screenSaverActivated:(id)activated;	// 0x37381d
- (void)_screenSaverDismissed:(id)dismissed;	// 0x373889
- (void)_serverStatusChanged:(id)changed;	// 0x3738f1
- (void)_showTrackPopupForPlayer:(id)player;	// 0x372cf1
- (void)_showTrackPopupWithDelayForPlayer:(id)player;	// 0x372ed9
- (void)_simulatePresentationForController:(id)controller;	// 0x37286d
- (BOOL)_stopCurrentPlayerUsingNewPlayer:(id)player;	// 0x37191d
- (void)_updateAirPlayMetaData;	// 0x371e19
- (void)_updateAirPlayMetaDataTime;	// 0x371d31
- (void)_updateAutoPresentPlayer;	// 0x3731a5
- (void)_updateCoverArt:(id)art;	// 0x37376d
- (void)_updateTrackPopupForPlayer:(id)player;	// 0x372c2d
- (void)_userActivity:(id)activity;	// 0x373d09
- (id)activeAudioPlayer;	// 0x37052d
- (id)activePlayer;	// 0x3704e1
- (id)airtunesAudioPlayer;	// 0x370671
- (id)audioPlayer;	// 0x370619
// converted property getter: - (double)autoPresentTimeout;	// 0x3709d5
- (id)copyNowPlayingMetadataForPlayer:(id)player forAirPlay:(BOOL)airPlay;	// 0x370a4d
- (void)dealloc;	// 0x36f8cd
- (void)dismissErrorsIfNeeded;	// 0x36fc39
- (void)endPresentation;	// 0x370495
// declared property getter: - (id)externallyPresentedPlayerController;	// 0x37129d
- (void)manageExternallyPresentedPlayerController:(id)controller;	// 0x37044d
- (id)playerForATVMediaAssetAtIndex:(long)index inTrackList:(id)trackList error:(id *)error;	// 0x36fbf9
- (id)playerForMediaAsset:(id)mediaAsset error:(id *)error;	// 0x36fa75
- (id)playerForMediaAssetAtIndex:(long)index inCollection:(id)collection error:(id *)error;	// 0x36fb61
- (id)playerForMediaAssetAtIndex:(long)index inTrackList:(id)trackList error:(id *)error;	// 0x36fae1
- (void)presentATVMediaAsset:(id)asset options:(id)options;	// 0x3702f9
- (void)presentATVMediaAssetAtIndex:(long)index inItemList:(id)itemList options:(id)options;	// 0x370359
- (void)presentMediaAsset:(id)asset options:(id)options;	// 0x370231
- (void)presentMediaAssetAtIndex:(long)index inCollection:(id)collection options:(id)options;	// 0x370411
- (void)presentMediaAssetAtIndex:(long)index inTrackList:(id)trackList options:(id)options;	// 0x3703d5
- (void)presentPlayer:(id)player options:(id)options;	// 0x36fc81
- (BOOL)presentationCanBeScreenSaver;	// 0x3704b9
- (id)presentationWindow;	// 0x3704a9
- (void)registerPlayerClass:(Class)aClass;	// 0x36f9f1
- (void)removePresentation;	// 0x370481
// converted property setter: - (void)setAutoPresentTimeout:(double)timeout;	// 0x37099d
// declared property setter: - (void)setExternallyPresentedPlayerController:(id)controller;	// 0x3712ad
- (void)setJavascriptOverlay:(id)overlay;	// 0x3709ed
- (void)setTransportControlDisabled:(BOOL)disabled;	// 0x370971
- (void)showVolumeControl;	// 0x370815
- (void)showVolumeControlWithVolume:(float)volume;	// 0x370855
- (void)stopMediaPlayersWithMediaFromProvider:(id)provider;	// 0x370721
- (id)videoPlayer;	// 0x3706c9
@end

