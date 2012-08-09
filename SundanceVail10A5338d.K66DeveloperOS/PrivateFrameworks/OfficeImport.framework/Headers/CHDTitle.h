/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class EDString, OADGraphicProperties, CHDChart, CHDFormula;

@interface CHDTitle : NSObject {
	CHDChart *mChart;	// 4 = 0x4
	bool mIsAutoGenerated;	// 8 = 0x8
	bool mPositionAutoGenerated;	// 9 = 0x9
	bool mSizeAutoGenerated;	// 10 = 0xa
	CHDFormula *mName;	// 12 = 0xc
	EDString *mLastCachedName;	// 16 = 0x10
	OADGraphicProperties *mGraphicProperties;	// 20 = 0x14
	double mRotation;	// 24 = 0x18
}
@property(retain) id graphicProperties;	// G=0x33ad1d85; S=0x33ac716d; converted property
@property(assign) bool isAutoGenerated;	// G=0x33b1766d; S=0x33ac7061; converted property
@property(assign) bool isPositionAutoGenerated;	// G=0x33b493a5; S=0x33ac71b1; converted property
@property(assign) bool isSizeAutoGenerated;	// G=0x33b493b9; S=0x33b1765d; converted property
@property(retain) id lastCachedName;	// G=0x33ad1d65; S=0x33ac7129; converted property
@property(retain) id name;	// G=0x33b49395; S=0x33ac6fc5; converted property
@property(assign) double titleRotationAngle;	// G=0x33b494dd; S=0x33ac71c1; converted property
- (id)initWithChart:(id)chart;	// 0x33ac6ea9
- (void)dealloc;	// 0x33ad8c55
// converted property getter: - (id)graphicProperties;	// 0x33ad1d85
// converted property getter: - (bool)isAutoGenerated;	// 0x33b1766d
- (bool)isCachedTitleEmpty;	// 0x33acc71d
// converted property getter: - (bool)isPositionAutoGenerated;	// 0x33b493a5
// converted property getter: - (bool)isSizeAutoGenerated;	// 0x33b493b9
- (bool)isTitleVisible;	// 0x33b493cd
// converted property getter: - (id)lastCachedName;	// 0x33ad1d65
// converted property getter: - (id)name;	// 0x33b49395
// converted property setter: - (void)setGraphicProperties:(id)properties;	// 0x33ac716d
// converted property setter: - (void)setIsAutoGenerated:(bool)generated;	// 0x33ac7061
// converted property setter: - (void)setIsPositionAutoGenerated:(bool)generated;	// 0x33ac71b1
// converted property setter: - (void)setIsSizeAutoGenerated:(bool)generated;	// 0x33b1765d
// converted property setter: - (void)setLastCachedName:(id)name;	// 0x33ac7129
// converted property setter: - (void)setName:(id)name;	// 0x33ac6fc5
// converted property setter: - (void)setTitleRotationAngle:(double)angle;	// 0x33ac71c1
// converted property getter: - (double)titleRotationAngle;	// 0x33b494dd
@end
