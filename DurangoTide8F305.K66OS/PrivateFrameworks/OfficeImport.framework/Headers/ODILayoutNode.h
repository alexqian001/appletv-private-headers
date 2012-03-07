/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "OfficeImport-Structs.h"

@class NSMutableArray, ODDPoint, ODDShape, ODDAlgorithm;

__attribute__((visibility("hidden")))
@interface ODILayoutNode : NSObject {
@private
	ODDPoint *mPoint;	// 4 = 0x4
	ODDAlgorithm *mAlgorithm;	// 8 = 0x8
	ODDShape *mShape;	// 12 = 0xc
	NSMutableArray *mChildren;	// 16 = 0x10
}
- (id)initWithLayoutNode:(id)layoutNode point:(id)point;	// 0x3459f4c1
- (id)initWithLayoutNode:(id)layoutNode state:(ODILayoutNodeState *)state;	// 0x3459f429
- (void)dealloc;	// 0x3459f4e5
- (void)processAlgorithm:(id)algorithm state:(ODILayoutNodeState *)state;	// 0x3459f0e5
- (void)processChoose:(id)choose state:(ODILayoutNodeState *)state;	// 0x3459f1e9
- (void)processForEach:(id)each state:(ODILayoutNodeState *)state;	// 0x3459f11d
- (void)processLayoutNode:(id)node state:(ODILayoutNodeState *)state;	// 0x3459f255
- (void)processLayoutObjects:(id)objects state:(ODILayoutNodeState *)state;	// 0x3459f2b9
- (void)processShape:(id)shape state:(ODILayoutNodeState *)state;	// 0x3459f0ad
@end
