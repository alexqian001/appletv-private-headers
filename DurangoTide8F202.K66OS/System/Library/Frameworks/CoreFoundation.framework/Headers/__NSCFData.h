/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import "CoreFoundation-Structs.h"
#import "NSMutableData.h"


__attribute__((visibility("hidden")))
@interface __NSCFData : NSMutableData {
}
@property(assign) unsigned length;	// G=0x31c98df1; S=0x31cec839; converted property
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x31cea995
- (const void *)bytes;	// 0x31c98dfd
- (id)copyWithZone:(NSZone *)zone;	// 0x31cec7dd
- (void)finalize;	// 0x31ceaced
- (unsigned)hash;	// 0x31ceb909
- (BOOL)isEqual:(id)equal;	// 0x31ceb3f5
// converted property getter: - (unsigned)length;	// 0x31c98df1
- (void *)mutableBytes;	// 0x31cec82d
- (oneway void)release;	// 0x31cbf6dd
- (id)retain;	// 0x31cb31cd
- (unsigned)retainCount;	// 0x31ceab9d
// converted property setter: - (void)setLength:(unsigned)length;	// 0x31cec839
@end

