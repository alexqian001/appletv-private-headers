/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRSecureResource.h"
#import "ATVVideoCacheManagerDelegate.h"
#import "BRController.h"

@class BRTransportControl, NSTimer, BRResumeMenuControl, BRAudioVisualizerControl, BRDescriptionOverlayControl, BRMediaPlayer, BRMediaPlayerEventHandler, BRTextControl;

__attribute__((visibility("hidden")))
@interface BRMediaPlayerController : BRController <ATVVideoCacheManagerDelegate, BRSecureResource> {
	long _state;	// 100 = 0x64
	BRControl *_content;	// 104 = 0x68
	BRAudioVisualizerControl *_audioVisualizer;	// 108 = 0x6c
	BRMediaPlayer *_player;	// 112 = 0x70
	BRMediaPlayerEventHandler *_eventHandler;	// 116 = 0x74
	BRResumeMenuControl *_resumeMenu;	// 120 = 0x78
	BRTransportControl *_transport;	// 124 = 0x7c
	BRControl *_javascriptOverlay;	// 128 = 0x80
	BRDescriptionOverlayControl *_descriptionOverlay;	// 132 = 0x84
	BRTextControl *_explanatoryTextControl;	// 136 = 0x88
	id _delegate;	// 140 = 0x8c
	id _transitionAnimationDelegate;	// 144 = 0x90
	NSTimer *_suppressBackgroundProcessTimer;	// 148 = 0x94
	NSTimer *_explanatoryTextFadeTimer;	// 152 = 0x98
	NSTimer *_readyToPlayTimer;	// 156 = 0x9c
	NSTimer *_readyToPlayUpdateMinsTimer;	// 160 = 0xa0
	NSTimer *_readyToPlayBandwidthHintTimer;	// 164 = 0xa4
	NSTimer *_loadingSpinnerDelayTimer;	// 168 = 0xa8
	float _lastBufferingProgress;	// 172 = 0xac
	unsigned _startChapterIndex;	// 176 = 0xb0
	float _startPosition;	// 180 = 0xb4
	double _bandwidthHintReadyToPlayMaxTimeInSeconds;	// 184 = 0xb8
	BOOL _drmAttempted;	// 192 = 0xc0
	BOOL _authenticationAttempted;	// 193 = 0xc1
	BOOL _playbackInitiated;	// 194 = 0xc2
	BOOL _shouldBeginPlaybackImmediately;	// 195 = 0xc3
	BOOL _shouldRestoreVoiceOver;	// 196 = 0xc4
	BOOL _alwaysStopOnPop;	// 197 = 0xc5
	BOOL _transportDisabled;	// 198 = 0xc6
	BOOL _resumeMenuDisabled;	// 199 = 0xc7
	BOOL _waitingForTransition;	// 200 = 0xc8
	BOOL _visualsHidden;	// 201 = 0xc9
	BOOL _inChapterMode;	// 202 = 0xca
	BOOL _digitalExtrasMenuItemDisabled;	// 203 = 0xcb
	BOOL _itemReadyToPlay;	// 204 = 0xcc
	BOOL _supportsBandwidthHints;	// 205 = 0xcd
	BOOL _supportsPreviewBandwidthHints;	// 206 = 0xce
}
@property(assign) BOOL alwaysStopPlaybackWhenPopped;	// G=0x29a091; S=0x29a081; converted property
@property(assign) BOOL digitalExtrasMenuItemDisabled;	// G=0x299f81; S=0x299f71; converted property
@property(readonly, retain) BRControl *javascriptOverlay;	// G=0x29ac1d; converted property
@property(readonly, retain) BRMediaPlayer *player;	// G=0x299dc1; converted property
@property(assign) id playerDelegate;	// G=0x299ed1; S=0x299e95; converted property
@property(assign) int repeatMode;	// G=0x29a061; S=0x29a041; converted property
@property(assign) BOOL resumeMenuDisabled;	// G=0x299ef1; S=0x299ee1; converted property
@property(assign) BOOL shouldBeginPlaybackImmediately;	// G=0x29ac7d; S=0x29ac6d; converted property
@property(assign) unsigned startChapterIndex;	// G=0x299fa1; S=0x299f91; converted property
@property(assign) float startPosition;	// G=0x299ff1; S=0x299fb1; converted property
@property(assign) BOOL transportControlDisabled;	// G=0x299f61; S=0x299f01; converted property
@property(assign) BOOL visualsHidden;	// G=0x29a18d; S=0x29a17d; converted property
+ (id)controllerForPlayer:(id)player;	// 0x299dd1
- (id)initWithPlayer:(id)player;	// 0x29974d
- (id)_audioVisualizerForMediaAsset:(id)mediaAsset;	// 0x29d5a1
- (void)_authenticationCancelled:(id)cancelled;	// 0x29e75d
- (void)_authenticationFailed:(id)failed;	// 0x29e6d9
- (void)_authenticationSucceeded:(id)succeeded;	// 0x29e669
- (void)_authorizationAttemptComplete:(id)complete;	// 0x29e3b5
- (id)_bandwidthHintReadyToPlayMaxTimeInSeconds;	// 0x29f12d
- (BOOL)_cycleInfoDisplay:(id)display;	// 0x29d771
- (id)_descriptionOverlayForType:(id)type;	// 0x29d531
- (void)_dismissResumeMenu;	// 0x29e899
- (BOOL)_enterAudioSubtitleChapterPicker;	// 0x29d61d
- (void)_enterAuthenticationState;	// 0x29c8bd
- (void)_enterChaptersSubtitlesAndAlternateAudioPickingState;	// 0x29c12d
- (void)_enterDRMSyncState;	// 0x29c475
- (void)_enterDownloadWaitStateWithTime:(double)time;	// 0x29b9b1
- (void)_enterErrorStateWithError:(id)error;	// 0x29c621
- (void)_enterMediaCueingState;	// 0x29bfb5
- (void)_enterMediaResolutionState;	// 0x29b0c1
- (void)_enterPINEntryState;	// 0x29ae8d
- (void)_enterPlaybackStatePlaying:(BOOL)playing;	// 0x29c415
- (void)_enterPostResumeMenuStateAtTime:(double)time;	// 0x29b671
- (void)_enterResumeMenuState;	// 0x29b2c9
- (void)_exitChaptersSubtitlesAndAlternateAudioPickingState:(id)state;	// 0x29c2e9
- (void)_explanatoryTextTimerFired:(id)fired;	// 0x29f0fd
- (BOOL)_handleContextMenuEvent:(id)event;	// 0x29ecd5
- (void)_handleContextMenuSelection:(id)selection;	// 0x29ef05
- (BOOL)_handleDownEvent:(id)event;	// 0x29ed79
- (BOOL)_handleDownloadStateEvent:(id)event;	// 0x29ef81
- (void)_handleHideChapterMarkers;	// 0x29d491
- (BOOL)_handleMenuButtonEvent:(id)event;	// 0x29e999
- (void)_handleShowChapterMarkers;	// 0x29d445
- (BOOL)_handleUpDownCommandsForInfoDisplay:(id)infoDisplay;	// 0x29ee79
- (BOOL)_handleUpEvent:(id)event;	// 0x29ed21
- (void)_initiatePlayback;	// 0x29ca29
- (id)_javascriptOverlay;	// 0x29d405
- (id)_makeMusicContextMenuUtility;	// 0x29dfad
- (id)_photoSet;	// 0x29db99
- (void)_playerAssetChanged:(id)changed;	// 0x29e265
- (void)_playerError:(id)error;	// 0x29e215
- (void)_playerIsReadyToPlay:(id)play;	// 0x29e551
- (void)_playerMediaCued:(id)cued;	// 0x29e5d5
- (void)_playerPlaybackEnded:(id)ended;	// 0x29e051
- (void)_playerStateChanged:(id)changed;	// 0x29e0a5
- (void)_playerTimeSkipped:(id)skipped;	// 0x29e289
- (void)_playerVisualsChanged:(id)changed;	// 0x29e1d1
- (id)_previewBandwidthHintPromptTime;	// 0x29cb61
- (void)_readyToPlayBandwidthHintTimerFired:(id)playBandwidthHintTimerFired;	// 0x29be95
- (void)_readyToPlayTimerFired:(id)playTimerFired;	// 0x29bd39
- (void)_readyToPlayUpdateMinsTimerFired:(id)playUpdateMinsTimerFired;	// 0x29be11
- (BOOL)_requiresLeaseForAsset:(id)asset;	// 0x29cb3d
- (void)_restoreVoiceOverIfNeeded;	// 0x29db29
- (void)_resumeItemSelected:(id)selected;	// 0x29e8f5
- (double)_resumeTime;	// 0x29e841
- (BOOL)_shouldShowResumeMenu;	// 0x29dc31
- (BOOL)_shouldUseMusicContextMenu;	// 0x29ddc5
- (void)_showLoadingSpinner;	// 0x29d97d
- (void)_showTransport:(id)transport;	// 0x29d4fd
- (void)_spinnerDelayTimerFired:(id)fired;	// 0x29db79
- (void)_startFromBeginningItemSelected:(id)beginningItemSelected;	// 0x29e949
- (void)_suppressBackgroundProcesses:(id)processes;	// 0x29f021
- (void)_transitionAnimationFinished;	// 0x29e7e1
- (id)_transportControlForType:(id)type;	// 0x29d2a1
- (void)_updateExplantoryText;	// 0x29cfb1
- (void)_updatePlaybackControls;	// 0x29cbf9
- (void)_updateReadyToPlayTime:(id)playTime;	// 0x29bc69
- (void)_updateVoiceOverDisabling;	// 0x29da55
- (BOOL)accessibilityOutputsRangeForChildren;	// 0x29a9ed
// converted property getter: - (BOOL)alwaysStopPlaybackWhenPopped;	// 0x29a091
- (BOOL)brEventAction:(id)action;	// 0x29a611
- (BOOL)canBeScreenSaver;	// 0x29a19d
- (id)cancelProviderForContextMenu;	// 0x29ac19
- (void)clearPlayer;	// 0x299e1d
- (void)controlWasActivated;	// 0x29a1cd
- (void)controlWasDeactivated;	// 0x29a3a1
- (void)dealloc;	// 0x299c39
// converted property getter: - (BOOL)digitalExtrasMenuItemDisabled;	// 0x299f81
- (BOOL)handleAssetFailedToLoad:(id)load;	// 0x29ad69
- (BOOL)handleAssetReadyToPlay:(id)play;	// 0x29ac8d
- (BOOL)isErrorPresented;	// 0x29ae75
// converted property getter: - (id)javascriptOverlay;	// 0x29ac1d
- (void)layoutSubcontrols;	// 0x29a79d
// converted property getter: - (id)player;	// 0x299dc1
// converted property getter: - (id)playerDelegate;	// 0x299ed1
- (id)providersForContextMenu;	// 0x29ab65
// converted property getter: - (int)repeatMode;	// 0x29a061
// converted property getter: - (BOOL)resumeMenuDisabled;	// 0x299ef1
- (id)secureResourceAuthenticator;	// 0x29ae0d
// converted property setter: - (void)setAlwaysStopPlaybackWhenPopped:(BOOL)popped;	// 0x29a081
// converted property setter: - (void)setDigitalExtrasMenuItemDisabled:(BOOL)disabled;	// 0x299f71
- (void)setFailedURLDelegate:(id)delegate;	// 0x29ab45
- (void)setForwardPlaybackEndTime:(double)time;	// 0x29ac2d
// converted property setter: - (void)setPlayerDelegate:(id)delegate;	// 0x299e95
// converted property setter: - (void)setRepeatMode:(int)mode;	// 0x29a041
// converted property setter: - (void)setResumeMenuDisabled:(BOOL)disabled;	// 0x299ee1
- (void)setReversePlaybackEndTime:(double)time;	// 0x29ac4d
// converted property setter: - (void)setShouldBeginPlaybackImmediately:(BOOL)beginPlaybackImmediately;	// 0x29ac6d
// converted property setter: - (void)setStartChapterIndex:(unsigned)index;	// 0x299f91
- (void)setStartDate:(id)date isEstimate:(BOOL)estimate;	// 0x29a001
// converted property setter: - (void)setStartPosition:(float)position;	// 0x299fb1
// converted property setter: - (void)setTransportControlDisabled:(BOOL)disabled;	// 0x299f01
// converted property setter: - (void)setVisualsHidden:(BOOL)hidden;	// 0x29a17d
// converted property getter: - (BOOL)shouldBeginPlaybackImmediately;	// 0x29ac7d
- (BOOL)shouldShowTrackPopup;	// 0x29a9f1
- (BOOL)shouldTransitionIn;	// 0x29aa9d
// converted property getter: - (unsigned)startChapterIndex;	// 0x299fa1
- (id)startDate;	// 0x29a021
// converted property getter: - (float)startPosition;	// 0x299ff1
// converted property getter: - (BOOL)transportControlDisabled;	// 0x299f61
// converted property getter: - (BOOL)visualsHidden;	// 0x29a18d
- (void)wasPopped;	// 0x29a4bd
- (void)wasPushed;	// 0x29a451
@end
