/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class OADGraphicProperties, EDResources;

@interface CHDDataLabel : NSObject {
	EDResources *mResources;	// 4 = 0x4
	unsigned mStringIndex;	// 8 = 0x8
	unsigned mContentFormatId;	// 12 = 0xc
	int mPosition;	// 16 = 0x10
	bool mShowLeaderLines;	// 20 = 0x14
	bool mShowCategoryName;	// 21 = 0x15
	bool mShowSeriesName;	// 22 = 0x16
	bool mShowPercent;	// 23 = 0x17
	bool mShowValue;	// 24 = 0x18
	bool mShowLegendKey;	// 25 = 0x19
	bool mIsPositionAffineTransform;	// 26 = 0x1a
	double mRotation;	// 28 = 0x1c
	OADGraphicProperties *mGraphicProperties;	// 36 = 0x24
}
@property(retain) id contentFormat;	// G=0x37a989ad; S=0x37a989f5; converted property
@property(assign) unsigned contentFormatId;	// G=0x37a98b61; S=0x37a98b71; converted property
@property(retain) id graphicProperties;	// G=0x37a98af5; S=0x37a268b5; converted property
@property(assign) bool isPositionAffineTransform;	// G=0x37a98b15; S=0x37a98b05; converted property
@property(assign) int position;	// G=0x37a98a81; S=0x37a268a5; converted property
@property(assign) double rotationAngle;	// G=0x37a98b29; S=0x37a2699d; converted property
@property(assign, getter=isShowCategoryName) bool showCategoryName;	// G=0x37a98aa5; S=0x37a26849; converted property
@property(assign, getter=isShowLeaderLines) bool showLeaderLines;	// G=0x37a98a91; S=0x37a26839; converted property
@property(assign, getter=isShowLegendKey) bool showLegendKey;	// G=0x37a98ae1; S=0x37a26879; converted property
@property(assign, getter=isShowPercent) bool showPercent;	// G=0x37a98acd; S=0x37a26859; converted property
@property(assign, getter=isShowSeriesName) bool showSeriesName;	// G=0x37a98ab9; S=0x37a26889; converted property
@property(assign, getter=isShowValue) bool showValue;	// G=0x37a29041; S=0x37a26869; converted property
@property(retain) id string;	// G=0x37a98965; S=0x37a268f9; converted property
@property(assign) unsigned stringIndex;	// G=0x37a98b41; S=0x37a98b51; converted property
+ (id)dataLabelWithResources:(id)resources;	// 0x37a266f1
- (id)initWithResources:(id)resources;	// 0x37a2673d
// converted property getter: - (id)contentFormat;	// 0x37a989ad
// converted property getter: - (unsigned)contentFormatId;	// 0x37a98b61
- (void)dealloc;	// 0x37a29711
// converted property getter: - (id)graphicProperties;	// 0x37a98af5
// converted property getter: - (bool)isPositionAffineTransform;	// 0x37a98b15
// converted property getter: - (bool)isShowCategoryName;	// 0x37a98aa5
// converted property getter: - (bool)isShowLeaderLines;	// 0x37a98a91
// converted property getter: - (bool)isShowLegendKey;	// 0x37a98ae1
// converted property getter: - (bool)isShowPercent;	// 0x37a98acd
// converted property getter: - (bool)isShowSeriesName;	// 0x37a98ab9
// converted property getter: - (bool)isShowValue;	// 0x37a29041
// converted property getter: - (int)position;	// 0x37a98a81
// converted property getter: - (double)rotationAngle;	// 0x37a98b29
// converted property setter: - (void)setContentFormat:(id)format;	// 0x37a989f5
// converted property setter: - (void)setContentFormatId:(unsigned)anId;	// 0x37a98b71
// converted property setter: - (void)setGraphicProperties:(id)properties;	// 0x37a268b5
// converted property setter: - (void)setIsPositionAffineTransform:(bool)transform;	// 0x37a98b05
// converted property setter: - (void)setPosition:(int)position;	// 0x37a268a5
// converted property setter: - (void)setRotationAngle:(double)angle;	// 0x37a2699d
// converted property setter: - (void)setShowCategoryName:(bool)name;	// 0x37a26849
// converted property setter: - (void)setShowLeaderLines:(bool)lines;	// 0x37a26839
// converted property setter: - (void)setShowLegendKey:(bool)key;	// 0x37a26879
// converted property setter: - (void)setShowPercent:(bool)percent;	// 0x37a26859
// converted property setter: - (void)setShowSeriesName:(bool)name;	// 0x37a26889
// converted property setter: - (void)setShowValue:(bool)value;	// 0x37a26869
// converted property setter: - (void)setString:(id)string;	// 0x37a268f9
// converted property setter: - (void)setStringIndex:(unsigned)index;	// 0x37a98b51
// converted property getter: - (id)string;	// 0x37a98965
// converted property getter: - (unsigned)stringIndex;	// 0x37a98b41
@end
