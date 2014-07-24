/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import <ImageIO/NSObject.h>

@class _UIFlowLayoutSection, _UIFlowLayoutRow;

__attribute__((visibility("hidden")))
@interface _UIFlowLayoutItem : NSObject {
	_UIFlowLayoutSection *_section;	// 4 = 0x4
	_UIFlowLayoutRow *_rowObject;	// 8 = 0x8
	CGRect _itemFrame;	// 12 = 0xc
}
@property(assign, nonatomic) CGRect itemFrame;	// G=0x2f8e8c19; S=0x2f8e8c31; @synthesize=_itemFrame
@property(assign, nonatomic) _UIFlowLayoutRow *rowObject;	// G=0x2f8e8bf9; S=0x2f8e8c09; @synthesize=_rowObject
@property(assign, nonatomic) _UIFlowLayoutSection *section;	// G=0x2f8e8bd9; S=0x2f8e8be9; @synthesize=_section
- (id)copy;	// 0x2f8e8b8d
// declared property getter: - (CGRect)itemFrame;	// 0x2f8e8c19
// declared property getter: - (id)rowObject;	// 0x2f8e8bf9
// declared property getter: - (id)section;	// 0x2f8e8bd9
// declared property setter: - (void)setItemFrame:(CGRect)frame;	// 0x2f8e8c31
// declared property setter: - (void)setRowObject:(id)object;	// 0x2f8e8c09
// declared property setter: - (void)setSection:(id)section;	// 0x2f8e8be9
@end
