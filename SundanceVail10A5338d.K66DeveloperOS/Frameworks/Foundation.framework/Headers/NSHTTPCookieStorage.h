/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library
#import "Foundation-Structs.h"

@class NSHTTPCookieStorageInternal;

@interface NSHTTPCookieStorage : NSObject {
	NSHTTPCookieStorageInternal *_internal;	// 4 = 0x4
}
@property(assign) unsigned cookieAcceptPolicy;	// G=0x373cd181; S=0x373cd1b5; converted property
+ (id)sharedHTTPCookieStorage;	// 0x37315ff9
- (id)init;	// 0x373cce4d
- (OpaqueCFHTTPCookieStorage *)_cookieStorage;	// 0x373ccda5
- (id)_initWithSharedStorage;	// 0x37316065
- (void)_readAcceptCookiesPreference;	// 0x373ccc61
- (void)_saveCookies;	// 0x373ccde1
- (void)_setPrivateBrowsingEnabled:(BOOL)enabled;	// 0x373ccd01
// converted property getter: - (unsigned)cookieAcceptPolicy;	// 0x373cd181
- (id)cookieRequestHeaderFieldsForURL:(id)url;	// 0x373ccf71
- (id)cookies;	// 0x373cce65
- (id)cookiesForURL:(id)url;	// 0x373cd091
- (void)dealloc;	// 0x373cce01
- (void)deleteCookie:(id)cookie;	// 0x373ccf01
- (id)description;	// 0x373cd289
- (void)setCookie:(id)cookie;	// 0x373cceb9
// converted property setter: - (void)setCookieAcceptPolicy:(unsigned)policy;	// 0x373cd1b5
- (void)setCookies:(id)cookies forURL:(id)url mainDocumentURL:(id)url3;	// 0x373cd121
- (void)setCookiesFromResponseHeader:(id)responseHeader forURL:(id)url policyBaseURL:(id)url3;	// 0x373cd02d
- (id)sortedCookiesUsingDescriptors:(id)descriptors;	// 0x373cd3b9
@end
