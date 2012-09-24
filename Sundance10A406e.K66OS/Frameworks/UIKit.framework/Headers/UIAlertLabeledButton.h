/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIAlertButton.h"

@class UILabel;

__attribute__((visibility("hidden")))
@interface UIAlertLabeledButton : UIAlertButton {
	UILabel *_typeLabel;	// 184 = 0xb8
	float _titleOffset;	// 188 = 0xbc
}
@property(assign, nonatomic) float titleOffset;	// G=0x30c11b8d; S=0x30c11549; @synthesize=_titleOffset
@property(readonly, assign, nonatomic) UILabel *typeLabel;	// G=0x30c112ed; 
- (void)dealloc;	// 0x30c11a31
- (void)layoutSubviews;	// 0x30c11581
- (void)setHighlighted:(BOOL)highlighted;	// 0x30c11a7d
// declared property setter: - (void)setTitleOffset:(float)offset;	// 0x30c11549
// declared property getter: - (float)titleOffset;	// 0x30c11b8d
// declared property getter: - (id)typeLabel;	// 0x30c112ed
@end
