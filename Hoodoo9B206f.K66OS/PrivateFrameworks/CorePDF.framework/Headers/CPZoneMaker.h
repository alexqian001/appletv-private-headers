/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import <NSObject.h> // Unknown library

@class CPCharSequence;

@interface CPZoneMaker : NSObject {
	CPCharSequence *charactersOnPage;	// 4 = 0x4
}
- (void)addObjectsToStraddler:(id)straddler from:(id)from;	// 0x3264cf45
- (unsigned)categorizeGraphicsIn:(id)anIn;	// 0x3264f145
- (void)cutHorizontalBorders:(id)borders whereObscuredByShape:(id)shape;	// 0x3264d455
- (void)cutVerticalBorders:(id)borders whereObscuredByShape:(id)shape;	// 0x3264d1a5
- (void)dealloc;	// 0x3264d159
- (id)makeZoneForStraddlersFrom:(id)from;	// 0x3264d021
- (void)makeZonesIn:(id)anIn;	// 0x3264f2e5
- (void)makeZonesWithBoundaryIn:(id)anIn;	// 0x3264d6fd
- (void)mergeQualifyingRectanglesIn:(id)anIn;	// 0x3264edd5
- (BOOL)overlap:(id)overlap with:(id)with;	// 0x3264ce25
@end

