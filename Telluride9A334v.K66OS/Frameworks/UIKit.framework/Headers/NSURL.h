/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSURL.h> // Unknown library


@interface NSURL (UIKitAdditions)
+ (id)URLWithDisplayIdentifier:(id)displayIdentifier forSearchResultDomain:(int)searchResultDomain andIdentifier:(unsigned long long)identifier;	// 0x30252f59
+ (id)URLWithTelephoneNumber:(id)telephoneNumber;	// 0x302521ed
+ (id)URLWithTelephoneNumber:(id)telephoneNumber addressBookUID:(int)uid;	// 0x30252279
+ (id)URLWithTelephoneNumber:(id)telephoneNumber addressBookUID:(int)uid forceAssist:(BOOL)assist suppressAssist:(BOOL)assist4 wasAssisted:(BOOL)assisted;	// 0x302522f1
+ (id)URLWithTelephoneNumber:(id)telephoneNumber promptUser:(BOOL)user;	// 0x30252201
+ (id)mapsURLWithAddress:(id)address;	// 0x30252bc9
+ (id)mapsURLWithQuery:(id)query;	// 0x30252b29
+ (id)mapsURLWithSourceAddress:(id)sourceAddress destinationAddress:(id)address;	// 0x30252c69
+ (id)videoCallPromptURLWithURL:(id)url;	// 0x30252a25
- (void)_domain:(id *)domain subdomain:(id *)subdomain;	// 0x30179951
- (BOOL)_isGoogleMapsDomain:(id)domain subdomain:(id)subdomain path:(id)path queryKeysAndValues:(id)values;	// 0x30179a6d
- (id)_queryParameters;	// 0x302524e1
- (id)appleStoreURL;	// 0x30252dad
- (id)fmfURL;	// 0x30252eb5
- (id)gamecenterURL;	// 0x30252db1
- (void)getPhoneNumber:(id *)number addressBookUID:(int *)uid;	// 0x302527fd
- (void)getPhoneNumber:(id *)number addressBookUID:(int *)uid forceAssist:(BOOL *)assist suppressAssist:(BOOL *)assist4 wasAlreadyAssisted:(BOOL *)assisted;	// 0x3025287d
- (BOOL)hasTelephonyScheme;	// 0x302529ad
- (BOOL)isGoogleMapsURL;	// 0x301798d1
- (BOOL)isJavaScriptURL;	// 0x30253521
- (BOOL)isSpringboardHandledURL;	// 0x30253105
- (BOOL)isVideoCallURL;	// 0x30252ac9
- (BOOL)isWebSafeTelephoneURL;	// 0x3025315d
- (BOOL)isWebcalURL;	// 0x30253441
- (id)itmsURL;	// 0x30252da9
- (id)mapsURL;	// 0x30179bf5
- (id)phobosURL;	// 0x30175781
- (id)phoneNumber;	// 0x3025272d
- (id)radarWebURL;	// 0x301761b5
- (id)searchResultDomain;	// 0x30252fbd
- (id)searchResultIdentifier;	// 0x30253061
- (id)webSafeTelephoneURL;	// 0x30253249
- (id)youTubeURL;	// 0x30179f55
@end

@interface NSURL (UIKitPrivateAdditions)
- (BOOL)isInternalUIKitURL;	// 0x3025356d
@end
