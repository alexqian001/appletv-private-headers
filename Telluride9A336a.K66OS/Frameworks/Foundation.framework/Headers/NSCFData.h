/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import <NSMutableData.h> // Unknown library


__attribute__((visibility("hidden")))
@interface NSCFData : NSMutableData {
@private
	unsigned char _cfinfo[4];	// 4 = 0x4
	long _length;	// 8 = 0x8
	long _capacity;	// 12 = 0xc
	CFAllocatorRef _bytesDeallocator;	// 16 = 0x10
	char *_bytes;	// 20 = 0x14
}
@property(assign) unsigned length;	// G=0x336ae171; S=0x336ae17d; converted property
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x336ae115
- (BOOL)allowsWeakReference;	// 0x336ae0a5
- (const void *)bytes;	// 0x336ae175
- (id)copyWithZone:(NSZone *)zone;	// 0x336ae119
- (void)finalize;	// 0x336ae0d1
- (unsigned)hash;	// 0x336ae08d
- (BOOL)isEqual:(id)equal;	// 0x336ae075
// converted property getter: - (unsigned)length;	// 0x336ae171
- (void *)mutableBytes;	// 0x336ae179
- (oneway void)release;	// 0x336ae0a1
- (id)retain;	// 0x336ae091
- (unsigned)retainCount;	// 0x336ae0cd
- (BOOL)retainWeakReference;	// 0x336ae0b9
// converted property setter: - (void)setLength:(unsigned)length;	// 0x336ae17d
@end
