/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import "CorePDF-Structs.h"
#import "NSCopying.h"
#import </libobjc.A.h>
#import "CPCopying.h"

@class CPPage, NSMutableArray;

@interface CPZoneBorder : NSObject <NSCopying, CPCopying> {
	CGRect bounds;	// 4 = 0x4
	CPPage *page;	// 20 = 0x14
	NSMutableArray *ownerArray;	// 24 = 0x18
	NSMutableArray *graphicObjects;	// 28 = 0x1c
	NSMutableArray *neighbors;	// 32 = 0x20
	NSMutableArray *intersections;	// 36 = 0x24
	BOOL isHorizontal;	// 40 = 0x28
	BOOL hasForwardVector;	// 41 = 0x29
	BOOL hasBackwardVector;	// 42 = 0x2a
	float overhangMin;	// 44 = 0x2c
	float overhangMax;	// 48 = 0x30
}
@property(assign) CGRect bounds;	// G=0x30613215; S=0x3061322d; converted property
@property(readonly, retain) NSMutableArray *graphicObjects;	// G=0x30613999; converted property
@property(assign) BOOL hasBackwardVector;	// G=0x30613c3d; S=0x30613c2d; converted property
@property(assign) BOOL hasForwardVector;	// G=0x30613c1d; S=0x30613c0d; converted property
@property(readonly, assign) BOOL isHorizontal;	// G=0x30613d8d; converted property
@property(readonly, retain) NSMutableArray *ownerArray;	// G=0x30613205; converted property
@property(readonly, retain) CPPage *page;	// G=0x30613131; converted property
+ (void)addIntersectionBetweenBorder:(id)border andBorder:(id)border2 atRect:(CGRect)rect;	// 0x306132b9
+ (int)clockwiseWindingNumberOfShapeWithBorders:(id)borders;	// 0x30613721
+ (CGRect)extendRect:(CGRect)rect;	// 0x306137c1
+ (void)outerVertices:(CGPoint *)vertices fromBorders:(id)borders swollenBy:(float)by;	// 0x30613541
+ (void)removeIntersectionBetweenBorder:(id)border andBorder:(id)border2;	// 0x30613469
- (id)init;	// 0x30612dd1
- (id)initSuper;	// 0x30612eed
- (id)initWithGraphicObject:(id)graphicObject;	// 0x30612e75
- (void)addGraphicObject:(id)object;	// 0x30613881
- (void)addNeighbor:(id)neighbor;	// 0x306139d1
- (void)addToArray:(id)array;	// 0x30613141
- (void)addToArray:(id)array atIndex:(unsigned)index;	// 0x3061316d
// converted property getter: - (CGRect)bounds;	// 0x30613215
- (void)combine:(id)combine;	// 0x30614a45
- (int)compareXBounds:(id)bounds;	// 0x30614e61
- (int)compareYBounds:(id)bounds;	// 0x30614ec9
- (BOOL)continues:(id)continues;	// 0x30614995
- (id)copyWithZone:(NSZone *)zone;	// 0x30612f91
- (id)copyWithoutIntersections;	// 0x30613075
- (BOOL)crosses:(id)crosses;	// 0x306147d5
- (void)dealloc;	// 0x30612f19
- (BOOL)extractCycleTo:(id)to goingForward:(BOOL)forward startingAtIndex:(unsigned)index;	// 0x30614241
- (BOOL)extractCycleTo:(id)to goingForward:(BOOL)forward throughIntersectionIndex:(unsigned)index returningTo:(id)to4 atRect:(CGRect *)rect;	// 0x306142f1
- (id)graphicObjectAtIndex:(unsigned)index;	// 0x30613979
- (unsigned)graphicObjectCount;	// 0x30613859
// converted property getter: - (id)graphicObjects;	// 0x30613999
// converted property getter: - (BOOL)hasBackwardVector;	// 0x30613c3d
- (BOOL)hasClockwiseVectorAtIndex:(unsigned)index startingForward:(BOOL)forward;	// 0x30613f65
- (BOOL)hasCounterclockwiseVectorAtIndex:(unsigned)index startingForward:(BOOL)forward;	// 0x30614009
// converted property getter: - (BOOL)hasForwardVector;	// 0x30613c1d
- (BOOL)hasNeighborShape:(id)shape;	// 0x30613ad5
- (BOOL)hasNeighborShape:(id)shape atSide:(int)side;	// 0x30613b59
- (BOOL)hasVectorGoingForward:(BOOL)forward startingAtIndex:(unsigned *)index;	// 0x3061416d
- (unsigned)indexOfIntersectionWith:(id)with;	// 0x30613e75
- (void)instantiateVectors;	// 0x306140ad
- (unsigned)intersectionCount;	// 0x30613db5
- (BOOL)intersectsWith:(id)with atRect:(CGRect *)rect;	// 0x30613ddd
// converted property getter: - (BOOL)isHorizontal;	// 0x30613d8d
- (BOOL)isVertical;	// 0x30613d9d
- (id)neighborAtIndex:(unsigned)index;	// 0x30613aa9
- (unsigned)neighborCount;	// 0x306139a9
// converted property getter: - (id)ownerArray;	// 0x30613205
// converted property getter: - (id)page;	// 0x30613131
- (void)removeFromArray;	// 0x30613199
- (void)removeFromArrayAtIndex:(unsigned)index;	// 0x306131c1
- (void)removeGraphicObjectAtIndex:(unsigned)index;	// 0x30613959
- (void)removeLooseThreadsStartingFrom:(id)from;	// 0x30614d2d
- (void)removeNeighborAtIndex:(unsigned)index;	// 0x30613a85
// converted property setter: - (void)setBounds:(CGRect)bounds;	// 0x3061322d
// converted property setter: - (void)setHasBackwardVector:(BOOL)vector;	// 0x30613c2d
// converted property setter: - (void)setHasForwardVector:(BOOL)vector;	// 0x30613c0d
- (void)setSide:(int)side ofPage:(id)page;	// 0x30613c4d
- (void)trimToLastIntersections;	// 0x30614b95
- (BOOL)windsClockwiseOnto:(id)onto;	// 0x30613ef1
- (long)zOrder;	// 0x30613251
@end
