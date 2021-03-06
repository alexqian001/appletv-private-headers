/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "CHDChartType.h"


@interface CHDChartTypeWithGrouping : CHDChartType {
	int mGrouping;	// 24 = 0x18
}
@property(assign) int grouping;	// G=0x37a22489; S=0x37a19b11; converted property
- (id)initWithChart:(id)chart;	// 0x37a1989d
- (id)chdGroupingString;	// 0x37a985b5
// converted property getter: - (int)grouping;	// 0x37a22489
- (bool)isGroupingStacked;	// 0x37a1cb21
// converted property setter: - (void)setGrouping:(int)grouping;	// 0x37a19b11
@end

