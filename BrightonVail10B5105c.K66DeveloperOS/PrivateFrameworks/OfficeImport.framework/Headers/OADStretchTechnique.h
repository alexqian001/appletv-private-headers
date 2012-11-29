/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OADImageFillTechnique.h"
#import "OfficeImport-Structs.h"

@class OADRelativeRect;

@interface OADStretchTechnique : OADImageFillTechnique {
	OADRelativeRect *mFillRect;	// 12 = 0xc
	BOOL mIsFillRectOverridden;	// 16 = 0x10
}
@property(retain) id fillRect;	// G=0x37af0485; S=0x3790bdad; converted property
+ (id)defaultProperties;	// 0x3790bcd5
- (id)initWithDefaults;	// 0x3790bd1d
- (id)copyWithZone:(NSZone *)zone;	// 0x37af03e9
- (void)dealloc;	// 0x3792ded1
// converted property getter: - (id)fillRect;	// 0x37af0485
- (unsigned)hash;	// 0x37af04e9
- (BOOL)isEqual:(id)equal;	// 0x37af051d
- (BOOL)isFillRectOverridden;	// 0x37af04b5
// converted property setter: - (void)setFillRect:(id)rect;	// 0x3790bdad
@end
