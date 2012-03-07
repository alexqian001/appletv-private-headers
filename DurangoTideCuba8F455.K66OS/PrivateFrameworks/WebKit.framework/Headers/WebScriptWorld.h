/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import "WebKit-Structs.h"
#import <NSObject.h> // Unknown library

@class WebScriptWorldPrivate;

@interface WebScriptWorld : NSObject {
@private
	WebScriptWorldPrivate *_private;	// 4 = 0x4
}
+ (id)findOrCreateWorld:(DOMWrapperWorld *)world;	// 0x30547a55
+ (id)scriptWorldForGlobalContext:(OpaqueJSContext *)globalContext;	// 0x30547549
+ (id)standardWorld;	// 0x30547695
+ (id)world;	// 0x30547519
- (id)init;	// 0x30547931
- (id)initWithWorld:(PassRefPtr<WebCore::DOMWrapperWorld>)world;	// 0x30547569
- (void)dealloc;	// 0x30547819
- (void)unregisterWorld;	// 0x3054790d
@end
