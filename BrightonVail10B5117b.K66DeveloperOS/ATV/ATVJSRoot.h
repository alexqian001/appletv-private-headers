/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "ATVJSObject.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSLock, NSMutableDictionary, ATVJSContext;

__attribute__((visibility("hidden")))
@interface ATVJSRoot : XXUnknownSuperclass <ATVJSObject> {
	NSMutableDictionary *_dateFormatterCache;	// 4 = 0x4
	ATVJSContext *_context;	// 8 = 0x8
	OpaqueJSValue *_jsObjectRef;	// 12 = 0xc
	NSMutableDictionary *_timers;	// 16 = 0x10
	NSLock *_timersLock;	// 20 = 0x14
}
@property(retain) ATVJSContext *context;	// G=0x176419; S=0x17642d; @synthesize=_context
@property(assign, nonatomic) OpaqueJSValue *jsObjectRef;	// G=0x17643d; S=0x17644d; @synthesize=_jsObjectRef
@property(retain, nonatomic) NSMutableDictionary *timers;	// G=0x17645d; S=0x17646d; @synthesize=_timers
@property(retain, nonatomic) NSLock *timersLock;	// G=0x17647d; S=0x17648d; @synthesize=_timersLock
- (id)initWithContext:(id)context jsContext:(OpaqueJSContext *)context2;	// 0x175811
- (void)_clearAllTimers;	// 0x1767a9
- (void)_clearTimer:(id)timer;	// 0x176685
- (id)_localtime:(id)localtime context:(OpaqueJSContext *)context exception:(const OpaqueJSValue **)exception;	// 0x176aad
- (id)_startTimer:(double)timer repeating:(BOOL)repeating callback:(OpaqueJSValue *)callback thisObject:(OpaqueJSValue *)object args:(const OpaqueJSValue **)args argCount:(unsigned long)count;	// 0x1764a1
- (void)_timerFired:(id)fired;	// 0x1768cd
// declared property getter: - (id)context;	// 0x176419
- (void)dealloc;	// 0x17638d
// declared property getter: - (OpaqueJSValue *)jsObjectRef;	// 0x17643d
// declared property setter: - (void)setContext:(id)context;	// 0x17642d
// declared property setter: - (void)setJsObjectRef:(OpaqueJSValue *)ref;	// 0x17644d
// declared property setter: - (void)setTimers:(id)timers;	// 0x17646d
// declared property setter: - (void)setTimersLock:(id)lock;	// 0x17648d
// declared property getter: - (id)timers;	// 0x17645d
// declared property getter: - (id)timersLock;	// 0x17647d
@end
