/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class NSString;

@interface ODDPointPropertySet : NSObject {
	NSString *mLayoutTypeId;	// 4 = 0x4
	NSString *mPresentationName;	// 8 = 0x8
	NSString *mPresentationStyleLabel;	// 12 = 0xc
	int mPresentationStyleIndex;	// 16 = 0x10
	int mPresentationStyleCount;	// 20 = 0x14
	NSObject *mPresentationAssociatedId;	// 24 = 0x18
	BOOL mCustomVerticalFlip;	// 28 = 0x1c
	double mCustomScaleX;	// 32 = 0x20
	double mCustomScaleY;	// 40 = 0x28
	double mCustomOffsetX;	// 48 = 0x30
	double mCustomOffsetY;	// 56 = 0x38
}
@property(assign) double customOffsetX;	// G=0x34fbcd69; S=0x3509dd61; converted property
@property(assign) double customOffsetY;	// G=0x34fbcd81; S=0x3509dd75; converted property
@property(assign) double customScaleX;	// G=0x34fbcd39; S=0x3509dd39; converted property
@property(assign) double customScaleY;	// G=0x34fbcd51; S=0x3509dd4d; converted property
@property(assign) BOOL customVerticalFlip;	// G=0x3509dd19; S=0x3509dd29; converted property
@property(retain) id layoutTypeId;	// G=0x34fb9c21; S=0x34fb8741; converted property
@property(retain) id presentationAssociatedId;	// G=0x34fb9761; S=0x34fb89ad; converted property
@property(retain) id presentationName;	// G=0x34fbd655; S=0x34fb877d; converted property
@property(assign) int presentationStyleCount;	// G=0x3509dd09; S=0x34fb8b01; converted property
@property(assign) int presentationStyleIndex;	// G=0x34fbd6c5; S=0x34fb8b11; converted property
@property(retain) id presentationStyleLabel;	// G=0x34fbd665; S=0x34fb87b9; converted property
// converted property getter: - (double)customOffsetX;	// 0x34fbcd69
// converted property getter: - (double)customOffsetY;	// 0x34fbcd81
// converted property getter: - (double)customScaleX;	// 0x34fbcd39
// converted property getter: - (double)customScaleY;	// 0x34fbcd51
// converted property getter: - (BOOL)customVerticalFlip;	// 0x3509dd19
- (void)dealloc;	// 0x34fbf731
// converted property getter: - (id)layoutTypeId;	// 0x34fb9c21
// converted property getter: - (id)presentationAssociatedId;	// 0x34fb9761
// converted property getter: - (id)presentationName;	// 0x34fbd655
// converted property getter: - (int)presentationStyleCount;	// 0x3509dd09
// converted property getter: - (int)presentationStyleIndex;	// 0x34fbd6c5
// converted property getter: - (id)presentationStyleLabel;	// 0x34fbd665
// converted property setter: - (void)setCustomOffsetX:(double)x;	// 0x3509dd61
// converted property setter: - (void)setCustomOffsetY:(double)y;	// 0x3509dd75
// converted property setter: - (void)setCustomScaleX:(double)x;	// 0x3509dd39
// converted property setter: - (void)setCustomScaleY:(double)y;	// 0x3509dd4d
// converted property setter: - (void)setCustomVerticalFlip:(BOOL)flip;	// 0x3509dd29
// converted property setter: - (void)setLayoutTypeId:(id)anId;	// 0x34fb8741
// converted property setter: - (void)setPresentationAssociatedId:(id)anId;	// 0x34fb89ad
// converted property setter: - (void)setPresentationName:(id)name;	// 0x34fb877d
// converted property setter: - (void)setPresentationStyleCount:(int)count;	// 0x34fb8b01
// converted property setter: - (void)setPresentationStyleIndex:(int)index;	// 0x34fb8b11
// converted property setter: - (void)setPresentationStyleLabel:(id)label;	// 0x34fb87b9
@end
