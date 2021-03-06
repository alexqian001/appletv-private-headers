/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OADDrawableContainer.h"
#import "OfficeImport-Structs.h"
#import "OADDrawable.h"

@class NSMutableArray;

@interface OADGroup : OADDrawable <OADDrawableContainer> {
	CGRect mLogicalBounds;	// 24 = 0x18
	NSMutableArray *mChildren;	// 40 = 0x28
}
@property(assign) CGRect logicalBounds;	// G=0x36f818ed; S=0x36f8041d; converted property
- (id)init;	// 0x36f80129
- (id).cxx_construct;	// 0x36f80125
- (void)addChild:(id)child;	// 0x36fc1639
- (void)addChildren:(id)children;	// 0x36f8097d
- (id)childAtIndex:(unsigned)index;	// 0x36f81d81
- (unsigned)childCount;	// 0x36f818cd
- (id)children;	// 0x37149555
- (void)dealloc;	// 0x36f84cbd
- (id)groupProperties;	// 0x3703ac65
// converted property getter: - (CGRect)logicalBounds;	// 0x36f818ed
- (void)removeUnnecessaryOverrides;	// 0x36f80d01
- (void)replaceChild:(id)child with:(id)with;	// 0x37149565
// converted property setter: - (void)setLogicalBounds:(CGRect)bounds;	// 0x36f8041d
- (void)setParentTextListStyle:(id)style;	// 0x36f80a49
@end

