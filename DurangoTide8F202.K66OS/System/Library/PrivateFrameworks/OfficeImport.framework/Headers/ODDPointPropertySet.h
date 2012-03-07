/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class NSString;

__attribute__((visibility("hidden")))
@interface ODDPointPropertySet : NSObject {
@private
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
@property(assign) double customOffsetX;	// G=0x31a6d2b9; S=0x31a6a285; converted property
@property(assign) double customOffsetY;	// G=0x31a6d2c9; S=0x31a6a271; converted property
@property(assign) double customScaleX;	// G=0x31a6d299; S=0x31a6a249; converted property
@property(assign) double customScaleY;	// G=0x31a6d2a9; S=0x31a6a25d; converted property
@property(assign) BOOL customVerticalFlip;	// G=0x31abfe55; S=0x31abfe65; converted property
@property(retain) id layoutTypeId;	// G=0x31a6b441; S=0x31a69fcd; converted property
@property(retain) id presentationAssociatedId;	// G=0x31a6aeb9; S=0x31a6a211; converted property
@property(retain) id presentationName;	// G=0x31a6daa1; S=0x31a6a005; converted property
@property(assign) int presentationStyleCount;	// G=0x31abfe45; S=0x31a6a3a1; converted property
@property(assign) int presentationStyleIndex;	// G=0x31a6db11; S=0x31a6a3b1; converted property
@property(retain) id presentationStyleLabel;	// G=0x31a6dab1; S=0x31a6a03d; converted property
// converted property getter: - (double)customOffsetX;	// 0x31a6d2b9
// converted property getter: - (double)customOffsetY;	// 0x31a6d2c9
// converted property getter: - (double)customScaleX;	// 0x31a6d299
// converted property getter: - (double)customScaleY;	// 0x31a6d2a9
// converted property getter: - (BOOL)customVerticalFlip;	// 0x31abfe55
- (void)dealloc;	// 0x31a6ebcd
// converted property getter: - (id)layoutTypeId;	// 0x31a6b441
// converted property getter: - (id)presentationAssociatedId;	// 0x31a6aeb9
// converted property getter: - (id)presentationName;	// 0x31a6daa1
// converted property getter: - (int)presentationStyleCount;	// 0x31abfe45
// converted property getter: - (int)presentationStyleIndex;	// 0x31a6db11
// converted property getter: - (id)presentationStyleLabel;	// 0x31a6dab1
// converted property setter: - (void)setCustomOffsetX:(double)x;	// 0x31a6a285
// converted property setter: - (void)setCustomOffsetY:(double)y;	// 0x31a6a271
// converted property setter: - (void)setCustomScaleX:(double)x;	// 0x31a6a249
// converted property setter: - (void)setCustomScaleY:(double)y;	// 0x31a6a25d
// converted property setter: - (void)setCustomVerticalFlip:(BOOL)flip;	// 0x31abfe65
// converted property setter: - (void)setLayoutTypeId:(id)anId;	// 0x31a69fcd
// converted property setter: - (void)setPresentationAssociatedId:(id)anId;	// 0x31a6a211
// converted property setter: - (void)setPresentationName:(id)name;	// 0x31a6a005
// converted property setter: - (void)setPresentationStyleCount:(int)count;	// 0x31a6a3a1
// converted property setter: - (void)setPresentationStyleIndex:(int)index;	// 0x31a6a3b1
// converted property setter: - (void)setPresentationStyleLabel:(id)label;	// 0x31a6a03d
@end
