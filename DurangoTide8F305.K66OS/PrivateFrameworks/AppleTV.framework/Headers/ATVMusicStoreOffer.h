/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface ATVMusicStoreOffer : NSObject {
@private
	NSString *_storeOfferType;	// 4 = 0x4
	NSDictionary *_storeOfferInfo;	// 8 = 0x8
}
@property(readonly, retain) NSString *storeOfferType;	// G=0x30756685; converted property
+ (id)_filterStoreOfferList:(id)list;	// 0x30756f09
+ (BOOL)anyOfferHasDigitalExtras:(id)extras;	// 0x30756db9
+ (id)offerListFromStoreOffersDictionary:(id)storeOffersDictionary;	// 0x30757011
+ (id)priceRangeFromStoreOffersDictionary:(id)storeOffersDictionary;	// 0x3075710d
+ (id)primaryOfferFromStoreOffersDictionary:(id)storeOffersDictionary;	// 0x30756e55
+ (id)storeOfferFromDictionary:(id)dictionary forType:(id)type;	// 0x30756e11
- (id)initWithStoreOfferDictionary:(id)storeOfferDictionary forType:(id)type;	// 0x30756ced
- (id)actionDisplayName;	// 0x30756709
- (id)dateAvailable;	// 0x30756991
- (void)dealloc;	// 0x30756c91
- (id)downloadURL;	// 0x30756925
- (long)duration;	// 0x30756bc1
- (id)fileSize;	// 0x30756b59
- (BOOL)hasDateAvailable;	// 0x307569bd
- (BOOL)hasDigitalExtras;	// 0x30756735
- (BOOL)hasDownload;	// 0x30756951
- (BOOL)hasPreview;	// 0x307568e5
- (BOOL)hasPurchase;	// 0x30756aed
- (BOOL)hasRental;	// 0x30756a55
- (BOOL)isClosedCaptioned;	// 0x30756871
- (BOOL)isDolbyDigital;	// 0x3075677d
- (BOOL)isHD;	// 0x307567c5
- (BOOL)isWideScreen;	// 0x30756829
- (id)preActionWarning;	// 0x307566dd
- (long)previewDuration;	// 0x30756b85
- (id)previewURL;	// 0x307568b9
- (id)price;	// 0x30756b2d
- (id)purchaseParams;	// 0x30756ac1
- (id)purchasePrice;	// 0x30756a95
- (id)rentalParams;	// 0x30756a29
- (id)rentalPrice;	// 0x307569fd
// converted property getter: - (id)storeOfferType;	// 0x30756685
- (BOOL)usesStoreDrivenFlow;	// 0x30756695
@end
