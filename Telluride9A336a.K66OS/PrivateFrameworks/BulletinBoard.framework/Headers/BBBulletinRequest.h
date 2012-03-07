/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

#import "BBBulletin.h"
#import "BulletinBoard-Structs.h"

@class BBContent, NSString, NSDate, NSTimeZone, NSArray, BBAction, BBSound;

@interface BBBulletinRequest : BBBulletin {
}
@property(assign, nonatomic) int accessoryStyle;	// @dynamic
@property(copy, nonatomic) BBAction *acknowledgeAction;	// @dynamic
@property(assign, nonatomic) int addressBookRecordID;	// @dynamic
@property(copy, nonatomic) NSString *bulletinID;	// @dynamic
@property(copy, nonatomic) NSArray *buttons;	// @dynamic
@property(assign, nonatomic) BOOL clearable;	// @dynamic
@property(retain, nonatomic) NSDate *date;	// @dynamic
@property(assign, nonatomic) int dateFormatStyle;	// @dynamic
@property(assign, nonatomic) BOOL dateIsAllDay;	// @dynamic
@property(copy, nonatomic) BBAction *defaultAction;	// @dynamic
@property(retain, nonatomic) NSDate *endDate;	// @dynamic
@property(retain, nonatomic) NSDate *expirationDate;	// @dynamic
@property(copy, nonatomic) BBAction *expireAction;	// @dynamic
@property(assign, nonatomic) BOOL expiresOnPublisherDeath;	// @dynamic
@property(copy, nonatomic) NSString *message;	// @dynamic
@property(retain, nonatomic) BBContent *modalAlertContent;	// @dynamic
@property(assign, nonatomic) int primaryAttachmentType;	// S=0x337e85b1; @dynamic
@property(copy, nonatomic) NSString *publisherBulletinID;	// @dynamic
@property(assign, nonatomic) unsigned realertCount;	// G=0x337e87a9; S=0x337e87b9; 
@property(retain, nonatomic) NSDate *recencyDate;	// @dynamic
@property(copy, nonatomic) NSString *recordID;	// @dynamic
@property(copy, nonatomic) BBAction *replyAction;	// @dynamic
@property(copy, nonatomic) NSString *section;	// @dynamic
@property(copy, nonatomic) NSString *sectionID;	// @dynamic
@property(assign, nonatomic) int sectionSubtype;	// @dynamic
@property(assign, nonatomic) BOOL showsUnreadIndicator;	// G=0x337e8979; S=0x337e8931; 
@property(retain, nonatomic) BBSound *sound;	// @dynamic
@property(copy, nonatomic) NSString *subtitle;	// @dynamic
@property(assign, nonatomic) BOOL tentative;	// G=0x337e89c9; S=0x337e8999; 
@property(retain, nonatomic) NSTimeZone *timeZone;	// @dynamic
@property(copy, nonatomic) NSString *title;	// @dynamic
- (void)addAlertSuppressionAppID:(id)anId;	// 0x337e87c9
- (void)addAttachmentOfType:(int)type;	// 0x337e85e1
- (void)addButton:(id)button;	// 0x337e8611
- (void)generateBulletinID;	// 0x337e892d
- (void)generateNewBulletinID;	// 0x337e8df5
- (BOOL)hasContentModificationsRelativeTo:(id)to;	// 0x337e89e1
- (void)publish;	// 0x337e8771
- (void)publish:(BOOL)publish;	// 0x337e875d
- (id)publisherMatchID;	// 0x337e8dc1
// declared property getter: - (unsigned)realertCount;	// 0x337e87a9
- (void)setContextValue:(id)value forKey:(id)key;	// 0x337e84e9
// declared property setter: - (void)setPrimaryAttachmentType:(int)type;	// 0x337e85b1
// declared property setter: - (void)setRealertCount:(unsigned)count;	// 0x337e87b9
// declared property setter: - (void)setShowsUnreadIndicator:(BOOL)indicator;	// 0x337e8931
// declared property setter: - (void)setTentative:(BOOL)tentative;	// 0x337e8999
- (void)setUnlockActionLabel:(id)label;	// 0x337e8799
// declared property getter: - (BOOL)showsUnreadIndicator;	// 0x337e8979
// declared property getter: - (BOOL)tentative;	// 0x337e89c9
- (void)withdraw;	// 0x337e8785
@end
