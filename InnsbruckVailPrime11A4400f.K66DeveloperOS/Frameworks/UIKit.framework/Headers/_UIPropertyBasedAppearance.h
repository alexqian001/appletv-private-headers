/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "_UIAppearance.h"

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface _UIPropertyBasedAppearance : _UIAppearance {
	NSDictionary *_propertiesToMatch;	// 24 = 0x18
}
@property(retain, nonatomic, setter=_setPropertiesToMatch:) NSDictionary *_propertiesToMatch;	// G=0x2f809f4d; S=0x2f809f5d; @synthesize
+ (id)_appearanceMatchingProperties:(id)properties forClass:(Class)aClass withContainerList:(id)containerList;	// 0x2f809c8d
+ (id)_appearanceObjectKeyForProperties:(id)properties;	// 0x2f809b69
+ (id)appearanceAtNode:(id)node withObject:(id)object;	// 0x2f809d5d
// declared property getter: - (id)_propertiesToMatch;	// 0x2f809f4d
// declared property setter: - (void)_setPropertiesToMatch:(id)match;	// 0x2f809f5d
@end

