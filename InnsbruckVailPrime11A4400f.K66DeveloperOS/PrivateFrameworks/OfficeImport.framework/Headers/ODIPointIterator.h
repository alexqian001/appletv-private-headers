/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import </libobjc.A.h>
#import "OfficeImport-Structs.h"


@interface ODIPointIterator : NSObject {
}
+ (BOOL)addPoint:(id)point state:(ODIPointIteratorState *)state;	// 0x3198a269
+ (BOOL)isDoneForState:(ODIPointIteratorState *)state;	// 0x3198a37d
+ (BOOL)isPoint:(id)point ofType:(int)type;	// 0x3198a2ed
+ (id)pointsForSpecification:(id)specification startingPoint:(id)point isLast:(BOOL)last;	// 0x3198a02d
+ (id)processAttributes:(id)attributes startingPoint:(id)point isLast:(BOOL)last;	// 0x3198a0e9
+ (void)processChildAxisFromPoint:(id)point state:(ODIPointIteratorState *)state;	// 0x3198a3b9
+ (void)processFollowingSiblingAxisFromPoint:(id)point state:(ODIPointIteratorState *)state;	// 0x3198a45d
+ (void)processSelfAxisFromPoint:(id)point state:(ODIPointIteratorState *)state;	// 0x3198a3a9
@end
