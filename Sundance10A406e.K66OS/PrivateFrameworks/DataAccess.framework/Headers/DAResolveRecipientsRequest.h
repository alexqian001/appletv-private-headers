/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import <NSObject.h> // Unknown library

@class NSArray;

@interface DAResolveRecipientsRequest : NSObject {
	NSArray *_emailAddresses;	// 4 = 0x4
}
@property(readonly, retain) NSArray *emailAddresses;	// G=0x3079dca9; converted property
- (id)initWithEmailAddresses:(id)emailAddresses;	// 0x3079da69
- (void)dealloc;	// 0x3079dc5d
- (id)description;	// 0x3079dbf5
// converted property getter: - (id)emailAddresses;	// 0x3079dca9
- (unsigned)hash;	// 0x3079dabd
- (BOOL)isEqual:(id)equal;	// 0x3079db85
@end
