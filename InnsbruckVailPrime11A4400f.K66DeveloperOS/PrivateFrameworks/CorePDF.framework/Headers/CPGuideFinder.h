/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import "CorePDF-Structs.h"
#import "CPDisposable.h"
#import </libobjc.A.h>

@class CPZone, NSMutableArray, CPCluster;

@interface CPGuideFinder : NSObject <CPDisposable> {
	CPZone *contentZone;	// 4 = 0x4
	unsigned countOfWordsInZone;	// 8 = 0x8
	double *anchorArray;	// 12 = 0xc
	double *rightHandSideArray;	// 16 = 0x10
	XXStruct_pkaZhB *crossingWordArray;	// 20 = 0x14
	CPCluster *anchors;	// 24 = 0x18
	CPCluster *rightHandSides;	// 28 = 0x1c
	float medianFontSizeOfFirstCharacter;	// 32 = 0x20
	float medianFontSizeOfLastCharacter;	// 36 = 0x24
	NSMutableArray *gutters;	// 40 = 0x28
	NSMutableArray *leftGuides;	// 44 = 0x2c
	NSMutableArray *rightGuides;	// 48 = 0x30
}
@property(readonly, retain) NSMutableArray *gutters;	// G=0x3060a3a5; converted property
@property(readonly, retain) NSMutableArray *leftGuides;	// G=0x3060a3e9; converted property
@property(readonly, assign) float medianFontSizeOfFirstCharacter;	// G=0x30608225; converted property
@property(readonly, assign) float medianFontSizeOfLastCharacter;	// G=0x30608235; converted property
@property(readonly, retain) NSMutableArray *rightGuides;	// G=0x3060a42d; converted property
+ (BOOL)guideSeparates:(id)separates from:(id)from;	// 0x306097ad
+ (BOOL)gutterSeparates:(id)separates from:(id)from;	// 0x30609801
+ (void)reclusterBetweenGuides:(id)guides;	// 0x30609985
+ (void)reclusterPreservingAlignment:(id)alignment;	// 0x30609855
- (id)initWithContentZone:(id)contentZone;	// 0x30607fe9
- (BOOL)addStripTo:(id)to bottom:(float)bottom left:(float)left top:(float)top right:(float)right;	// 0x3060842d
- (void)dealloc;	// 0x30608175
- (void)dispose;	// 0x306080a9
- (void)finalize;	// 0x30608135
- (void)findGuides;	// 0x306096d1
- (void)findGutters;	// 0x306094e9
- (void)findWordEdgeClusters;	// 0x306092b9
- (void)getWordEdges;	// 0x30608245
// converted property getter: - (id)gutters;	// 0x3060a3a5
- (BOOL)hasGutters;	// 0x3060a371
- (BOOL)hasLeftGuides;	// 0x3060a3b5
- (BOOL)hasRightGuides;	// 0x3060a3f9
// converted property getter: - (id)leftGuides;	// 0x3060a3e9
- (void)markTextLines;	// 0x3060a0c5
// converted property getter: - (float)medianFontSizeOfFirstCharacter;	// 0x30608225
// converted property getter: - (float)medianFontSizeOfLastCharacter;	// 0x30608235
// converted property getter: - (id)rightGuides;	// 0x3060a42d
- (void)setAlignForWordWithExtent:(XXStruct_pkaZhB *)extent stripArray:(id)array stripMax:(double)max;	// 0x30608571
- (void)splitTextLines;	// 0x3060a095
- (void)splitTextLinesAtBorderWords;	// 0x30609b35
- (void)splitTextLinesBetweenBorderWords;	// 0x30609da1
- (void)subdivideGutterFrom:(unsigned)from to:(unsigned)to;	// 0x306089f1
- (void)subdivideLeftGuideAt:(unsigned)at;	// 0x30608d39
- (void)subdivideRightGuideAt:(unsigned)at;	// 0x30608ff9
- (void)subdivideStripInto:(id)into from:(double)from to:(double)to borderedBy:(XXStruct_pkaZhB *)by ofCount:(unsigned)count crossedBy:(XXStruct_pkaZhB *)by6 ofCount:(unsigned)count7;	// 0x306085c1
@end
