/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <SSLookupResponse.h> // Unknown library


@interface SSLookupResponse (MPStoreOfferCMC)
@property(readonly, assign, nonatomic) BOOL mpIsPersonalizedOffer;	// G=0x31e2cb85; 
+ (BOOL)mpFakeCompletionDataForBuys;	// 0x31e2cb6d
+ (id)mpLoadDebugCompletionsResponseWithStoreLookupID:(id)storeLookupID;	// 0x31e2ce5d
+ (BOOL)mpShowBuysWithNoCompletionOffer;	// 0x31e2cb49
+ (BOOL)mpVerboseCMCLogging;	// 0x31e2cb25
- (id)mpCompletionOfferResponseDictionaryWithLocalAlbumsCollection:(id)localAlbumsCollection;	// 0x31e2cbb9
// declared property getter: - (BOOL)mpIsPersonalizedOffer;	// 0x31e2cb85
- (void)mpSaveCompletionsResponseForDebuggingIfNecessaryWithExpectedStoreLookupID:(id)expectedStoreLookupID;	// 0x31e2d429
@end

