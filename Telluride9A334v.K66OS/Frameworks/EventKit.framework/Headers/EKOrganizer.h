/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import "EKParticipant.h"
#import "EventKit-Structs.h"


@interface EKOrganizer : EKParticipant {
}
@property(assign, getter=isCurrentUser) BOOL currentUser;	// G=0x327badc1; S=0x327bae3d; converted property
+ (id)organizerWithName:(id)name emailAddress:(id)address externalID:(id)anId isCurrentUser:(BOOL)user;	// 0x327baa45
- (id)init;	// 0x327baa91
- (id)initWithName:(id)name emailAddress:(id)address externalID:(id)anId isCurrentUser:(BOOL)user;	// 0x327baafd
- (id)copyWithZone:(NSZone *)zone;	// 0x327bab7d
- (id)description;	// 0x327bac51
// converted property getter: - (BOOL)isCurrentUser;	// 0x327badc1
- (id)lazyLoadRelationForKey:(id)key;	// 0x327bacfd
- (id)owner;	// 0x327bad8d
// converted property setter: - (void)setCurrentUser:(BOOL)user;	// 0x327bae3d
@end

