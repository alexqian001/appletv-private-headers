/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import "MPDetailSliderDelegate.h"
#import "MPVideoOverlay.h"
#import <UIKit/UIView.h>

@class NSMutableDictionary, UINavigationBar, MPAVController, MPDetailSlider, MPAVItem;
@protocol MPVideoOverlayDelegate, MPVideoControllerProtocol;

@protocol MPVideoOverlay
@property(assign, nonatomic) BOOL allowsWirelessPlayback;
@property(assign, nonatomic) __weak id<MPVideoOverlayDelegate> delegate;
@property(assign, nonatomic) unsigned long long desiredParts;
@property(assign, nonatomic) unsigned long long disabledParts;
@property(retain, nonatomic) MPAVItem *item;
@property(readonly, assign, nonatomic) UINavigationBar *navigationBar;
@property(assign, nonatomic) BOOL navigationBarHidden;
@property(retain, nonatomic) MPAVController *player;
@property(assign, nonatomic) __weak id<MPVideoControllerProtocol> videoViewController;
@property(assign, nonatomic) unsigned long long visibleParts;
// declared property getter: - (BOOL)allowsWirelessPlayback;
// declared property getter: - (id)delegate;
// declared property getter: - (unsigned long long)desiredParts;
// declared property getter: - (unsigned long long)disabledParts;
- (void)hideAlternateTracks;
// declared property getter: - (id)item;
// declared property getter: - (id)navigationBar;
// declared property getter: - (BOOL)navigationBarHidden;
// declared property getter: - (id)player;
// declared property setter: - (void)setAllowsWirelessPlayback:(BOOL)playback;
// declared property setter: - (void)setDelegate:(id)delegate;
// declared property setter: - (void)setDesiredParts:(unsigned long long)parts;
- (void)setDesiredParts:(unsigned long long)parts animate:(BOOL)animate;
// declared property setter: - (void)setDisabledParts:(unsigned long long)parts;
// declared property setter: - (void)setItem:(id)item;
// declared property setter: - (void)setNavigationBarHidden:(BOOL)hidden;
// declared property setter: - (void)setPlayer:(id)player;
// declared property setter: - (void)setVideoViewController:(id)controller;
// declared property setter: - (void)setVisibleParts:(unsigned long long)parts;
- (void)setVisibleParts:(unsigned long long)parts animate:(BOOL)animate;
- (void)showAlternateTracks;
- (void)startTicking;
- (void)stopTicking;
- (BOOL)updateTimeBasedValues;
// declared property getter: - (id)videoViewController;
// declared property getter: - (unsigned long long)visibleParts;
@end

@interface MPVideoOverlay : UIView <MPVideoOverlay, MPDetailSliderDelegate> {
	id<MPVideoControllerProtocol> _videoViewController;	// 100 = 0x64
	id<MPVideoOverlayDelegate> _delegate;	// 104 = 0x68
	MPAVItem *_item;	// 108 = 0x6c
	MPAVController *_player;	// 112 = 0x70
	MPDetailSlider *_scrubControl;	// 116 = 0x74
	int _interfaceOrientation;	// 120 = 0x78
	BOOL _controlsAutohideDisabled;	// 124 = 0x7c
	BOOL _wantsTick;	// 125 = 0x7d
	unsigned long long _desiredParts;	// 128 = 0x80
	unsigned long long _visibleParts;	// 136 = 0x88
	unsigned long long _disabledParts;	// 144 = 0x90
	NSMutableDictionary *_tickTimeEvents;	// 152 = 0x98
	double _lastTickTime;	// 156 = 0x9c
}
@property(assign, nonatomic) BOOL allowsWirelessPlayback;	// G=0x2e2d54c9; S=0x2e2d54d1; 
@property(assign, nonatomic) __weak id<MPVideoOverlayDelegate> delegate;	// G=0x2e2d5e3d; S=0x2e2d5e5d; @synthesize=_delegate
@property(assign, nonatomic) unsigned long long desiredParts;	// G=0x2e2d5e71; S=0x2e2d554d; @synthesize=_desiredParts
@property(assign, nonatomic) unsigned long long disabledParts;	// G=0x2e2d5e89; S=0x2e2d5ea1; @synthesize=_disabledParts
@property(retain, nonatomic) MPAVItem *item;	// G=0x2e2d5eb5; S=0x2e2d54d5; @synthesize=_item
@property(readonly, assign, nonatomic) UINavigationBar *navigationBar;	// G=0x2e2d5715; 
@property(assign, nonatomic) BOOL navigationBarHidden;	// G=0x2e2d54cd; S=0x2e2d5585; 
@property(retain, nonatomic) MPAVController *player;	// G=0x2e2d5ec5; S=0x2e2d4fd5; @synthesize=_player
@property(assign, nonatomic) __weak id<MPVideoControllerProtocol> videoViewController;	// G=0x2e2d5ed5; S=0x2e2d5589; @synthesize=_videoViewController
@property(assign, nonatomic) unsigned long long visibleParts;	// G=0x2e2d5ef5; S=0x2e2d5605; @synthesize=_visibleParts
- (id)initWithFrame:(CGRect)frame;	// 0x2e2d4d21
- (void).cxx_destruct;	// 0x2e2d5f0d
- (double)_duration;	// 0x2e2d5ced
- (void)_endSliderTracking;	// 0x2e2d5285
- (void)_itemDurationDidChangeNotification:(id)_itemDuration;	// 0x2e2d5419
- (double)_playableDuration;	// 0x2e2d5d95
- (void)_tickNotification:(id)notification;	// 0x2e2d5365
// declared property getter: - (BOOL)allowsWirelessPlayback;	// 0x2e2d54c9
- (void)cancelPreviousPerformTickEventsForSelector:(SEL)selector;	// 0x2e2d5ba5
- (void)dealloc;	// 0x2e2d4e0d
// declared property getter: - (id)delegate;	// 0x2e2d5e3d
// declared property getter: - (unsigned long long)desiredParts;	// 0x2e2d5e71
- (void)detailSlider:(id)slider didChangeValue:(float)value;	// 0x2e2d5201
- (void)detailSliderTrackingDidBegin:(id)detailSliderTracking;	// 0x2e2d50cd
- (void)detailSliderTrackingDidCancel:(id)detailSliderTracking;	// 0x2e2d51f1
- (void)detailSliderTrackingDidEnd:(id)detailSliderTracking;	// 0x2e2d51e1
- (void)didMoveToSuperview;	// 0x2e2d5039
// declared property getter: - (unsigned long long)disabledParts;	// 0x2e2d5e89
- (void)hideAlternateTracks;	// 0x2e2d5711
- (id)hitTest:(CGPoint)test withEvent:(id)event;	// 0x2e2d5085
// declared property getter: - (id)item;	// 0x2e2d5eb5
- (void)layoutSubviews;	// 0x2e2d5035
// declared property getter: - (id)navigationBar;	// 0x2e2d5715
// declared property getter: - (BOOL)navigationBarHidden;	// 0x2e2d54cd
- (void)performSelector:(SEL)selector whenTickingPastTime:(double)time;	// 0x2e2d5abd
// declared property getter: - (id)player;	// 0x2e2d5ec5
- (void)registerForPlayerNotifications;	// 0x2e2d4ebd
// declared property setter: - (void)setAllowsWirelessPlayback:(BOOL)playback;	// 0x2e2d54d1
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x2e2d5e5d
// declared property setter: - (void)setDesiredParts:(unsigned long long)parts;	// 0x2e2d554d
- (void)setDesiredParts:(unsigned long long)parts animate:(BOOL)animate;	// 0x2e2d5571
// declared property setter: - (void)setDisabledParts:(unsigned long long)parts;	// 0x2e2d5ea1
// declared property setter: - (void)setItem:(id)item;	// 0x2e2d54d5
// declared property setter: - (void)setNavigationBarHidden:(BOOL)hidden;	// 0x2e2d5585
// declared property setter: - (void)setPlayer:(id)player;	// 0x2e2d4fd5
// declared property setter: - (void)setVideoViewController:(id)controller;	// 0x2e2d5589
// declared property setter: - (void)setVisibleParts:(unsigned long long)parts;	// 0x2e2d5605
- (void)setVisibleParts:(unsigned long long)parts animate:(BOOL)animate;	// 0x2e2d5629
- (void)showAlternateTracks;	// 0x2e2d570d
- (void)startTicking;	// 0x2e2d5641
- (void)stopTicking;	// 0x2e2d56b9
- (void)unregisterForPlayerNotifications;	// 0x2e2d4f65
- (BOOL)updateTimeBasedValues;	// 0x2e2d5719
// declared property getter: - (id)videoViewController;	// 0x2e2d5ed5
// declared property getter: - (unsigned long long)visibleParts;	// 0x2e2d5ef5
@end
