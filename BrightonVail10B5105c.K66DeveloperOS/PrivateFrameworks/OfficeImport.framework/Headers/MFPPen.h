/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library

@class MFPCustomLineCap, MFPBrush;

@interface MFPPen : NSObject {
	MFPBrush *mBrush;	// 4 = 0x4
	float mWidth;	// 8 = 0x8
	CGAffineTransform mTransform;	// 12 = 0xc
	int mStartCap;	// 36 = 0x24
	int mEndCap;	// 40 = 0x28
	int mLineJoin;	// 44 = 0x2c
	float mMiterLimit;	// 48 = 0x30
	int mDashStyle;	// 52 = 0x34
	int mDashCap;	// 56 = 0x38
	float mDashOffset;	// 60 = 0x3c
	int mDashPatternCount;	// 64 = 0x40
	float *mDashPattern;	// 68 = 0x44
	int mAlignment;	// 72 = 0x48
	int mCompoundArrayCount;	// 76 = 0x4c
	float *mCompoundArray;	// 80 = 0x50
	MFPCustomLineCap *mCustomStartCap;	// 84 = 0x54
	MFPCustomLineCap *mCustomEndCap;	// 88 = 0x58
}
@property(assign) int alignment;	// G=0x37ba3b21; S=0x37ba3b31; converted property
@property(retain) id brush;	// G=0x37ba38fd; S=0x37ba390d; converted property
@property(retain) id customEndCap;	// G=0x37ba3bfd; S=0x37ba3c0d; converted property
@property(retain) id customStartCap;	// G=0x37ba3bad; S=0x37ba3bbd; converted property
@property(assign) int dashCap;	// G=0x37ba3a75; S=0x37ba3a85; converted property
@property(assign) float dashOffset;	// G=0x37ba3a95; S=0x37ba3aa5; converted property
@property(assign) int dashStyle;	// G=0x37ba3a55; S=0x37ba3a65; converted property
@property(assign) int endCap;	// G=0x37ba39f5; S=0x37ba3a05; converted property
@property(assign) int lineJoin;	// G=0x37ba3a15; S=0x37ba3a25; converted property
@property(assign) float miterLimit;	// G=0x37ba3a35; S=0x37ba3a45; converted property
@property(assign) int startCap;	// G=0x37ba39d5; S=0x37ba39e5; converted property
@property(assign) CGAffineTransform transform;	// G=0x37ba396d; S=0x37ba39a1; converted property
@property(assign) float width;	// G=0x37ba394d; S=0x37ba395d; converted property
- (id)init;	// 0x37ba377d
- (id).cxx_construct;	// 0x37ba3fed
// converted property getter: - (int)alignment;	// 0x37ba3b21
- (void)applyDashCap;	// 0x37ba3efd
- (void)applyDashPattern;	// 0x37ba3cf9
- (void)applyDashPattern:(const float *)pattern count:(int)count;	// 0x37ba3c4d
- (void)applyLineCap;	// 0x37ba3eb1
- (void)applyLineJoin;	// 0x37ba3e69
// converted property getter: - (id)brush;	// 0x37ba38fd
- (const float *)compoundArray;	// 0x37ba3b51
- (int)compoundArrayCount;	// 0x37ba3b41
// converted property getter: - (id)customEndCap;	// 0x37ba3bfd
// converted property getter: - (id)customStartCap;	// 0x37ba3bad
// converted property getter: - (int)dashCap;	// 0x37ba3a75
// converted property getter: - (float)dashOffset;	// 0x37ba3a95
- (const float *)dashPattern;	// 0x37ba3ac5
- (int)dashPatternCount;	// 0x37ba3ab5
// converted property getter: - (int)dashStyle;	// 0x37ba3a55
- (void)dealloc;	// 0x37ba3859
// converted property getter: - (int)endCap;	// 0x37ba39f5
// converted property getter: - (int)lineJoin;	// 0x37ba3a15
// converted property getter: - (float)miterLimit;	// 0x37ba3a35
// converted property setter: - (void)setAlignment:(int)alignment;	// 0x37ba3b31
// converted property setter: - (void)setBrush:(id)brush;	// 0x37ba390d
- (void)setCompoundArray:(const float *)array count:(int)count;	// 0x37ba3b61
// converted property setter: - (void)setCustomEndCap:(id)cap;	// 0x37ba3c0d
// converted property setter: - (void)setCustomStartCap:(id)cap;	// 0x37ba3bbd
// converted property setter: - (void)setDashCap:(int)cap;	// 0x37ba3a85
// converted property setter: - (void)setDashOffset:(float)offset;	// 0x37ba3aa5
- (void)setDashPattern:(const float *)pattern count:(int)count;	// 0x37ba3ad5
// converted property setter: - (void)setDashStyle:(int)style;	// 0x37ba3a65
// converted property setter: - (void)setEndCap:(int)cap;	// 0x37ba3a05
// converted property setter: - (void)setLineJoin:(int)join;	// 0x37ba3a25
// converted property setter: - (void)setMiterLimit:(float)limit;	// 0x37ba3a45
// converted property setter: - (void)setStartCap:(int)cap;	// 0x37ba39e5
// converted property setter: - (void)setTransform:(CGAffineTransform)transform;	// 0x37ba39a1
// converted property setter: - (void)setWidth:(float)width;	// 0x37ba395d
// converted property getter: - (int)startCap;	// 0x37ba39d5
- (void)strokePath:(CGPathRef)path;	// 0x37ba3f29
// converted property getter: - (CGAffineTransform)transform;	// 0x37ba396d
// converted property getter: - (float)width;	// 0x37ba394d
@end
