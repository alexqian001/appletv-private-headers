/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OADFill.h"
#import "OfficeImport-Structs.h"

@class OADColor, OADPattern;

@interface OADPatternFill : OADFill {
	OADColor *mFgColor;	// 12 = 0xc
	BOOL mIsFgColorOverridden;	// 16 = 0x10
	OADColor *mBgColor;	// 20 = 0x14
	BOOL mIsBgColorOverridden;	// 24 = 0x18
	OADPattern *mPattern;	// 28 = 0x1c
	BOOL mIsPatternOverridden;	// 32 = 0x20
}
@property(retain) id bgColor;	// G=0x350a5a95; S=0x35004de5; converted property
@property(retain) id fgColor;	// G=0x350a5a31; S=0x35004d99; converted property
@property(retain) id pattern;	// G=0x350a5af9; S=0x35004d4d; converted property
+ (id)defaultProperties;	// 0x35004b99
- (id)initWithDefaults;	// 0x35004be1
// converted property getter: - (id)bgColor;	// 0x350a5a95
- (id)copyWithZone:(NSZone *)zone;	// 0x350a58dd
- (void)dealloc;	// 0x35007389
// converted property getter: - (id)fgColor;	// 0x350a5a31
- (unsigned)hash;	// 0x350a5bd9
- (BOOL)isBgColorOverridden;	// 0x350a5ac5
- (BOOL)isEqual:(id)equal;	// 0x3501e979
- (BOOL)isFgColorOverridden;	// 0x350a5a61
- (BOOL)isPatternOverridden;	// 0x350a5b29
- (id)namedImageDataWithBlipCollection:(id)blipCollection;	// 0x350a5c9d
// converted property getter: - (id)pattern;	// 0x350a5af9
// converted property setter: - (void)setBgColor:(id)color;	// 0x35004de5
- (void)setColor:(id)color;	// 0x350a5b5d
// converted property setter: - (void)setFgColor:(id)color;	// 0x35004d99
- (void)setParent:(id)parent;	// 0x35004e31
// converted property setter: - (void)setPattern:(id)pattern;	// 0x35004d4d
- (void)setStyleColor:(id)color;	// 0x350a5b6d
@end

