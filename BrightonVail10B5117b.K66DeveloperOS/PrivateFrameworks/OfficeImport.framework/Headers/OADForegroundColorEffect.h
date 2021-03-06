/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OADBlipEffect.h"
#import "OfficeImport-Structs.h"

@class OADColor;

@interface OADForegroundColorEffect : OADBlipEffect {
	OADColor *mForegroundColor;	// 8 = 0x8
}
@property(retain) id foregroundColor;	// G=0x34c23f61; S=0x34a5a1e1; converted property
- (id)init;	// 0x34a5a1b1
- (id)copyWithZone:(NSZone *)zone;	// 0x34c23ed5
- (void)dealloc;	// 0x34a64e85
// converted property getter: - (id)foregroundColor;	// 0x34c23f61
- (unsigned)hash;	// 0x34c23fad
- (BOOL)isEqual:(id)equal;	// 0x34c23ff5
// converted property setter: - (void)setForegroundColor:(id)color;	// 0x34a5a1e1
- (void)setStyleColor:(id)color;	// 0x34c23f71
@end

