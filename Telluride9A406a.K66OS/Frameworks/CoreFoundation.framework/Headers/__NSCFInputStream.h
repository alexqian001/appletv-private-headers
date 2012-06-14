/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import "NSInputStream.h"
#import "CoreFoundation-Structs.h"


__attribute__((visibility("hidden")))
@interface __NSCFInputStream : NSInputStream {
}
@property(assign) id delegate;	// G=0x340ae3e9; S=0x340ae3ed; converted property
+ (id)allocWithZone:(NSZone *)zone;	// 0x340ae319
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x340ae315
- (id)initWithData:(id)data;	// 0x340ae31d
- (id)initWithFileAtPath:(id)path;	// 0x340ae349
- (id)initWithURL:(id)url;	// 0x340ae3b1
- (BOOL)_isDeallocating;	// 0x340ae2c1
- (void)_scheduleInCFRunLoop:(CFRunLoopRef)cfrunLoop forMode:(CFStringRef)mode;	// 0x340ae57d
- (BOOL)_setCFClientFlags:(unsigned long)flags callback:(/*function-pointer*/ void *)callback context:(XXStruct_K1psTC *)context;	// 0x340ae565
- (BOOL)_tryRetain;	// 0x340ae2ad
- (void)_unscheduleFromCFRunLoop:(CFRunLoopRef)cfrunLoop forMode:(CFStringRef)mode;	// 0x340ae585
- (void)close;	// 0x340ae3e5
// converted property getter: - (id)delegate;	// 0x340ae3e9
- (void)finalize;	// 0x340ae2d1
- (BOOL)getBuffer:(char **)buffer length:(unsigned *)length;	// 0x340ae535
- (BOOL)hasBytesAvailable;	// 0x340ae559
- (unsigned)hash;	// 0x340ae295
- (BOOL)isEqual:(id)equal;	// 0x340ae27d
- (void)open;	// 0x340ae3e1
- (id)propertyForKey:(id)key;	// 0x340ae469
- (int)read:(char *)read maxLength:(unsigned)length;	// 0x340ae52d
- (oneway void)release;	// 0x340ae2a9
- (void)removeFromRunLoop:(id)runLoop forMode:(id)mode;	// 0x340ae4d1
- (id)retain;	// 0x340ae299
- (unsigned)retainCount;	// 0x340ae2cd
- (void)scheduleInRunLoop:(id)runLoop forMode:(id)mode;	// 0x340ae4a5
// converted property setter: - (void)setDelegate:(id)delegate;	// 0x340ae3ed
- (BOOL)setProperty:(id)property forKey:(id)key;	// 0x340ae495
- (id)streamError;	// 0x340ae501
- (unsigned)streamStatus;	// 0x340ae4fd
@end
