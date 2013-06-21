/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library
#import "Foundation-Structs.h"


@interface NSNetService : NSObject {
	id _netService;	// 4 = 0x4
	id _delegate;	// 8 = 0x8
	id _reserved;	// 12 = 0xc
}
@property(assign) id delegate;	// G=0x31986221; S=0x31986231; converted property
+ (id)dataFromTXTRecordDictionary:(id)txtrecordDictionary;	// 0x319874bd
+ (id)dictionaryFromTXTRecordData:(id)txtrecordData;	// 0x3198743d
- (id)initWithCFNetService:(CFNetServiceRef)cfnetService;	// 0x31985edd
- (id)initWithDomain:(id)domain type:(id)type name:(id)name;	// 0x319861fd
- (id)initWithDomain:(id)domain type:(id)type name:(id)name port:(int)port;	// 0x3198608d
- (id)TXTRecordData;	// 0x319873d9
- (void)_dispatchCallBackWithError:(XXStruct_K5nmsA)error;	// 0x31986949
- (CFNetServiceRef)_internalNetService;	// 0x31986ec1
- (id)_monitors;	// 0x31987231
- (void)_scheduleInDefaultRunLoopForMode:(id)mode;	// 0x31986241
- (id)addresses;	// 0x319865d9
- (void)dealloc;	// 0x31986c35
// converted property getter: - (id)delegate;	// 0x31986221
- (id)description;	// 0x31986ed1
- (id)domain;	// 0x31986519
- (void)finalize;	// 0x31986d89
- (BOOL)getInputStream:(out id *)stream outputStream:(out id *)stream2;	// 0x31986fe1
- (unsigned)hash;	// 0x31986f5d
- (id)hostName;	// 0x319865a9
- (BOOL)isEqual:(id)equal;	// 0x31986f71
- (id)name;	// 0x31986579
- (int)port;	// 0x31986649
- (void)publish;	// 0x31986879
- (void)publishWithOptions:(unsigned)options;	// 0x31986665
- (void)removeFromRunLoop:(id)runLoop forMode:(id)mode;	// 0x31986421
- (void)resolve;	// 0x31987219
- (void)resolveWithTimeout:(double)timeout;	// 0x31987091
- (void)scheduleInRunLoop:(id)runLoop forMode:(id)mode;	// 0x31986329
// converted property setter: - (void)setDelegate:(id)delegate;	// 0x31986231
- (BOOL)setTXTRecordData:(id)data;	// 0x319873b9
- (void)startMonitoring;	// 0x31987241
- (void)stop;	// 0x319868d5
- (void)stopMonitoring;	// 0x319872fd
- (id)type;	// 0x31986549
@end
