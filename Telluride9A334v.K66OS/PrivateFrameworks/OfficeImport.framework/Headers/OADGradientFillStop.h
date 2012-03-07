/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library
#import "NSCopying.h"

@class OADColor;

__attribute__((visibility("hidden")))
@interface OADGradientFillStop : NSObject <NSCopying> {
@private
	OADColor *mColor;	// 4 = 0x4
	float mPosition;	// 8 = 0x8
}
- (id)initWithColor:(id)color position:(float)position;	// 0x355adb59
- (id)color;	// 0x355af689
- (id)copyWithZone:(NSZone *)zone;	// 0x356a60f9
- (void)dealloc;	// 0x355b1611
- (unsigned)hash;	// 0x35781f19
- (BOOL)isEqual:(id)equal;	// 0x356dd369
- (float)position;	// 0x356dd439
- (void)setStyleColor:(id)color;	// 0x356a62a9
@end
