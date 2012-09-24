/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import "EventKit-Structs.h"
#import "EKParticipant.h"


@interface EKOrganizer : EKParticipant {
}
@property(assign, getter=isCurrentUser) BOOL currentUser;	// G=0x31372b1d; S=0x313ec7f5; converted property
+ (id)organizerWithName:(id)name emailAddress:(id)address address:(id)address3 isCurrentUser:(BOOL)user;	// 0x313ec4c9
- (id)init;	// 0x313ec515
- (id)initWithName:(id)name emailAddress:(id)address address:(id)address3 isCurrentUser:(BOOL)user;	// 0x313ec581
- (id)copyWithZone:(NSZone *)zone;	// 0x313ec641
- (id)description;	// 0x313ec715
// converted property getter: - (BOOL)isCurrentUser;	// 0x31372b1d
- (id)lazyLoadRelationForKey:(id)key;	// 0x3137689d
- (id)owner;	// 0x313ec7c1
// converted property setter: - (void)setCurrentUser:(BOOL)user;	// 0x313ec7f5
@end
