/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import "WebKit-Structs.h"
#import "NSCoding.h"
#import "NSCopying.h"
#import <NSObject.h> // Unknown library

@class WebArchivePrivate;

@interface WebArchive : NSObject <NSCoding, NSCopying> {
	WebArchivePrivate *_private;	// 4 = 0x4
}
- (id)init;	// 0x307f9d45
- (id)initWithCoder:(id)coder;	// 0x307fa5e5
- (id)initWithData:(id)data;	// 0x307fa385
- (id)initWithMainResource:(id)mainResource subresources:(id)subresources subframeArchives:(id)archives;	// 0x307f9dad
- (LegacyWebArchive *)_coreLegacyWebArchive;	// 0x307fb1d9
- (id)_initWithCoreLegacyWebArchive:(PassRefPtr<WebCore::LegacyWebArchive>)coreLegacyWebArchive;	// 0x307fb059
- (id)copyWithZone:(NSZone *)zone;	// 0x307fa8a5
- (id)data;	// 0x307faf49
- (void)dealloc;	// 0x307fa859
- (void)encodeWithCoder:(id)coder;	// 0x307fa7cd
- (id)mainResource;	// 0x307fa8b5
- (id)subframeArchives;	// 0x307faced
- (id)subresources;	// 0x307faa59
@end

