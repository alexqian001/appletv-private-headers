/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "CHDChartTypeWithGrouping.h"


@interface CHDBar2DType : CHDChartTypeWithGrouping {
	int mGapWidth;	// 28 = 0x1c
	bool mColumn;	// 32 = 0x20
	int mOverlap;	// 36 = 0x24
}
@property(assign, getter=isColumn) bool column;	// G=0x31cfc8c1; S=0x31cf7a69; converted property
@property(assign) int gapWidth;	// G=0x31d75a31; S=0x31cf7a51; converted property
@property(assign) int overlap;	// G=0x31d75a41; S=0x31cf7a41; converted property
- (id)initWithChart:(id)chart;	// 0x31cf77e5
- (int)defaultLabelPosition;	// 0x31d75a51
// converted property getter: - (int)gapWidth;	// 0x31d75a31
// converted property getter: - (bool)isColumn;	// 0x31cfc8c1
- (bool)isHorizontal;	// 0x31cfabc5
// converted property getter: - (int)overlap;	// 0x31d75a41
// converted property setter: - (void)setColumn:(bool)column;	// 0x31cf7a69
// converted property setter: - (void)setGapWidth:(int)width;	// 0x31cf7a51
// converted property setter: - (void)setOverlap:(int)overlap;	// 0x31cf7a41
@end

