/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "ATVJSObject.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableURLRequest;

__attribute__((visibility("hidden")))
@interface ATVJSURLRequest : XXUnknownSuperclass <ATVJSObject> {
	OpaqueJSValue *_jsObjectRef;	// 4 = 0x4
	NSMutableURLRequest *_urlRequest;	// 8 = 0x8
}
@property(assign, nonatomic) OpaqueJSValue *jsObjectRef;	// G=0x17ba81; S=0x17ba91; @synthesize=_jsObjectRef
@property(retain, nonatomic) NSMutableURLRequest *urlRequest;	// G=0x17baa1; S=0x17bab1; @synthesize=_urlRequest
- (id)initWithContext:(OpaqueJSContext *)context urlRequest:(id)request;	// 0x17b645
- (void)dealloc;	// 0x17ba35
// declared property getter: - (OpaqueJSValue *)jsObjectRef;	// 0x17ba81
// declared property setter: - (void)setJsObjectRef:(OpaqueJSValue *)ref;	// 0x17ba91
// declared property setter: - (void)setUrlRequest:(id)request;	// 0x17bab1
// declared property getter: - (id)urlRequest;	// 0x17baa1
@end

