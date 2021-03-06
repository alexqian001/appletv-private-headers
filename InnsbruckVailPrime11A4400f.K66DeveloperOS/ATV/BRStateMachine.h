/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, NSRunLoop, NSMutableDictionary, NSMutableArray, NSTimer;

__attribute__((visibility("hidden")))
@interface BRStateMachine : XXUnknownSuperclass {
	NSRunLoop *_runloop;	// 4 = 0x4
	NSTimer *_timer;	// 8 = 0x8
	NSMutableArray *_events;	// 12 = 0xc
	NSMutableDictionary *_handlers;	// 16 = 0x10
	NSMutableDictionary *_defaultHandlers;	// 20 = 0x14
	NSMutableDictionary *_stateEntryHandlers;	// 24 = 0x18
	BOOL shouldProcessEvents;	// 28 = 0x1c
	BOOL _immediate;	// 29 = 0x1d
	BOOL _ignoreRecursiveEvents;	// 30 = 0x1e
	NSString *_currentState;	// 32 = 0x20
	NSString *_name;	// 36 = 0x24
}
@property(readonly, assign) NSString *currentState;	// G=0x41471d; @synthesize=_currentState
@property(assign, nonatomic) BOOL ignoreRecursiveEvents;	// G=0x41475d; S=0x41476d; @synthesize=_ignoreRecursiveEvents
@property(readonly, assign) BOOL immediate;	// G=0x414745; @synthesize=_immediate
@property(readonly, assign) NSString *name;	// G=0x414731; @synthesize=_name
@property(assign, nonatomic) BOOL shouldProcessEvents;	// G=0x4146fd; S=0x41470d; @synthesize
+ (void)deregisterStateMachine:(id)machine;	// 0x41364d
+ (void)initialize;	// 0x413519
+ (void)registerStateMachine:(id)machine;	// 0x41356d
+ (id)stateMachineWithName:(id)name;	// 0x413765
- (id)initWithName:(id)name initialState:(id)state immediateMode:(BOOL)mode;	// 0x413859
- (id)_eventHandlerForEvent:(id)event;	// 0x414c51
- (void)_processNextEvent;	// 0x41477d
// declared property getter: - (id)currentState;	// 0x41471d
- (void)dealloc;	// 0x4139a9
- (void)deregisterHandlers;	// 0x414309
// declared property getter: - (BOOL)ignoreRecursiveEvents;	// 0x41475d
// declared property getter: - (BOOL)immediate;	// 0x414745
- (void)logUnhandledEvents;	// 0x41435d
// declared property getter: - (id)name;	// 0x414731
- (void)postEvent:(id)event;	// 0x413b39
- (void)postEvent:(id)event withContext:(id)context;	// 0x413b59
- (void)postEvent:(id)event withContext:(id)context userInfo:(id)info;	// 0x413b81
- (void)purgeEventQueue;	// 0x413f01
- (void)registerDefaultHandlerForEvent:(id)event withBlock:(id)block;	// 0x41417d
- (void)registerHandlerForEvent:(id)event onState:(id)state withBlock:(id)block;	// 0x413fc5
- (void)registerHandlerForEvent:(id)event onStates:(id)states withBlock:(id)block;	// 0x414095
- (void)registerHandlerForState:(id)state withBlock:(id)block;	// 0x414285
- (void)registerTransitionFromState:(id)state onEvent:(id)event toState:(id)state3;	// 0x414201
// declared property setter: - (void)setIgnoreRecursiveEvents:(BOOL)events;	// 0x41476d
// declared property setter: - (void)setShouldProcessEvents:(BOOL)processEvents;	// 0x41470d
// declared property getter: - (BOOL)shouldProcessEvents;	// 0x4146fd
@end

