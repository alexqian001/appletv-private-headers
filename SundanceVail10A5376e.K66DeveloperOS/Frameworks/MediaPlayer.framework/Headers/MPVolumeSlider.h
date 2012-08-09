/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import <UISlider.h> // Unknown library

@class UILabel, NSString, MPAVController, UIImageView, NSTimer, UIView;

@interface MPVolumeSlider : UISlider {
	NSTimer *_commitTimer;	// 172 = 0xac
	MPAVController *_player;	// 176 = 0xb0
	UILabel *_routeNameLabel;	// 180 = 0xb4
	int _style;	// 184 = 0xb8
	UIImageView *_thumbImageView;	// 188 = 0xbc
	UIImageView *_thumbMaskImageView;	// 192 = 0xc0
	NSString *_volumeAudioCategory;	// 196 = 0xc4
	BOOL _isOffScreen;	// 200 = 0xc8
	BOOL _volumeWarningEnabled;	// 201 = 0xc9
	UIView *_volumeWarningView;	// 204 = 0xcc
	int _volumeWarningState;	// 208 = 0xd0
	float _EUVolumeLimit;	// 212 = 0xd4
	BOOL _volumeWarningBlinking;	// 216 = 0xd8
}
@property(assign, nonatomic, setter=_setIsOffScreen:) BOOL _isOffScreen;	// G=0x36cccd49; S=0x36ccb439; @synthesize
@property(retain, nonatomic) MPAVController *player;	// G=0x36ccb10d; S=0x36ccb11d; 
@property(readonly, assign, nonatomic) int style;	// G=0x36cccd39; @synthesize=_style
@property(copy, nonatomic) NSString *volumeAudioCategory;	// G=0x36ccb2e9; S=0x36ccb3b5; 
- (id)initWithFrame:(CGRect)frame;	// 0x36cc9c09
- (id)initWithFrame:(CGRect)frame style:(int)style;	// 0x36cc9c35
- (void)_EUVolumeLimitDidChange:(id)_EUVolumeLimit;	// 0x36ccb9ad
- (void)_EUVolumeLimitEnforcedDidChange:(id)_EUVolumeLimitEnforced;	// 0x36ccba45
- (void)_applicationDidEnterBackgroundNotification:(id)_application;	// 0x36ccb489
- (void)_applicationWillEnterForegroundNotification:(id)_application;	// 0x36ccb4dd
- (void)_availableRoutesDidChangeNotification:(id)_availableRoutes;	// 0x36ccb579
- (void)_beginBlinkingWarningView;	// 0x36cccc41
- (void)_blinkWarningView;	// 0x36cccc61
- (void)_commitVolumeChange;	// 0x36ccbd35
- (void)_endBlinkingWarningView;	// 0x36cccce9
- (void)_endTracking;	// 0x36ccac05
- (void)_isAirPlayVideoActiveDidChangeNotification:(id)_isAirPlayVideoActive;	// 0x36ccb5a9
// declared property getter: - (BOOL)_isOffScreen;	// 0x36cccd49
- (void)_layoutForAvailableRoutes;	// 0x36ccc211
- (void)_layoutMaskForThumb;	// 0x36ccbfd1
- (void)_layoutVolumeWarningView;	// 0x36ccc8f1
- (id)_maxTrackImageForStyle:(int)style;	// 0x36ccbf31
- (id)_minTrackImageForStyle:(int)style;	// 0x36ccbe91
- (void)_routeNameLabelAnimationDidEnd;	// 0x36cccc05
// declared property setter: - (void)_setIsOffScreen:(BOOL)screen;	// 0x36ccb439
- (void)_systemMuteDidChange:(id)_systemMute;	// 0x36ccb5d9
- (void)_systemVolumeDidChange:(id)_systemVolume;	// 0x36ccb611
- (id)_thumbImageForStyle:(int)style;	// 0x36ccbdf9
- (void)_updateVolumeFromAVController;	// 0x36ccbc11
- (void)_volumeDidChange:(id)_volume;	// 0x36ccb885
- (float)_volumeFromAVController;	// 0x36ccbb3d
- (BOOL)beginTrackingWithTouch:(id)touch withEvent:(id)event;	// 0x36cca6e1
- (void)cancelTrackingWithEvent:(id)event;	// 0x36ccabc5
- (id)createThumbView;	// 0x36cca25d
- (void)dealloc;	// 0x36cca015
- (void)didMoveToSuperview;	// 0x36ccadb9
- (void)didMoveToWindow;	// 0x36ccae59
- (void)endTrackingWithTouch:(id)touch withEvent:(id)event;	// 0x36ccaa51
- (void)layoutSubviews;	// 0x36ccacfd
- (float)maximumValue;	// 0x36cca339
- (float)minimumValue;	// 0x36cca341
// declared property getter: - (id)player;	// 0x36ccb10d
- (BOOL)pointInside:(CGPoint)inside withEvent:(id)event;	// 0x36ccaecd
- (void)setAlpha:(float)alpha;	// 0x36ccafe9
- (void)setFrame:(CGRect)frame;	// 0x36ccad61
- (void)setHidden:(BOOL)hidden;	// 0x36ccb041
// declared property setter: - (void)setPlayer:(id)player;	// 0x36ccb11d
- (void)setUserInteractionEnabled:(BOOL)enabled;	// 0x36ccb099
- (void)setValue:(float)value animated:(BOOL)animated;	// 0x36cca345
// declared property setter: - (void)setVolumeAudioCategory:(id)category;	// 0x36ccb3b5
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x36ccaf85
// declared property getter: - (int)style;	// 0x36cccd39
- (CGRect)thumbRectForBounds:(CGRect)bounds trackRect:(CGRect)rect value:(float)value;	// 0x36cca525
// declared property getter: - (id)volumeAudioCategory;	// 0x36ccb2e9
@end
