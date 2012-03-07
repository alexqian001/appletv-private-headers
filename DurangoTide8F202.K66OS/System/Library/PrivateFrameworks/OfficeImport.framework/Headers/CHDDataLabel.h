/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class EDResources, OADGraphicProperties;

__attribute__((visibility("hidden")))
@interface CHDDataLabel : NSObject {
@private
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
@property(retain) id contentFormat;	// G=0x31aeb279; S=0x31aeb1ed; converted property
@property(assign) unsigned contentFormatId;	// G=0x31aeb1dd; S=0x31a9ae21; converted property
@property(retain) id graphicProperties;	// G=0x31aeb17d; S=0x31a252cd; converted property
@property(assign) bool isPositionAffineTransform;	// G=0x31aeb19d; S=0x31aeb18d; converted property
@property(assign) int position;	// G=0x31aeb11d; S=0x31a70e41; converted property
@property(assign) double rotationAngle;	// G=0x31aeb1ad; S=0x31a70ee5; converted property
@property(assign, getter=isShowCategoryName) bool showCategoryName;	// G=0x31aeb13d; S=0x31a2529d; converted property
@property(assign, getter=isShowLeaderLines) bool showLeaderLines;	// G=0x31aeb12d; S=0x31a2528d; converted property
@property(assign, getter=isShowLegendKey) bool showLegendKey;	// G=0x31aeb16d; S=0x31a70ddd; converted property
@property(assign, getter=isShowPercent) bool showPercent;	// G=0x31aeb15d; S=0x31a252ad; converted property
@property(assign, getter=isShowSeriesName) bool showSeriesName;	// G=0x31aeb14d; S=0x31a70ded; converted property
@property(assign, getter=isShowValue) bool showValue;	// G=0x31a72869; S=0x31a252bd; converted property
@property(retain) id string;	// G=0x31aeb2b5; S=0x31a70e51; converted property
@property(assign) unsigned stringIndex;	// G=0x31aeb1bd; S=0x31aeb1cd; converted property
+ (id)dataLabelWithResources:(id)resources;	// 0x31a25165
- (id)initWithResources:(id)resources;	// 0x31a251a9
// converted property getter: - (id)contentFormat;	// 0x31aeb279
// converted property getter: - (unsigned)contentFormatId;	// 0x31aeb1dd
- (void)dealloc;	// 0x31a27099
// converted property getter: - (id)graphicProperties;	// 0x31aeb17d
// converted property getter: - (bool)isPositionAffineTransform;	// 0x31aeb19d
// converted property getter: - (bool)isShowCategoryName;	// 0x31aeb13d
// converted property getter: - (bool)isShowLeaderLines;	// 0x31aeb12d
// converted property getter: - (bool)isShowLegendKey;	// 0x31aeb16d
// converted property getter: - (bool)isShowPercent;	// 0x31aeb15d
// converted property getter: - (bool)isShowSeriesName;	// 0x31aeb14d
// converted property getter: - (bool)isShowValue;	// 0x31a72869
// converted property getter: - (int)position;	// 0x31aeb11d
// converted property getter: - (double)rotationAngle;	// 0x31aeb1ad
// converted property setter: - (void)setContentFormat:(id)format;	// 0x31aeb1ed
// converted property setter: - (void)setContentFormatId:(unsigned)anId;	// 0x31a9ae21
// converted property setter: - (void)setGraphicProperties:(id)properties;	// 0x31a252cd
// converted property setter: - (void)setIsPositionAffineTransform:(bool)transform;	// 0x31aeb18d
// converted property setter: - (void)setPosition:(int)position;	// 0x31a70e41
// converted property setter: - (void)setRotationAngle:(double)angle;	// 0x31a70ee5
// converted property setter: - (void)setShowCategoryName:(bool)name;	// 0x31a2529d
// converted property setter: - (void)setShowLeaderLines:(bool)lines;	// 0x31a2528d
// converted property setter: - (void)setShowLegendKey:(bool)key;	// 0x31a70ddd
// converted property setter: - (void)setShowPercent:(bool)percent;	// 0x31a252ad
// converted property setter: - (void)setShowSeriesName:(bool)name;	// 0x31a70ded
// converted property setter: - (void)setShowValue:(bool)value;	// 0x31a252bd
// converted property setter: - (void)setString:(id)string;	// 0x31a70e51
// converted property setter: - (void)setStringIndex:(unsigned)index;	// 0x31aeb1cd
// converted property getter: - (id)string;	// 0x31aeb2b5
// converted property getter: - (unsigned)stringIndex;	// 0x31aeb1bd
@end
