/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "EDKeyedObject.h"

@class CHDErrorBar, CHDFormula, CHDChart, OADGraphicProperties, CHDChartType, CHDData, CHDDataLabel, CHDDataValue, EDCollection, EDKeyedCollection;

@interface CHDSeries : NSObject <EDKeyedObject> {
	CHDChart *mChart;	// 4 = 0x4
	CHDChartType *mChartType;	// 8 = 0x8
	int mOrder;	// 12 = 0xc
	int mStyleIndex;	// 16 = 0x10
	CHDFormula *mName;	// 20 = 0x14
	CHDDataValue *mLastCachedName;	// 24 = 0x18
	CHDData *mValueData;	// 28 = 0x1c
	CHDData *mCategoryData;	// 32 = 0x20
	EDKeyedCollection *mDataValuePropertiesCollection;	// 36 = 0x24
	EDCollection *mTrendlinesCollection;	// 40 = 0x28
	CHDErrorBar *mErrorBarX;	// 44 = 0x2c
	CHDErrorBar *mErrorBarY;	// 48 = 0x30
	CHDDataLabel *mDefaultDataLabel;	// 52 = 0x34
	OADGraphicProperties *mGraphicProperties;	// 56 = 0x38
	bool mDateTimeFormattingFlag;	// 60 = 0x3c
	bool mHiddenFlag;	// 61 = 0x3d
}
@property(retain) id categoryData;	// G=0x37a1c2a5; S=0x37a1b111; converted property
@property(retain) id chartType;	// G=0x37a277fd; S=0x37a1c035; converted property
@property(retain) id dataValuePropertiesCollection;	// G=0x37a1b1a9; S=0x37a99c45; converted property
@property(assign, getter=isDateTimeFormattingFlag) bool dateTimeFormattingFlag;	// G=0x37a20abd; S=0x37a20aad; converted property
@property(retain) id defaultDataLabel;	// G=0x37a1bc9d; S=0x37a269b1; converted property
@property(retain) id errorBarXAxis;	// G=0x37a27ad5; S=0x37a27ae5; converted property
@property(retain) id errorBarYAxis;	// G=0x37a24ec9; S=0x37a27b29; converted property
@property(retain) id graphicProperties;	// G=0x37a1bed5; S=0x37a1bc59; converted property
@property(retain) id lastCachedName;	// G=0x37a24eb5; S=0x37a1af9d; converted property
@property(retain) id name;	// G=0x37a1c1ad; S=0x37a1adc9; converted property
@property(assign) int order;	// G=0x37a99c0d; S=0x37a1a1f1; converted property
@property(assign) int styleIndex;	// G=0x37a1bee5; S=0x37a1bbed; converted property
@property(retain) id trendlineCollection;	// G=0x37a27a81; S=0x37a27a91; converted property
@property(retain) id valueData;	// G=0x37a1c245; S=0x37a1b025; converted property
+ (id)seriesWithChart:(id)chart;	// 0x37a279a9
- (id)initWithChart:(id)chart;	// 0x37a1a115
- (unsigned)categoryCount;	// 0x37a99c1d
// converted property getter: - (id)categoryData;	// 0x37a1c2a5
- (id)chart;	// 0x37a77e25
// converted property getter: - (id)chartType;	// 0x37a277fd
- (void)clearBackPointers;	// 0x37a28d65
// converted property getter: - (id)dataValuePropertiesCollection;	// 0x37a1b1a9
- (void)dealloc;	// 0x37a28e69
// converted property getter: - (id)defaultDataLabel;	// 0x37a1bc9d
- (id)defaultSeriesNameForIndex:(int)index;	// 0x37a26ded
// converted property getter: - (id)errorBarXAxis;	// 0x37a27ad5
// converted property getter: - (id)errorBarYAxis;	// 0x37a24ec9
// converted property getter: - (id)graphicProperties;	// 0x37a1bed5
- (bool)hasErrorBars;	// 0x37a99cbd
- (bool)hasTrendlines;	// 0x37a99c89
// converted property getter: - (bool)isDateTimeFormattingFlag;	// 0x37a20abd
- (bool)isEmpty;	// 0x37a1cae5
- (bool)isHidden;	// 0x37a1c021
- (int)key;	// 0x37a1c19d
// converted property getter: - (id)lastCachedName;	// 0x37a24eb5
// converted property getter: - (id)name;	// 0x37a1c1ad
// converted property getter: - (int)order;	// 0x37a99c0d
// converted property setter: - (void)setCategoryData:(id)data;	// 0x37a1b111
// converted property setter: - (void)setChartType:(id)type;	// 0x37a1c035
// converted property setter: - (void)setDataValuePropertiesCollection:(id)collection;	// 0x37a99c45
// converted property setter: - (void)setDateTimeFormattingFlag:(bool)flag;	// 0x37a20aad
// converted property setter: - (void)setDefaultDataLabel:(id)label;	// 0x37a269b1
- (void)setErrorBar:(id)bar;	// 0x37a780f5
// converted property setter: - (void)setErrorBarXAxis:(id)axis;	// 0x37a27ae5
// converted property setter: - (void)setErrorBarYAxis:(id)axis;	// 0x37a27b29
// converted property setter: - (void)setGraphicProperties:(id)properties;	// 0x37a1bc59
- (void)setHiddenFlag:(bool)flag;	// 0x37a6c149
// converted property setter: - (void)setLastCachedName:(id)name;	// 0x37a1af9d
// converted property setter: - (void)setName:(id)name;	// 0x37a1adc9
// converted property setter: - (void)setOrder:(int)order;	// 0x37a1a1f1
// converted property setter: - (void)setStyleIndex:(int)index;	// 0x37a1bbed
// converted property setter: - (void)setTrendlineCollection:(id)collection;	// 0x37a27a91
// converted property setter: - (void)setValueData:(id)data;	// 0x37a1b025
- (id)shallowCopy;	// 0x37a278c1
// converted property getter: - (int)styleIndex;	// 0x37a1bee5
// converted property getter: - (id)trendlineCollection;	// 0x37a27a81
// converted property getter: - (id)valueData;	// 0x37a1c245
@end
