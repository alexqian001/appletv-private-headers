/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library
#import "NSCopying.h"
#import "Foundation-Structs.h"
#import "NSCoding.h"


@interface NSPort : NSObject <NSCopying, NSCoding> {
}
@property(assign) id delegate;	// G=0x3107860d; S=0x31078631; converted property
+ (id)allocWithZone:(NSZone *)zone;	// 0x310223ad
+ (id)port;	// 0x310787f1
+ (id)portWithMachPort:(unsigned)machPort;	// 0x310787b1
- (id)initWithCoder:(id)coder;	// 0x31078a0d
- (id)initWithMachPort:(unsigned)machPort;	// 0x31078589
- (Class)classForCoder;	// 0x31078941
- (Class)classForPortCoder;	// 0x3107877d
- (id)copyWithZone:(NSZone *)zone;	// 0x3107879d
// converted property getter: - (id)delegate;	// 0x3107860d
- (void)encodeWithCoder:(id)coder;	// 0x31078599
- (void)invalidate;	// 0x31078675
- (BOOL)isValid;	// 0x31078651
- (unsigned)machPort;	// 0x3107858d
- (void)removeFromRunLoop:(id)runLoop forMode:(id)mode;	// 0x310785a1
- (id)replacementObjectForCoder:(id)coder;	// 0x31078595
- (unsigned)reservedSpaceLength;	// 0x31078591
- (void)scheduleInRunLoop:(id)runLoop forMode:(id)mode;	// 0x3107859d
- (BOOL)sendBeforeDate:(id)date components:(id)components from:(id)from reserved:(unsigned)reserved;	// 0x310785e9
- (BOOL)sendBeforeDate:(id)date msgid:(unsigned)msgid components:(id)components from:(id)from reserved:(unsigned)reserved;	// 0x31078755
// converted property setter: - (void)setDelegate:(id)delegate;	// 0x31078631
@end
