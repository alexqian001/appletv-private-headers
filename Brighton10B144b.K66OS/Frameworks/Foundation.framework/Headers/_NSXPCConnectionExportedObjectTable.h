/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library
#import "Foundation-Structs.h"

@class NSLock;

__attribute__((visibility("hidden")))
@interface _NSXPCConnectionExportedObjectTable : NSObject {
	NSLock *_lock;	// 4 = 0x4
	CFDictionaryRef _proxyNumberToObject;	// 8 = 0x8
	CFDictionaryRef _objectToProxyNumber;	// 12 = 0xc
	unsigned long long _next;	// 16 = 0x10
}
- (id)init;	// 0x318ed699
- (void)dealloc;	// 0x31a0c5d9
- (id)exportedObjectForProxyNumber:(unsigned long long)proxyNumber;	// 0x31a0c739
- (void)finalize;	// 0x31a0c66d
- (id)interfaceForProxyNumber:(unsigned long long)proxyNumber;	// 0x31a0c831
- (unsigned long long)proxyNumberForExportedObject:(id)exportedObject interface:(id)interface;	// 0x31a0c8b1
- (void)releaseExportedObject:(unsigned long long)object;	// 0x31a0c9b9
- (void)setExportedObject:(id)object forProxyNumber:(unsigned long long)proxyNumber;	// 0x31a0c6c1
- (void)setInterface:(id)interface forProxyNumber:(unsigned long long)proxyNumber;	// 0x31a0c7b9
@end

