/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface ATVBindingInfo : XXUnknownSuperclass {
	id _observedObject;	// 4 = 0x4
	NSString *_observedKeyPath;	// 8 = 0x8
	NSDictionary *_bindingOptions;	// 12 = 0xc
}
@property(readonly, assign, nonatomic) NSDictionary *bindingOptions;	// G=0x261f25; @synthesize=_bindingOptions
@property(readonly, assign, nonatomic) NSString *observedKeyPath;	// G=0x261f11; @synthesize=_observedKeyPath
@property(readonly, assign, nonatomic) id observedObject;	// G=0x261f01; @synthesize=_observedObject
- (id)initWithObservedObject:(id)observedObject observedKeyPath:(id)path bindingOptions:(id)options;	// 0x261e01
- (id)_modelKeyPath;	// 0x261efd
// declared property getter: - (id)bindingOptions;	// 0x261f25
- (void)dealloc;	// 0x261e89
// declared property getter: - (id)observedKeyPath;	// 0x261f11
// declared property getter: - (id)observedObject;	// 0x261f01
@end
