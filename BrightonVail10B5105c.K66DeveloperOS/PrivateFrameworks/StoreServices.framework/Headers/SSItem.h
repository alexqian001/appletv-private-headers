/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import "SSURLConnectionRequestDelegate.h"
#import <NSObject.h> // Unknown library

@class SSItemOffer, SSURLConnectionRequest, NSMutableArray, NSNumber, NSString, NSURL, NSDate, NSDictionary, SSItemImageCollection, NSArray;

@interface SSItem : NSObject <SSURLConnectionRequestDelegate> {
	NSDate *_expirationDate;	// 4 = 0x4
	NSArray *_offers;	// 8 = 0x8
	NSDictionary *_properties;	// 12 = 0xc
	NSString *_tellAFriendBody;	// 16 = 0x10
	NSString *_tellAFriendBodyMIMEType;	// 20 = 0x14
	NSMutableArray *_tellAFriendHandlers;	// 24 = 0x18
	SSURLConnectionRequest *_tellAFriendRequest;	// 28 = 0x1c
	NSString *_tellAFriendSubject;	// 32 = 0x20
}
@property(readonly, assign, nonatomic) NSNumber *ITunesStoreIdentifier;	// G=0x3584506d; 
@property(readonly, assign, nonatomic) NSArray *allItemOffers;	// G=0x35844795; 
@property(readonly, assign, nonatomic) NSString *artistName;	// G=0x358447cd; 
@property(readonly, assign, nonatomic) float averageUserRating;	// G=0x35844845; 
@property(readonly, assign, nonatomic) SSItemOffer *defaultItemOffer;	// G=0x3584489d; 
@property(readonly, assign, nonatomic) NSDate *expirationDate;	// G=0x35846b7d; @synthesize=_expirationDate
@property(readonly, assign, nonatomic, getter=isGameCenterEnabled) BOOL gameCenterEnabled;	// G=0x35844a51; 
@property(readonly, assign, nonatomic) SSItemImageCollection *imageCollection;	// G=0x358449d5; 
@property(readonly, assign, nonatomic) NSString *itemKind;	// G=0x35844e19; 
@property(readonly, assign, nonatomic) NSString *itemTitle;	// G=0x3584502d; 
@property(readonly, assign, nonatomic) int numberOfUserRatings;	// G=0x358453ad; 
@property(readonly, assign, nonatomic, getter=isRestricted) BOOL restricted;	// G=0x35844ab1; 
@property(readonly, retain) NSString *tellAFriendBody;	// G=0x358455f1; converted property
@property(readonly, retain) NSString *tellAFriendBodyMIMEType;	// G=0x358456a5; converted property
@property(readonly, retain) NSString *tellAFriendSubject;	// G=0x35845821; converted property
@property(readonly, assign, nonatomic) NSArray *thumbnailImages;	// G=0x358458d5; 
@property(readonly, assign, nonatomic) NSURL *viewItemURL;	// G=0x35845ae1; 
- (id)initWithItemDictionary:(id)itemDictionary;	// 0x35845d09
// declared property getter: - (id)ITunesStoreIdentifier;	// 0x3584506d
- (void)_finishTellAFriendLoadWithError:(id)error;	// 0x358467b1
- (id)_offers;	// 0x35846905
- (void)_setExpirationDate:(id)date;	// 0x3584655d
- (id)_tellAFriendDictionary;	// 0x35846b15
// declared property getter: - (id)allItemOffers;	// 0x35844795
- (id)artistIdentifier;	// 0x35845d5d
// declared property getter: - (id)artistName;	// 0x358447cd
// declared property getter: - (float)averageUserRating;	// 0x35844845
- (id)bundleIdentifier;	// 0x35845d79
- (id)bundleVersion;	// 0x35845d95
- (id)buyParameters;	// 0x35845b29
- (id)collectionArtistName;	// 0x35845db1
- (id)collectionIdentifier;	// 0x35845dcd
- (id)collectionIndexInCollectionGroup;	// 0x35845de9
- (id)collectionName;	// 0x35845e05
- (id)composerName;	// 0x35845e21
- (id)contentRating;	// 0x35845e3d
- (void)dealloc;	// 0x35844675
// declared property getter: - (id)defaultItemOffer;	// 0x3584489d
- (id)description;	// 0x35845c8d
- (id)episodeIdentifier;	// 0x35845ed9
- (id)episodeSortIdentifier;	// 0x35845ef5
// declared property getter: - (id)expirationDate;	// 0x35846b7d
- (id)genreIdentifier;	// 0x35845f11
- (id)genreName;	// 0x35845f2d
// declared property getter: - (id)imageCollection;	// 0x358449d5
- (id)indexInCollection;	// 0x35845f49
- (BOOL)isCompilation;	// 0x35845f65
// declared property getter: - (BOOL)isGameCenterEnabled;	// 0x35844a51
// declared property getter: - (BOOL)isRestricted;	// 0x35844ab1
// declared property getter: - (id)itemKind;	// 0x35844e19
- (id)itemOfferForIdentifier:(id)identifier;	// 0x35844ee9
// declared property getter: - (id)itemTitle;	// 0x3584502d
- (void)loadTellAFriendMessageWithCompletionHandler:(id)completionHandler;	// 0x358450b5
- (id)longDescription;	// 0x35845fbd
- (id)mediaKind;	// 0x35845fd9
- (id)networkName;	// 0x358462a5
- (id)numberOfCollectionsInCollectionGroup;	// 0x358462c1
- (id)numberOfItemsInCollection;	// 0x358462dd
- (int)numberOfPrintedPages;	// 0x35845355
// declared property getter: - (int)numberOfUserRatings;	// 0x358453ad
- (id)playableMedia;	// 0x35845b51
- (id)podcastEpisodeGUID;	// 0x358462f9
- (id)podcastFeedURL;	// 0x35846315
- (id)preOrderIdentifier;	// 0x358464a9
- (id)priceDisplay;	// 0x35845c65
- (id)rawItemDictionary;	// 0x3584635d
- (id)relatedItemsForRelationType:(id)relationType;	// 0x35845405
- (id)releaseDate;	// 0x35846395
- (id)releaseDateString;	// 0x3584648d
- (void)request:(id)request didFailWithError:(id)error;	// 0x3584663d
- (void)requestDidFinish:(id)request;	// 0x3584668d
- (id)seasonNumber;	// 0x358464c5
- (id)sendGiftURL;	// 0x358464e1
- (id)seriesName;	// 0x35846541
- (id)shortDescription;	// 0x358465a1
- (id)softwareType;	// 0x358465bd
// converted property getter: - (id)tellAFriendBody;	// 0x358455f1
// converted property getter: - (id)tellAFriendBodyMIMEType;	// 0x358456a5
- (id)tellAFriendBodyURL;	// 0x35845795
// converted property getter: - (id)tellAFriendSubject;	// 0x35845821
// declared property getter: - (id)thumbnailImages;	// 0x358458d5
- (id)tweetInitialText;	// 0x358458fd
- (id)tweetURL;	// 0x358459cd
- (void)urlConnectionRequest:(id)request didReceiveResponse:(id)response;	// 0x358466b5
- (id)valueForProperty:(id)property;	// 0x35845a99
- (id)videoDetails;	// 0x358465d9
// declared property getter: - (id)viewItemURL;	// 0x35845ae1
- (id)viewReviewsURL;	// 0x358465f5
@end
