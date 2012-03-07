/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import "WebKit-Structs.h"
#import <NSObject.h> // Unknown library

@class NSArray, WebResource;

__attribute__((visibility("hidden")))
@interface WebArchivePrivate : NSObject {
@private
	WebResource *cachedMainResource;	// 4 = 0x4
	NSArray *cachedSubresources;	// 8 = 0x8
	NSArray *cachedSubframeArchives;	// 12 = 0xc
	RefPtr<WebCore::LegacyWebArchive> coreArchive;	// 16 = 0x10
}
+ (void)initialize;	// 0x32c378e5
- (id)init;	// 0x32c37751
- (id)initWithCoreArchive:(PassRefPtr<WebCore::LegacyWebArchive>)coreArchive;	// 0x32c379b1
- (id).cxx_construct;	// 0x32c37705
- (void).cxx_destruct;	// 0x32c378f1
- (LegacyWebArchive *)coreArchive;	// 0x32c376f5
- (void)dealloc;	// 0x32c37921
- (void)setCoreArchive:(PassRefPtr<WebCore::LegacyWebArchive>)archive;	// 0x32c37715
@end
