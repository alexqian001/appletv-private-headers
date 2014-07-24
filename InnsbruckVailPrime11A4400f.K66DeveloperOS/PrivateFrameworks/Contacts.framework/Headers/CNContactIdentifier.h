/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Contacts.framework/Contacts
 */

#import "Contacts-Structs.h"
#import "NSCopying.h"
#import "NSSecureCoding.h"
#import </libobjc.A.h>

@class NSString;

@interface CNContactIdentifier : NSObject <NSCopying, NSSecureCoding> {
	NSString *_stringValue;	// 4 = 0x4
}
@property(readonly, assign) NSString *stringValue;	// G=0x3042fc9d; @synthesize=_stringValue
+ (id)identifierWithString:(id)string;	// 0x3042fae5
+ (BOOL)supportsSecureCoding;	// 0x3042fb2d
- (id)initWithCoder:(id)coder;	// 0x3042fb9d
- (id)initWithString:(id)string;	// 0x3042fb31
- (void).cxx_destruct;	// 0x3042fcb1
- (id)copyWithZone:(NSZone *)zone;	// 0x3042fc99
- (void)encodeWithCoder:(id)coder;	// 0x3042fc35
// declared property getter: - (id)stringValue;	// 0x3042fc9d
@end
