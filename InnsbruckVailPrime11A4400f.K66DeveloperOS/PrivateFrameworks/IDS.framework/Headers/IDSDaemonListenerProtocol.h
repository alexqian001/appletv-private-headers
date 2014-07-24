/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
 */

#import "NSObject.h"


@protocol IDSDaemonListenerProtocol <NSObject>
@optional
- (void)IDQueryCompletedWithFromURI:(id)uri idStatusUpdates:(id)updates service:(id)service success:(BOOL)success error:(id)error;
- (void)account:(id)account accountInfoChanged:(id)changed;
- (void)account:(id)account aliasesChanged:(id)changed;
- (void)account:(id)account dependentDevicesUpdated:(id)updated;
- (void)account:(id)account displayNameChanged:(id)changed;
- (void)account:(id)account loginChanged:(id)changed;
- (void)account:(id)account profileChanged:(id)changed;
- (void)account:(id)account registrationStatusInfoChanged:(id)changed;
- (void)account:(id)account vettedAliasesChanged:(id)changed;
- (void)accountAdded:(id)added;
- (void)accountDisabled:(id)disabled onService:(id)service;
- (void)accountEnabled:(id)enabled onService:(id)service;
- (void)accountRemoved:(id)removed;
- (void)accountUpdated:(id)updated;
- (void)accountsChanged:(id)changed forTopic:(id)topic;
- (void)activeDevicesUpdatedForAccount:(id)account;
- (void)clearCallerIDForAccount:(id)account;
- (void)daemonConnected;
- (void)daemonDisconnected;
- (void)messageIdentifier:(id)identifier updatedWithResponseCode:(int)responseCode error:(id)error lastCall:(BOOL)call;
- (void)messageReceived:(id)received withGUID:(id)guid withPayload:(id)payload forTopic:(id)topic fromID:(id)anId;
- (void)refreshRegistrationForAccount:(id)account;
- (void)registrationFailedForAccount:(id)account needsDeletion:(id)deletion;
- (void)setupComplete:(BOOL)complete info:(id)info;
- (void)setupCompleteForAccount:(id)account transactionID:(id)anId setupError:(id)error;
@end
