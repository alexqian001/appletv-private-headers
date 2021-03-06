/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "CMProperty.h"


@interface CMLengthProperty : CMProperty {
	double value;	// 8 = 0x8
	int unitType;	// 16 = 0x10
}
@property(readonly, assign) int unitType;	// G=0x34907425; converted property
@property(readonly, assign) double value;	// G=0x3490740d; converted property
+ (id)cssStringValue:(double)value unit:(int)unit;	// 0x3487d855
- (id)initWithNumber:(double)number;	// 0x348bcea1
- (id)initWithNumber:(double)number unit:(int)unit;	// 0x3487e135
- (int)compareValue:(id)value;	// 0x349dfc4d
- (id)cssString;	// 0x348bf89d
- (id)cssStringForName:(id)name;	// 0x3487e231
- (int)intValue;	// 0x349dfc31
// converted property getter: - (int)unitType;	// 0x34907425
// converted property getter: - (double)value;	// 0x3490740d
@end

