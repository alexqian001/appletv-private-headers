/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "OADProperties.h"
#import "NSCopying.h"

@class OADColor, OADLineJoin, OADLineEnd, OADFill, OADDash;

__attribute__((visibility("hidden")))
@interface OADStroke : OADProperties <NSCopying> {
@private
	OADColor *mColor;	// 12 = 0xc
	OADFill *mFill;	// 16 = 0x10
	OADDash *mDash;	// 20 = 0x14
	OADLineJoin *mJoin;	// 24 = 0x18
	OADLineEnd *mHead;	// 28 = 0x1c
	OADLineEnd *mTail;	// 32 = 0x20
	float mWidth;	// 36 = 0x24
	unsigned char mCap;	// 40 = 0x28
	unsigned char mCompoundType;	// 41 = 0x29
	unsigned char mPenAlignment;	// 42 = 0x2a
	unsigned mIsColorOverridden : 1;	// 43 = 0x2b
	unsigned mIsCompoundTypeOverridden : 1;	// 43 = 0x2b
	unsigned mIsCapOverridden : 1;	// 43 = 0x2b
	unsigned mIsWidthOverridden : 1;	// 43 = 0x2b
	unsigned mIsJoinOverridden : 1;	// 43 = 0x2b
	unsigned mIsDashOverridden : 1;	// 43 = 0x2b
	unsigned mIsFillOverridden : 1;	// 43 = 0x2b
	unsigned mIsPenAlignmentOverridden : 1;	// 43 = 0x2b
}
@property(assign) int cap;	// G=0x3444b3e1; S=0x3443e50d; converted property
@property(retain) id color;	// G=0x3444b1f9; S=0x3443dc79; converted property
@property(assign) int compoundType;	// G=0x34438261; S=0x3443e5b5; converted property
@property(retain) id dash;	// G=0x34438199; S=0x3443dfcd; converted property
@property(retain) id fill;	// G=0x343cf4d1; S=0x3443de11; converted property
@property(retain, nonatomic) OADLineEnd *head;	// G=0x3443d601; S=0x3458f48d; @synthesize=mHead
@property(retain) id join;	// G=0x3444b305; S=0x3443e0c1; converted property
@property(assign) int penAlignment;	// G=0x3458efed; S=0x344e3329; converted property
@property(retain, nonatomic) OADLineEnd *tail;	// G=0x3443d611; S=0x3458f4b5; @synthesize=mTail
@property(assign) float width;	// G=0x344380fd; S=0x3443e475; converted property
+ (id)blackStroke;	// 0x3458f019
+ (id)defaultProperties;	// 0x3443d409
+ (id)nullStroke;	// 0x344e2f21
- (id)init;	// 0x3443d37d
- (id)initWithDefaults;	// 0x3456dcc9
// converted property getter: - (int)cap;	// 0x3444b3e1
// converted property getter: - (id)color;	// 0x3444b1f9
// converted property getter: - (int)compoundType;	// 0x34438261
- (id)copyWithZone:(NSZone *)zone;	// 0x344e2f35
// converted property getter: - (id)dash;	// 0x34438199
- (void)dealloc;	// 0x343c96a5
// converted property getter: - (id)fill;	// 0x343cf4d1
- (unsigned)hash;	// 0x3458ee59
// declared property getter: - (id)head;	// 0x3443d601
- (BOOL)isCapOverridden;	// 0x3444b3a9
- (BOOL)isColorOverridden;	// 0x3444b1c1
- (BOOL)isCompoundTypeOverridden;	// 0x34438229
- (BOOL)isDashOverridden;	// 0x34438161
- (BOOL)isEqual:(id)equal;	// 0x3444ad95
- (BOOL)isFillOverridden;	// 0x343cf499
- (BOOL)isJoinOverridden;	// 0x3444b2cd
- (BOOL)isPenAlignmentOverridden;	// 0x3444b40d
- (BOOL)isWidthOverridden;	// 0x34438129
// converted property getter: - (id)join;	// 0x3444b305
// converted property getter: - (int)penAlignment;	// 0x3458efed
// converted property setter: - (void)setCap:(int)cap;	// 0x3443e50d
// converted property setter: - (void)setColor:(id)color;	// 0x3443dc79
// converted property setter: - (void)setCompoundType:(int)type;	// 0x3443e5b5
// converted property setter: - (void)setDash:(id)dash;	// 0x3443dfcd
// converted property setter: - (void)setFill:(id)fill;	// 0x3443de11
// declared property setter: - (void)setHead:(id)head;	// 0x3458f48d
// converted property setter: - (void)setJoin:(id)join;	// 0x3443e0c1
- (void)setParent:(id)parent;	// 0x3443d44d
// converted property setter: - (void)setPenAlignment:(int)alignment;	// 0x344e3329
- (void)setStyleColor:(id)color;	// 0x34532915
// declared property setter: - (void)setTail:(id)tail;	// 0x3458f4b5
// converted property setter: - (void)setWidth:(float)width;	// 0x3443e475
// declared property getter: - (id)tail;	// 0x3443d611
// converted property getter: - (float)width;	// 0x344380fd
@end
