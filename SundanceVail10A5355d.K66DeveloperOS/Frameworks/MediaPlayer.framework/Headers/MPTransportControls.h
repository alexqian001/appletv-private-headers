/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <UIView.h> // Unknown library
#import "MediaPlayer-Structs.h"

@class NSString, MPAVController, MPButton, NSMutableIndexSet, MPAVItem;

@interface MPTransportControls : UIView {
	id _target;	// 88 = 0x58
	MPAVItem *_item;	// 92 = 0x5c
	MPAVController *_player;	// 96 = 0x60
	unsigned long long _desiredParts;	// 100 = 0x64
	unsigned long long _disabledParts;	// 108 = 0x6c
	NSMutableIndexSet *_heldParts;	// 116 = 0x74
	unsigned long long _visibleParts;	// 120 = 0x78
	unsigned _playing : 1;	// 128 = 0x80
	BOOL _allowsWirelessPlayback;	// 129 = 0x81
	BOOL _registeredForPlayerNotifications;	// 130 = 0x82
	MPButton *_alternatesButton;	// 132 = 0x84
	MPButton *_bookmarkButton;	// 136 = 0x88
	MPButton *_chaptersButton;	// 140 = 0x8c
	MPButton *_devicePickerButton;	// 144 = 0x90
	MPButton *_emailButton;	// 148 = 0x94
	MPButton *_likeOrBanButton;	// 152 = 0x98
	MPButton *_nextButton;	// 156 = 0x9c
	MPButton *_playButton;	// 160 = 0xa0
	MPButton *_previousButton;	// 164 = 0xa4
	MPButton *_rewind30SecondsButton;	// 168 = 0xa8
	MPButton *_scaleButton;	// 172 = 0xac
	MPButton *_toggleFullscreenButton;	// 176 = 0xb0
	id _volumeSlider;	// 180 = 0xb4
}
@property(assign, nonatomic) BOOL allowsWirelessPlayback;	// G=0x336f39d1; S=0x336f201d; @synthesize=_allowsWirelessPlayback
@property(assign, nonatomic) unsigned long long desiredParts;	// G=0x336f39e1; S=0x336f2049; @synthesize=_desiredParts
@property(assign, nonatomic) unsigned long long disabledParts;	// G=0x336f39f9; S=0x336f20bd; @synthesize=_disabledParts
@property(retain, nonatomic) MPAVItem *item;	// G=0x336f3a11; S=0x336f2109; @synthesize=_item
@property(readonly, assign, nonatomic) NSString *pauseButtonImage;	// G=0x336f2249; 
@property(readonly, assign, nonatomic) NSString *playButtonImage;	// G=0x336f223d; 
@property(readonly, assign, nonatomic) NSString *playPauseButtonImage;	// G=0x336f2255; 
@property(retain, nonatomic) MPAVController *player;	// G=0x336f3a21; S=0x336f1831; @synthesize=_player
@property(assign, nonatomic) BOOL registeredForPlayerNotifications;	// G=0x336f3a69; S=0x336f3a79; @synthesize=_registeredForPlayerNotifications
@property(assign, nonatomic) id target;	// G=0x336f3a31; S=0x336f3a41; @synthesize=_target
@property(assign, nonatomic) unsigned long long visibleParts;	// G=0x336f3a51; S=0x336f21b9; @synthesize=_visibleParts
+ (Class)buttonClass;	// 0x336f1ddd
+ (unsigned long long)defaultVisibleParts;	// 0x336f114d
- (id)init;	// 0x336f1199
- (id)initWithFrame:(CGRect)frame;	// 0x336f11c9
- (void)_alternateTypesChangedNotification:(id)notification;	// 0x336f2289
- (void)_applyDesiredPartsWithAnimation:(BOOL)animation;	// 0x336f2e1d
- (unsigned long long)_applyPossibleVisiblePartsToParts:(unsigned long long)parts;	// 0x336f2c81
- (void)_availableRoutesChangedNotification:(id)notification;	// 0x336f22e9
- (void)_handleHoldForPart:(unsigned long long)part;	// 0x336f2e51
- (void)_handleReleaseForPart:(unsigned long long)part;	// 0x336f2f19
- (void)_handleTapForPart:(unsigned long long)part;	// 0x336f2fb9
- (void)_isAirPlayVideoActiveDidChangeNotification:(id)_isAirPlayVideoActive;	// 0x336f2345
- (void)_isLikedDidChangeNotification:(id)_isLiked;	// 0x336f2359
- (void)_itemChangedNotification:(id)notification;	// 0x336f241d
- (void)_playbackStateChangedNotification:(id)notification;	// 0x336f245d
- (void)_reloadViewWithAnimation:(BOOL)animation;	// 0x336f3239
- (void)_timeMarkersAvailableNotification:(id)notification;	// 0x336f23bd
- (id)_updateAdditions:(id)additions removals:(id)removals forPart:(unsigned long long)part;	// 0x336f36d9
- (void)_updateButtonImageForPart:(unsigned long long)part;	// 0x336f3819
- (void)_updateEnabledStates:(BOOL)states;	// 0x336f3895
- (void)_validityChangedNotification:(id)notification;	// 0x336f25b9
// declared property getter: - (BOOL)allowsWirelessPlayback;	// 0x336f39d1
- (BOOL)allowsWirelessPlaybackForCurrentItem;	// 0x336f25cd
- (BOOL)alwaysHidesSystemVolumeHUD;	// 0x336f2c7d
- (void)buttonDown:(id)down;	// 0x336f2619
- (id)buttonForPart:(unsigned long long)part;	// 0x336f1df9
- (void)buttonHeld:(id)held;	// 0x336f2655
- (void)buttonHoldReleased:(id)released;	// 0x336f26a9
- (id)buttonImageForPart:(unsigned long long)part;	// 0x336f2a0d
- (void)buttonUp:(id)up;	// 0x336f26dd
- (void)dealloc;	// 0x336f1331
// declared property getter: - (unsigned long long)desiredParts;	// 0x336f39e1
- (void)didMoveToSuperview;	// 0x336f1c01
- (void)didMoveToWindow;	// 0x336f1ba9
// declared property getter: - (unsigned long long)disabledParts;	// 0x336f39f9
- (id)highlightedButtonImageForPart:(unsigned long long)part;	// 0x336f2c75
// declared property getter: - (id)item;	// 0x336f3a11
- (id)newButtonForPart:(unsigned long long)part;	// 0x336f2739
- (id)newVolumeSlider;	// 0x336f28f1
// declared property getter: - (id)pauseButtonImage;	// 0x336f2249
// declared property getter: - (id)playButtonImage;	// 0x336f223d
// declared property getter: - (id)playPauseButtonImage;	// 0x336f2255
// declared property getter: - (id)player;	// 0x336f3a21
- (void)registerForPlayerNotifications;	// 0x336f163d
// declared property getter: - (BOOL)registeredForPlayerNotifications;	// 0x336f3a69
- (void)reloadForAdditions:(id)additions removals:(id)removals animate:(BOOL)animate;	// 0x336f2a09
// declared property setter: - (void)setAllowsWirelessPlayback:(BOOL)playback;	// 0x336f201d
- (void)setAlpha:(float)alpha;	// 0x336f1c59
// declared property setter: - (void)setDesiredParts:(unsigned long long)parts;	// 0x336f2049
- (void)setDesiredParts:(unsigned long long)parts animated:(BOOL)animated;	// 0x336f206d
// declared property setter: - (void)setDisabledParts:(unsigned long long)parts;	// 0x336f20bd
- (void)setFrame:(CGRect)frame;	// 0x336f1d09
- (void)setHidden:(BOOL)hidden;	// 0x336f1cb1
// declared property setter: - (void)setItem:(id)item;	// 0x336f2109
// declared property setter: - (void)setPlayer:(id)player;	// 0x336f1831
// declared property setter: - (void)setRegisteredForPlayerNotifications:(BOOL)playerNotifications;	// 0x336f3a79
// declared property setter: - (void)setTarget:(id)target;	// 0x336f3a41
// declared property setter: - (void)setVisibleParts:(unsigned long long)parts;	// 0x336f21b9
- (void)setVisibleParts:(unsigned long long)parts animated:(BOOL)animated;	// 0x336f21dd
- (BOOL)showsVolumeSliderWhenNoVolumeControlAvailable;	// 0x336f2c79
// declared property getter: - (id)target;	// 0x336f3a31
- (void)unregisterForPlayerNotifications;	// 0x336f1761
// declared property getter: - (unsigned long long)visibleParts;	// 0x336f3a51
@end
