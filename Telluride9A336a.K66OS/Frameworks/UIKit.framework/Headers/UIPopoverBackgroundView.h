/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"


@interface UIPopoverBackgroundView : UIView {
}
@property(assign, nonatomic) unsigned arrowDirection;	// G=0x35477475; S=0x35477485; 
@property(assign, nonatomic) float arrowOffset;	// G=0x354773f5; S=0x3547746d; 
+ (id)_shadowPathForRect:(CGRect)rect arrowDirection:(unsigned)direction;	// 0x354774d1
+ (float)arrowBase;	// 0x354774a1
+ (float)arrowHeight;	// 0x3547748d
+ (UIEdgeInsets)contentViewInsets;	// 0x354774b5
- (CGRect)_contentViewFrame;	// 0x354778c5
- (id)_shadowPath;	// 0x35477619
- (BOOL)_shouldAnimatePropertyWithKey:(id)key;	// 0x35477739
- (void)_updateShadow;	// 0x3547768d
- (id)actionForLayer:(id)layer forKey:(id)key;	// 0x35477791
// declared property getter: - (unsigned)arrowDirection;	// 0x35477475
// declared property getter: - (float)arrowOffset;	// 0x354773f5
- (int)backgroundStyle;	// 0x35477aed
// declared property setter: - (void)setArrowDirection:(unsigned)direction;	// 0x35477485
// declared property setter: - (void)setArrowOffset:(float)offset;	// 0x3547746d
@end

