/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OADDrawable.h"
#import "OfficeImport-Structs.h"
#import "OADDrawableContainer.h"

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface OADGroup : OADDrawable <OADDrawableContainer> {
@private
	CGRect mLogicalBounds;	// 24 = 0x18
	NSMutableArray *mChildren;	// 40 = 0x28
}
@property(assign) CGRect logicalBounds;	// G=0x328ebdad; S=0x328ead9d; converted property
- (id)init;	// 0x328eaa95
- (void)addChild:(id)child;	// 0x3299b249
- (void)addChildren:(id)children;	// 0x328eadc1
- (id)childAtIndex:(unsigned)index;	// 0x328ec2a1
- (unsigned)childCount;	// 0x328ebd8d
- (id)children;	// 0x32ac02d9
- (void)dealloc;	// 0x328ed47d
- (id)groupProperties;	// 0x329d6259
// converted property getter: - (CGRect)logicalBounds;	// 0x328ebdad
- (void)removeUnnecessaryOverrides;	// 0x328eb165
// converted property setter: - (void)setLogicalBounds:(CGRect)bounds;	// 0x328ead9d
- (void)setParentTextListStyle:(id)style;	// 0x328eae89
@end

