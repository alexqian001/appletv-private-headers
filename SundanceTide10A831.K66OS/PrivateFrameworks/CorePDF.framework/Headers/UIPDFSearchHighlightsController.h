/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import <NSObject.h> // Unknown library
#import "CorePDF-Structs.h"

@class NSMutableArray, UIPDFSelection, UIPDFPageView;

@interface UIPDFSearchHighlightsController : NSObject {
	NSMutableArray *_searchHighlightLayers;	// 4 = 0x4
	UIPDFPageView *_pageView;	// 8 = 0x8
	CGColorRef _highlightColor;	// 12 = 0xc
	CGColorRef _borderColor;	// 16 = 0x10
	CGColorRef _shadowColor;	// 20 = 0x14
	BOOL _pageRendered;	// 24 = 0x18
	NSMutableArray *_rectangles;	// 28 = 0x1c
	UIPDFSelection *_selection;	// 32 = 0x20
}
- (id)initWithPageView:(id)pageView;	// 0x32273039
- (void)_addAnimation2:(id)a2;	// 0x32273659
- (void)_addAnimation:(id)animation;	// 0x3227351d
- (void)addLayer:(CGRect)layer path:(CGPathRef)path shadowPath:(CGPathRef)path3 animated:(BOOL)animated;	// 0x32273e6d
- (void)addSearchHighlightForRotatedSelection:(id)rotatedSelection animated:(BOOL)animated;	// 0x322738a1
- (void)addSearchHighlightForSelection:(id)selection animated:(BOOL)animated;	// 0x32274fb9
- (void)clearSearchHighlights;	// 0x322733b1
- (void)dealloc;	// 0x322731d1
- (BOOL)hasSearchHighlights;	// 0x32273491
- (id)hitTest:(CGPoint)test;	// 0x322734c5
- (unsigned)indexOfColumnBreakStartingAt:(unsigned)at;	// 0x322740a1
- (void)makeType1Path:(CGPathRef)path shadowPath:(CGPathRef)path2;	// 0x322744e5
- (void)makeType1Shadow:(CGPathRef)shadow rect:(CGRect)rect inset:(CGPoint)inset;	// 0x322742e1
- (void)makeType2Path:(CGPathRef)path to:(unsigned)to shadowPath:(CGPathRef)path3;	// 0x322748e1
- (void)makeType2Shadow:(CGPathRef)shadow rect:(CGRect)rect;	// 0x3227440d
- (void)makeType3Path:(CGPathRef)path from:(unsigned)from to:(unsigned)to shadowPath:(CGPathRef)path4;	// 0x32274b95
- (void)makeType4Path:(CGPathRef)path from:(unsigned)from to:(unsigned)to shadowPath:(CGPathRef)path4;	// 0x32274d5d
- (void)pageDidRender:(id)page;	// 0x32273281
- (CGRect)unionFrom:(unsigned)from to:(unsigned)to;	// 0x32274195
@end
