/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
 */

#import <NSObject.h> // Unknown library
#import "StoreKit-Structs.h"

@class SKXPCConnection, SKPaymentQueueClient, NSMutableArray;

@interface SKPaymentQueueInternal : NSObject {
	BOOL _checkedIn;	// 4 = 0x4
	SKPaymentQueueClient *_client;	// 8 = 0x8
	BOOL _isRefreshing;	// 12 = 0xc
	NSMutableArray *_localTransactions;	// 16 = 0x10
	CFArrayRef _observers;	// 20 = 0x14
	SKXPCConnection *_requestConnection;	// 24 = 0x18
	SKXPCConnection *_responseConnection;	// 28 = 0x1c
	BOOL _restoreFinishedDuringRefresh;	// 32 = 0x20
	BOOL _restoringCompletedTransactions;	// 33 = 0x21
	NSMutableArray *_transactions;	// 36 = 0x24
}
- (void)dealloc;	// 0x32a941d1
@end
