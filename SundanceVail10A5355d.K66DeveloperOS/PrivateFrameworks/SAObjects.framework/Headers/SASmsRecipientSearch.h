/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseClientBoundCommand.h"

@class NSArray, NSURL, SAPerson;

@interface SASmsRecipientSearch : SABaseClientBoundCommand {
}
@property(retain, nonatomic) SAPerson *recipient;	// G=0x36628e2d; S=0x36628e81; 
@property(copy, nonatomic) NSArray *recipients;	// G=0x36628ebd; S=0x36628f39; 
@property(copy, nonatomic) NSURL *targetAppId;	// G=0x36628d51; S=0x36628dcd; 
+ (id)recipientSearch;	// 0x36628cc1
+ (id)recipientSearchWithDictionary:(id)dictionary context:(id)context;	// 0x36628d05
- (id)encodedClassName;	// 0x36628cb5
- (id)groupIdentifier;	// 0x36628ca5
// declared property getter: - (id)recipient;	// 0x36628e2d
// declared property getter: - (id)recipients;	// 0x36628ebd
- (BOOL)requiresResponse;	// 0x36628fa1
// declared property setter: - (void)setRecipient:(id)recipient;	// 0x36628e81
// declared property setter: - (void)setRecipients:(id)recipients;	// 0x36628f39
// declared property setter: - (void)setTargetAppId:(id)anId;	// 0x36628dcd
// declared property getter: - (id)targetAppId;	// 0x36628d51
@end

