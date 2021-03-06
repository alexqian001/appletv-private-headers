/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library

@class NSString, UIKeyboardInputMode, NSMutableArray, NSArray;
@protocol UIKeyboardInputModeControllerDelegate;

@interface UIKeyboardInputModeController : NSObject {
	UIKeyboardInputMode *_currentInputMode;	// 4 = 0x4
	NSMutableArray *_supportedInputModeIdentifiers;	// 8 = 0x8
	NSArray *_inputModesWithoutHardwareSupport;	// 12 = 0xc
	NSString *currentLocale;	// 16 = 0x10
	NSString *currentLanguage;	// 20 = 0x14
	NSArray *keyboardInputModes;	// 24 = 0x18
	NSArray *enabledInputModes;	// 28 = 0x1c
	NSArray *normalizedInputModes;	// 32 = 0x20
	NSArray *defaultKeyboardInputModes;	// 36 = 0x24
	NSArray *defaultInputModes;	// 40 = 0x28
	NSArray *defaultNormalizedInputModes;	// 44 = 0x2c
	id<UIKeyboardInputModeControllerDelegate> _delegate;	// 48 = 0x30
}
@property(readonly, assign, nonatomic) BOOL containsDictationSupportedInputMode;	// G=0x30c2d191; 
@property(retain) UIKeyboardInputMode *currentInputMode;	// G=0x30923a09; S=0x30c2d289; 
@property(retain) NSString *currentLanguage;	// G=0x309a7685; S=0x30986371; @synthesize
@property(retain) NSString *currentLocale;	// G=0x309a7671; S=0x30986361; @synthesize
@property(retain) NSArray *defaultInputModes;	// G=0x3098634d; S=0x30987fc9; @synthesize
@property(retain) NSArray *defaultKeyboardInputModes;	// G=0x3098800d; S=0x30987fa9; @synthesize
@property(retain) NSArray *defaultNormalizedInputModes;	// G=0x30987fd9; S=0x30987fb9; @synthesize
@property(assign, nonatomic) id<UIKeyboardInputModeControllerDelegate> delegate;	// G=0x30c2d609; S=0x30c2d619; @synthesize=_delegate
@property(readonly, assign) NSArray *enabledInputModeIdentifiers;	// G=0x309857cd; 
@property(readonly, assign) NSArray *enabledInputModeLanguages;	// G=0x30c2d6bd; 
@property(retain) NSArray *enabledInputModes;	// G=0x30988031; S=0x30987fed; @synthesize
@property(readonly, assign) NSArray *inputModesWithoutHardwareSupport;	// G=0x30c2d629; 
@property(retain) NSArray *keyboardInputModes;	// G=0x30c2d5e1; S=0x30988021; @synthesize
@property(readonly, assign) NSArray *normalizedEnabledInputModeIdentifiers;	// G=0x30c2d6a9; 
@property(retain) NSArray *normalizedInputModes;	// G=0x30c2d5f5; S=0x30987ffd; @synthesize
@property(readonly, assign) NSArray *supportedInputModeIdentifiers;	// G=0x30987251; 
+ (id)sharedInputModeController;	// 0x309239dd
- (id)activeInputModes;	// 0x30c2d161
- (void)clearCachedValues;	// 0x30c2d365
// declared property getter: - (BOOL)containsDictationSupportedInputMode;	// 0x30c2d191
// declared property getter: - (id)currentInputMode;	// 0x30923a09
// declared property getter: - (id)currentLanguage;	// 0x309a7685
// declared property getter: - (id)currentLocale;	// 0x309a7671
- (void)dealloc;	// 0x30c2cff1
- (id)defaultEnabledInputModesForCurrentLocale:(BOOL)currentLocale;	// 0x30985d39
// declared property getter: - (id)defaultInputModes;	// 0x3098634d
// declared property getter: - (id)defaultKeyboardInputModes;	// 0x3098800d
// declared property getter: - (id)defaultNormalizedInputModes;	// 0x30987fd9
// declared property getter: - (id)delegate;	// 0x30c2d609
// declared property getter: - (id)enabledInputModeIdentifiers;	// 0x309857cd
- (id)enabledInputModeIdentifiers:(BOOL)identifiers;	// 0x309857e1
// declared property getter: - (id)enabledInputModeLanguages;	// 0x30c2d6bd
// declared property getter: - (id)enabledInputModes;	// 0x30988031
- (id)inputModeWithIdentifier:(id)identifier;	// 0x30923d99
// declared property getter: - (id)inputModesWithoutHardwareSupport;	// 0x30c2d629
// declared property getter: - (id)keyboardInputModes;	// 0x30c2d5e1
// declared property getter: - (id)normalizedEnabledInputModeIdentifiers;	// 0x30c2d6a9
// declared property getter: - (id)normalizedInputModes;	// 0x30c2d5f5
// declared property setter: - (void)setCurrentInputMode:(id)mode;	// 0x30c2d289
// declared property setter: - (void)setCurrentLanguage:(id)language;	// 0x30986371
// declared property setter: - (void)setCurrentLocale:(id)locale;	// 0x30986361
// declared property setter: - (void)setDefaultInputModes:(id)modes;	// 0x30987fc9
// declared property setter: - (void)setDefaultKeyboardInputModes:(id)modes;	// 0x30987fa9
// declared property setter: - (void)setDefaultNormalizedInputModes:(id)modes;	// 0x30987fb9
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x30c2d619
// declared property setter: - (void)setEnabledInputModes:(id)modes;	// 0x30987fed
// declared property setter: - (void)setKeyboardInputModes:(id)modes;	// 0x30988021
// declared property setter: - (void)setNormalizedInputModes:(id)modes;	// 0x30987ffd
- (void)startConnectionForFileAtURL:(id)url forInputModeIdentifier:(id)inputModeIdentifier;	// 0x30c2d5d1
- (void)startDictationConnectionForFileAtURL:(id)url forInputModeIdentifier:(id)inputModeIdentifier;	// 0x30c2d4b1
// declared property getter: - (id)supportedInputModeIdentifiers;	// 0x30987251
- (void)updateCurrentInputMode:(id)mode;	// 0x309243b1
@end

