/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

#import "BulletinBoard-Structs.h"
#import "NSCoding.h"
#import "NSCopying.h"
#import <NSObject.h> // Unknown library

@class NSDictionary, NSMutableArray, NSData, BBAction, BBSound, BBAttachments, NSString, NSArray, NSSet, NSDate, BBContent, NSTimeZone, NSMutableDictionary, BBObserver;

@interface BBBulletin : NSObject <NSCopying, NSCoding> {
	NSString *_sectionID;	// 4 = 0x4
	NSSet *_subsectionIDs;	// 8 = 0x8
	NSString *_publisherRecordID;	// 12 = 0xc
	NSString *_publisherBulletinID;	// 16 = 0x10
	int _addressBookRecordID;	// 20 = 0x14
	int _sectionSubtype;	// 24 = 0x18
	BBContent *_content;	// 28 = 0x1c
	BBContent *_modalAlertContent;	// 32 = 0x20
	NSDate *_date;	// 36 = 0x24
	NSDate *_endDate;	// 40 = 0x28
	NSDate *_recencyDate;	// 44 = 0x2c
	int _dateFormatStyle;	// 48 = 0x30
	BOOL _dateIsAllDay;	// 52 = 0x34
	NSTimeZone *_timeZone;	// 56 = 0x38
	int _accessoryStyle;	// 60 = 0x3c
	BOOL _clearable;	// 64 = 0x40
	BBSound *_sound;	// 68 = 0x44
	BBAttachments *_attachments;	// 72 = 0x48
	NSString *_unlockActionLabelOverride;	// 76 = 0x4c
	NSMutableDictionary *_actions;	// 80 = 0x50
	NSArray *_buttons;	// 84 = 0x54
	BOOL _expiresOnPublisherDeath;	// 88 = 0x58
	NSDictionary *_context;	// 92 = 0x5c
	NSDate *_expirationDate;	// 96 = 0x60
	unsigned _expirationEvents;	// 100 = 0x64
	NSSet *_alertSuppressionContexts;	// 104 = 0x68
	NSString *_bulletinID;	// 108 = 0x6c
	NSDate *_lastInterruptDate;	// 112 = 0x70
	BOOL _showsMessagePreview;	// 116 = 0x74
	NSString *_bulletinVersionID;	// 120 = 0x78
	NSMutableArray *_lifeAssertions;	// 124 = 0x7c
	BBObserver *_observer;	// 128 = 0x80
	unsigned realertCount_deprecated;	// 132 = 0x84
	NSSet *alertSuppressionAppIDs_deprecated;	// 136 = 0x88
}
@property(assign, nonatomic) int accessoryStyle;	// G=0x32c2cf79; S=0x32c2cf89; @synthesize=_accessoryStyle
@property(copy, nonatomic) BBAction *acknowledgeAction;	// G=0x32c2b2e9; S=0x32c2b311; 
@property(retain, nonatomic) NSMutableDictionary *actions;	// G=0x32c2d00d; S=0x32c2d01d; @synthesize=_actions
@property(assign, nonatomic) int addressBookRecordID;	// G=0x32c2ce49; S=0x32c2ce59; @synthesize=_addressBookRecordID
@property(readonly, assign, nonatomic) NSSet *alertSuppressionAppIDs;	// G=0x32c46d9d; 
@property(copy, nonatomic) NSSet *alertSuppressionAppIDs_deprecated;	// G=0x32c2d1bd; S=0x32c2d1d1; @synthesize
@property(copy, nonatomic) NSSet *alertSuppressionContexts;	// G=0x32c2d0c1; S=0x32c2af41; @synthesize=_alertSuppressionContexts
@property(copy, nonatomic) BBAction *alternateAction;	// G=0x32c2b269; S=0x32c2b291; 
@property(retain, nonatomic) BBAttachments *attachments;	// G=0x32c2b181; S=0x32c2cfd9; @synthesize=_attachments
@property(readonly, assign, nonatomic) BOOL bannerShowsSubtitle;	// G=0x32c470d1; 
@property(copy, nonatomic) NSString *bulletinID;	// G=0x32c2d0d5; S=0x32c2d0e9; @synthesize=_bulletinID
@property(copy, nonatomic) NSString *bulletinVersionID;	// G=0x32c2d139; S=0x32c2d14d; @synthesize=_bulletinVersionID
@property(copy, nonatomic) NSArray *buttons;	// G=0x32c2d02d; S=0x32c2b429; @synthesize=_buttons
@property(assign, nonatomic) BOOL clearable;	// G=0x32c2cf99; S=0x32c2cfa9; @synthesize=_clearable
@property(readonly, assign, nonatomic) BOOL coalescesWhenLocked;	// G=0x32c46e31; 
@property(retain, nonatomic) BBContent *content;	// G=0x32c2aef1; S=0x32c2ce89; @synthesize=_content
@property(retain, nonatomic) NSDictionary *context;	// G=0x32c2d061; S=0x32c2d071; @synthesize=_context
@property(retain, nonatomic) NSDate *date;	// G=0x32c2ceb9; S=0x32c2cec9; @synthesize=_date
@property(assign, nonatomic) int dateFormatStyle;	// G=0x32c2cf19; S=0x32c2cf29; @synthesize=_dateFormatStyle
@property(assign, nonatomic) BOOL dateIsAllDay;	// G=0x32c2cf39; S=0x32c2cf49; @synthesize=_dateIsAllDay
@property(copy, nonatomic) BBAction *defaultAction;	// G=0x32c2b1e9; S=0x32c2b211; 
@property(retain, nonatomic) NSDate *endDate;	// G=0x32c2ced9; S=0x32c2cee9; @synthesize=_endDate
@property(retain, nonatomic) NSDate *expirationDate;	// G=0x32c2d081; S=0x32c2d091; @synthesize=_expirationDate
@property(assign, nonatomic) unsigned expirationEvents;	// G=0x32c2d0a1; S=0x32c2d0b1; @synthesize=_expirationEvents
@property(copy, nonatomic) BBAction *expireAction;	// G=0x32c2b369; S=0x32c2b391; 
@property(assign, nonatomic) BOOL expiresOnPublisherDeath;	// G=0x32c2d041; S=0x32c2d051; @synthesize=_expiresOnPublisherDeath
@property(readonly, assign, nonatomic) NSString *fullUnlockActionLabel;	// G=0x32c46c8d; 
@property(readonly, assign, nonatomic) int iPodOutAlertType;	// G=0x32c47245; 
@property(readonly, assign, nonatomic) BOOL inertWhenLocked;	// G=0x32c46fd9; 
@property(retain, nonatomic) NSDate *lastInterruptDate;	// G=0x32c2d0f9; S=0x32c2d109; @synthesize=_lastInterruptDate
@property(retain, nonatomic) NSMutableArray *lifeAssertions;	// G=0x32c2d15d; S=0x32c2d16d; @synthesize=_lifeAssertions
@property(copy, nonatomic) NSString *message;	// G=0x32c2ae25; S=0x32c2aeb5; 
@property(readonly, assign, nonatomic) unsigned messageNumberOfLines;	// G=0x32c46a11; 
@property(readonly, assign, nonatomic) NSString *missedBannerDescriptionFormat;	// G=0x32c46c11; 
@property(retain, nonatomic) BBContent *modalAlertContent;	// G=0x32c2ce99; S=0x32c2cea9; @synthesize=_modalAlertContent
@property(retain, nonatomic) BBObserver *observer;	// G=0x32c2d17d; S=0x32c2d18d; @synthesize=_observer
@property(readonly, assign, nonatomic) BOOL orderSectionUsingRecencyDate;	// G=0x32c46ab9; 
@property(readonly, assign, nonatomic) BOOL preservesUnlockActionCase;	// G=0x32c47055; 
@property(readonly, assign, nonatomic) int primaryAttachmentType;	// G=0x32c2b105; 
@property(copy, nonatomic) NSString *publisherBulletinID;	// G=0x32c2ce25; S=0x32c2ce39; @synthesize=_publisherBulletinID
@property(readonly, assign, nonatomic) unsigned realertCount;	// G=0x32c46f45; 
@property(assign, nonatomic) unsigned realertCount_deprecated;	// G=0x32c2d19d; S=0x32c2d1ad; @synthesize
@property(retain, nonatomic) NSDate *recencyDate;	// G=0x32c2cef9; S=0x32c2cf09; @synthesize=_recencyDate
@property(copy, nonatomic) NSString *recordID;	// G=0x32c2ce01; S=0x32c2ce15; @synthesize=_publisherRecordID
@property(copy, nonatomic) NSString *section;	// G=0x32c2ae4d; S=0x32c2aee1; 
@property(readonly, assign, nonatomic) NSString *sectionDisplayName;	// G=0x32c468c1; 
@property(readonly, assign, nonatomic) BOOL sectionDisplaysCriticalBulletins;	// G=0x32c46969; 
@property(copy, nonatomic) NSString *sectionID;	// G=0x32c2cdb9; S=0x32c2cdcd; @synthesize=_sectionID
@property(readonly, assign, nonatomic) NSData *sectionIconData;	// G=0x32c46915; 
@property(assign, nonatomic) int sectionSubtype;	// G=0x32c2ce69; S=0x32c2ce79; @synthesize=_sectionSubtype
@property(readonly, assign, nonatomic) BOOL showsDateInFloatingLockScreenAlert;	// G=0x32c46b0d; 
@property(assign, nonatomic) BOOL showsMessagePreview;	// G=0x32c2d119; S=0x32c2d129; @synthesize=_showsMessagePreview
@property(readonly, assign, nonatomic) BOOL showsSubtitle;	// G=0x32c469bd; 
@property(retain, nonatomic) BBSound *sound;	// G=0x32c2cfb9; S=0x32c2cfc9; @synthesize=_sound
@property(copy, nonatomic) NSSet *subsectionIDs;	// G=0x32c2cddd; S=0x32c2cdf1; @synthesize=_subsectionIDs
@property(copy, nonatomic) NSString *subtitle;	// G=0x32c2adfd; S=0x32c2ae89; 
@property(readonly, assign, nonatomic) unsigned subtypePriority;	// G=0x32c471c9; 
@property(readonly, assign, nonatomic) BOOL suppressesMessageForPrivacy;	// G=0x32c46ead; 
@property(retain, nonatomic) NSTimeZone *timeZone;	// G=0x32c2cf59; S=0x32c2cf69; @synthesize=_timeZone
@property(copy, nonatomic) NSString *title;	// G=0x32c2add5; S=0x32c2ae5d; 
@property(readonly, assign, nonatomic) NSString *topic;	// G=0x32c46b61; 
@property(readonly, assign, nonatomic) NSString *unlockActionLabel;	// G=0x32c46d09; 
@property(copy, nonatomic) NSString *unlockActionLabelOverride;	// G=0x32c2cfe9; S=0x32c2cffd; @synthesize=_unlockActionLabelOverride
@property(readonly, assign, nonatomic) BOOL usesVariableLayout;	// G=0x32c46a65; 
@property(readonly, assign, nonatomic) BOOL visuallyIndicatesWhenDateIsInFuture;	// G=0x32c4714d; 
+ (void)addBulletinToCache:(id)cache;	// 0x32c2a859
+ (id)bulletinWithBulletin:(id)bulletin;	// 0x32c2a7f5
+ (id)copyCachedBulletinWithBulletinID:(id)bulletinID;	// 0x32c2aa49
+ (void)removeBulletinFromCache:(id)cache;	// 0x32c2a93d
- (id)init;	// 0x32c2aac5
- (id)initWithCoder:(id)coder;	// 0x32c2c07d
- (id)_actionKeyForButtonIndex:(unsigned)buttonIndex;	// 0x32c2b3e9
- (void)_fillOutCopy:(id)copy withZone:(NSZone *)zone;	// 0x32c2b9c9
- (id)_responseForActionKey:(id)actionKey;	// 0x32c2b60d
// declared property getter: - (int)accessoryStyle;	// 0x32c2cf79
// declared property getter: - (id)acknowledgeAction;	// 0x32c2b2e9
// declared property getter: - (id)actions;	// 0x32c2d00d
- (void)addLifeAssertion:(id)assertion;	// 0x32c2bfb9
// declared property getter: - (int)addressBookRecordID;	// 0x32c2ce49
// declared property getter: - (id)alertSuppressionAppIDs;	// 0x32c46d9d
// declared property getter: - (id)alertSuppressionAppIDs_deprecated;	// 0x32c2d1bd
// declared property getter: - (id)alertSuppressionContexts;	// 0x32c2d0c1
// declared property getter: - (id)alternateAction;	// 0x32c2b269
// declared property getter: - (id)attachments;	// 0x32c2b181
- (id)attachmentsCreatingIfNecessary:(BOOL)necessary;	// 0x32c2b195
// declared property getter: - (BOOL)bannerShowsSubtitle;	// 0x32c470d1
// declared property getter: - (id)bulletinID;	// 0x32c2d0d5
// declared property getter: - (id)bulletinVersionID;	// 0x32c2d139
// declared property getter: - (id)buttons;	// 0x32c2d02d
// declared property getter: - (BOOL)clearable;	// 0x32c2cf99
// declared property getter: - (BOOL)coalescesWhenLocked;	// 0x32c46e31
- (id)composedAttachmentImage;	// 0x32c4924d
- (id)composedAttachmentImageForKey:(id)key;	// 0x32c4929d
- (id)composedAttachmentImageForKey:(id)key withObserver:(id)observer;	// 0x32c491d5
- (CGSize)composedAttachmentImageSize;	// 0x32c4926d
- (CGSize)composedAttachmentImageSizeForKey:(id)key;	// 0x32c492d1
- (CGSize)composedAttachmentImageSizeForKey:(id)key withObserver:(id)observer;	// 0x32c49209
- (CGSize)composedAttachmentImageSizeWithObserver:(id)observer;	// 0x32c4919d
- (id)composedAttachmentImageWithObserver:(id)observer;	// 0x32c4917d
// declared property getter: - (id)content;	// 0x32c2aef1
// declared property getter: - (id)context;	// 0x32c2d061
- (id)copyWithZone:(NSZone *)zone;	// 0x32c2c025
// declared property getter: - (id)date;	// 0x32c2ceb9
// declared property getter: - (int)dateFormatStyle;	// 0x32c2cf19
// declared property getter: - (BOOL)dateIsAllDay;	// 0x32c2cf39
- (void)dealloc;	// 0x32c2ab59
// declared property getter: - (id)defaultAction;	// 0x32c2b1e9
- (void)deliverResponse:(id)response;	// 0x32c2b8d9
- (id)description;	// 0x32c2cc4d
- (void)encodeWithCoder:(id)coder;	// 0x32c2c775
// declared property getter: - (id)endDate;	// 0x32c2ced9
// declared property getter: - (id)expirationDate;	// 0x32c2d081
// declared property getter: - (unsigned)expirationEvents;	// 0x32c2d0a1
// declared property getter: - (id)expireAction;	// 0x32c2b369
// declared property getter: - (BOOL)expiresOnPublisherDeath;	// 0x32c2d041
// declared property getter: - (id)fullUnlockActionLabel;	// 0x32c46c8d
// declared property getter: - (int)iPodOutAlertType;	// 0x32c47245
// declared property getter: - (BOOL)inertWhenLocked;	// 0x32c46fd9
// declared property getter: - (id)lastInterruptDate;	// 0x32c2d0f9
// declared property getter: - (id)lifeAssertions;	// 0x32c2d15d
// declared property getter: - (id)message;	// 0x32c2ae25
// declared property getter: - (unsigned)messageNumberOfLines;	// 0x32c46a11
// declared property getter: - (id)missedBannerDescriptionFormat;	// 0x32c46c11
// declared property getter: - (id)modalAlertContent;	// 0x32c2ce99
- (unsigned)numberOfAdditionalAttachments;	// 0x32c2b12d
- (unsigned)numberOfAdditionalAttachmentsOfType:(int)type;	// 0x32c2b155
// declared property getter: - (id)observer;	// 0x32c2d17d
// declared property getter: - (BOOL)orderSectionUsingRecencyDate;	// 0x32c46ab9
// declared property getter: - (BOOL)preservesUnlockActionCase;	// 0x32c47055
// declared property getter: - (int)primaryAttachmentType;	// 0x32c2b105
// declared property getter: - (id)publisherBulletinID;	// 0x32c2ce25
// declared property getter: - (unsigned)realertCount;	// 0x32c46f45
// declared property getter: - (unsigned)realertCount_deprecated;	// 0x32c2d19d
// declared property getter: - (id)recencyDate;	// 0x32c2cef9
// declared property getter: - (id)recordID;	// 0x32c2ce01
- (id)responseForAcknowledgeAction;	// 0x32c2b741
- (id)responseForButtonActionAtIndex:(unsigned)index;	// 0x32c2b75d
- (id)responseForDefaultAction;	// 0x32c2b725
- (id)responseForExpireAction;	// 0x32c2b78d
- (id)responseSendBlock;	// 0x32c2b84d
// declared property getter: - (id)section;	// 0x32c2ae4d
// declared property getter: - (id)sectionDisplayName;	// 0x32c468c1
// declared property getter: - (BOOL)sectionDisplaysCriticalBulletins;	// 0x32c46969
// declared property getter: - (id)sectionID;	// 0x32c2cdb9
// declared property getter: - (id)sectionIconData;	// 0x32c46915
// declared property getter: - (int)sectionSubtype;	// 0x32c2ce69
// declared property setter: - (void)setAccessoryStyle:(int)style;	// 0x32c2cf89
// declared property setter: - (void)setAcknowledgeAction:(id)action;	// 0x32c2b311
// declared property setter: - (void)setActions:(id)actions;	// 0x32c2d01d
// declared property setter: - (void)setAddressBookRecordID:(int)anId;	// 0x32c2ce59
// declared property setter: - (void)setAlertSuppressionAppIDs_deprecated:(id)deprecated;	// 0x32c2d1d1
// declared property setter: - (void)setAlertSuppressionContexts:(id)contexts;	// 0x32c2af41
// declared property setter: - (void)setAlternateAction:(id)action;	// 0x32c2b291
// declared property setter: - (void)setAttachments:(id)attachments;	// 0x32c2cfd9
// declared property setter: - (void)setBulletinID:(id)anId;	// 0x32c2d0e9
// declared property setter: - (void)setBulletinVersionID:(id)anId;	// 0x32c2d14d
// declared property setter: - (void)setButtons:(id)buttons;	// 0x32c2b429
// declared property setter: - (void)setClearable:(BOOL)clearable;	// 0x32c2cfa9
// declared property setter: - (void)setContent:(id)content;	// 0x32c2ce89
// declared property setter: - (void)setContext:(id)context;	// 0x32c2d071
// declared property setter: - (void)setDate:(id)date;	// 0x32c2cec9
// declared property setter: - (void)setDateFormatStyle:(int)style;	// 0x32c2cf29
// declared property setter: - (void)setDateIsAllDay:(BOOL)day;	// 0x32c2cf49
// declared property setter: - (void)setDefaultAction:(id)action;	// 0x32c2b211
// declared property setter: - (void)setEndDate:(id)date;	// 0x32c2cee9
// declared property setter: - (void)setExpirationDate:(id)date;	// 0x32c2d091
// declared property setter: - (void)setExpirationEvents:(unsigned)events;	// 0x32c2d0b1
// declared property setter: - (void)setExpireAction:(id)action;	// 0x32c2b391
// declared property setter: - (void)setExpiresOnPublisherDeath:(BOOL)death;	// 0x32c2d051
// declared property setter: - (void)setLastInterruptDate:(id)date;	// 0x32c2d109
// declared property setter: - (void)setLifeAssertions:(id)assertions;	// 0x32c2d16d
// declared property setter: - (void)setMessage:(id)message;	// 0x32c2aeb5
// declared property setter: - (void)setModalAlertContent:(id)content;	// 0x32c2cea9
// declared property setter: - (void)setObserver:(id)observer;	// 0x32c2d18d
// declared property setter: - (void)setPublisherBulletinID:(id)anId;	// 0x32c2ce39
// declared property setter: - (void)setRealertCount_deprecated:(unsigned)deprecated;	// 0x32c2d1ad
// declared property setter: - (void)setRecencyDate:(id)date;	// 0x32c2cf09
// declared property setter: - (void)setRecordID:(id)anId;	// 0x32c2ce15
// declared property setter: - (void)setSection:(id)section;	// 0x32c2aee1
// declared property setter: - (void)setSectionID:(id)anId;	// 0x32c2cdcd
// declared property setter: - (void)setSectionSubtype:(int)subtype;	// 0x32c2ce79
// declared property setter: - (void)setShowsMessagePreview:(BOOL)preview;	// 0x32c2d129
// declared property setter: - (void)setSound:(id)sound;	// 0x32c2cfc9
// declared property setter: - (void)setSubsectionIDs:(id)ids;	// 0x32c2cdf1
// declared property setter: - (void)setSubtitle:(id)subtitle;	// 0x32c2ae89
// declared property setter: - (void)setTimeZone:(id)zone;	// 0x32c2cf69
// declared property setter: - (void)setTitle:(id)title;	// 0x32c2ae5d
// declared property setter: - (void)setUnlockActionLabelOverride:(id)override;	// 0x32c2cffd
// declared property getter: - (BOOL)showsDateInFloatingLockScreenAlert;	// 0x32c46b0d
// declared property getter: - (BOOL)showsMessagePreview;	// 0x32c2d119
// declared property getter: - (BOOL)showsSubtitle;	// 0x32c469bd
// declared property getter: - (id)sound;	// 0x32c2cfb9
// declared property getter: - (id)subsectionIDs;	// 0x32c2cddd
// declared property getter: - (id)subtitle;	// 0x32c2adfd
// declared property getter: - (unsigned)subtypePriority;	// 0x32c471c9
// declared property getter: - (BOOL)suppressesMessageForPrivacy;	// 0x32c46ead
// declared property getter: - (id)timeZone;	// 0x32c2cf59
// declared property getter: - (id)title;	// 0x32c2add5
// declared property getter: - (id)topic;	// 0x32c46b61
// declared property getter: - (id)unlockActionLabel;	// 0x32c46d09
// declared property getter: - (id)unlockActionLabelOverride;	// 0x32c2cfe9
// declared property getter: - (BOOL)usesVariableLayout;	// 0x32c46a65
// declared property getter: - (BOOL)visuallyIndicatesWhenDateIsInFuture;	// 0x32c4714d
@end

