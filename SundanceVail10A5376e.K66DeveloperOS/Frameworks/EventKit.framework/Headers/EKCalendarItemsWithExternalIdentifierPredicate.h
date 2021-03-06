/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import <NSPredicate.h> // Unknown library
#import "EventKit-Structs.h"

@class NSString;

@interface EKCalendarItemsWithExternalIdentifierPredicate : NSPredicate {
	NSString *_externalIdentifier;	// 8 = 0x8
}
- (id)initWithCoder:(id)coder;	// 0x367f1345
- (id)initWithExternalIdentifier:(id)externalIdentifier;	// 0x367f1295
- (id)copyWithZone:(NSZone *)zone;	// 0x367f12e9
- (void)dealloc;	// 0x367f12f9
- (void)encodeWithCoder:(id)coder;	// 0x367f13b5
- (BOOL)evaluateWithObject:(id)object;	// 0x367f1411
@end

