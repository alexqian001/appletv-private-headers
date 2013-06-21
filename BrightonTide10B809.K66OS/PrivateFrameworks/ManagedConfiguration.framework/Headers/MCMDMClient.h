/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import "ManagedConfiguration-Structs.h"
#import <NSObject.h> // Unknown library

@class CPDistributedMessagingCenter;

@interface MCMDMClient : NSObject {
	CPDistributedMessagingCenter *_messageCenter;	// 4 = 0x4
}
+ (id)sharedClient;	// 0x344c4cc9
- (id)init;	// 0x344c4d41
- (void).cxx_destruct;	// 0x344c5441
- (BOOL)authenticateWithCheckInURL:(id)url identity:(SecIdentity *)identity topic:(id)topic useDevelopmentAPNS:(BOOL)apns signMessage:(BOOL)message outError:(id *)error;	// 0x344c4dc9
- (BOOL)checkOutCheckInURL:(id)url identity:(SecIdentity *)identity topic:(id)topic signMessage:(BOOL)message outError:(id *)error;	// 0x344c50a1
- (void)notifyNewConfiguration;	// 0x344c5371
- (void)removeManagedAppsAccordingToFlags;	// 0x344c5401
- (void)scheduleTokenUpdate;	// 0x344c53a1
- (void)simulatePush;	// 0x344c53d1
@end
