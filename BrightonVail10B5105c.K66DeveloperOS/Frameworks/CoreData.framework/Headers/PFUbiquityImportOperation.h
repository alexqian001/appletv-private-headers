/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSOperation.h> // Unknown library

@class NSLock, NSObject;

@interface PFUbiquityImportOperation : NSOperation {
	NSLock *_delegateLock;	// 12 = 0xc
	BOOL _lockedDelegateLock;	// 16 = 0x10
	NSObject *_delegate;	// 20 = 0x14
}
@property(assign) NSObject *delegate;	// G=0x36384bed; S=0x36384c29; 
- (id)init;	// 0x3638498d
- (void)cancel;	// 0x36384a65
- (void)dealloc;	// 0x36384a01
// declared property getter: - (id)delegate;	// 0x36384bed
- (void)lockDelegateLock;	// 0x36384c69
- (id)retainedDelegate;	// 0x36384b9d
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x36384c29
- (void)unlockDelegateLock;	// 0x36384ca1
@end

