/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import "WebKit-Structs.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface WebResourcePrivate : NSObject {
@private
	ArchiveResource *coreResource;	// 4 = 0x4
}
+ (void)initialize;	// 0x34022191
- (id)init;	// 0x34022161
- (id)initWithCoreResource:(PassRefPtr<WebCore::ArchiveResource>)coreResource;	// 0x34022275
- (void)dealloc;	// 0x340221f9
- (void)finalize;	// 0x3402219d
@end
