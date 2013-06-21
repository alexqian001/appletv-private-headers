/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"


@interface _UIReflectingView : UIView {
	UIView *_containerView;	// 84 = 0x54
	UIView *_gradientView;	// 88 = 0x58
	float _reflectionAlpha;	// 92 = 0x5c
}
@property(readonly, assign, nonatomic) UIView *containerView;	// G=0x32c5cd95; @synthesize=_containerView
@property(assign, nonatomic) float reflectionAlpha;	// G=0x32c5cb95; S=0x32c5c9bd; 
@property(assign, nonatomic) float reflectionFraction;	// G=0x32e6ac59; S=0x32c5cba5; 
- (id)initWithFrame:(CGRect)frame;	// 0x32c5c4b5
- (id)_gradientLayer;	// 0x32c5c99d
- (void)_updateGradientColors;	// 0x32c5ca65
// declared property getter: - (id)containerView;	// 0x32c5cd95
- (void)layoutSubviews;	// 0x32c5c715
// declared property getter: - (float)reflectionAlpha;	// 0x32c5cb95
// declared property getter: - (float)reflectionFraction;	// 0x32e6ac59
- (void)setBackgroundColor:(id)color;	// 0x32c5cc4d
- (void)setFrame:(CGRect)frame;	// 0x32c5c6b9
// declared property setter: - (void)setReflectionAlpha:(float)alpha;	// 0x32c5c9bd
// declared property setter: - (void)setReflectionFraction:(float)fraction;	// 0x32c5cba5
@end
