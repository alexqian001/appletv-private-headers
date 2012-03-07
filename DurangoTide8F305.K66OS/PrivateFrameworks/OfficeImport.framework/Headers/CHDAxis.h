/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "EDKeyedObject.h"

@class OADGraphicProperties, CHDTitle, EDResources;

__attribute__((visibility("hidden")))
@interface CHDAxis : NSObject <EDKeyedObject> {
@private
	bool mReverseOrder;	// 4 = 0x4
	bool mSecondary;	// 5 = 0x5
	bool mDateTimeFormattingFlag;	// 6 = 0x6
	bool mLineVisible;	// 7 = 0x7
	bool mDeleted;	// 8 = 0x8
	bool mAutoMinimumValue;	// 9 = 0x9
	bool mAutoMaximumValue;	// 10 = 0xa
	bool mAutoCrossValue;	// 11 = 0xb
	bool mContentFormatDerived;	// 12 = 0xc
	int mAxisId;	// 16 = 0x10
	unsigned mContentFormatId;	// 20 = 0x14
	int mFontIndex;	// 24 = 0x18
	double mScalingMaximum;	// 28 = 0x1c
	double mScalingMinimum;	// 36 = 0x24
	int mOrientation;	// 44 = 0x2c
	double mCrossAxisId;	// 48 = 0x30
	double mCrossesAt;	// 56 = 0x38
	int mMajorTickMark;	// 64 = 0x40
	int mMinorTickMark;	// 68 = 0x44
	int mAxisPosition;	// 72 = 0x48
	int mAxisType;	// 76 = 0x4c
	int mTickLabelPosition;	// 80 = 0x50
	CHDTitle *mTitle;	// 84 = 0x54
	OADGraphicProperties *mMinorGridLinesGraphicProperties;	// 88 = 0x58
	OADGraphicProperties *mMajorGridLinesGraphicProperties;	// 92 = 0x5c
	OADGraphicProperties *mAxisGraphicProperties;	// 96 = 0x60
	int mCrossBetween;	// 100 = 0x64
	int mCrosses;	// 104 = 0x68
	double mTickLabelRotation;	// 108 = 0x6c
	bool mIsAutoRotation;	// 116 = 0x74
	int mTickLabelColorIndex;	// 120 = 0x78
	EDResources *mResources;	// 124 = 0x7c
}
@property(retain) id axisGraphicProperties;	// G=0x345c24e1; S=0x344e91a1; converted property
@property(assign) int axisId;	// G=0x345c23a9; S=0x344e8f95; converted property
@property(assign) int axisPosition;	// G=0x344f2d15; S=0x344e8fd9; converted property
@property(assign) int axisType;	// G=0x345c248d; S=0x344e8fa5; converted property
@property(retain) id contentFormat;	// G=0x344f13cd; S=0x344f14fd; converted property
@property(assign) unsigned contentFormatId;	// G=0x345c2559; S=0x3452f651; converted property
@property(assign) double crossAxisId;	// G=0x345c2439; S=0x345c2449; converted property
@property(assign) int crossBetween;	// G=0x345c24f1; S=0x344e8f15; converted property
@property(assign) int crosses;	// G=0x345c2501; S=0x3455bbf1; converted property
@property(assign) double crossesAt;	// G=0x345c245d; S=0x344e8eed; converted property
@property(assign, getter=isDateTimeFormattingFlag) bool dateTimeFormattingFlag;	// G=0x345c2515; S=0x345c2525; converted property
@property(assign, getter=isDeleted) bool deleted;	// G=0x345c23c9; S=0x344fe621; converted property
@property(retain) id font;	// G=0x344f3c59; S=0x3456b195; converted property
@property(assign) int fontIndex;	// G=0x345c2569; S=0x344fea51; converted property
@property(assign) bool isContentFormatDerivedFromDataPoints;	// G=0x345c2409; S=0x344f1589; converted property
@property(assign, getter=isLineVisible) bool lineVisible;	// G=0x345c23b9; S=0x344fe611; converted property
@property(retain) id majorGridLinesGraphicProperties;	// G=0x344f5811; S=0x344e9309; converted property
@property(assign) int majorTickMark;	// G=0x345c246d; S=0x344e91dd; converted property
@property(retain) id minorGridLinesGraphicProperties;	// G=0x345c24d1; S=0x344e928d; converted property
@property(assign) int minorTickMark;	// G=0x345c247d; S=0x344e91ed; converted property
@property(assign) int orientation;	// G=0x345c2419; S=0x345c2429; converted property
@property(assign, getter=isReverseOrder) bool reverseOrder;	// G=0x344ef479; S=0x344e8edd; converted property
@property(assign) double scalingMaximum;	// G=0x344f5831; S=0x344e9c7d; converted property
@property(assign) double scalingMinimum;	// G=0x344f5821; S=0x344fbf69; converted property
@property(assign, getter=isSecondary) bool secondary;	// G=0x344f2d25; S=0x34565421; converted property
@property(assign, getter=isTickLabelAutoRotation) bool tickLabelAutoRotation;	// G=0x345c2545; S=0x344e9219; converted property
@property(assign) int tickLabelColorIndex;	// G=0x345c2579; S=0x344e923d; converted property
@property(assign) int tickLabelPosition;	// G=0x345c249d; S=0x344e91fd; converted property
@property(assign) double tickLabelRotationAngle;	// G=0x345c2535; S=0x344e9229; converted property
@property(retain) id title;	// G=0x345c24c1; S=0x344ea1a9; converted property
- (id)initWithResources:(id)resources;	// 0x344e8d09
- (void)adjustAxisPositionForHorizontalChart;	// 0x345c2555
// converted property getter: - (id)axisGraphicProperties;	// 0x345c24e1
// converted property getter: - (int)axisId;	// 0x345c23a9
// converted property getter: - (int)axisPosition;	// 0x344f2d15
// converted property getter: - (int)axisType;	// 0x345c248d
// converted property getter: - (id)contentFormat;	// 0x344f13cd
// converted property getter: - (unsigned)contentFormatId;	// 0x345c2559
// converted property getter: - (double)crossAxisId;	// 0x345c2439
// converted property getter: - (int)crossBetween;	// 0x345c24f1
// converted property getter: - (int)crosses;	// 0x345c2501
// converted property getter: - (double)crossesAt;	// 0x345c245d
- (void)dealloc;	// 0x344fee55
- (id)defaultDateTimeContentFormat;	// 0x345c2589
// converted property getter: - (id)font;	// 0x344f3c59
// converted property getter: - (int)fontIndex;	// 0x345c2569
- (bool)isAutoCrossValue;	// 0x345c23f9
- (bool)isAutoMaximumValue;	// 0x345c23e9
- (bool)isAutoMinimumValue;	// 0x345c23d9
// converted property getter: - (bool)isContentFormatDerivedFromDataPoints;	// 0x345c2409
- (bool)isDate;	// 0x345c2511
// converted property getter: - (bool)isDateTimeFormattingFlag;	// 0x345c2515
// converted property getter: - (bool)isDeleted;	// 0x345c23c9
- (bool)isHorizontalPosition;	// 0x3455be6d
// converted property getter: - (bool)isLineVisible;	// 0x345c23b9
// converted property getter: - (bool)isReverseOrder;	// 0x344ef479
// converted property getter: - (bool)isSecondary;	// 0x344f2d25
// converted property getter: - (bool)isTickLabelAutoRotation;	// 0x345c2545
- (bool)isTickLabelVisible;	// 0x345c24ad
- (unsigned)key;	// 0x344e9711
// converted property getter: - (id)majorGridLinesGraphicProperties;	// 0x344f5811
// converted property getter: - (int)majorTickMark;	// 0x345c246d
// converted property getter: - (id)minorGridLinesGraphicProperties;	// 0x345c24d1
// converted property getter: - (int)minorTickMark;	// 0x345c247d
// converted property getter: - (int)orientation;	// 0x345c2419
// converted property getter: - (double)scalingMaximum;	// 0x344f5831
// converted property getter: - (double)scalingMinimum;	// 0x344f5821
// converted property setter: - (void)setAxisGraphicProperties:(id)properties;	// 0x344e91a1
// converted property setter: - (void)setAxisId:(int)anId;	// 0x344e8f95
// converted property setter: - (void)setAxisPosition:(int)position;	// 0x344e8fd9
// converted property setter: - (void)setAxisType:(int)type;	// 0x344e8fa5
// converted property setter: - (void)setContentFormat:(id)format;	// 0x344f14fd
// converted property setter: - (void)setContentFormatId:(unsigned)anId;	// 0x3452f651
// converted property setter: - (void)setCrossAxisId:(double)anId;	// 0x345c2449
// converted property setter: - (void)setCrossBetween:(int)between;	// 0x344e8f15
// converted property setter: - (void)setCrosses:(int)crosses;	// 0x3455bbf1
// converted property setter: - (void)setCrossesAt:(double)at;	// 0x344e8eed
// converted property setter: - (void)setDateTimeFormattingFlag:(bool)flag;	// 0x345c2525
// converted property setter: - (void)setDeleted:(bool)deleted;	// 0x344fe621
// converted property setter: - (void)setFont:(id)font;	// 0x3456b195
// converted property setter: - (void)setFontIndex:(int)index;	// 0x344fea51
// converted property setter: - (void)setIsContentFormatDerivedFromDataPoints:(bool)dataPoints;	// 0x344f1589
// converted property setter: - (void)setLineVisible:(bool)visible;	// 0x344fe611
// converted property setter: - (void)setMajorGridLinesGraphicProperties:(id)properties;	// 0x344e9309
// converted property setter: - (void)setMajorTickMark:(int)mark;	// 0x344e91dd
// converted property setter: - (void)setMinorGridLinesGraphicProperties:(id)properties;	// 0x344e928d
// converted property setter: - (void)setMinorTickMark:(int)mark;	// 0x344e91ed
// converted property setter: - (void)setOrientation:(int)orientation;	// 0x345c2429
// converted property setter: - (void)setReverseOrder:(bool)order;	// 0x344e8edd
// converted property setter: - (void)setScalingMaximum:(double)maximum;	// 0x344e9c7d
// converted property setter: - (void)setScalingMinimum:(double)minimum;	// 0x344fbf69
// converted property setter: - (void)setSecondary:(bool)secondary;	// 0x34565421
// converted property setter: - (void)setTickLabelAutoRotation:(bool)rotation;	// 0x344e9219
// converted property setter: - (void)setTickLabelColorIndex:(int)index;	// 0x344e923d
// converted property setter: - (void)setTickLabelPosition:(int)position;	// 0x344e91fd
// converted property setter: - (void)setTickLabelRotationAngle:(double)angle;	// 0x344e9229
// converted property setter: - (void)setTitle:(id)title;	// 0x344ea1a9
// converted property getter: - (int)tickLabelColorIndex;	// 0x345c2579
// converted property getter: - (int)tickLabelPosition;	// 0x345c249d
// converted property getter: - (double)tickLabelRotationAngle;	// 0x345c2535
// converted property getter: - (id)title;	// 0x345c24c1
@end
