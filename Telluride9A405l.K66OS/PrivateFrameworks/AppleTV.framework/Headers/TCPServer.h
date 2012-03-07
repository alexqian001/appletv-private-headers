/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import <NSObject.h> // Unknown library

@class NSNetService, NSString;

__attribute__((visibility("hidden")))
@interface TCPServer : NSObject {
@private
	id delegate;	// 4 = 0x4
	NSString *domain;	// 8 = 0x8
	NSString *name;	// 12 = 0xc
	NSString *type;	// 16 = 0x10
	unsigned short port;	// 20 = 0x14
	CFSocketRef ipv4socket;	// 24 = 0x18
	CFSocketRef ipv6socket;	// 28 = 0x1c
	NSNetService *netService;	// 32 = 0x20
	BOOL publishConnection;	// 36 = 0x24
	CFRunLoopRef _runLoop;	// 40 = 0x28
	CFRunLoopSourceRef _source4;	// 44 = 0x2c
	CFRunLoopSourceRef _source6;	// 48 = 0x30
}
@property(assign) id delegate;	// G=0x35d15d81; S=0x35d15d91; converted property
@property(retain) NSString *domain;	// G=0x35d15da1; S=0x35d15db1; converted property
@property(retain) NSString *name;	// G=0x35d15df5; S=0x35d15e05; converted property
@property(assign) unsigned short port;	// G=0x35d15e9d; S=0x35d15ead; converted property
@property(retain) NSString *type;	// G=0x35d15e49; S=0x35d15e59; converted property
- (id)init;	// 0x35d15cf5
- (void)dealloc;	// 0x35d15cf9
// converted property getter: - (id)delegate;	// 0x35d15d81
// converted property getter: - (id)domain;	// 0x35d15da1
- (void)handleNewConnectionFromAddress:(id)address inputStream:(id)stream outputStream:(id)stream3;	// 0x35d15ecd
// converted property getter: - (id)name;	// 0x35d15df5
// converted property getter: - (unsigned short)port;	// 0x35d15e9d
- (void)publishConnection:(BOOL)connection;	// 0x35d15ebd
// converted property setter: - (void)setDelegate:(id)delegate;	// 0x35d15d91
// converted property setter: - (void)setDomain:(id)domain;	// 0x35d15db1
// converted property setter: - (void)setName:(id)name;	// 0x35d15e05
// converted property setter: - (void)setPort:(unsigned short)port;	// 0x35d15ead
// converted property setter: - (void)setType:(id)type;	// 0x35d15e59
- (BOOL)start:(id *)start;	// 0x35d15f39
- (BOOL)stop;	// 0x35d16595
// converted property getter: - (id)type;	// 0x35d15e49
@end
