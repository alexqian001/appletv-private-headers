/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "ESDObject.h"

@class NSMutableArray, CHDChart, NSData;

@interface EBEscherShape : ESDObject {
	NSData *mChartData;	// 16 = 0x10
	NSMutableArray *mChartColorLocators;	// 20 = 0x14
	BOOL mShowLegend;	// 24 = 0x18
	CHDChart *mChart;	// 28 = 0x1c
}
@property(retain) id chart;	// G=0x318c2555; S=0x318c2565; converted property
@property(retain) id chartColorLocators;	// G=0x318c24e9; S=0x318c24f9; converted property
@property(retain) id chartData;	// G=0x318c249d; S=0x318c24ad; converted property
@property(assign) BOOL showLegend;	// G=0x318c2535; S=0x318c2545; converted property
// converted property getter: - (id)chart;	// 0x318c2555
// converted property getter: - (id)chartColorLocators;	// 0x318c24e9
// converted property getter: - (id)chartData;	// 0x318c249d
- (void)dealloc;	// 0x318c2425
// converted property setter: - (void)setChart:(id)chart;	// 0x318c2565
// converted property setter: - (void)setChartColorLocators:(id)locators;	// 0x318c24f9
// converted property setter: - (void)setChartData:(id)data;	// 0x318c24ad
// converted property setter: - (void)setShowLegend:(BOOL)legend;	// 0x318c2545
// converted property getter: - (BOOL)showLegend;	// 0x318c2535
@end

