/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import "EKPersistentObject.h"

@class NSString, NSURL, NSSet, EKPersistentSource;

@interface EKPersistentCalendar : EKPersistentObject {
}
@property(readonly, assign, nonatomic) NSString *UUID;	// G=0x3136af69; 
@property(assign, nonatomic) unsigned allowedEntityTypes;	// G=0x31368965; S=0x313ed8e5; 
@property(assign, nonatomic) BOOL allowsContentModifications;	// G=0x3136b2a9; S=0x313ed2d5; 
@property(assign, nonatomic) BOOL canBePublished;	// G=0x313ed521; S=0x313ed545; 
@property(assign, nonatomic) BOOL canBeShared;	// G=0x313ed595; S=0x313ed5b9; 
@property(assign, nonatomic, getter=isColorDisplayOnly) BOOL colorDisplayOnly;	// G=0x313ed0d9; S=0x313ed0f9; 
@property(copy, nonatomic) NSString *colorString;	// G=0x31371d95; S=0x313ed115; 
@property(assign, nonatomic) int displayOrder;	// G=0x3137b7ad; S=0x313ed1dd; 
@property(copy, nonatomic) NSString *externalID;	// G=0x313ed085; S=0x313ed0a1; 
@property(assign, nonatomic, getter=isHidden) BOOL hidden;	// G=0x3136f369; S=0x313ed3e9; 
@property(assign, nonatomic, getter=isImmutable) BOOL immutable;	// G=0x313ed439; S=0x313ed45d; 
@property(assign, nonatomic) unsigned invitationStatus;	// G=0x313ed8ad; S=0x313ed8c9; 
@property(readonly, assign, nonatomic) BOOL isDefaultCalendarForSource;	// G=0x313ed6a9; 
@property(assign, nonatomic) BOOL isFacebookBirthdayCalendar;	// G=0x31374515; S=0x313ed659; 
@property(copy, nonatomic) NSURL *ownerIdentityAddress;	// G=0x313eda99; S=0x313edab5; 
@property(copy, nonatomic) NSString *ownerIdentityDisplayName;	// G=0x313eda29; S=0x313eda45; 
@property(copy, nonatomic) NSString *ownerIdentityEmail;	// G=0x313eda61; S=0x313eda7d; 
@property(copy, nonatomic) NSString *ownerIdentityFirstName;	// G=0x313edad1; S=0x313edaed; 
@property(copy, nonatomic) NSString *ownerIdentityLastName;	// G=0x313edb09; S=0x313edb25; 
@property(assign, nonatomic) BOOL prohibitsScheduling;	// G=0x313ed325; S=0x313ed349; 
@property(assign, nonatomic, getter=isPublished) BOOL published;	// G=0x313ed7e5; S=0x313ed805; 
@property(copy, nonatomic) NSString *publishedURL;	// G=0x313ed791; S=0x313ed7ad; 
@property(assign, nonatomic) BOOL schedulingProhibited;	// G=0x3137a1a1; S=0x313ed609; 
@property(copy, nonatomic) NSURL *selfIdentityAddress;	// G=0x313ed981; S=0x313ed99d; 
@property(copy, nonatomic) NSString *selfIdentityDisplayName;	// G=0x313ed911; S=0x313ed92d; 
@property(copy, nonatomic) NSString *selfIdentityEmail;	// G=0x313ed949; S=0x313ed965; 
@property(copy, nonatomic) NSString *selfIdentityFirstName;	// G=0x313ed9b9; S=0x313ed9d5; 
@property(copy, nonatomic) NSString *selfIdentityLastName;	// G=0x313ed9f1; S=0x313eda0d; 
@property(copy, nonatomic) NSURL *sharedOwnerAddress;	// G=0x313ed721; S=0x313ed73d; 
@property(copy, nonatomic) NSString *sharedOwnerName;	// G=0x313ed6e9; S=0x313ed705; 
@property(copy, nonatomic) NSSet *sharees;	// G=0x313ed821; S=0x313ed83d; 
@property(assign, nonatomic, getter=isSharingInvitation) BOOL sharingInvitation;	// G=0x313ed4ad; S=0x313ed4d1; 
@property(assign, nonatomic) int sharingInvitationResponse;	// G=0x313ed759; S=0x313ed775; 
@property(assign, nonatomic) int sharingStatus;	// G=0x31378235; S=0x313ed6cd; 
@property(retain, nonatomic) EKPersistentSource *source;	// G=0x313691a1; S=0x313ed891; 
@property(assign, nonatomic, getter=isSubscribed) BOOL subscribed;	// G=0x31371e49; S=0x313ed399; 
@property(copy, nonatomic) NSString *title;	// G=0x31374391; S=0x313ed0bd; 
+ (id)calendar;	// 0x313ecff5
+ (id)defaultPropertiesToLoad;	// 0x313669e9
+ (id)relations;	// 0x31368469
- (id)init;	// 0x313ed02d
// declared property getter: - (id)UUID;	// 0x3136af69
- (void)addSharee:(id)sharee;	// 0x313ed859
// declared property getter: - (unsigned)allowedEntityTypes;	// 0x31368965
// declared property getter: - (BOOL)allowsContentModifications;	// 0x3136b2a9
// declared property getter: - (BOOL)canBePublished;	// 0x313ed521
// declared property getter: - (BOOL)canBeShared;	// 0x313ed595
// declared property getter: - (id)colorString;	// 0x31371d95
- (id)description;	// 0x313ed1f9
// declared property getter: - (int)displayOrder;	// 0x3137b7ad
- (int)entityType;	// 0x313ed081
// declared property getter: - (id)externalID;	// 0x313ed085
// declared property getter: - (unsigned)invitationStatus;	// 0x313ed8ad
// declared property getter: - (BOOL)isColorDisplayOnly;	// 0x313ed0d9
// declared property getter: - (BOOL)isDefaultCalendarForSource;	// 0x313ed6a9
// declared property getter: - (BOOL)isFacebookBirthdayCalendar;	// 0x31374515
// declared property getter: - (BOOL)isHidden;	// 0x3136f369
// declared property getter: - (BOOL)isImmutable;	// 0x313ed439
// declared property getter: - (BOOL)isPublished;	// 0x313ed7e5
// declared property getter: - (BOOL)isSharingInvitation;	// 0x313ed4ad
// declared property getter: - (BOOL)isSubscribed;	// 0x31371e49
// declared property getter: - (id)ownerIdentityAddress;	// 0x313eda99
// declared property getter: - (id)ownerIdentityDisplayName;	// 0x313eda29
// declared property getter: - (id)ownerIdentityEmail;	// 0x313eda61
// declared property getter: - (id)ownerIdentityFirstName;	// 0x313edad1
// declared property getter: - (id)ownerIdentityLastName;	// 0x313edb09
// declared property getter: - (BOOL)prohibitsScheduling;	// 0x313ed325
// declared property getter: - (id)publishedURL;	// 0x313ed791
- (void)removeSharee:(id)sharee;	// 0x313ed875
// declared property getter: - (BOOL)schedulingProhibited;	// 0x3137a1a1
// declared property getter: - (id)selfIdentityAddress;	// 0x313ed981
// declared property getter: - (id)selfIdentityDisplayName;	// 0x313ed911
// declared property getter: - (id)selfIdentityEmail;	// 0x313ed949
// declared property getter: - (id)selfIdentityFirstName;	// 0x313ed9b9
// declared property getter: - (id)selfIdentityLastName;	// 0x313ed9f1
// declared property setter: - (void)setAllowedEntityTypes:(unsigned)types;	// 0x313ed8e5
// declared property setter: - (void)setAllowsContentModifications:(BOOL)modifications;	// 0x313ed2d5
// declared property setter: - (void)setCanBePublished:(BOOL)published;	// 0x313ed545
// declared property setter: - (void)setCanBeShared:(BOOL)shared;	// 0x313ed5b9
// declared property setter: - (void)setColorDisplayOnly:(BOOL)only;	// 0x313ed0f9
// declared property setter: - (void)setColorString:(id)string;	// 0x313ed115
// declared property setter: - (void)setDisplayOrder:(int)order;	// 0x313ed1dd
// declared property setter: - (void)setExternalID:(id)anId;	// 0x313ed0a1
// declared property setter: - (void)setHidden:(BOOL)hidden;	// 0x313ed3e9
// declared property setter: - (void)setImmutable:(BOOL)immutable;	// 0x313ed45d
// declared property setter: - (void)setInvitationStatus:(unsigned)status;	// 0x313ed8c9
// declared property setter: - (void)setIsFacebookBirthdayCalendar:(BOOL)calendar;	// 0x313ed659
- (void)setIsPublished:(BOOL)published;	// 0x313ed7c9
// declared property setter: - (void)setOwnerIdentityAddress:(id)address;	// 0x313edab5
// declared property setter: - (void)setOwnerIdentityDisplayName:(id)name;	// 0x313eda45
// declared property setter: - (void)setOwnerIdentityEmail:(id)email;	// 0x313eda7d
// declared property setter: - (void)setOwnerIdentityFirstName:(id)name;	// 0x313edaed
// declared property setter: - (void)setOwnerIdentityLastName:(id)name;	// 0x313edb25
// declared property setter: - (void)setProhibitsScheduling:(BOOL)scheduling;	// 0x313ed349
// declared property setter: - (void)setPublished:(BOOL)published;	// 0x313ed805
// declared property setter: - (void)setPublishedURL:(id)url;	// 0x313ed7ad
// declared property setter: - (void)setSchedulingProhibited:(BOOL)prohibited;	// 0x313ed609
// declared property setter: - (void)setSelfIdentityAddress:(id)address;	// 0x313ed99d
// declared property setter: - (void)setSelfIdentityDisplayName:(id)name;	// 0x313ed92d
// declared property setter: - (void)setSelfIdentityEmail:(id)email;	// 0x313ed965
// declared property setter: - (void)setSelfIdentityFirstName:(id)name;	// 0x313ed9d5
// declared property setter: - (void)setSelfIdentityLastName:(id)name;	// 0x313eda0d
// declared property setter: - (void)setSharedOwnerAddress:(id)address;	// 0x313ed73d
// declared property setter: - (void)setSharedOwnerName:(id)name;	// 0x313ed705
// declared property setter: - (void)setSharees:(id)sharees;	// 0x313ed83d
// declared property setter: - (void)setSharingInvitation:(BOOL)invitation;	// 0x313ed4d1
// declared property setter: - (void)setSharingInvitationResponse:(int)response;	// 0x313ed775
// declared property setter: - (void)setSharingStatus:(int)status;	// 0x313ed6cd
// declared property setter: - (void)setSource:(id)source;	// 0x313ed891
// declared property setter: - (void)setSubscribed:(BOOL)subscribed;	// 0x313ed399
// declared property setter: - (void)setTitle:(id)title;	// 0x313ed0bd
- (void)setUUID:(id)uuid;	// 0x313ed1c1
// declared property getter: - (id)sharedOwnerAddress;	// 0x313ed721
// declared property getter: - (id)sharedOwnerName;	// 0x313ed6e9
// declared property getter: - (id)sharees;	// 0x313ed821
// declared property getter: - (int)sharingInvitationResponse;	// 0x313ed759
// declared property getter: - (int)sharingStatus;	// 0x31378235
// declared property getter: - (id)source;	// 0x313691a1
// declared property getter: - (id)title;	// 0x31374391
- (BOOL)validate:(id *)validate;	// 0x313edb41
@end

