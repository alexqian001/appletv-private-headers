/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "ATVBindingInfo.h"


__attribute__((visibility("hidden")))
@interface _ATVBindingAdaptorBindingInfo : ATVBindingInfo {
	objc_method *_instanceMethodForUpdate;	// 16 = 0x10
}
@property(assign) objc_method *instanceMethodForUpdate;	// G=0x265e8d; S=0x265ea1; @synthesize=_instanceMethodForUpdate
- (id)initWithObservedObject:(id)observedObject observedKeyPath:(id)path bindingOptions:(id)options instanceMethodForUpdate:(objc_method *)update;	// 0x265d99
- (id)description;	// 0x265de1
// declared property getter: - (objc_method *)instanceMethodForUpdate;	// 0x265e8d
// declared property setter: - (void)setInstanceMethodForUpdate:(objc_method *)update;	// 0x265ea1
@end

