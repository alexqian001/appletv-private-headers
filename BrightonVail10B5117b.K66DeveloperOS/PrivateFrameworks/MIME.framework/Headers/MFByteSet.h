/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

#import <NSObject.h> // Unknown library
#import "NSCopying.h"
#import "NSMutableCopying.h"
#import "MIME-Structs.h"


@interface MFByteSet : NSObject <NSCopying, NSMutableCopying> {
	BOOL mySet[32];	// 4 = 0x4
}
+ (id)ASCIIByteSet;	// 0x345e8c39
+ (id)asciiWhitespaceSet;	// 0x345e8be9
+ (id)nonASCIIByteSet;	// 0x345e8c85
+ (id)suspiciousCodepage1252ByteSet;	// 0x345e8cd1
- (id)initWithBytes:(const void *)bytes length:(unsigned)length;	// 0x345e8e55
- (id)initWithCString:(const char *)cstring;	// 0x345e8e2d
- (id)initWithRange:(NSRange)range;	// 0x345e8d81
- (id)_initWithSet:(const char *)set;	// 0x345e8ea9
- (BOOL)byteIsMember:(BOOL)member;	// 0x345e8d1d
- (id)copyWithZone:(NSZone *)zone;	// 0x345e8ee5
- (id)invertedSet;	// 0x345e8d45
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x345e8f29
@end
