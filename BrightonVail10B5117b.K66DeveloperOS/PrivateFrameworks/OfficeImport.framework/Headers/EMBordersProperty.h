/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "CMProperty.h"
#import "NSCopying.h"
#import "OfficeImport-Structs.h"

@class EDBorders, TSUColor;

@interface EMBordersProperty : CMProperty <NSCopying> {
	EDBorders *edValue;	// 8 = 0x8
	TSUColor *mBorderColor;	// 12 = 0xc
	TSUColor *mBorderTopColor;	// 16 = 0x10
	TSUColor *mBorderLeftColor;	// 20 = 0x14
	TSUColor *mBorderBottomColor;	// 24 = 0x18
	TSUColor *mBorderRightColor;	// 28 = 0x1c
	int mBorderStyle[5];	// 32 = 0x20
	int mBorderWidth[5];	// 52 = 0x34
}
- (id)initWithEDBorders:(id)edborders;	// 0x34aa1b41
- (id)initWithOADStroke:(id)oadstroke;	// 0x34bc13e9
- (id)borderColor;	// 0x34bc167d
- (int *)borderStyles;	// 0x34bc168d
- (int *)borderWidths;	// 0x34bc169d
- (id)colorString;	// 0x34aa280d
- (id)copyWithZone:(NSZone *)zone;	// 0x34bc1319
- (id)cssString;	// 0x34aa21d1
- (id)cssStringForName:(id)name;	// 0x34aa21a5
- (BOOL)hasSameColorsAs:(id)as;	// 0x34bc17a1
- (BOOL)hasSameStylesAs:(id)as;	// 0x34bc16c9
- (BOOL)hasSameWidthsAs:(id)as;	// 0x34bc1735
- (BOOL)isEqual:(id)equal;	// 0x34bc1249
- (BOOL)isNoneAtLocation:(int)location;	// 0x34bc16ad
- (void)setBorderStyleAndWidth:(int)width location:(unsigned)location;	// 0x34aa1ead
- (void)setNoneAtLocation:(int)location;	// 0x34aa2179
- (id)stringFromColor:(id)color;	// 0x34aa297d
- (id)stringFromStyleEnum:(int)styleEnum;	// 0x34aa24e9
- (id)stringFromWidthEnum:(int)widthEnum;	// 0x34aa27c5
- (id)styleHashNumber;	// 0x34aa2421
- (id)styleString;	// 0x34aa2255
- (id)widthHashNumber;	// 0x34aa26fd
- (id)widthString;	// 0x34aa2531
@end

