/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"


__attribute__((visibility("hidden")))
@interface UITextMagnifierRenderer : UIView {
	int m_autoscrollDirections;	// 84 = 0x54
	int m_magnifierMethod;	// 88 = 0x58
}
@property(assign, nonatomic) int autoscrollDirections;	// G=0x30ed60a5; S=0x30ed60b5; @synthesize=m_autoscrollDirections
@property(assign, nonatomic) int magnifierMethod;	// G=0x30ed60c5; S=0x30ed60d5; @synthesize=m_magnifierMethod
- (id)initWithFrame:(CGRect)frame;	// 0x30d2ec71
// declared property getter: - (int)autoscrollDirections;	// 0x30ed60a5
- (void)drawAutoscroller:(CGRect)autoscroller;	// 0x30ed5e51
- (void)drawMagnifier:(CGRect)magnifier;	// 0x30ed6051
- (void)drawRect:(CGRect)rect;	// 0x30ed6055
// declared property getter: - (int)magnifierMethod;	// 0x30ed60c5
// declared property setter: - (void)setAutoscrollDirections:(int)directions;	// 0x30ed60b5
// declared property setter: - (void)setMagnifierMethod:(int)method;	// 0x30ed60d5
@end
