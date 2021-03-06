/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import "EKPersistentObject.h"

@class NSURL, NSSet, EKPersistentSource, NSString;

@interface EKPersistentCalendar : EKPersistentObject {
}
@property(readonly, assign, nonatomic) NSString *UUID;	// G=0x31f64569; 
@property(assign, nonatomic) unsigned allowedEntityTypes;	// G=0x31f644c1; S=0x31fdbe3d; 
@property(assign, nonatomic) BOOL allowsContentModifications;	// G=0x31f64525; S=0x31fdb7e5; 
@property(assign, nonatomic) BOOL canBePublished;	// G=0x31fdba31; S=0x31fdba55; 
@property(assign, nonatomic) BOOL canBeShared;	// G=0x31fdbaa5; S=0x31fdbac9; 
@property(assign, nonatomic, getter=isColorDisplayOnly) BOOL colorDisplayOnly;	// G=0x31fdb5e9; S=0x31fdb609; 
@property(copy, nonatomic) NSString *colorString;	// G=0x31f62c3d; S=0x31fdb625; 
@property(assign, nonatomic) int displayOrder;	// G=0x31f6b445; S=0x31fdb6ed; 
@property(copy, nonatomic) NSString *externalID;	// G=0x31fdb595; S=0x31fdb5b1; 
@property(assign, nonatomic, getter=isHidden) BOOL hidden;	// G=0x31fdb8f9; S=0x31fdb91d; 
@property(assign, nonatomic, getter=isImmutable) BOOL immutable;	// G=0x31f750f5; S=0x31fdb96d; 
@property(assign, nonatomic) unsigned invitationStatus;	// G=0x31fdbe05; S=0x31fdbe21; 
@property(readonly, assign, nonatomic) BOOL isDefaultCalendarForSource;	// G=0x31fdbc01; 
@property(assign, nonatomic) BOOL isFacebookBirthdayCalendar;	// G=0x31fdbb8d; S=0x31fdbbb1; 
@property(copy, nonatomic) NSURL *ownerIdentityAddress;	// G=0x31fdbf81; S=0x31fdbf9d; 
@property(copy, nonatomic) NSString *ownerIdentityEmail;	// G=0x31fdbf49; S=0x31fdbf65; 
@property(copy, nonatomic) NSString *ownerIdentityName;	// G=0x31fdbf11; S=0x31fdbf2d; 
@property(assign, nonatomic) BOOL prohibitsScheduling;	// G=0x31fdb835; S=0x31fdb859; 
@property(assign, nonatomic, getter=isPublished) BOOL published;	// G=0x31fdbd3d; S=0x31fdbd5d; 
@property(copy, nonatomic) NSString *publishedURL;	// G=0x31fdbce9; S=0x31fdbd05; 
@property(assign, nonatomic) BOOL schedulingProhibited;	// G=0x31fdbb19; S=0x31fdbb3d; 
@property(copy, nonatomic) NSURL *selfIdentityAddress;	// G=0x31fdbed9; S=0x31fdbef5; 
@property(copy, nonatomic) NSString *selfIdentityEmail;	// G=0x31fdbea1; S=0x31fdbebd; 
@property(copy, nonatomic) NSString *selfIdentityName;	// G=0x31fdbe69; S=0x31fdbe85; 
@property(copy, nonatomic) NSURL *sharedOwnerAddress;	// G=0x31fdbc79; S=0x31fdbc95; 
@property(copy, nonatomic) NSString *sharedOwnerName;	// G=0x31fdbc41; S=0x31fdbc5d; 
@property(copy, nonatomic) NSSet *sharees;	// G=0x31fdbd79; S=0x31fdbd95; 
@property(assign, nonatomic, getter=isSharingInvitation) BOOL sharingInvitation;	// G=0x31fdb9bd; S=0x31fdb9e1; 
@property(assign, nonatomic) int sharingInvitationResponse;	// G=0x31fdbcb1; S=0x31fdbccd; 
@property(assign, nonatomic) int sharingStatus;	// G=0x31f74c4d; S=0x31fdbc25; 
@property(retain, nonatomic) EKPersistentSource *source;	// G=0x31f62ee9; S=0x31fdbde9; 
@property(assign, nonatomic, getter=isSubscribed) BOOL subscribed;	// G=0x31f62db1; S=0x31fdb8a9; 
@property(copy, nonatomic) NSString *title;	// G=0x31f647f9; S=0x31fdb5cd; 
+ (id)calendar;	// 0x31fdb505
+ (id)defaultPropertiesToLoad;	// 0x31f62c59
+ (id)relations;	// 0x31f62f05
- (id)init;	// 0x31fdb53d
// declared property getter: - (id)UUID;	// 0x31f64569
- (void)addSharee:(id)sharee;	// 0x31fdbdb1
// declared property getter: - (unsigned)allowedEntityTypes;	// 0x31f644c1
// declared property getter: - (BOOL)allowsContentModifications;	// 0x31f64525
// declared property getter: - (BOOL)canBePublished;	// 0x31fdba31
// declared property getter: - (BOOL)canBeShared;	// 0x31fdbaa5
// declared property getter: - (id)colorString;	// 0x31f62c3d
- (id)description;	// 0x31fdb709
// declared property getter: - (int)displayOrder;	// 0x31f6b445
- (int)entityType;	// 0x31fdb591
// declared property getter: - (id)externalID;	// 0x31fdb595
// declared property getter: - (unsigned)invitationStatus;	// 0x31fdbe05
// declared property getter: - (BOOL)isColorDisplayOnly;	// 0x31fdb5e9
// declared property getter: - (BOOL)isDefaultCalendarForSource;	// 0x31fdbc01
// declared property getter: - (BOOL)isFacebookBirthdayCalendar;	// 0x31fdbb8d
// declared property getter: - (BOOL)isHidden;	// 0x31fdb8f9
// declared property getter: - (BOOL)isImmutable;	// 0x31f750f5
// declared property getter: - (BOOL)isPublished;	// 0x31fdbd3d
// declared property getter: - (BOOL)isSharingInvitation;	// 0x31fdb9bd
// declared property getter: - (BOOL)isSubscribed;	// 0x31f62db1
// declared property getter: - (id)ownerIdentityAddress;	// 0x31fdbf81
// declared property getter: - (id)ownerIdentityEmail;	// 0x31fdbf49
// declared property getter: - (id)ownerIdentityName;	// 0x31fdbf11
// declared property getter: - (BOOL)prohibitsScheduling;	// 0x31fdb835
// declared property getter: - (id)publishedURL;	// 0x31fdbce9
- (void)removeSharee:(id)sharee;	// 0x31fdbdcd
// declared property getter: - (BOOL)schedulingProhibited;	// 0x31fdbb19
// declared property getter: - (id)selfIdentityAddress;	// 0x31fdbed9
// declared property getter: - (id)selfIdentityEmail;	// 0x31fdbea1
// declared property getter: - (id)selfIdentityName;	// 0x31fdbe69
// declared property setter: - (void)setAllowedEntityTypes:(unsigned)types;	// 0x31fdbe3d
// declared property setter: - (void)setAllowsContentModifications:(BOOL)modifications;	// 0x31fdb7e5
// declared property setter: - (void)setCanBePublished:(BOOL)published;	// 0x31fdba55
// declared property setter: - (void)setCanBeShared:(BOOL)shared;	// 0x31fdbac9
// declared property setter: - (void)setColorDisplayOnly:(BOOL)only;	// 0x31fdb609
// declared property setter: - (void)setColorString:(id)string;	// 0x31fdb625
// declared property setter: - (void)setDisplayOrder:(int)order;	// 0x31fdb6ed
// declared property setter: - (void)setExternalID:(id)anId;	// 0x31fdb5b1
// declared property setter: - (void)setHidden:(BOOL)hidden;	// 0x31fdb91d
// declared property setter: - (void)setImmutable:(BOOL)immutable;	// 0x31fdb96d
// declared property setter: - (void)setInvitationStatus:(unsigned)status;	// 0x31fdbe21
// declared property setter: - (void)setIsFacebookBirthdayCalendar:(BOOL)calendar;	// 0x31fdbbb1
- (void)setIsPublished:(BOOL)published;	// 0x31fdbd21
// declared property setter: - (void)setOwnerIdentityAddress:(id)address;	// 0x31fdbf9d
// declared property setter: - (void)setOwnerIdentityEmail:(id)email;	// 0x31fdbf65
// declared property setter: - (void)setOwnerIdentityName:(id)name;	// 0x31fdbf2d
// declared property setter: - (void)setProhibitsScheduling:(BOOL)scheduling;	// 0x31fdb859
// declared property setter: - (void)setPublished:(BOOL)published;	// 0x31fdbd5d
// declared property setter: - (void)setPublishedURL:(id)url;	// 0x31fdbd05
// declared property setter: - (void)setSchedulingProhibited:(BOOL)prohibited;	// 0x31fdbb3d
// declared property setter: - (void)setSelfIdentityAddress:(id)address;	// 0x31fdbef5
// declared property setter: - (void)setSelfIdentityEmail:(id)email;	// 0x31fdbebd
// declared property setter: - (void)setSelfIdentityName:(id)name;	// 0x31fdbe85
// declared property setter: - (void)setSharedOwnerAddress:(id)address;	// 0x31fdbc95
// declared property setter: - (void)setSharedOwnerName:(id)name;	// 0x31fdbc5d
// declared property setter: - (void)setSharees:(id)sharees;	// 0x31fdbd95
// declared property setter: - (void)setSharingInvitation:(BOOL)invitation;	// 0x31fdb9e1
// declared property setter: - (void)setSharingInvitationResponse:(int)response;	// 0x31fdbccd
// declared property setter: - (void)setSharingStatus:(int)status;	// 0x31fdbc25
// declared property setter: - (void)setSource:(id)source;	// 0x31fdbde9
// declared property setter: - (void)setSubscribed:(BOOL)subscribed;	// 0x31fdb8a9
// declared property setter: - (void)setTitle:(id)title;	// 0x31fdb5cd
- (void)setUUID:(id)uuid;	// 0x31fdb6d1
// declared property getter: - (id)sharedOwnerAddress;	// 0x31fdbc79
// declared property getter: - (id)sharedOwnerName;	// 0x31fdbc41
// declared property getter: - (id)sharees;	// 0x31fdbd79
// declared property getter: - (int)sharingInvitationResponse;	// 0x31fdbcb1
// declared property getter: - (int)sharingStatus;	// 0x31f74c4d
// declared property getter: - (id)source;	// 0x31f62ee9
// declared property getter: - (id)title;	// 0x31f647f9
- (BOOL)validate:(id *)validate;	// 0x31fdbfb9
@end

