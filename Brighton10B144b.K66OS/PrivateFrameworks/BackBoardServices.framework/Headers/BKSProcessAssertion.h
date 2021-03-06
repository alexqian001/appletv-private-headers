/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

#import <NSObject.h> // Unknown library

@class BKSSignal, NSString;
@protocol OS_xpc_object, OS_dispatch_queue;

@interface BKSProcessAssertion : NSObject {
	NSObject<OS_dispatch_queue> *_queue;	// 4 = 0x4
	NSObject<OS_xpc_object> *_serverConnection;	// 8 = 0x8
	BOOL _valid;	// 12 = 0xc
	BKSSignal *_invalidationSignal;	// 16 = 0x10
	int _pid;	// 20 = 0x14
	NSString *_bundleIdentifier;	// 24 = 0x18
	NSString *_name;	// 28 = 0x1c
	unsigned _flags;	// 32 = 0x20
	unsigned _reason;	// 36 = 0x24
	id _invalidationHandler;	// 40 = 0x28
	id _acquisitionHandler;	// 44 = 0x2c
}
@property(copy, nonatomic) id acquisitionHandler;	// G=0x3350681d; S=0x33506945; @dynamic
@property(assign, nonatomic) unsigned flags;	// G=0x33506c09; S=0x33506cd5; @dynamic
@property(copy, nonatomic) id invalidationHandler;	// G=0x33506a1d; S=0x33506b31; @dynamic
@property(copy, nonatomic) NSString *name;	// G=0x33506d7d; S=0x33506ea5; @dynamic
@property(readonly, assign, nonatomic) unsigned reason;	// G=0x335066c9; @dynamic
@property(readonly, assign, nonatomic) BOOL valid;	// G=0x33506571; @dynamic
+ (id)NameForReason:(unsigned)reason;	// 0x33506059
- (id)init;	// 0x33506171
- (id)initWithBundleIdentifier:(id)bundleIdentifier flags:(unsigned)flags reason:(unsigned)reason name:(id)name withHandler:(id)handler;	// 0x3350632d
- (id)initWithPID:(int)pid flags:(unsigned)flags reason:(unsigned)reason name:(id)name withHandler:(id)handler;	// 0x33506455
// declared property getter: - (id)acquisitionHandler;	// 0x3350681d
- (void)dealloc;	// 0x33506215
// declared property getter: - (unsigned)flags;	// 0x33506c09
- (void)invalidate;	// 0x33506fc1
// declared property getter: - (id)invalidationHandler;	// 0x33506a1d
// declared property getter: - (id)name;	// 0x33506d7d
- (void)queue_acquireAssertion;	// 0x335073c1
- (void)queue_invalidate:(BOOL)invalidate;	// 0x3350703d
- (void)queue_notifyAssertionAcquired:(BOOL)acquired;	// 0x33507729
- (void)queue_registerWithServer;	// 0x33507161
- (void)queue_updateAssertion;	// 0x33507615
// declared property getter: - (unsigned)reason;	// 0x335066c9
// declared property setter: - (void)setAcquisitionHandler:(id)handler;	// 0x33506945
// declared property setter: - (void)setFlags:(unsigned)flags;	// 0x33506cd5
// declared property setter: - (void)setInvalidationHandler:(id)handler;	// 0x33506b31
// declared property setter: - (void)setName:(id)name;	// 0x33506ea5
- (void)setReason:(unsigned)reason;	// 0x33506795
- (void)setValid:(BOOL)valid;	// 0x33506641
// declared property getter: - (BOOL)valid;	// 0x33506571
@end

