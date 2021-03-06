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
@property(retain) id chart;	// G=0x34a0ae8d; S=0x34a0ae9d; converted property
@property(retain) id chartColorLocators;	// G=0x34a0ae21; S=0x34a0ae31; converted property
@property(retain) id chartData;	// G=0x34a0add5; S=0x34a0ade5; converted property
@property(assign) BOOL showLegend;	// G=0x34a0ae6d; S=0x34a0ae7d; converted property
// converted property getter: - (id)chart;	// 0x34a0ae8d
// converted property getter: - (id)chartColorLocators;	// 0x34a0ae21
// converted property getter: - (id)chartData;	// 0x34a0add5
- (void)dealloc;	// 0x34a0ad5d
// converted property setter: - (void)setChart:(id)chart;	// 0x34a0ae9d
// converted property setter: - (void)setChartColorLocators:(id)locators;	// 0x34a0ae31
// converted property setter: - (void)setChartData:(id)data;	// 0x34a0ade5
// converted property setter: - (void)setShowLegend:(BOOL)legend;	// 0x34a0ae7d
// converted property getter: - (BOOL)showLegend;	// 0x34a0ae6d
@end

