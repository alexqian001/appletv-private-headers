/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import <NSObject.h> // Unknown library
#import "CorePDF-Structs.h"

@class NSMutableArray, CPZone;

@interface CPColumnMaker : NSObject {
	NSMutableArray *columns;	// 4 = 0x4
	CPZone *currentZone;	// 8 = 0x8
	NSMutableArray *allParagraphs;	// 12 = 0xc
	NSMutableArray *thinHorizontalShapes;	// 16 = 0x10
	NSMutableArray *otherShapes;	// 20 = 0x14
	NSMutableArray *images;	// 24 = 0x18
	NSMutableArray *paragraphWrappers;	// 28 = 0x1c
	CGRect pageBounds;	// 32 = 0x20
	float maxParagraphDistance;	// 48 = 0x30
}
@property(readonly, retain) NSMutableArray *columns;	// G=0x31f5b061; converted property
@property(assign) CGRect pageBounds;	// G=0x31f5b29d; S=0x31f5b25d; @synthesize
- (id)init;	// 0x31f5b1fd
- (void)anchorImages;	// 0x31f5bc49
- (float)averageSpacing:(id)spacing;	// 0x31f5c261
- (void)callOuts;	// 0x31f5c701
- (BOOL)canSafelyAdd:(id)add to:(id)to;	// 0x31f5b071
- (id)chunkAbove:(id)above in:(id)anIn;	// 0x31f5d159
- (BOOL)closeImagesBetween:(id)between and:(id)anAnd bounds:(CGRect)bounds;	// 0x31f5c349
- (BOOL)column:(id)column isLinkedBelowTo:(id)to;	// 0x31f5b195
// converted property getter: - (id)columns;	// 0x31f5b061
- (BOOL)cuttingShapeBetween:(id)between and:(id)anAnd;	// 0x31f5d74d
- (void)dealloc;	// 0x31f5dc1d
- (void)intersectionCallout:(id)callout;	// 0x31f5ce4d
- (BOOL)intervalOverlapLeft:(float)left right:(float)right paragraphs:(id)paragraphs;	// 0x31f5db51
- (void)makeColumnsFrom:(id)from zone:(id)zone;	// 0x31f5b2c1
// declared property getter: - (CGRect)pageBounds;	// 0x31f5b29d
- (BOOL)paragraph:(id)paragraph isAbove:(id)above;	// 0x31f5d57d
- (BOOL)paragraph:(id)paragraph isBelow:(id)below;	// 0x31f5d4f5
- (BOOL)paragraph:(id)paragraph isLinkedBelowTo:(id)to;	// 0x31f5b0e5
- (BOOL)paragraph:(id)paragraph notOnSameShapeAs:(id)as;	// 0x31f5d605
- (id)paragraphAbove:(id)above in:(id)anIn;	// 0x31f5d2a1
- (id)paragraphBelow:(id)below in:(id)anIn;	// 0x31f5d3c1
- (void)partitionShapes:(id)shapes;	// 0x31f5d9a9
// declared property setter: - (void)setPageBounds:(CGRect)bounds;	// 0x31f5b25d
- (void)splitColumns:(id)columns;	// 0x31f5bee9
@end
