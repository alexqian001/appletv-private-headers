/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OADShade.h"
#import "OfficeImport-Structs.h"


__attribute__((visibility("hidden")))
@interface OADLinearShade : OADShade {
@private
	float mAngle;	// 12 = 0xc
	BOOL mIsAngleOverridden;	// 16 = 0x10
	BOOL mScaled;	// 17 = 0x11
	BOOL mIsScaledOverridden;	// 18 = 0x12
}
@property(assign) float angle;	// G=0x31088d3d; S=0x31086a1d; converted property
@property(assign) BOOL scaled;	// G=0x3124e3d5; S=0x31086a3d; converted property
+ (id)defaultProperties;	// 0x31086979
- (id)initWithDefaults;	// 0x310869c1
// converted property getter: - (float)angle;	// 0x31088d3d
- (id)copyWithZone:(NSZone *)zone;	// 0x3115dbc9
- (unsigned)hash;	// 0x3124e439
- (BOOL)isAngleOverridden;	// 0x31088d6d
- (BOOL)isEqual:(id)equal;	// 0x3124e489
- (BOOL)isScaledOverridden;	// 0x3124e405
// converted property getter: - (BOOL)scaled;	// 0x3124e3d5
// converted property setter: - (void)setAngle:(float)angle;	// 0x31086a1d
// converted property setter: - (void)setScaled:(BOOL)scaled;	// 0x31086a3d
@end
