/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import "EventKit-Structs.h"
#import "EKPersistentObject.h"
#import "NSCopying.h"

@class NSString;

@interface EKPersistentSharee : EKPersistentObject <NSCopying> {
}
@property(readonly, assign, nonatomic) NSString *UUID;	// G=0x31804e39; 
@property(copy, nonatomic) NSString *displayName;	// G=0x31804e55; S=0x31804e71; 
@property(copy, nonatomic) NSString *emailAddress;	// G=0x31804e8d; S=0x31804ef9; 
@property(copy, nonatomic) NSString *externalID;	// G=0x31804fd9; S=0x31804ff5; 
@property(copy, nonatomic) NSString *firstName;	// G=0x31804f69; S=0x31804f85; 
@property(copy, nonatomic) NSString *lastName;	// G=0x31804fa1; S=0x31804fbd; 
@property(retain) id owner;	// G=0x31805101; S=0x318050e5; converted property
@property(assign, nonatomic) int shareeAccessLevel;	// G=0x31805079; S=0x318050b1; 
@property(assign, nonatomic) int shareeStatus;	// G=0x31805011; S=0x31805049; 
+ (id)defaultPropertiesToLoad;	// 0x31804a95
+ (id)relations;	// 0x31804b01
+ (id)shareeWithEmailAddress:(id)emailAddress name:(id)name;	// 0x31804bd9
+ (id)shareeWithName:(id)name emailAddress:(id)address externalID:(id)anId;	// 0x31804b91
- (id)init;	// 0x31804c19
- (id)initWithEmailAddress:(id)emailAddress name:(id)name;	// 0x31804c6d
- (id)initWithName:(id)name emailAddress:(id)address externalID:(id)anId;	// 0x31804cb5
// declared property getter: - (id)UUID;	// 0x31804e39
- (id)copyWithZone:(NSZone *)zone;	// 0x31804d11
- (id)description;	// 0x3180511d
// declared property getter: - (id)displayName;	// 0x31804e55
// declared property getter: - (id)emailAddress;	// 0x31804e8d
- (int)entityType;	// 0x31804e0d
// declared property getter: - (id)externalID;	// 0x31804fd9
// declared property getter: - (id)firstName;	// 0x31804f69
- (unsigned)hash;	// 0x31804e11
// declared property getter: - (id)lastName;	// 0x31804fa1
// converted property getter: - (id)owner;	// 0x31805101
// declared property setter: - (void)setDisplayName:(id)name;	// 0x31804e71
// declared property setter: - (void)setEmailAddress:(id)address;	// 0x31804ef9
// declared property setter: - (void)setExternalID:(id)anId;	// 0x31804ff5
// declared property setter: - (void)setFirstName:(id)name;	// 0x31804f85
// declared property setter: - (void)setLastName:(id)name;	// 0x31804fbd
// converted property setter: - (void)setOwner:(id)owner;	// 0x318050e5
// declared property setter: - (void)setShareeAccessLevel:(int)level;	// 0x318050b1
// declared property setter: - (void)setShareeStatus:(int)status;	// 0x31805049
// declared property getter: - (int)shareeAccessLevel;	// 0x31805079
// declared property getter: - (int)shareeStatus;	// 0x31805011
@end

