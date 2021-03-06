/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

#import "BulletinBoard-Structs.h"
#import <NSObject.h> // Unknown library
#import "XPCProxyTarget.h"

@class NSMutableDictionary, NSMapTable, NSMutableSet;
@protocol BBObserverDelegate;

@interface BBObserver : NSObject <XPCProxyTarget> {
@private
	id _serverProxy;	// 4 = 0x4
	struct {
		unsigned addBulletin : 1;
		unsigned modifyBulletin : 1;
		unsigned removeBulletin : 1;
		unsigned sectionOrderRule : 1;
		unsigned sectionOrder : 1;
		unsigned sectionInfo : 1;
		unsigned sectionParameters : 1;
		unsigned fetchImage : 1;
		unsigned fetchSize : 1;
		unsigned sizeConstraints : 1;
		unsigned multiSizeConstraints : 1;
		unsigned imageForThumbData : 1;
		unsigned sizeForThumbSize : 1;
		unsigned purgeReferences : 1;
	} _delegateFlags;	// 8 = 0x8
	NSMapTable *_bulletinLifeAssertions;	// 12 = 0xc
	NSMutableDictionary *_sectionParameters;	// 16 = 0x10
	NSMutableDictionary *_attachmentInfoByBulletinID;	// 20 = 0x14
	unsigned _numberOfBulletinFetchesUnderway;	// 24 = 0x18
	NSMutableSet *_sectionIDsWithUpdatesUnderway;	// 28 = 0x1c
	NSMutableDictionary *_bulletinUpdateQueuesBySectionID;	// 32 = 0x20
	id<BBObserverDelegate> _delegate;	// 36 = 0x24
	unsigned _observerFeed;	// 40 = 0x28
}
@property(assign, nonatomic) id<BBObserverDelegate> delegate;	// G=0x3148a441; S=0x3148713d; @synthesize=_delegate
@property(assign, nonatomic) unsigned observerFeed;	// G=0x3148a451; S=0x314873e1; @synthesize=_observerFeed
+ (void)initialize;	// 0x31486e41
- (id)init;	// 0x31486e45
- (BOOL)_attachmentImagesFetchedForBulletinID:(id)bulletinID;	// 0x314883dd
- (id)_attachmentInfoForBulletinID:(id)bulletinID create:(BOOL)create;	// 0x3148820d
- (BOOL)_attachmentSizesFetchedForBulletinID:(id)bulletinID;	// 0x31488405
- (void)_dequeueBulletinUpdateIfPossibleForSection:(id)section;	// 0x31489d49
- (void)_fetchAndProcessImageForBulletinID:(id)bulletinID withKey:(id)key constraints:(id)constraints attachmentType:(int)type completion:(id)completion;	// 0x314885b5
- (void)_getAttachmentImagesIfPossibleForBulletin:(id)bulletin withCompletion:(id)completion;	// 0x3148873d
- (void)_getAttachmentImagesIfPossibleForBulletins:(id)bulletins withCompletion:(id)completion;	// 0x31488ac9
- (void)_getAttachmentSizesIfPossibleForBulletin:(id)bulletin withCompletion:(id)completion;	// 0x31488d19
- (void)_getAttachmentSizesIfPossibleForBulletins:(id)bulletins withCompletion:(id)completion;	// 0x31489185
- (void)_getParametersIfNecessaryForSectionID:(id)sectionID withCompletion:(id)completion;	// 0x31487dbd
- (void)_getParametersIfNecessaryForSectionIDs:(id)sectionIDs withCompletion:(id)completion;	// 0x31487f89
- (id)_lifeAssertionForBulletinID:(id)bulletinID;	// 0x31489625
- (void)_noteAttachmentImagesFetchedForBulletinID:(id)bulletinID;	// 0x31488385
- (void)_noteAttachmentSizesFetchedForBulletinID:(id)bulletinID;	// 0x314883b1
- (void)_noteCompletedBulletinFetch;	// 0x31489bb9
- (void)_noteCompletedBulletinUpdateForSection:(id)section;	// 0x31489ac1
- (void)_performBulletinFetch:(id)fetch;	// 0x31489b49
- (void)_performOrEnqueueBulletinUpdate:(id)update forSection:(id)section;	// 0x314898f1
- (void)_preFetchAttachmentInfoIfNecessaryForBulletin:(id)bulletin withCompletion:(id)completion;	// 0x314893d5
- (void)_preFetchAttachmentInfoIfNecessaryForBulletins:(id)bulletins withCompletion:(id)completion;	// 0x31489481
- (id)_reasonableConstraintsForAttachmentType:(int)attachmentType;	// 0x3148842d
- (void)_registerBulletin:(id)bulletin withTransactionID:(unsigned)transactionID;	// 0x314896dd
- (void)_setAttachmentImage:(id)image forKey:(id)key forBulletinID:(id)bulletinID;	// 0x3148831d
- (void)_setAttachmentSize:(CGSize)size forKey:(id)key forBulletinID:(id)bulletinID;	// 0x31488351
- (void)assertionExpired:(id)expired transactionID:(unsigned)anId;	// 0x3148952d
- (id)attachmentImageForKey:(id)key forBulletinID:(id)bulletinID;	// 0x314882a9
- (CGSize)attachmentSizeForKey:(id)key forBulletinID:(id)bulletinID;	// 0x314882d9
- (void)clearSection:(id)section;	// 0x31487d99
- (void)dealloc;	// 0x3148708d
// declared property getter: - (id)delegate;	// 0x3148a441
- (void)getAttachmentImageForBulletin:(id)bulletin withCompletion:(id)completion;	// 0x31487d29
- (void)getRecentUnacknowledgedBulletinsForFeeds:(unsigned)feeds withCompletion:(id)completion;	// 0x31487745
- (void)getSectionInfoWithCompletion:(id)completion;	// 0x3148758d
- (void)getSectionOrderRuleWithCompletion:(id)completion;	// 0x314874b1
- (void)getSortDescriptorsForSectionID:(id)sectionID withCompletion:(id)completion;	// 0x3148767d
- (void)invalidate;	// 0x3148741d
// declared property getter: - (unsigned)observerFeed;	// 0x3148a451
- (id)parametersForSectionID:(id)sectionID;	// 0x314881ed
- (id)proxy:(id)proxy detailedSignatureForSelector:(SEL)selector;	// 0x31489759
- (void)requestListBulletinsForSectionID:(id)sectionID;	// 0x31487659
- (void)sendResponse:(id)response;	// 0x31487d39
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x3148713d
// declared property setter: - (void)setObserverFeed:(unsigned)feed;	// 0x314873e1
- (void)updateBulletin:(id)bulletin forFeeds:(unsigned)feeds;	// 0x31489ea1
- (void)updateSectionInfo:(id)info;	// 0x3148a395
- (void)updateSectionOrder:(id)order;	// 0x3148a355
- (void)updateSectionOrderRule:(id)rule;	// 0x3148a2fd
- (void)updateSectionParameters:(id)parameters forSectionID:(id)sectionID;	// 0x3148a3d5
@end

