/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import <NSObject.h> // Unknown library
#import "WebKit-Structs.h"
#import "WebAllowDenyPolicyListener.h"


__attribute__((visibility("hidden")))
@interface WebGeolocationPolicyListener : NSObject <WebAllowDenyPolicyListener> {
@private
	RefPtr<WebCore::Geolocation> _geolocation;	// 4 = 0x4
	id _denyCallback;	// 8 = 0x8
}
@property(copy, nonatomic) id denyCallback;	// G=0x35055aa1; S=0x35055ab5; @synthesize=_denyCallback
- (id)initWithGeolocation:(Geolocation *)geolocation;	// 0x350559b1
- (id).cxx_construct;	// 0x35055af1
- (void).cxx_destruct;	// 0x35055ac5
- (void)allow;	// 0x35055a1d
- (void)dealloc;	// 0x3505596d
- (void)deny;	// 0x35055a31
// declared property getter: - (id)denyCallback;	// 0x35055aa1
// declared property setter: - (void)setDenyCallback:(id)callback;	// 0x35055ab5
- (BOOL)shouldClearCache;	// 0x35055a65
@end
