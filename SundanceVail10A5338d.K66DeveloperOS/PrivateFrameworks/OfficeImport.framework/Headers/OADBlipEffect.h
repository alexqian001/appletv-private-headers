/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "NSCopying.h"
#import "OfficeImport-Structs.h"


@interface OADBlipEffect : NSObject <NSCopying> {
	int mType;	// 4 = 0x4
}
- (id)initWithType:(int)type;	// 0x339d20b5
- (id)copyWithZone:(NSZone *)zone;	// 0x33b9babd
- (unsigned)hash;	// 0x33b9bad5
- (BOOL)isEqual:(id)equal;	// 0x33b9bae5
- (void)setStyleColor:(id)color;	// 0x33b9bad1
- (int)type;	// 0x33b9bac1
@end
