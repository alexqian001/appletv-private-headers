/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import "EKPersistentObject.h"
#import "NSCopying.h"
#import "EventKit-Structs.h"

@class NSString;

@interface EKPersistentParticipant : EKPersistentObject <NSCopying> {
}
@property(readonly, assign, nonatomic) NSString *UUID;	// G=0x345aa0f9; 
@property(copy, nonatomic) NSString *emailAddress;	// G=0x345aa14d; S=0x345aa169; 
@property(copy, nonatomic) NSString *externalID;	// G=0x345aa185; S=0x345aa1a1; 
@property(copy, nonatomic) NSString *name;	// G=0x345aa115; S=0x345aa131; 
+ (id)defaultPropertiesToLoad;	// 0x345a9f8d
- (id)init;	// 0x345aa041
// declared property getter: - (id)UUID;	// 0x345aa0f9
- (id)copyWithZone:(NSZone *)zone;	// 0x345aa095
// declared property getter: - (id)emailAddress;	// 0x345aa14d
// declared property getter: - (id)externalID;	// 0x345aa185
- (unsigned)hash;	// 0x345aa0d1
// declared property getter: - (id)name;	// 0x345aa115
- (id)owner;	// 0x345aa1bd
// declared property setter: - (void)setEmailAddress:(id)address;	// 0x345aa169
// declared property setter: - (void)setExternalID:(id)anId;	// 0x345aa1a1
// declared property setter: - (void)setName:(id)name;	// 0x345aa131
@end

