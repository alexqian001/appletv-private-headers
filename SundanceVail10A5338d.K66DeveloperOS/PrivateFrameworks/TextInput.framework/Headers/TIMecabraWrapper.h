/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

#import <NSObject.h> // Unknown library
#import "TextInput-Structs.h"


__attribute__((visibility("hidden")))
@interface TIMecabraWrapper : NSObject {
	Mecabra *_mecabraRef;	// 4 = 0x4
}
@property(readonly, assign) Mecabra *mecabraRef;	// G=0x349985a1; @synthesize=_mecabraRef
- (id)initWithMecabraRef:(Mecabra *)mecabraRef;	// 0x3499851d
- (void)dealloc;	// 0x3499855d
// declared property getter: - (Mecabra *)mecabraRef;	// 0x349985a1
@end
