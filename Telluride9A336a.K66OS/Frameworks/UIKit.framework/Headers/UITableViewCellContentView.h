/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class CALayer;

__attribute__((visibility("hidden")))
@interface UITableViewCellContentView : UIView {
@private
	CALayer *_mask;	// 48 = 0x30
}
@property(retain, nonatomic) CALayer *mask;	// G=0x353be62d; S=0x353be54d; 
+ (id)classFallbacksForKeyedArchiver;	// 0x353be4d1
- (id)_cell;	// 0x353be4f9
- (void)dealloc;	// 0x351f1885
// declared property getter: - (id)mask;	// 0x353be62d
- (void)setBounds:(CGRect)bounds;	// 0x353be63d
- (void)setFrame:(CGRect)frame;	// 0x351176a5
// declared property setter: - (void)setMask:(id)mask;	// 0x353be54d
@end
