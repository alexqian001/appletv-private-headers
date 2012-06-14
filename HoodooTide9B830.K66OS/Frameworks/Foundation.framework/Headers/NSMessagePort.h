/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSPort.h"


@interface NSMessagePort : NSPort {
@private
	void *_port;	// 4 = 0x4
	id _delegate;	// 8 = 0x8
}
@property(assign) id delegate;	// G=0x316018c1; S=0x316018b1; converted property
+ (void)_fixNSMessagePortLeak;	// 0x31602079
+ (BOOL)sendBeforeTime:(double)time streamData:(id)data components:(id)components to:(id)to from:(id)from msgid:(unsigned)msgid reserved:(unsigned)reserved;	// 0x31601909
- (id)init;	// 0x31602065
- (id)initWithName:(id)name;	// 0x31601d29
- (id)initWithRemoteName:(id)remoteName;	// 0x31601ff9
- (BOOL)_isDeallocating;	// 0x3160207d
- (BOOL)_tryRetain;	// 0x31602081
- (void)dealloc;	// 0x31602139
// converted property getter: - (id)delegate;	// 0x316018c1
- (void)finalize;	// 0x31602181
- (void)invalidate;	// 0x31601839
- (BOOL)isValid;	// 0x31601815
- (id)name;	// 0x316018d1
- (oneway void)release;	// 0x316020a1
- (void)removeFromRunLoop:(id)runLoop forMode:(id)mode;	// 0x31601cdd
- (id)retain;	// 0x31602085
- (unsigned)retainCount;	// 0x31602125
- (void)scheduleInRunLoop:(id)runLoop forMode:(id)mode;	// 0x31601c91
- (BOOL)sendBeforeDate:(id)date components:(id)components from:(id)from reserved:(unsigned)reserved;	// 0x31601bc9
- (BOOL)sendBeforeDate:(id)date msgid:(unsigned)msgid components:(id)components from:(id)from reserved:(unsigned)reserved;	// 0x31601c29
- (BOOL)sendBeforeTime:(double)time streamData:(void *)data components:(id)components from:(id)from msgid:(unsigned)msgid;	// 0x31601b69
// converted property setter: - (void)setDelegate:(id)delegate;	// 0x316018b1
- (BOOL)setName:(id)name;	// 0x316018e5
@end
