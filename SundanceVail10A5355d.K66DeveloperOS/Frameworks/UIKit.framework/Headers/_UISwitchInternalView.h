/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class UIImageView, UIColor, UIImage, CALayer;

__attribute__((visibility("hidden")))
@interface _UISwitchInternalView : UIView {
	UIImage *_colorMask;	// 84 = 0x54
	UIImage *_shapeMask;	// 88 = 0x58
	UIImage *_shapeShadow;	// 92 = 0x5c
	UIImage *_thumb;	// 96 = 0x60
	UIImage *_thumbPressed;	// 100 = 0x64
	float _position;	// 104 = 0x68
	BOOL _pressed;	// 108 = 0x6c
	UIImageView *_colorView;	// 112 = 0x70
	UIImageView *_thumbView;	// 116 = 0x74
	UIImageView *_labelView;	// 120 = 0x78
	UIColor *_onTintColor;	// 124 = 0x7c
	UIColor *_tintColor;	// 128 = 0x80
	UIColor *_thumbTintColor;	// 132 = 0x84
	UIColor *_nonAlternateColor;	// 136 = 0x88
	UIImage *_onImage;	// 140 = 0x8c
	UIImage *_offImage;	// 144 = 0x90
	BOOL _on;	// 148 = 0x94
	BOOL _sendAction;	// 149 = 0x95
	BOOL _useAlternateColor;	// 150 = 0x96
	BOOL _animating;	// 151 = 0x97
	UIImageView *_idleImageView;	// 152 = 0x98
	UIView *_interactiveView;	// 156 = 0x9c
	CALayer *_backgroundLayer;	// 160 = 0xa0
}
@property(retain, nonatomic) UIImage *offImage;	// G=0x33c40941; S=0x33c408a5; 
@property(assign, nonatomic) BOOL on;	// G=0x33ab7a21; S=0x33b69b81; @synthesize=_on
@property(retain, nonatomic) UIImage *onImage;	// G=0x33c40931; S=0x33c40819; 
@property(retain, nonatomic) UIColor *onTintColor;	// G=0x33c40951; S=0x33c3f125; @synthesize=_onTintColor
@property(assign) BOOL sendAction;	// G=0x33c3f475; S=0x33b69b95; converted property
@property(retain, nonatomic) UIColor *thumbTintColor;	// G=0x33c40971; S=0x33c3f279; @synthesize=_thumbTintColor
@property(retain, nonatomic) UIColor *tintColor;	// G=0x33ab71d1; S=0x33c3f181; @synthesize=_tintColor
@property(assign, nonatomic) BOOL useAlternateColor;	// G=0x33c40961; S=0x33c3f2d1; @synthesize=_useAlternateColor
+ (id)_defaultOnTintColor;	// 0x33c3ef99
- (id)initWithFrame:(CGRect)frame;	// 0x33ab64cd
- (void)_buildControl;	// 0x33ab66fd
- (void)_cleanUpAfterAnimating;	// 0x33ab73f9
- (id)_colorImage;	// 0x33ab7145
- (id)_labelImage;	// 0x33c3f5b9
- (void)_onAnimationDidStop:(id)_onAnimation finished:(id)finished context:(void *)context;	// 0x33b69f1d
- (void)_prepareForInteraction;	// 0x33b69965
- (void)_sendActions;	// 0x33b69fbd
- (void)_setOn:(BOOL)on animated:(BOOL)animated force:(BOOL)force;	// 0x33c3f409
- (void)_setOnTintColor:(id)color;	// 0x33c3f021
- (void)_setPressed:(BOOL)pressed;	// 0x33b699ad
- (void)_setProgress:(float)progress;	// 0x33ab71f9
- (void)_setProgress:(float)progress animated:(BOOL)animated withDuration:(float)duration force:(BOOL)force sendAction:(BOOL)action;	// 0x33b69ba5
- (void)_setupBackgroundLayer;	// 0x33c40395
- (void)_setupThumbImages;	// 0x33c40651
- (id)_snapshotImage;	// 0x33ab75f9
- (void)dealloc;	// 0x33b61589
// declared property getter: - (id)offImage;	// 0x33c40941
// declared property getter: - (BOOL)on;	// 0x33ab7a21
// declared property getter: - (id)onImage;	// 0x33c40931
// declared property getter: - (id)onTintColor;	// 0x33c40951
// converted property getter: - (BOOL)sendAction;	// 0x33c3f475
// declared property setter: - (void)setOffImage:(id)image;	// 0x33c408a5
// declared property setter: - (void)setOn:(BOOL)on;	// 0x33b69b81
// declared property setter: - (void)setOnImage:(id)image;	// 0x33c40819
// declared property setter: - (void)setOnTintColor:(id)color;	// 0x33c3f125
// converted property setter: - (void)setSendAction:(BOOL)action;	// 0x33b69b95
// declared property setter: - (void)setThumbTintColor:(id)color;	// 0x33c3f279
// declared property setter: - (void)setTintColor:(id)color;	// 0x33c3f181
// declared property setter: - (void)setUseAlternateColor:(BOOL)color;	// 0x33c3f2d1
// declared property getter: - (id)thumbTintColor;	// 0x33c40971
// declared property getter: - (id)tintColor;	// 0x33ab71d1
- (void)touchesBegan:(id)began withEvent:(id)event;	// 0x33b69931
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;	// 0x33c40801
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x33b69f05
// declared property getter: - (BOOL)useAlternateColor;	// 0x33c40961
@end
