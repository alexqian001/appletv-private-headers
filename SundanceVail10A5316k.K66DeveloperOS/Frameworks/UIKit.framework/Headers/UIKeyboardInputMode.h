/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UITextInputMode.h"

@class NSString, NSArray;

@interface UIKeyboardInputMode : UITextInputMode {
@private
	NSString *primaryLanguage;	// 4 = 0x4
	NSString *identifier;	// 8 = 0x8
	NSString *softwareLayout;	// 12 = 0xc
	NSString *hardwareLayout;	// 16 = 0x10
}
@property(retain, nonatomic) NSString *hardwareLayout;	// G=0x300ff471; S=0x300fefb5; @synthesize
@property(retain, nonatomic) NSString *identifier;	// G=0x300b59b1; S=0x300feddd; @synthesize
@property(readonly, assign, nonatomic) NSArray *normalizedIdentifierLevels;	// G=0x303e0eb9; 
@property(retain, nonatomic) NSString *primaryLanguage;	// G=0x300ff23d; S=0x300fef15; @synthesize
@property(retain, nonatomic) NSString *softwareLayout;	// G=0x300ff461; S=0x300fef4d; @synthesize
+ (id)canonicalLanguageIdentifierFromIdentifier:(id)identifier;	// 0x300feded
+ (id)hardwareLayoutFromIdentifier:(id)identifier;	// 0x300fef5d
+ (id)keyboardInputModeWithIdentifier:(id)identifier;	// 0x300fec5d
+ (id)softwareLayoutFromIdentifier:(id)identifier;	// 0x300fef25
- (id)initWithIdentifier:(id)identifier;	// 0x300fed11
- (void)dealloc;	// 0x303e0df9
// declared property getter: - (id)hardwareLayout;	// 0x300ff471
// declared property getter: - (id)identifier;	// 0x300b59b1
// declared property getter: - (id)normalizedIdentifierLevels;	// 0x303e0eb9
// declared property getter: - (id)primaryLanguage;	// 0x300ff23d
// declared property setter: - (void)setHardwareLayout:(id)layout;	// 0x300fefb5
// declared property setter: - (void)setIdentifier:(id)identifier;	// 0x300feddd
// declared property setter: - (void)setPrimaryLanguage:(id)language;	// 0x300fef15
// declared property setter: - (void)setSoftwareLayout:(id)layout;	// 0x300fef4d
// declared property getter: - (id)softwareLayout;	// 0x300ff461
@end
