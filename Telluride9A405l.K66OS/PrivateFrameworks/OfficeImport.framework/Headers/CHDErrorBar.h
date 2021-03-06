/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class CHDData, OADGraphicProperties, CHDChart;

__attribute__((visibility("hidden")))
@interface CHDErrorBar : NSObject {
@private
	CHDChart *mChart;	// 4 = 0x4
	double mValue;	// 8 = 0x8
	int mType;	// 16 = 0x10
	int mValueType;	// 20 = 0x14
	int mDirection;	// 24 = 0x18
	bool mNoEndCap;	// 28 = 0x1c
	CHDData *mMinusValues;	// 32 = 0x20
	CHDData *mPlusValues;	// 36 = 0x24
	OADGraphicProperties *mGraphicProperties;	// 40 = 0x28
}
@property(assign) int direction;	// G=0x30d51741; S=0x30d5142d; converted property
@property(retain) id graphicProperties;	// G=0x30e4771d; S=0x30d515c1; converted property
@property(retain) id minusValues;	// G=0x30d51799; S=0x30d517b9; converted property
@property(assign, getter=isNoEndCap) bool noEndCap;	// G=0x30e4770d; S=0x30d5144d; converted property
@property(retain) id plusValues;	// G=0x30d517a9; S=0x30d5147d; converted property
@property(assign) int type;	// G=0x30d5146d; S=0x30d5141d; converted property
@property(assign) double value;	// G=0x30d5bd39; S=0x30e476f9; converted property
@property(assign) int valueType;	// G=0x30d5145d; S=0x30d5143d; converted property
+ (id)errorBarWithChart:(id)chart;	// 0x30d51329
- (id)initWithChart:(id)chart;	// 0x30d51375
- (void)dealloc;	// 0x30d5cdc1
// converted property getter: - (int)direction;	// 0x30d51741
// converted property getter: - (id)graphicProperties;	// 0x30e4771d
// converted property getter: - (bool)isNoEndCap;	// 0x30e4770d
// converted property getter: - (id)minusValues;	// 0x30d51799
// converted property getter: - (id)plusValues;	// 0x30d517a9
// converted property setter: - (void)setDirection:(int)direction;	// 0x30d5142d
// converted property setter: - (void)setGraphicProperties:(id)properties;	// 0x30d515c1
// converted property setter: - (void)setMinusValues:(id)values;	// 0x30d517b9
// converted property setter: - (void)setNoEndCap:(bool)cap;	// 0x30d5144d
// converted property setter: - (void)setPlusValues:(id)values;	// 0x30d5147d
// converted property setter: - (void)setType:(int)type;	// 0x30d5141d
// converted property setter: - (void)setValue:(double)value;	// 0x30e476f9
// converted property setter: - (void)setValueType:(int)type;	// 0x30d5143d
// converted property getter: - (int)type;	// 0x30d5146d
// converted property getter: - (double)value;	// 0x30d5bd39
// converted property getter: - (int)valueType;	// 0x30d5145d
@end

