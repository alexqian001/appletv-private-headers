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
+ (BOOL)supportsSecureCoding;	// 0x361cc481
- (id)initWithCoder:(id)coder;	// 0x361cc485
- (id)_endpoint;	// 0x361cc625
- (id)_initWithConnection:(id)connection;	// 0x361cc3b1
- (void)dealloc;	// 0x361cc3f9
- (void)encodeWithCoder:(id)coder;	// 0x361cc569
- (void)finalize;	// 0x361cc43d
@end

