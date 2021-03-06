/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import "StoreServices-Structs.h"
#import "SSXPCCoding.h"
#import "NSCoding.h"
#import "NSCopying.h"
#import <NSObject.h> // Unknown library

@class NSMutableDictionary, NSNumber, NSArray, NSLock, NSString, NSURL, NSDate, NSDictionary, NSData, SSItemImageCollection;

@interface SSDownloadMetadata : NSObject <SSXPCCoding, NSCoding, NSCopying> {
	NSMutableDictionary *_dictionary;	// 4 = 0x4
	int _keyStyle;	// 8 = 0x8
	NSLock *_lock;	// 12 = 0xc
}
@property(readonly, assign) NSArray *MD5HashStrings;	// G=0x323382dd; 
@property(assign) unsigned long long artistIdentifier;	// G=0x32335d25; S=0x32336c7d; 
@property(copy) NSString *artistName;	// G=0x32335d61; S=0x32336ce5; 
@property(assign) BOOL artworkIsPrerendered;	// G=0x32335dcd; S=0x32336d31; converted property
@property(assign, getter=isAutomaticDownload) BOOL automaticDownload;	// G=0x323381b9; S=0x32339365; 
@property(retain) id bundleIdentifier;	// G=0x32335e2d; S=0x32336d81; converted property
@property(retain) NSURL *cancelDownloadURL;	// G=0x32337c89; S=0x323393a9; 
@property(retain) id collectionArtistName;	// G=0x32335e99; S=0x32336d9d; converted property
@property(assign) unsigned long long collectionIdentifier;	// G=0x32335ef5; S=0x32336db9; converted property
@property(retain) id collectionIndexInCollectionGroup;	// G=0x32335f31; S=0x32336e21; converted property
@property(retain) id collectionName;	// G=0x32335f9d; S=0x32336e6d; converted property
@property(assign, getter=isCompilation) BOOL compilation;	// G=0x323364f5; S=0x32336eb9; converted property
@property(assign) unsigned long long composerIdentifier;	// G=0x32336009; S=0x32336efd; converted property
@property(retain) id composerName;	// G=0x32336045; S=0x32336f65; converted property
@property(retain) id contentRating;	// G=0x323360a1; S=0x32336f81; converted property
@property(readonly, assign, getter=isContentRestricted) BOOL contentRestricted;	// G=0x32338211; 
@property(retain) NSString *copyright;	// G=0x32337d09; S=0x323393e5; 
@property(retain) NSDictionary *dictionary;	// G=0x32338025; S=0x32339401; 
@property(retain) id documentTargetIdentifier;	// G=0x32336141; S=0x32336fbd; converted property
@property(retain) NSString *downloadKey;	// G=0x3233805d; S=0x32339481; 
@property(retain) id durationInMilliseconds;	// G=0x3233619d; S=0x32336fd9; converted property
@property(retain) id episodeIdentifier;	// G=0x323361f9; S=0x32336ff5; converted property
@property(retain) id episodeSortIdentifier;	// G=0x32336235; S=0x32337011; converted property
@property(retain) NSData *epubRightsData;	// G=0x323380b9; S=0x3233949d; 
@property(assign, getter=isExplicitContent) BOOL explicitContent;	// G=0x3233654d; S=0x3233702d; converted property
@property(retain) NSString *fileExtension;	// G=0x32338115; S=0x323394b9; 
@property(retain) NSURL *fullSizeImageURL;	// G=0x323362a9; S=0x32337079; 
@property(retain) NSString *genre;	// G=0x323363d5; S=0x323370b5; 
@property(assign) unsigned long long genreIdentifier;	// G=0x3233644d; S=0x323370d1; 
@property(retain) id indexInCollection;	// G=0x32336489; S=0x32337139; converted property
@property(assign) unsigned long long itemIdentifier;	// G=0x3233665d; S=0x32337185; 
@property(assign) int keyStyle;	// G=0x32338171; S=0x323394d5; 
@property(retain) NSString *kind;	// G=0x323366a1; S=0x323371ed; 
@property(copy) NSString *longDescription;	// G=0x323366fd; S=0x32337209; 
@property(retain) id longSeasonDescription;	// G=0x32336c21; S=0x32337505; converted property
@property(retain) id networkName;	// G=0x32336769; S=0x32337255; converted property
@property(readonly, assign) NSNumber *numberOfBytesToHash;	// G=0x32338f21; 
@property(retain) id numberOfCollectionsInCollectionGroup;	// G=0x323367c5; S=0x32337271; converted property
@property(retain) id numberOfItemsInCollection;	// G=0x32336831; S=0x323372bd; converted property
@property(retain) id podcastEpisodeGUID;	// G=0x3233689d; S=0x32337309; converted property
@property(retain) id podcastFeedURL;	// G=0x323368f9; S=0x32337325; converted property
@property(retain) id podcastType;	// G=0x32336935; S=0x32337361; converted property
@property(assign) unsigned long long preOrderIdentifier;	// G=0x32339095; S=0x323397c9; 
@property(copy) NSString *preferredAssetFlavor;	// G=0x32338fcd; S=0x323396b5; 
@property(readonly, assign) NSDictionary *primaryAssetDictionary;	// G=0x32336991; 
@property(retain) NSURL *primaryAssetURL;	// G=0x32339109; S=0x3233980d; 
@property(retain) id purchaseDate;	// G=0x32336a01; S=0x3233737d; converted property
@property(copy) NSString *redownloadActionParameters;	// G=0x32339195; S=0x32339849; 
@property(assign, getter=isRedownloadDownload) BOOL redownloadDownload;	// G=0x32338285; S=0x32339865; 
@property(retain) NSDate *releaseDate;	// G=0x32336a3d; S=0x32337399; 
@property(retain) NSString *releaseDateString;	// G=0x32339219; S=0x323398a9; 
@property(retain) NSNumber *releaseYear;	// G=0x32336a6d; S=0x323373e5; 
@property(assign, getter=isRental) BOOL rental;	// G=0x323365ad; S=0x32337401; converted property
@property(copy) id requiredDeviceCapabilities;	// G=0x323392d9; S=0x323398f5; 
@property(assign) unsigned long long sagaIdentifier;	// G=0x32336ac9; S=0x32337445; converted property
@property(assign, getter=isSample) BOOL sample;	// G=0x32336605; S=0x32337489; converted property
@property(retain) id seasonNumber;	// G=0x32336b51; S=0x323374cd; converted property
@property(retain) id seriesName;	// G=0x32336bad; S=0x323374e9; converted property
@property(copy) NSString *shortDescription;	// G=0x323376c9; S=0x32337521; 
@property(assign) BOOL shouldDownloadAutomatically;	// G=0x3233a3b5; S=0x32339911; 
@property(retain) NSArray *sinfs;	// G=0x3233a40d; S=0x32339955; 
@property(retain) NSString *sortArtistName;	// G=0x32337725; S=0x3233753d; 
@property(retain) NSString *sortCollectionName;	// G=0x32337799; S=0x32337559; 
@property(retain) NSString *sortTitle;	// G=0x3233780d; S=0x32337575; 
@property(retain) NSString *subtitle;	// G=0x32337881; S=0x32337591; 
@property(readonly, assign) SSItemImageCollection *thumbnailImageCollection;	// G=0x32337891; 
@property(retain) NSURL *thumbnailImageURL;	// G=0x32337af5; S=0x323375d9; 
@property(retain) NSString *thumbnailNewsstandBindingEdge;	// G=0x323379cd; S=0x323375a1; 
@property(retain) NSString *thumbnailNewsstandBindingType;	// G=0x32337a61; S=0x323375bd; 
@property(retain) NSString *title;	// G=0x32337b1d; S=0x32337615; 
@property(retain) NSString *transactionIdentifier;	// G=0x32337b95; S=0x32337655; 
@property(copy) NSURL *transitMapDataURL;	// G=0x3233a469; S=0x32339971; 
@property(retain) id videoDetailsDictionary;	// G=0x32337bf1; S=0x32337671; converted property
@property(retain) id viewStoreItemURL;	// G=0x32337c4d; S=0x3233768d; converted property
- (id)init;	// 0x32334d5d
- (id)initWithCoder:(id)coder;	// 0x32335865
- (id)initWithDictionary:(id)dictionary;	// 0x32334d71
- (id)initWithItem:(id)item;	// 0x32334df9
- (id)initWithItem:(id)item offer:(id)offer;	// 0x32334e2d
- (id)initWithKind:(id)kind;	// 0x323356d1
- (id)initWithXPCEncoding:(id)xpcencoding;	// 0x32335c81
// declared property getter: - (id)MD5HashStrings;	// 0x323382dd
- (id)_assetDictionary;	// 0x3233a615
- (id)_dateValueForValue:(id)value;	// 0x3233aa15
- (id)_newDateFormatter;	// 0x3233acfd
- (id)_newImageCollectionWithURLString:(id)urlstring;	// 0x3233aac5
- (id)_releaseDateValue;	// 0x3233ad95
- (void)_setValue:(id)value forTopLevelKey:(id)topLevelKey;	// 0x3233adcd
- (void)_setValueCopy:(id)copy forMetadataKey:(id)metadataKey;	// 0x3233ae89
- (id)_stringValueForValue:(id)value;	// 0x3233aed1
- (id)_thumbnailArtworkImage;	// 0x3233af4d
- (id)_urlValueForValue:(id)value;	// 0x3233b01d
- (id)_valueForFirstAvailableTopLevelKey:(id)firstAvailableTopLevelKey;	// 0x3233b0a5
- (id)applicationIdentifier;	// 0x32335cbd
// declared property getter: - (unsigned long long)artistIdentifier;	// 0x32335d25
// declared property getter: - (id)artistName;	// 0x32335d61
// converted property getter: - (BOOL)artworkIsPrerendered;	// 0x32335dcd
// converted property getter: - (id)bundleIdentifier;	// 0x32335e2d
// declared property getter: - (id)cancelDownloadURL;	// 0x32337c89
// converted property getter: - (id)collectionArtistName;	// 0x32335e99
// converted property getter: - (unsigned long long)collectionIdentifier;	// 0x32335ef5
// converted property getter: - (id)collectionIndexInCollectionGroup;	// 0x32335f31
// converted property getter: - (id)collectionName;	// 0x32335f9d
// converted property getter: - (unsigned long long)composerIdentifier;	// 0x32336009
// converted property getter: - (id)composerName;	// 0x32336045
// converted property getter: - (id)contentRating;	// 0x323360a1
- (id)copyWithZone:(NSZone *)zone;	// 0x32335bcd
- (id)copyWritableMetadata;	// 0x32337d65
- (id)copyXPCEncoding;	// 0x32335c6d
// declared property getter: - (id)copyright;	// 0x32337d09
- (void)dealloc;	// 0x32335705
// declared property getter: - (id)dictionary;	// 0x32338025
// converted property getter: - (id)documentTargetIdentifier;	// 0x32336141
// declared property getter: - (id)downloadKey;	// 0x3233805d
// converted property getter: - (id)durationInMilliseconds;	// 0x3233619d
- (void)encodeWithCoder:(id)coder;	// 0x32335769
// converted property getter: - (id)episodeIdentifier;	// 0x323361f9
// converted property getter: - (id)episodeSortIdentifier;	// 0x32336235
// declared property getter: - (id)epubRightsData;	// 0x323380b9
// declared property getter: - (id)fileExtension;	// 0x32338115
// declared property getter: - (id)fullSizeImageURL;	// 0x323362a9
// declared property getter: - (id)genre;	// 0x323363d5
// declared property getter: - (unsigned long long)genreIdentifier;	// 0x3233644d
// converted property getter: - (id)indexInCollection;	// 0x32336489
// declared property getter: - (BOOL)isAutomaticDownload;	// 0x323381b9
// converted property getter: - (BOOL)isCompilation;	// 0x323364f5
// declared property getter: - (BOOL)isContentRestricted;	// 0x32338211
// converted property getter: - (BOOL)isExplicitContent;	// 0x3233654d
// declared property getter: - (BOOL)isRedownloadDownload;	// 0x32338285
// converted property getter: - (BOOL)isRental;	// 0x323365ad
// converted property getter: - (BOOL)isSample;	// 0x32336605
// declared property getter: - (unsigned long long)itemIdentifier;	// 0x3233665d
// declared property getter: - (int)keyStyle;	// 0x32338171
// declared property getter: - (id)kind;	// 0x323366a1
// declared property getter: - (id)longDescription;	// 0x323366fd
// converted property getter: - (id)longSeasonDescription;	// 0x32336c21
// converted property getter: - (id)networkName;	// 0x32336769
- (id)newDownloadProperties;	// 0x323383e5
// declared property getter: - (id)numberOfBytesToHash;	// 0x32338f21
// converted property getter: - (id)numberOfCollectionsInCollectionGroup;	// 0x323367c5
// converted property getter: - (id)numberOfItemsInCollection;	// 0x32336831
// converted property getter: - (id)podcastEpisodeGUID;	// 0x3233689d
// converted property getter: - (id)podcastFeedURL;	// 0x323368f9
// converted property getter: - (id)podcastType;	// 0x32336935
// declared property getter: - (unsigned long long)preOrderIdentifier;	// 0x32339095
// declared property getter: - (id)preferredAssetFlavor;	// 0x32338fcd
// declared property getter: - (id)primaryAssetDictionary;	// 0x32336991
// declared property getter: - (id)primaryAssetURL;	// 0x32339109
// converted property getter: - (id)purchaseDate;	// 0x32336a01
// declared property getter: - (id)redownloadActionParameters;	// 0x32339195
// declared property getter: - (id)releaseDate;	// 0x32336a3d
// declared property getter: - (id)releaseDateString;	// 0x32339219
// declared property getter: - (id)releaseYear;	// 0x32336a6d
// declared property getter: - (id)requiredDeviceCapabilities;	// 0x323392d9
// converted property getter: - (unsigned long long)sagaIdentifier;	// 0x32336ac9
// converted property getter: - (id)seasonNumber;	// 0x32336b51
// converted property getter: - (id)seriesName;	// 0x32336bad
// declared property setter: - (void)setArtistIdentifier:(unsigned long long)identifier;	// 0x32336c7d
// declared property setter: - (void)setArtistName:(id)name;	// 0x32336ce5
// converted property setter: - (void)setArtworkIsPrerendered:(BOOL)prerendered;	// 0x32336d31
// declared property setter: - (void)setAutomaticDownload:(BOOL)download;	// 0x32339365
// converted property setter: - (void)setBundleIdentifier:(id)identifier;	// 0x32336d81
// declared property setter: - (void)setCancelDownloadURL:(id)url;	// 0x323393a9
// converted property setter: - (void)setCollectionArtistName:(id)name;	// 0x32336d9d
// converted property setter: - (void)setCollectionIdentifier:(unsigned long long)identifier;	// 0x32336db9
// converted property setter: - (void)setCollectionIndexInCollectionGroup:(id)collectionGroup;	// 0x32336e21
// converted property setter: - (void)setCollectionName:(id)name;	// 0x32336e6d
// converted property setter: - (void)setCompilation:(BOOL)compilation;	// 0x32336eb9
// converted property setter: - (void)setComposerIdentifier:(unsigned long long)identifier;	// 0x32336efd
// converted property setter: - (void)setComposerName:(id)name;	// 0x32336f65
// converted property setter: - (void)setContentRating:(id)rating;	// 0x32336f81
// declared property setter: - (void)setCopyright:(id)copyright;	// 0x323393e5
// declared property setter: - (void)setDictionary:(id)dictionary;	// 0x32339401
// converted property setter: - (void)setDocumentTargetIdentifier:(id)identifier;	// 0x32336fbd
// declared property setter: - (void)setDownloadKey:(id)key;	// 0x32339481
// converted property setter: - (void)setDurationInMilliseconds:(id)milliseconds;	// 0x32336fd9
// converted property setter: - (void)setEpisodeIdentifier:(id)identifier;	// 0x32336ff5
// converted property setter: - (void)setEpisodeSortIdentifier:(id)identifier;	// 0x32337011
// declared property setter: - (void)setEpubRightsData:(id)data;	// 0x3233949d
// converted property setter: - (void)setExplicitContent:(BOOL)content;	// 0x3233702d
// declared property setter: - (void)setFileExtension:(id)extension;	// 0x323394b9
// declared property setter: - (void)setFullSizeImageURL:(id)url;	// 0x32337079
// declared property setter: - (void)setGenre:(id)genre;	// 0x323370b5
// declared property setter: - (void)setGenreIdentifier:(unsigned long long)identifier;	// 0x323370d1
// converted property setter: - (void)setIndexInCollection:(id)collection;	// 0x32337139
// declared property setter: - (void)setItemIdentifier:(unsigned long long)identifier;	// 0x32337185
// declared property setter: - (void)setKeyStyle:(int)style;	// 0x323394d5
// declared property setter: - (void)setKind:(id)kind;	// 0x323371ed
// declared property setter: - (void)setLongDescription:(id)description;	// 0x32337209
// converted property setter: - (void)setLongSeasonDescription:(id)description;	// 0x32337505
- (void)setMD5HashStrings:(id)strings numberOfBytesToHash:(id)hash;	// 0x32339521
// converted property setter: - (void)setNetworkName:(id)name;	// 0x32337255
// converted property setter: - (void)setNumberOfCollectionsInCollectionGroup:(id)collectionGroup;	// 0x32337271
// converted property setter: - (void)setNumberOfItemsInCollection:(id)collection;	// 0x323372bd
// converted property setter: - (void)setPodcastEpisodeGUID:(id)guid;	// 0x32337309
// converted property setter: - (void)setPodcastFeedURL:(id)url;	// 0x32337325
// converted property setter: - (void)setPodcastType:(id)type;	// 0x32337361
// declared property setter: - (void)setPreOrderIdentifier:(unsigned long long)identifier;	// 0x323397c9
// declared property setter: - (void)setPreferredAssetFlavor:(id)flavor;	// 0x323396b5
// declared property setter: - (void)setPrimaryAssetURL:(id)url;	// 0x3233980d
// converted property setter: - (void)setPurchaseDate:(id)date;	// 0x3233737d
// declared property setter: - (void)setRedownloadActionParameters:(id)parameters;	// 0x32339849
// declared property setter: - (void)setRedownloadDownload:(BOOL)download;	// 0x32339865
// declared property setter: - (void)setReleaseDate:(id)date;	// 0x32337399
// declared property setter: - (void)setReleaseDateString:(id)string;	// 0x323398a9
// declared property setter: - (void)setReleaseYear:(id)year;	// 0x323373e5
// converted property setter: - (void)setRental:(BOOL)rental;	// 0x32337401
// declared property setter: - (void)setRequiredDeviceCapabilities:(id)capabilities;	// 0x323398f5
// converted property setter: - (void)setSagaIdentifier:(unsigned long long)identifier;	// 0x32337445
// converted property setter: - (void)setSample:(BOOL)sample;	// 0x32337489
// converted property setter: - (void)setSeasonNumber:(id)number;	// 0x323374cd
// converted property setter: - (void)setSeriesName:(id)name;	// 0x323374e9
// declared property setter: - (void)setShortDescription:(id)description;	// 0x32337521
// declared property setter: - (void)setShouldDownloadAutomatically:(BOOL)downloadAutomatically;	// 0x32339911
// declared property setter: - (void)setSinfs:(id)sinfs;	// 0x32339955
// declared property setter: - (void)setSortArtistName:(id)name;	// 0x3233753d
// declared property setter: - (void)setSortCollectionName:(id)name;	// 0x32337559
// declared property setter: - (void)setSortTitle:(id)title;	// 0x32337575
// declared property setter: - (void)setSubtitle:(id)subtitle;	// 0x32337591
// declared property setter: - (void)setThumbnailImageURL:(id)url;	// 0x323375d9
// declared property setter: - (void)setThumbnailNewsstandBindingEdge:(id)edge;	// 0x323375a1
// declared property setter: - (void)setThumbnailNewsstandBindingType:(id)type;	// 0x323375bd
// declared property setter: - (void)setTitle:(id)title;	// 0x32337615
// declared property setter: - (void)setTransactionIdentifier:(id)identifier;	// 0x32337655
// declared property setter: - (void)setTransitMapDataURL:(id)url;	// 0x32339971
- (void)setValue:(id)value forMetadataKey:(id)metadataKey;	// 0x323399ad
- (void)setValuesFromDownload:(id)download;	// 0x32339b25
// converted property setter: - (void)setVideoDetailsDictionary:(id)dictionary;	// 0x32337671
// converted property setter: - (void)setViewStoreItemURL:(id)url;	// 0x3233768d
// declared property getter: - (id)shortDescription;	// 0x323376c9
// declared property getter: - (BOOL)shouldDownloadAutomatically;	// 0x3233a3b5
// declared property getter: - (id)sinfs;	// 0x3233a40d
// declared property getter: - (id)sortArtistName;	// 0x32337725
// declared property getter: - (id)sortCollectionName;	// 0x32337799
// declared property getter: - (id)sortTitle;	// 0x3233780d
// declared property getter: - (id)subtitle;	// 0x32337881
// declared property getter: - (id)thumbnailImageCollection;	// 0x32337891
// declared property getter: - (id)thumbnailImageURL;	// 0x32337af5
// declared property getter: - (id)thumbnailNewsstandBindingEdge;	// 0x323379cd
// declared property getter: - (id)thumbnailNewsstandBindingType;	// 0x32337a61
// declared property getter: - (id)title;	// 0x32337b1d
// declared property getter: - (id)transactionIdentifier;	// 0x32337b95
// declared property getter: - (id)transitMapDataURL;	// 0x3233a469
- (id)valueForFirstAvailableKey:(id)firstAvailableKey;	// 0x3233a4e9
- (id)valueForMetadataKey:(id)metadataKey;	// 0x3233a5fd
// converted property getter: - (id)videoDetailsDictionary;	// 0x32337bf1
// converted property getter: - (id)viewStoreItemURL;	// 0x32337c4d
@end

