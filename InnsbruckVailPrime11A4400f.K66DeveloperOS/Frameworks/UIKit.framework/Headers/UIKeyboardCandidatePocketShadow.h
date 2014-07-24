/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIView.h"
#import "UIKit-Structs.h"


__attribute__((visibility("hidden")))
@interface UIKeyboardCandidatePocketShadow : UIView {
	BOOL _shadowFadesToBottom;	// 98 = 0x62
	float _shadowHeightGrowthFactor;	// 100 = 0x64
}
@property(assign, nonatomic) BOOL shadowFadesToBottom;	// G=0x2f6edf89; S=0x2f6edf99; @synthesize=_shadowFadesToBottom
@property(assign, nonatomic) float shadowHeightGrowthFactor;	// G=0x2f6edf69; S=0x2f6edf79; @synthesize=_shadowHeightGrowthFactor
+ (float)width;	// 0x2f6edaf1
- (id)initWithFrame:(CGRect)frame;	// 0x2f6edb29
- (void)drawRect:(CGRect)rect;	// 0x2f6edbe1
// declared property setter: - (void)setShadowFadesToBottom:(BOOL)bottom;	// 0x2f6edf99
// declared property setter: - (void)setShadowHeightGrowthFactor:(float)factor;	// 0x2f6edf79
// declared property getter: - (BOOL)shadowFadesToBottom;	// 0x2f6edf89
// declared property getter: - (float)shadowHeightGrowthFactor;	// 0x2f6edf69
@end
