/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library
#import "NSSecureCoding.h"


@interface NSXPCListenerEndpoint : NSObject <NSSecureCoding> {
	void *_internal;	// 4 = 0x4
}
+ (BOOL)supportsSecureCoding;	// 0x347955c9
- (id)initWithCoder:(id)coder;	// 0x347955cd
- (id)_endpoint;	// 0x3479576d
- (id)_initWithConnection:(id)connection;	// 0x347954f9
- (void)dealloc;	// 0x34795541
- (void)encodeWithCoder:(id)coder;	// 0x347956b1
- (void)finalize;	// 0x34795585
@end

