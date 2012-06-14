/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "OADPattern.h"


__attribute__((visibility("hidden")))
@interface OADPresetPattern : OADPattern {
@private
	int mType;	// 12 = 0xc
	BOOL mIsTypeOverridden;	// 16 = 0x10
}
@property(assign) int type;	// G=0x3138611d; S=0x312bd061; converted property
+ (id)defaultProperties;	// 0x312bcfd1
+ (id)nameForPresetPatternType:(int)presetPatternType;	// 0x31384a5d
+ (id)namedBitmapDataForPresetPatternType:(int)presetPatternType;	// 0x313862d1
+ (id)presetPatternHeader;	// 0x31386185
- (id)initWithDefaults;	// 0x312bd019
- (id)copyWithZone:(NSZone *)zone;	// 0x313860ad
- (unsigned)hash;	// 0x31386519
- (BOOL)isEqual:(id)equal;	// 0x31386445
- (BOOL)isTypeOverridden;	// 0x3138614d
// converted property setter: - (void)setType:(int)type;	// 0x312bd061
// converted property getter: - (int)type;	// 0x3138611d
@end
