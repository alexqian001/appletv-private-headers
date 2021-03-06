/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library

@class NSMutableArray, ODDShape, ODDAlgorithm, ODDPoint;

@interface ODILayoutNode : NSObject {
	ODDPoint *mPoint;	// 4 = 0x4
	ODDAlgorithm *mAlgorithm;	// 8 = 0x8
	ODDShape *mShape;	// 12 = 0xc
	NSMutableArray *mChildren;	// 16 = 0x10
}
- (id)initWithLayoutNode:(id)layoutNode point:(id)point;	// 0x31e6fe79
- (id)initWithLayoutNode:(id)layoutNode state:(ODILayoutNodeState *)state;	// 0x31e6ff29
- (void)dealloc;	// 0x31e6fe9d
- (void)processAlgorithm:(id)algorithm state:(ODILayoutNodeState *)state;	// 0x31e70325
- (void)processChoose:(id)choose state:(ODILayoutNodeState *)state;	// 0x31e701c9
- (void)processForEach:(id)each state:(ODILayoutNodeState *)state;	// 0x31e70241
- (void)processLayoutNode:(id)node state:(ODILayoutNodeState *)state;	// 0x31e70155
- (void)processLayoutObjects:(id)objects state:(ODILayoutNodeState *)state;	// 0x31e6ffcd
- (void)processShape:(id)shape state:(ODILayoutNodeState *)state;	// 0x31e70361
@end

