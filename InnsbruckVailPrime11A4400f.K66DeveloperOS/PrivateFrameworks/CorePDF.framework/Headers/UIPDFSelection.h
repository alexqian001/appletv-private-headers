/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import "CorePDF-Structs.h"
#import </libobjc.A.h>

@class UIPDFPage;

@interface UIPDFSelection : NSObject {
	UIPDFPage *_page;	// 4 = 0x4
	CGPDFSelectionRef _cgSelection;	// 8 = 0x8
	BOOL _dirty;	// 12 = 0xc
	CFStringRef _string;	// 16 = 0x10
	int _cachedStartIndex;	// 20 = 0x14
	int _cachedEndIndex;	// 24 = 0x18
	XXStruct_ny2fMB stringRange;	// 28 = 0x1c
}
@property(readonly, retain) UIPDFPage *page;	// G=0x3061ee3d; converted property
@property(assign, nonatomic) XXStruct_ny2fMB stringRange;	// G=0x3061fe29; S=0x3061fe41; @synthesize
- (id)init;	// 0x3061ec45
- (id)initWithPage:(id)page cgSelection:(CGPDFSelectionRef)selection;	// 0x3061fe55
- (id)initWithPage:(id)page fromArchive:(id)archive;	// 0x3061ecc9
- (id)initWithPage:(id)page fromIndex:(unsigned)index toIndex:(unsigned)index3;	// 0x3061edc1
- (id)initWithSelection:(id)selection;	// 0x3061ed49
- (CGPDFSelectionRef)CGSelection;	// 0x3061ff25
- (id)archive;	// 0x3061f901
- (id)attributedStringAtIndex:(unsigned)index;	// 0x3061f0c5
- (float)baseLineAtIndex:(unsigned)index;	// 0x3061fd55
- (CGRect)bounds;	// 0x3061ef35
- (id)containingTextLine;	// 0x3061f2bd
- (void)copyToPasteboard;	// 0x3061fbb9
- (void)dealloc;	// 0x3061feb1
- (id)description;	// 0x3061ff65
- (unsigned)endIndex;	// 0x3061fded
- (unsigned)extendAtEnd:(unsigned)end;	// 0x3061fb6d
- (unsigned)extendAtStart:(unsigned)start;	// 0x3061fb21
- (void)extendToParagraph;	// 0x3061ff35
- (XXStruct_ny2fMB)extent;	// 0x3061fd05
- (BOOL)getBounds:(CGRect *)bounds transform:(CGAffineTransform *)transform index:(unsigned)index;	// 0x3061f385
- (id)htmlAtIndex:(unsigned)index;	// 0x3061f475
- (BOOL)isEmpty;	// 0x3061f119
- (BOOL)isNonEmpty;	// 0x3061f139
- (BOOL)isWord;	// 0x3061f349
- (unsigned)numberOfRectangles;	// 0x3061f369
// converted property getter: - (id)page;	// 0x3061ee3d
- (XXStruct_BUymIA)rectangleAtIndex:(unsigned)index scale:(float)scale inset:(float)inset;	// 0x3061f511
- (id)selectionExtendedToLineBoundaries;	// 0x3061f161
// declared property setter: - (void)setStringRange:(XXStruct_ny2fMB)range;	// 0x3061fe41
- (unsigned)startIndex;	// 0x3061fdb1
- (id)string;	// 0x3061f065
// declared property getter: - (XXStruct_ny2fMB)stringRange;	// 0x3061fe29
- (id)textAtIndex:(unsigned)index;	// 0x3061f3d9
- (CGAffineTransform)transform;	// 0x3061ee4d
@end
