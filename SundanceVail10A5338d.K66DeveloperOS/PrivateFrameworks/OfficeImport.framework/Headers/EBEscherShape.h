/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "ESDObject.h"

@class NSData, NSMutableArray, CHDChart;

@interface EBEscherShape : ESDObject {
	NSData *mChartData;	// 16 = 0x10
	NSMutableArray *mChartColorLocators;	// 20 = 0x14
	BOOL mShowLegend;	// 24 = 0x18
	CHDChart *mChart;	// 28 = 0x1c
}
@property(retain) id chart;	// G=0x33b5d4bd; S=0x33b5d4cd; converted property
@property(retain) id chartColorLocators;	// G=0x33b5d451; S=0x33b5d461; converted property
@property(retain) id chartData;	// G=0x33b5d405; S=0x33b5d415; converted property
@property(assign) BOOL showLegend;	// G=0x33b5d49d; S=0x33b5d4ad; converted property
// converted property getter: - (id)chart;	// 0x33b5d4bd
// converted property getter: - (id)chartColorLocators;	// 0x33b5d451
// converted property getter: - (id)chartData;	// 0x33b5d405
- (void)dealloc;	// 0x33b5d38d
// converted property setter: - (void)setChart:(id)chart;	// 0x33b5d4cd
// converted property setter: - (void)setChartColorLocators:(id)locators;	// 0x33b5d461
// converted property setter: - (void)setChartData:(id)data;	// 0x33b5d415
// converted property setter: - (void)setShowLegend:(BOOL)legend;	// 0x33b5d4ad
// converted property getter: - (BOOL)showLegend;	// 0x33b5d49d
@end

