/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


@interface WDAAnchor : NSObject {
	CGRect mBounds;	// 4 = 0x4
	int mTextWrappingMode;	// 20 = 0x14
	int mTextWrappingModeType;	// 24 = 0x18
	double mWrapDistanceLeft;	// 28 = 0x1c
	double mWrapDistanceTop;	// 36 = 0x24
	double mWrapDistanceRight;	// 44 = 0x2c
	double mWrapDistanceBottom;	// 52 = 0x34
	int mHorizontalPosition;	// 60 = 0x3c
	int mRelativeHorizontalPosition;	// 64 = 0x40
	int mVerticalPosition;	// 68 = 0x44
	int mRelativeVerticalPosition;	// 72 = 0x48
	BOOL mIsBehindText;	// 76 = 0x4c
	BOOL mAllowOverlap;	// 77 = 0x4d
	BOOL mMoveWithText;	// 78 = 0x4e
	int mZIndexTotal;	// 80 = 0x50
	int mZIndex;	// 84 = 0x54
}
@property(assign, nonatomic) BOOL allowOverlap;	// G=0x31e29da1; S=0x31caa2b9; @synthesize=mAllowOverlap
@property(assign, getter=isBehindText) BOOL behindText;	// G=0x31c810f5; S=0x31c6f5e9; converted property
@property(assign, nonatomic) CGRect bounds;	// G=0x31c6f9a1; S=0x31c6f9c5; @synthesize=mBounds
@property(assign) int horizontalPosition;	// G=0x31e29d51; S=0x31c79ead; converted property
@property(assign) int relativeHorizontalPosition;	// G=0x31c810b5; S=0x31c6f619; converted property
@property(assign) int relativeVerticalPosition;	// G=0x31c88429; S=0x31c6f9e1; converted property
@property(assign, nonatomic) int textWrappingMode;	// G=0x31c81065; S=0x31c6fc25; @synthesize=mTextWrappingMode
@property(assign, nonatomic) int textWrappingModeType;	// G=0x31e29d91; S=0x31c7a329; @synthesize=mTextWrappingModeType
@property(assign) int verticalPosition;	// G=0x31e29d61; S=0x31c7a081; converted property
@property(assign) double wrapDistanceBottom;	// G=0x31e29d39; S=0x31c7a269; converted property
@property(assign) double wrapDistanceLeft;	// G=0x31e29cf1; S=0x31c7a1b1; converted property
@property(assign) double wrapDistanceRight;	// G=0x31e29d21; S=0x31c7a229; converted property
@property(assign) double wrapDistanceTop;	// G=0x31e29d09; S=0x31c7a1f1; converted property
@property(assign) int zIndex;	// G=0x31c810e5; S=0x31c6f5f9; converted property
@property(assign) int zIndexTotal;	// G=0x31e29d71; S=0x31e29d81; converted property
- (id)init;	// 0x31c6f4a1
- (id).cxx_construct;	// 0x31c6f49d
// declared property getter: - (BOOL)allowOverlap;	// 0x31e29da1
// declared property getter: - (CGRect)bounds;	// 0x31c6f9a1
// converted property getter: - (int)horizontalPosition;	// 0x31e29d51
// converted property getter: - (BOOL)isBehindText;	// 0x31c810f5
// converted property getter: - (int)relativeHorizontalPosition;	// 0x31c810b5
// converted property getter: - (int)relativeVerticalPosition;	// 0x31c88429
// declared property setter: - (void)setAllowOverlap:(BOOL)overlap;	// 0x31caa2b9
// converted property setter: - (void)setBehindText:(BOOL)text;	// 0x31c6f5e9
// declared property setter: - (void)setBounds:(CGRect)bounds;	// 0x31c6f9c5
// converted property setter: - (void)setHorizontalPosition:(int)position;	// 0x31c79ead
// converted property setter: - (void)setRelativeHorizontalPosition:(int)position;	// 0x31c6f619
// converted property setter: - (void)setRelativeVerticalPosition:(int)position;	// 0x31c6f9e1
// declared property setter: - (void)setTextWrappingMode:(int)mode;	// 0x31c6fc25
// declared property setter: - (void)setTextWrappingModeType:(int)type;	// 0x31c7a329
// converted property setter: - (void)setVerticalPosition:(int)position;	// 0x31c7a081
// converted property setter: - (void)setWrapDistanceBottom:(double)bottom;	// 0x31c7a269
// converted property setter: - (void)setWrapDistanceLeft:(double)left;	// 0x31c7a1b1
// converted property setter: - (void)setWrapDistanceRight:(double)right;	// 0x31c7a229
// converted property setter: - (void)setWrapDistanceTop:(double)top;	// 0x31c7a1f1
// converted property setter: - (void)setZIndex:(int)index;	// 0x31c6f5f9
// converted property setter: - (void)setZIndexTotal:(int)total;	// 0x31e29d81
// declared property getter: - (int)textWrappingMode;	// 0x31c81065
// declared property getter: - (int)textWrappingModeType;	// 0x31e29d91
// converted property getter: - (int)verticalPosition;	// 0x31e29d61
// converted property getter: - (double)wrapDistanceBottom;	// 0x31e29d39
// converted property getter: - (double)wrapDistanceLeft;	// 0x31e29cf1
// converted property getter: - (double)wrapDistanceRight;	// 0x31e29d21
// converted property getter: - (double)wrapDistanceTop;	// 0x31e29d09
// converted property getter: - (int)zIndex;	// 0x31c810e5
// converted property getter: - (int)zIndexTotal;	// 0x31e29d71
@end
