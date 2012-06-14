/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */

#import "CoreTelephony-Structs.h"
#import <NSObject.h> // Unknown library


@interface CTMessageCenter : NSObject {
}
+ (id)sharedMessageCenter;	// 0x32183d35
- (id)init;	// 0x32183d7d
- (void)acknowledgeIncomingMessageWithId:(unsigned)anId;	// 0x32184a59
- (void)acknowledgeOutgoingMessageWithId:(unsigned)anId;	// 0x32184aa5
- (id)allIncomingMessages;	// 0x32184911
- (id)decodeMessage:(id)message;	// 0x32184c69
- (id)deferredMessageWithId:(unsigned)anId;	// 0x32184af9
- (id)encodeMessage:(id)message;	// 0x32184c4d
- (BOOL)getCharacterCount:(int *)count andMessageSplitThreshold:(int *)threshold forSmsText:(id)smsText;	// 0x32184f09
- (int)incomingMessageCount;	// 0x321848d5
- (id)incomingMessageWithId:(unsigned)anId;	// 0x32184aad
- (id)incomingMessageWithId:(unsigned)anId telephonyCenter:(CTTelephonyCenterRef)center isDeferred:(BOOL)deferred;	// 0x3218472d
- (XXStruct_K5nmsA)isDeliveryReportsEnabled:(BOOL *)enabled;	// 0x32184c85
- (BOOL)isMmsConfigured;	// 0x32184d4d
- (BOOL)isMmsEnabled;	// 0x32184d35
- (XXStruct_K5nmsA)send:(id)send;	// 0x32184599
- (XXStruct_K5nmsA)send:(id)send withMoreToFollow:(BOOL)follow;	// 0x321845c5
- (XXStruct_K5nmsA)sendMMS:(id)mms;	// 0x3218433d
- (XXStruct_K5nmsA)sendMMSFromData:(id)data messageId:(unsigned)anId;	// 0x32183f51
- (void)sendMessageAsSmsToShortCodeRecipients:(id)shortCodeRecipients andReplaceData:(id *)data;	// 0x32184001
- (XXStruct_K5nmsA)sendSMS:(id)sms withMoreToFollow:(BOOL)follow;	// 0x32183da9
- (BOOL)sendSMSWithText:(id)text serviceCenter:(id)center toAddress:(id)address;	// 0x32184da1
- (BOOL)sendSMSWithText:(id)text serviceCenter:(id)center toAddress:(id)address withMoreToFollow:(BOOL)follow;	// 0x32184dc5
- (void)setDeliveryReportsEnabled:(BOOL)enabled;	// 0x32184d09
- (id)statusOfOutgoingMessages;	// 0x32184b45
@end
