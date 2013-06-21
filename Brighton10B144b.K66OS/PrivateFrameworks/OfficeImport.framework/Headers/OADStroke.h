/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "NSCopying.h"
#import "OfficeImport-Structs.h"
#import "OADProperties.h"

@class OADColor, OADLineEnd, OADLineJoin, OADDash, OADFill;

@interface OADStroke : OADProperties <NSCopying> {
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
@property(assign) int cap;	// G=0x34870955; S=0x348194a1; converted property
@property(retain) id color;	// G=0x3486c455; S=0x348190f1; converted property
@property(assign) int compoundType;	// G=0x348709bd; S=0x348194c5; converted property
@property(retain) id dash;	// G=0x34870679; S=0x34819245; converted property
@property(retain) id fill;	// G=0x34870611; S=0x34819141; converted property
@property(retain, nonatomic) OADLineEnd *head;	// G=0x348196dd; S=0x34a51c8d; @synthesize=mHead
@property(retain) id join;	// G=0x348707fd; S=0x34819309; converted property
@property(assign) int penAlignment;	// G=0x34a51aa1; S=0x348194e9; converted property
@property(retain, nonatomic) OADLineEnd *tail;	// G=0x348196ed; S=0x34a51c9d; @synthesize=mTail
@property(assign) float width;	// G=0x348708ed; S=0x3481947d; converted property
+ (id)blackStroke;	// 0x34a51a35
+ (id)defaultProperties;	// 0x34818f59
+ (id)nullStroke;	// 0x3496b9c5
- (id)init;	// 0x34818ec9
- (id)initWithDefaults;	// 0x34818fa1
// converted property getter: - (int)cap;	// 0x34870955
// converted property getter: - (id)color;	// 0x3486c455
// converted property getter: - (int)compoundType;	// 0x348709bd
- (id)copyWithZone:(NSZone *)zone;	// 0x3493d3ed
// converted property getter: - (id)dash;	// 0x34870679
- (void)dealloc;	// 0x34876775
// converted property getter: - (id)fill;	// 0x34870611
- (unsigned)hash;	// 0x34a51ad1
// declared property getter: - (id)head;	// 0x348196dd
- (BOOL)isCapOverridden;	// 0x3487091d
- (BOOL)isColorOverridden;	// 0x3486c41d
- (BOOL)isCompoundTypeOverridden;	// 0x34870985
- (BOOL)isDashOverridden;	// 0x34870641
- (BOOL)isEqual:(id)equal;	// 0x3486bfad
- (BOOL)isFillOverridden;	// 0x348705d9
- (BOOL)isJoinOverridden;	// 0x348707c5
- (BOOL)isPenAlignmentOverridden;	// 0x348709ed
- (BOOL)isWidthOverridden;	// 0x348708b5
// converted property getter: - (id)join;	// 0x348707fd
// converted property getter: - (int)penAlignment;	// 0x34a51aa1
// converted property setter: - (void)setCap:(int)cap;	// 0x348194a1
// converted property setter: - (void)setColor:(id)color;	// 0x348190f1
// converted property setter: - (void)setCompoundType:(int)type;	// 0x348194c5
// converted property setter: - (void)setDash:(id)dash;	// 0x34819245
// converted property setter: - (void)setFill:(id)fill;	// 0x34819141
// declared property setter: - (void)setHead:(id)head;	// 0x34a51c8d
// converted property setter: - (void)setJoin:(id)join;	// 0x34819309
- (void)setParent:(id)parent;	// 0x3481950d
// converted property setter: - (void)setPenAlignment:(int)alignment;	// 0x348194e9
- (void)setStyleColor:(id)color;	// 0x3493d841
// declared property setter: - (void)setTail:(id)tail;	// 0x34a51c9d
// converted property setter: - (void)setWidth:(float)width;	// 0x3481947d
// declared property getter: - (id)tail;	// 0x348196ed
// converted property getter: - (float)width;	// 0x348708ed
@end
