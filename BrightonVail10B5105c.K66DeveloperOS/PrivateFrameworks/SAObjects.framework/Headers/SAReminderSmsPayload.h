/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SAReminderPayload.h"
#import "AceObject.h"

@class NSString, NSArray;

@interface SAReminderSmsPayload : AceObject <SAReminderPayload> {
}
@property(copy, nonatomic) NSString *message;	// G=0x303b17a9; S=0x303b17c5; 
@property(copy, nonatomic) NSArray *recipients;	// G=0x303b1815; S=0x303b1831; 
+ (id)smsPayload;	// 0x303b1719
+ (id)smsPayloadWithDictionary:(id)dictionary context:(id)context;	// 0x303b175d
- (id)encodedClassName;	// 0x303b170d
- (id)groupIdentifier;	// 0x303b16fd
// declared property getter: - (id)message;	// 0x303b17a9
// declared property getter: - (id)recipients;	// 0x303b1815
// declared property setter: - (void)setMessage:(id)message;	// 0x303b17c5
// declared property setter: - (void)setRecipients:(id)recipients;	// 0x303b1831
@end

