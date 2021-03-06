/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "ODDDataPoint.h"

@class NSMutableArray, ODDTransitionPoint;

__attribute__((visibility("hidden")))
@interface ODDNodePoint : ODDDataPoint {
@private
	ODDNodePoint *mParent;	// 24 = 0x18
	NSMutableArray *mChildren;	// 28 = 0x1c
	ODDTransitionPoint *mParentTransition;	// 32 = 0x20
	ODDTransitionPoint *mSiblingTransition;	// 36 = 0x24
}
@property(retain) id parentTransition;	// G=0x3532c45d; S=0x352f00f5; converted property
@property(retain) id siblingTransition;	// G=0x35316819; S=0x352f01d1; converted property
- (void)addChild:(id)child order:(unsigned long)order;	// 0x352efef9
- (id)children;	// 0x352f09f9
- (void)dealloc;	// 0x352f6499
- (id)parent;	// 0x3531c275
// converted property getter: - (id)parentTransition;	// 0x3532c45d
// converted property setter: - (void)setParentTransition:(id)transition;	// 0x352f00f5
// converted property setter: - (void)setSiblingTransition:(id)transition;	// 0x352f01d1
- (void)setType:(int)type;	// 0x352ef069
// converted property getter: - (id)siblingTransition;	// 0x35316819
@end

