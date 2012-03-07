/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import <UISlider.h> // Unknown library

@class NSTimer, UILabel, NSString, UIImageView;
@protocol MPDetailSliderDelegate;

@interface MPDetailSlider : UISlider {
	unsigned _allowsDetailScrubbing : 1;	// 112 = 0x70
	id _delegate;	// 116 = 0x74
	float _detailScrubbingVerticalRange;	// 120 = 0x78
	UIImageView *_downloadingTrackOverlay;	// 124 = 0x7c
	UIImageView *_thumbImageView;	// 128 = 0x80
	UIImageView *_glowDetailScrubImageView;	// 132 = 0x84
	unsigned _isTracking : 1;	// 136 = 0x88
	unsigned _didBeginTracking : 1;	// 136 = 0x88
	unsigned _needsCommit : 1;	// 136 = 0x88
	unsigned _canCommit : 1;	// 136 = 0x88
	unsigned _active : 1;	// 136 = 0x88
	CGPoint _beginLocationInView;	// 140 = 0x8c
	CGPoint _previousLocationInView;	// 148 = 0x94
	CGPoint _lastCommittedLocationInView;	// 156 = 0x9c
	double _currentTime;	// 164 = 0xa4
	double _duration;	// 172 = 0xac
	double _availableDuration;	// 180 = 0xb4
	float _minScale;	// 188 = 0xbc
	unsigned _durationAllowsDetailScrubbing : 1;	// 192 = 0xc0
	UILabel *_currentTimeLabel;	// 196 = 0xc4
	UILabel *_currentTimeInverseLabel;	// 200 = 0xc8
	float _trackInset;	// 204 = 0xcc
	float _maxTrackWidth;	// 208 = 0xd0
	UIEdgeInsets _timeLabelInsets;	// 212 = 0xd4
	int _timeLabelStyle;	// 228 = 0xe4
	int _scrubValue;	// 232 = 0xe8
	unsigned _autoscrubActive : 1;	// 236 = 0xec
	NSTimer *_autoscrubTimer;	// 240 = 0xf0
	int _style;	// 244 = 0xf4
}
@property(assign, nonatomic, getter=isActive) BOOL active;	// G=0x31dc2ca9; S=0x31dc361d; 
@property(assign, nonatomic) BOOL allowsDetailScrubbing;	// G=0x31dc2ce1; S=0x31dc2cbd; 
@property(assign, nonatomic) double availableDuration;	// G=0x31dc2d9d; S=0x31dc55cd; @synthesize=_availableDuration
@property(assign, nonatomic) id<MPDetailSliderDelegate> delegate;	// G=0x31dc2d7d; S=0x31dc2d8d; @synthesize=_delegate
@property(readonly, assign, nonatomic) BOOL detailScrubbingAvailableForCurrentDuration;	// G=0x31dc2cf5; 
@property(assign, nonatomic) float detailScrubbingVerticalRange;	// G=0x31dc2d5d; S=0x31dc2d6d; @synthesize=_detailScrubbingVerticalRange
@property(assign, nonatomic) double duration;	// G=0x31dc2d4d; S=0x31dc54a9; @synthesize=_duration
@property(readonly, assign, nonatomic) NSString *localizedScrubSpeedText;	// G=0x31dc33c9; 
@property(assign, nonatomic) UIEdgeInsets timeLabelInsets;	// G=0x31dc2d31; S=0x31dc356d; @synthesize=_timeLabelInsets
@property(assign, nonatomic) int timeLabelStyle;	// G=0x31dc2d21; S=0x31dc35f5; @synthesize=_timeLabelStyle
+ (float)defaultHeight;	// 0x31dc2ca1
- (id)initWithFrame:(CGRect)frame;	// 0x31dc377d
- (id)initWithFrame:(CGRect)frame style:(int)style;	// 0x31dc37c5
- (id)initWithFrame:(CGRect)frame style:(int)style maxTrackWidth:(float)width;	// 0x31dc380d
- (void)_adjustMinScale;	// 0x31dc3b09
- (void)_autoscrubTick:(id)tick;	// 0x31dc4b21
- (void)_commitValue;	// 0x31dc2eb5
- (void)_resetScrubInfo;	// 0x31dc2f51
- (float)_scaleForIdealValueForVerticalPosition:(float)verticalPosition;	// 0x31dc50ad
- (float)_scaleForVerticalPosition:(float)verticalPosition;	// 0x31dc2fed
- (void)_setupControlsForStyle;	// 0x31dc316d
- (id)_stringForCurrentTime:(double)currentTime;	// 0x31dc5641
- (id)_stringForInverseCurrentTime:(double)inverseCurrentTime;	// 0x31dc5291
- (id)_stringForTime:(double)time;	// 0x31dc5371
- (void)_updateActiveState;	// 0x31dc2de9
- (void)_updateForAvailableDuraton;	// 0x31dc5d99
- (void)_updateTimeDisplayForTime:(double)time;	// 0x31dc2fc9
- (void)_updateTimeDisplayForTime:(double)time force:(BOOL)force;	// 0x31dc51b5
- (void)_updateTrackInset;	// 0x31dc4d91
// declared property getter: - (BOOL)allowsDetailScrubbing;	// 0x31dc2ce1
// declared property getter: - (double)availableDuration;	// 0x31dc2d9d
- (BOOL)beginTrackingWithTouch:(id)touch withEvent:(id)event;	// 0x31dc49cd
- (void)cancelTracking;	// 0x31dc34c1
- (void)cancelTrackingWithEvent:(id)event;	// 0x31dc3651
- (BOOL)continueTrackingWithTouch:(id)touch withEvent:(id)event;	// 0x31dc3e39
- (id)createThumbView;	// 0x31dc2dad
- (id)currentThumbImage;	// 0x31dc3b69
- (void)dealloc;	// 0x31dc36d9
// declared property getter: - (id)delegate;	// 0x31dc2d7d
// declared property getter: - (BOOL)detailScrubbingAvailableForCurrentDuration;	// 0x31dc2cf5
// declared property getter: - (float)detailScrubbingVerticalRange;	// 0x31dc2d5d
// declared property getter: - (double)duration;	// 0x31dc2d4d
- (void)endTrackingWithTouch:(id)touch withEvent:(id)event;	// 0x31dc38c5
// declared property getter: - (BOOL)isActive;	// 0x31dc2ca9
- (BOOL)isTracking;	// 0x31dc2c8d
- (void)layoutSubviews;	// 0x31dc5709
// declared property getter: - (id)localizedScrubSpeedText;	// 0x31dc33c9
// declared property setter: - (void)setActive:(BOOL)active;	// 0x31dc361d
// declared property setter: - (void)setAllowsDetailScrubbing:(BOOL)scrubbing;	// 0x31dc2cbd
// declared property setter: - (void)setAvailableDuration:(double)duration;	// 0x31dc55cd
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x31dc2d8d
// declared property setter: - (void)setDetailScrubbingVerticalRange:(float)range;	// 0x31dc2d6d
// declared property setter: - (void)setDuration:(double)duration;	// 0x31dc54a9
- (void)setFrame:(CGRect)frame;	// 0x31dc3665
// declared property setter: - (void)setTimeLabelInsets:(UIEdgeInsets)insets;	// 0x31dc356d
// declared property setter: - (void)setTimeLabelStyle:(int)style;	// 0x31dc35f5
- (void)setValue:(float)value animated:(BOOL)animated;	// 0x31dc39c5
- (CGRect)thumbRectForBounds:(CGRect)bounds trackRect:(CGRect)rect value:(float)value;	// 0x31dc46d5
// declared property getter: - (UIEdgeInsets)timeLabelInsets;	// 0x31dc2d31
// declared property getter: - (int)timeLabelStyle;	// 0x31dc2d21
- (CGRect)trackRectForBounds:(CGRect)bounds;	// 0x31dc48f9
@end
