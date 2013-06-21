/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
 */

#import <NSObject.h> // Unknown library


@interface SBSRemoteNotificationClient : NSObject {
}
+ (unsigned)_remoteNotificationServerPort;	// 0x35464acd
+ (int)enabledRemoteNotificationTypes;	// 0x3546485d
+ (id)getPendingNotificationUserInfo;	// 0x35464879
+ (void)getSupportedTypes:(id *)types enabledTypes:(id *)types2;	// 0x35464955
+ (BOOL)hasRegisteredBundleIdentifiers;	// 0x35464935
+ (BOOL)isSystemwideEnabled;	// 0x35464901
+ (void)registerForRemoteNotificationTypes:(int)remoteNotificationTypes;	// 0x35464849
+ (void)setEnabledNotificationTypes:(int)types forBundleIdentifier:(id)bundleIdentifier;	// 0x35464a9d
+ (void)setSystemwideEnabled:(BOOL)enabled;	// 0x35464921
@end
