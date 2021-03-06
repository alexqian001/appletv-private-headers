/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "NSCopying.h"
#import "OfficeImport-Structs.h"

@class OADColor;

@interface OADGradientFillStop : NSObject <NSCopying> {
	OADColor *mColor;	// 4 = 0x4
	float mPosition;	// 8 = 0x8
}
- (id)initWithColor:(id)color position:(float)position;	// 0x34882185
- (id)color;	// 0x3488425d
- (id)copyWithZone:(NSZone *)zone;	// 0x34959461
- (void)dealloc;	// 0x34888059
- (unsigned)hash;	// 0x34a49ca1
- (BOOL)isEqual:(id)equal;	// 0x34a49ce5
- (float)position;	// 0x34a49c91
- (void)setStyleColor:(id)color;	// 0x34959605
@end

