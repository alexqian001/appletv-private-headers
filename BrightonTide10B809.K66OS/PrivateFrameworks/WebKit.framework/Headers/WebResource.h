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

@class WebResourcePrivate;

@interface WebResource : NSObject <NSCoding, NSCopying> {
	WebResourcePrivate *_private;	// 4 = 0x4
}
- (id)init;	// 0x365ff515
- (id)initWithCoder:(id)coder;	// 0x365ff5b1
- (id)initWithData:(id)data URL:(id)url MIMEType:(id)type textEncodingName:(id)name frameName:(id)name5;	// 0x365ff57d
- (id)MIMEType;	// 0x365fff69
- (id)URL;	// 0x365fff3d
- (ArchiveResource *)_coreResource;	// 0x3660020d
- (void)_ignoreWhenUnarchiving;	// 0x3660022d
- (id)_initWithCoreResource:(PassRefPtr<WebCore::ArchiveResource>)coreResource;	// 0x3660008d
- (id)_initWithData:(id)data URL:(id)url MIMEType:(id)type textEncodingName:(id)name frameName:(id)name5 response:(id)response copyData:(BOOL)data7;	// 0x36600255
- (id)_initWithData:(id)data URL:(id)url response:(id)response;	// 0x366007d9
- (id)_response;	// 0x36600889
- (id)_stringValue;	// 0x366008f5
- (id)_suggestedFilename;	// 0x3660083d
- (id)copyWithZone:(NSZone *)zone;	// 0x365ffee5
- (id)data;	// 0x365ffef5
- (void)dealloc;	// 0x365ffe99
- (id)description;	// 0x36600029
- (void)encodeWithCoder:(id)coder;	// 0x365ffd51
- (id)frameName;	// 0x365fffe9
- (id)textEncodingName;	// 0x365fffa9
@end
