/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library

@class NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface UIRuntimeAccessibilityConfiguration : NSObject {
	NSString *accessibilityConfigurationHint;	// 4 = 0x4
	NSString *accessibilityConfigurationLabel;	// 8 = 0x8
	NSNumber *accessibilityConfigurationTraits;	// 12 = 0xc
	NSNumber *isAccessibilityConfigurationElement;	// 16 = 0x10
	NSObject *object;	// 20 = 0x14
}
@property(retain, nonatomic) NSString *accessibilityConfigurationHint;	// G=0x30ba4205; S=0x30ba4215; @synthesize
@property(retain, nonatomic) NSString *accessibilityConfigurationLabel;	// G=0x30ba4225; S=0x30ba4235; @synthesize
@property(retain, nonatomic) NSNumber *accessibilityConfigurationTraits;	// G=0x30ba4245; S=0x30ba4255; @synthesize
@property(retain, nonatomic) NSNumber *isAccessibilityConfigurationElement;	// G=0x30ba4265; S=0x30ba4275; @synthesize
@property(retain, nonatomic) NSObject *object;	// G=0x30ba4285; S=0x30ba4295; @synthesize
- (id)initWithCoder:(id)coder;	// 0x30ba3e75
- (id)initWithObject:(id)object label:(id)label hint:(id)hint traits:(id)traits andIsAccessibilityElement:(id)element;	// 0x30ba3da5
// declared property getter: - (id)accessibilityConfigurationHint;	// 0x30ba4205
// declared property getter: - (id)accessibilityConfigurationLabel;	// 0x30ba4225
// declared property getter: - (id)accessibilityConfigurationTraits;	// 0x30ba4245
- (void)applyConfiguration;	// 0x30ba4115
- (void)dealloc;	// 0x30ba4075
- (void)encodeWithCoder:(id)coder;	// 0x30ba3f89
// declared property getter: - (id)isAccessibilityConfigurationElement;	// 0x30ba4265
// declared property getter: - (id)object;	// 0x30ba4285
// declared property setter: - (void)setAccessibilityConfigurationHint:(id)hint;	// 0x30ba4215
// declared property setter: - (void)setAccessibilityConfigurationLabel:(id)label;	// 0x30ba4235
// declared property setter: - (void)setAccessibilityConfigurationTraits:(id)traits;	// 0x30ba4255
// declared property setter: - (void)setIsAccessibilityConfigurationElement:(id)element;	// 0x30ba4275
// declared property setter: - (void)setObject:(id)object;	// 0x30ba4295
@end

