/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSURL.h> // Unknown library


@interface NSURL (UIKitPrivateAdditions)
- (BOOL)isInternalUIKitURL;	// 0x3023a849
@end

@interface NSURL (UIKitAdditions)
+ (id)URLWithDisplayIdentifier:(id)displayIdentifier forSearchResultDomain:(int)searchResultDomain andIdentifier:(unsigned long long)identifier;	// 0x3023aa65
+ (id)URLWithTelephoneNumber:(id)telephoneNumber;	// 0x3023b211
+ (id)URLWithTelephoneNumber:(id)telephoneNumber addressBookUID:(int)uid;	// 0x3023b149
+ (id)URLWithTelephoneNumber:(id)telephoneNumber promptUser:(BOOL)user;	// 0x3023b1a9
+ (id)mapsURLWithAddress:(id)address;	// 0x3023aed5
+ (id)mapsURLWithQuery:(id)query;	// 0x3023af65
+ (id)mapsURLWithSourceAddress:(id)sourceAddress destinationAddress:(id)address;	// 0x3023ada5
+ (id)videoCallPromptURLWithURL:(id)url;	// 0x3023b045
- (void)_domain:(id *)domain subdomain:(id *)subdomain;	// 0x30182bf1
- (BOOL)_isGoogleMapsDomain:(id)domain subdomain:(id)subdomain path:(id)path queryKeysAndValues:(id)values;	// 0x30182ce9
- (id)appleStoreURL;	// 0x3023ac41
- (id)fmfURL;	// 0x3023aabd
- (id)gamecenterURL;	// 0x3023ab59
- (void)getPhoneNumber:(id *)number addressBookUID:(int *)uid;	// 0x3023b2e9
- (BOOL)hasTelephonyScheme;	// 0x3023b0e5
- (BOOL)isGoogleMapsURL;	// 0x30182b75
- (BOOL)isJavaScriptURL;	// 0x3023a891
- (BOOL)isSpringboardHandledURL;	// 0x3023a989
- (BOOL)isVideoCallURL;	// 0x3023aff5
- (BOOL)isWebSafeTelephoneURL;	// 0x3023a8c5
- (BOOL)isWebcalURL;	// 0x3023b229
- (id)itmsURL;	// 0x3023ad79
- (id)itmsURL:(int *)url;	// 0x3017ffe9
- (id)mapsURL;	// 0x30182df5
- (id)phobosURL;	// 0x3017ffbd
- (id)phoneNumber;	// 0x3023b3dd
- (id)radarWebURL;	// 0x3018071d
- (id)searchResultDomain;	// 0x3023a9d9
- (id)searchResultIdentifier;	// 0x3023b449
- (id)webSafeTelephoneURL;	// 0x3023b4d1
- (id)youTubeURL;	// 0x301830e1
@end
