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
@property(assign, getter=isCurrentUser) BOOL currentUser;	// G=0x317f2dd5; S=0x3186d645; converted property
+ (id)organizerWithName:(id)name emailAddress:(id)address address:(id)address3 isCurrentUser:(BOOL)user;	// 0x3186d319
- (id)init;	// 0x3186d365
- (id)initWithName:(id)name emailAddress:(id)address address:(id)address3 isCurrentUser:(BOOL)user;	// 0x3186d3d1
- (id)copyWithZone:(NSZone *)zone;	// 0x3186d491
- (id)description;	// 0x3186d565
// converted property getter: - (BOOL)isCurrentUser;	// 0x317f2dd5
- (id)lazyLoadRelationForKey:(id)key;	// 0x317f6b8d
- (id)owner;	// 0x3186d611
// converted property setter: - (void)setCurrentUser:(BOOL)user;	// 0x3186d645
@end

