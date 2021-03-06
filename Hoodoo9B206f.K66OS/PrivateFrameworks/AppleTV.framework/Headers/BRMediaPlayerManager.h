/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRSingleton.h"

@class NSMutableArray, BRWindow, NSTimer, NSDictionary;

@interface BRMediaPlayerManager : BRSingleton {
@private
	NSMutableArray *_registrations;	// 4 = 0x4
	NSDictionary *_singletons;	// 8 = 0x8
	BRWindow *_shroudyMcShroud;	// 12 = 0xc
	BRWindow *_playerWindow;	// 16 = 0x10
	NSTimer *_popupDelay;	// 20 = 0x14
	NSTimer *_autoPresentTimer;	// 24 = 0x18
	NSTimer *_safetyTimer;	// 28 = 0x1c
	NSTimer *_cloudMusicStopTimer;	// 32 = 0x20
	double _autoPresentTimeout;	// 36 = 0x24
	int _playerWindowState;	// 44 = 0x2c
	BOOL _screensaverUp;	// 48 = 0x30
	float _savedVolume;	// 52 = 0x34
}
@property(assign) double autoPresentTimeout;	// G=0x3672998d; S=0x36729951; converted property
+ (void)setSingleton:(id)singleton;	// 0x36728781
+ (id)singleton;	// 0x36728771
- (id)init;	// 0x36728791
- (void)_addPlayerWindowForController:(id)controller;	// 0x3672a565
- (void)_addPlayerWindowUnderShroud;	// 0x3672a789
- (void)_addShroudWindowWithSelector:(SEL)selector;	// 0x36729fd5
- (id)_autoPresentPlayer;	// 0x3672ad9d
- (void)_autoPresentTimerFired:(id)fired;	// 0x3672aea1
- (int)_calculateAccessModeForExtrasAsset:(id)extrasAsset;	// 0x36729dc9
- (void)_cloudMusicStopTimerFired:(id)fired;	// 0x36729f45
- (void)_dataClientStatusChanged:(id)changed;	// 0x3672b661
- (void)_deferredPresentPlayerAndOptions:(id)options;	// 0x36729f01
- (Class)_findRegisteredPlayerClassForType:(id)type visualContent:(BOOL)content;	// 0x36729a05
- (void)_networkStatusChanged:(id)changed;	// 0x3672b7c5
- (void)_playerAssetChanged:(id)changed;	// 0x3672b2c1
- (void)_playerControllerUserEvent:(id)event;	// 0x3672aa1d
- (void)_playerControllerWasPopped:(id)popped;	// 0x3672b939
- (id)_playerInstanceForAssetAtIndex:(long)index inTrackList:(id)trackList;	// 0x36729ab1
- (id)_playerInstanceForClass:(Class)aClass;	// 0x36729c59
- (void)_playerStackBankrupt:(id)bankrupt;	// 0x3672aa3d
- (void)_playerStateChanged:(id)changed;	// 0x3672b01d
- (void)_playerVolumeChanged:(id)changed;	// 0x3672b321
- (void)_popupDelayTimerFired:(id)fired;	// 0x3672ad5d
- (id)_presentedPlayer;	// 0x3672a4d5
- (id)_presentedPlayerController;	// 0x3672a4fd
- (void)_removePlayerWindow:(BOOL)window;	// 0x3672a835
- (void)_removePlayerWindowUnderShroud;	// 0x3672a945
- (void)_removeShroudWindow;	// 0x3672a471
- (void)_removeShroudWindowWithAnimation;	// 0x3672a229
- (void)_removeTrackPopup;	// 0x3672aab1
- (void)_safetyTimerFired:(id)fired;	// 0x3672a3ed
- (void)_screenSaverActivated:(id)activated;	// 0x3672b42d
- (void)_screenSaverDismissed:(id)dismissed;	// 0x3672b499
- (void)_serverStatusChanged:(id)changed;	// 0x3672b501
- (void)_showTrackPopupForPlayer:(id)player;	// 0x3672ab19
- (void)_showTrackPopupWithDelayForPlayer:(id)player;	// 0x3672acbd
- (BOOL)_stopCurrentPlayerUsingNewPlayer:(id)player;	// 0x36729e5d
- (void)_updateAutoPresentPlayer;	// 0x3672aee9
- (void)_updateTrackPopupForPlayer:(id)player;	// 0x3672aa51
- (void)_userActivity:(id)activity;	// 0x3672b8b1
- (id)activeAudioPlayer;	// 0x367294f9
- (id)activePlayer;	// 0x367294b1
- (id)airtunesAudioPlayer;	// 0x3672963d
- (id)audioPlayer;	// 0x367295e5
- (id)audioVisualizer;	// 0x367297cd
// converted property getter: - (double)autoPresentTimeout;	// 0x3672998d
- (void)dealloc;	// 0x367289e9
- (void)endPresentation;	// 0x36729465
- (id)playerForATVMediaAssetAtIndex:(long)index inTrackList:(id)trackList error:(id *)error;	// 0x36728cd5
- (id)playerForMediaAsset:(id)mediaAsset error:(id *)error;	// 0x36728b49
- (id)playerForMediaAssetAtIndex:(long)index inCollection:(id)collection error:(id *)error;	// 0x36728c39
- (id)playerForMediaAssetAtIndex:(long)index inTrackList:(id)trackList error:(id *)error;	// 0x36728bb5
- (void)presentATVMediaAsset:(ATVMediaItemRef)asset options:(id)options;	// 0x36729301
- (void)presentATVMediaAssetAtIndex:(long)index inItemList:(id)itemList options:(id)options;	// 0x3672935d
- (void)presentMediaAsset:(id)asset options:(id)options;	// 0x36729245
- (void)presentMediaAssetAtIndex:(long)index inCollection:(id)collection options:(id)options;	// 0x36729415
- (void)presentMediaAssetAtIndex:(long)index inTrackList:(id)trackList options:(id)options;	// 0x367293d9
- (void)presentPlayer:(id)player options:(id)options;	// 0x36728d15
- (BOOL)presentationCanBeScreenSaver;	// 0x36729489
- (id)presentationWindow;	// 0x36729479
- (void)registerPlayerClass:(Class)aClass;	// 0x36728ac9
- (void)removePresentation;	// 0x36729451
// converted property setter: - (void)setAutoPresentTimeout:(double)timeout;	// 0x36729951
- (void)setJavascriptOverlay:(id)overlay;	// 0x367299a5
- (void)setTransportControlDisabled:(BOOL)disabled;	// 0x36729925
- (void)showVolumeControl;	// 0x367297e9
- (void)stopMediaPlayersWithMediaFromProvider:(id)provider;	// 0x367296ed
- (id)videoPlayer;	// 0x36729695
@end

