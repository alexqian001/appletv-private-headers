/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSCoding.h"
#import "Foundation-Structs.h"
#import <NSObject.h> // Unknown library
#import "NSCopying.h"


@interface NSPort : NSObject <NSCopying, NSCoding> {
}
@property(assign) id delegate;	// G=0x31600be9; S=0x31600bc5; converted property
+ (id)allocWithZone:(NSZone *)zone;	// 0x3159d6b9
+ (id)port;	// 0x31600aed
+ (id)portWithMachPort:(unsigned)machPort;	// 0x31600b29
- (id)initWithCoder:(id)coder;	// 0x31600c99
- (id)initWithMachPort:(unsigned)machPort;	// 0x31600b75
- (Class)classForCoder;	// 0x31600c41
- (Class)classForPortCoder;	// 0x31600c25
- (id)copyWithZone:(NSZone *)zone;	// 0x31600c11
// converted property getter: - (id)delegate;	// 0x31600be9
- (void)encodeWithCoder:(id)coder;	// 0x31600cc9
- (void)invalidate;	// 0x31600b79
- (BOOL)isValid;	// 0x31600b9d
- (unsigned)machPort;	// 0x31600bc1
- (void)removeFromRunLoop:(id)runLoop forMode:(id)mode;	// 0x31600d19
- (id)replacementObjectForCoder:(id)coder;	// 0x31600c21
- (unsigned)reservedSpaceLength;	// 0x31600c0d
- (void)scheduleInRunLoop:(id)runLoop forMode:(id)mode;	// 0x31600d15
- (BOOL)sendBeforeDate:(id)date components:(id)components from:(id)from reserved:(unsigned)reserved;	// 0x31600ccd
- (BOOL)sendBeforeDate:(id)date msgid:(unsigned)msgid components:(id)components from:(id)from reserved:(unsigned)reserved;	// 0x31600cf1
// converted property setter: - (void)setDelegate:(id)delegate;	// 0x31600bc5
@end
