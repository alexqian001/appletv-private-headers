/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import <UIButton.h> // Unknown library

@class CADisplayLink, UIImageView;

@interface MPDownloadProgressIndicator : UIButton {
	float _animatedStartValue;	// 180 = 0xb4
	float _animatedValue;	// 184 = 0xb8
	BOOL _animating;	// 188 = 0xbc
	BOOL _canCancel;	// 189 = 0xbd
	double _animationEndTime;	// 192 = 0xc0
	double _animationStartTime;	// 200 = 0xc8
	CADisplayLink *_displayLink;	// 208 = 0xd0
	UIImageView *_centerImageView;	// 212 = 0xd4
	BOOL _mpExternalHidden;	// 216 = 0xd8
	BOOL _mpInternalHidden;	// 217 = 0xd9
	int _style;	// 220 = 0xdc
	float _value;	// 224 = 0xe0
}
@property(assign, nonatomic) BOOL canCancel;	// G=0x36d44ee1; S=0x36d44371; @synthesize=_canCancel
@property(readonly, assign, nonatomic) int style;	// G=0x36d44ef1; @synthesize=_style
@property(assign, nonatomic) float value;	// G=0x36d44f01; S=0x36d443f9; @synthesize=_value
+ (id)_baseImageForStyle:(int)style;	// 0x36d44729
+ (id)_fillImageForStyle:(int)style;	// 0x36d44889
+ (id)_nonstopImageForStyle:(int)style;	// 0x36d44a29
+ (CGSize)_sizeForStyle:(int)style;	// 0x36d44a81
+ (id)_stopImageForStyle:(int)style;	// 0x36d44af1
- (id)initWithStyle:(int)style;	// 0x36d43bd9
- (void)_animateValueOnDisplayLink:(id)link;	// 0x36d44c51
- (CGRect)_baseFrameForSize:(CGSize)size inBounds:(CGRect)bounds;	// 0x36d44d99
- (CGRect)_centerImageViewFrame:(CGRect)frame inBounds:(CGRect)bounds forStyle:(int)style;	// 0x36d44dd9
- (CGRect)_fillFrameForSize:(CGSize)size inBounds:(CGRect)bounds;	// 0x36d44e4d
- (void)_setInternalHidden:(BOOL)hidden;	// 0x36d44e8d
// declared property getter: - (BOOL)canCancel;	// 0x36d44ee1
- (void)dealloc;	// 0x36d43d91
- (void)drawRect:(CGRect)rect;	// 0x36d43df9
- (void)layoutSubviews;	// 0x36d44229
// declared property setter: - (void)setCanCancel:(BOOL)cancel;	// 0x36d44371
- (void)setHidden:(BOOL)hidden;	// 0x36d4431d
// declared property setter: - (void)setValue:(float)value;	// 0x36d443f9
- (void)setValue:(float)value animated:(BOOL)animated;	// 0x36d44411
// declared property getter: - (int)style;	// 0x36d44ef1
- (void)updateFromObserver:(id)observer;	// 0x36d44631
- (void)updateFromObserver:(id)observer animated:(BOOL)animated;	// 0x36d44649
// declared property getter: - (float)value;	// 0x36d44f01
@end

