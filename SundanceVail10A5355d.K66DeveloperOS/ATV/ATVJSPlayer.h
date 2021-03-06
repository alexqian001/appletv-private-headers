/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class ATVJSContext, BRMediaPlayer, ATVJSPlayerMoreAssetsSpinnerController, ATVInterstitialGroup, BRStateMachine;

__attribute__((visibility("hidden")))
@interface ATVJSPlayer : XXUnknownSuperclass {
	BRMediaPlayer *_activePlayer;	// 4 = 0x4
	BRStateMachine *_playlistStateMachine;	// 8 = 0x8
	ATVJSPlayerMoreAssetsSpinnerController *_moreAssetsSpinner;	// 12 = 0xc
	ATVJSContext *context;	// 16 = 0x10
	ATVInterstitialGroup *interstitialGroup;	// 20 = 0x14
}
@property(retain, nonatomic) ATVJSContext *context;	// G=0x1629d1; S=0x1629e1; @synthesize
@property(retain) ATVInterstitialGroup *interstitialGroup;	// G=0x1629f1; S=0x162a05; @synthesize
- (BOOL)_isNotificationForMyMerchant:(id)myMerchant;	// 0x160381
- (void)_loadAssetsActivity;	// 0x161579
- (void)_playerBufferSufficientToPlay:(id)play;	// 0x160859
- (void)_playerCurrentAssetChanged:(id)changed;	// 0x1614b5
- (void)_playerPlaybackEnded:(id)ended;	// 0x16154d
- (void)_playerPlaybackError:(id)error;	// 0x1608a9
- (void)_playerQualityOfServiceReport:(id)serviceReport;	// 0x160a59
- (void)_playerStallDuringPlayback:(id)playback;	// 0x160979
- (void)_playerStartedBuffering:(id)buffering;	// 0x1607b1
- (void)_playerStateChanged:(id)changed;	// 0x160441
- (void)_playerWillStop:(id)_player;	// 0x160acd
- (void)_registerPlaylistHandlers;	// 0x161f75
- (void)_setupSpinnerActivity;	// 0x161e61
- (void)_updateAsset:(id)asset;	// 0x160b6d
- (void)_updateEventGroupsForEventMediaAsset:(id)eventMediaAsset;	// 0x160e15
- (void)_updateEventGroupsNotification:(id)notification;	// 0x161449
// declared property getter: - (id)context;	// 0x1629d1
// declared property getter: - (id)interstitialGroup;	// 0x1629f1
// declared property setter: - (void)setContext:(id)context;	// 0x1629e1
// declared property setter: - (void)setInterstitialGroup:(id)group;	// 0x162a05
- (void)setup;	// 0x160099
- (void)tearDown;	// 0x1602d9
@end

