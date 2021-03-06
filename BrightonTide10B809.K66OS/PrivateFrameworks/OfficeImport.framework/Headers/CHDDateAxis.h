/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "CHDAxis.h"


@interface CHDDateAxis : CHDAxis {
	bool mAutomatic;	// 128 = 0x80
	double mMajorUnitValue;	// 132 = 0x84
	double mMinorUnitValue;	// 140 = 0x8c
	int mMinorTimeUnit;	// 148 = 0x94
	int mMajorTimeUnit;	// 152 = 0x98
	int mBaseTimeUnit;	// 156 = 0x9c
}
@property(assign, getter=isAutomatic) bool automatic;	// G=0x349f5cad; S=0x349a2285; converted property
@property(assign) int baseTimeUnit;	// G=0x349f5d11; S=0x349a235d; converted property
@property(assign) int majorTimeUnit;	// G=0x349f5cf1; S=0x349a233d; converted property
@property(assign) double majorUnitValue;	// G=0x349f5cc1; S=0x349ce6f5; converted property
@property(assign) int minorTimeUnit;	// G=0x349f5d01; S=0x349a234d; converted property
@property(assign) double minorUnitValue;	// G=0x349f5cd9; S=0x349ce709; converted property
- (id)initWithResources:(id)resources;	// 0x349a21dd
// converted property getter: - (int)baseTimeUnit;	// 0x349f5d11
// converted property getter: - (bool)isAutomatic;	// 0x349f5cad
- (bool)isDate;	// 0x349f5ca9
// converted property getter: - (int)majorTimeUnit;	// 0x349f5cf1
// converted property getter: - (double)majorUnitValue;	// 0x349f5cc1
// converted property getter: - (int)minorTimeUnit;	// 0x349f5d01
// converted property getter: - (double)minorUnitValue;	// 0x349f5cd9
// converted property setter: - (void)setAutomatic:(bool)automatic;	// 0x349a2285
// converted property setter: - (void)setBaseTimeUnit:(int)unit;	// 0x349a235d
// converted property setter: - (void)setMajorTimeUnit:(int)unit;	// 0x349a233d
// converted property setter: - (void)setMajorUnitValue:(double)value;	// 0x349ce6f5
// converted property setter: - (void)setMinorTimeUnit:(int)unit;	// 0x349a234d
// converted property setter: - (void)setMinorUnitValue:(double)value;	// 0x349ce709
@end

