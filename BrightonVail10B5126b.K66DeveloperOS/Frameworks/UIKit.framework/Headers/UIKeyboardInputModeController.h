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
@property(readonly, assign, nonatomic) BOOL containsDictationSupportedInputMode;	// G=0x32e637a9; 
@property(retain) UIKeyboardInputMode *currentInputMode;	// G=0x32b59a21; S=0x32e638a1; 
@property(retain) NSString *currentLanguage;	// G=0x32bdd6e5; S=0x32bbc391; @synthesize
@property(retain) NSString *currentLocale;	// G=0x32bdd6d1; S=0x32bbc381; @synthesize
@property(retain) NSArray *defaultInputModes;	// G=0x32bbc36d; S=0x32bbdfe9; @synthesize
@property(retain) NSArray *defaultKeyboardInputModes;	// G=0x32bbe02d; S=0x32bbdfc9; @synthesize
@property(retain) NSArray *defaultNormalizedInputModes;	// G=0x32bbdff9; S=0x32bbdfd9; @synthesize
@property(assign, nonatomic) id<UIKeyboardInputModeControllerDelegate> delegate;	// G=0x32e63c21; S=0x32e63c31; @synthesize=_delegate
@property(readonly, assign) NSArray *enabledInputModeIdentifiers;	// G=0x32bbb7ed; 
@property(readonly, assign) NSArray *enabledInputModeLanguages;	// G=0x32e63cd5; 
@property(retain) NSArray *enabledInputModes;	// G=0x32bbe051; S=0x32bbe00d; @synthesize
@property(readonly, assign) NSArray *inputModesWithoutHardwareSupport;	// G=0x32e63c41; 
@property(retain) NSArray *keyboardInputModes;	// G=0x32e63bf9; S=0x32bbe041; @synthesize
@property(readonly, assign) NSArray *normalizedEnabledInputModeIdentifiers;	// G=0x32e63cc1; 
@property(retain) NSArray *normalizedInputModes;	// G=0x32e63c0d; S=0x32bbe01d; @synthesize
@property(readonly, assign) NSArray *supportedInputModeIdentifiers;	// G=0x32bbd271; 
+ (id)sharedInputModeController;	// 0x32b599f5
- (id)activeInputModes;	// 0x32e63779
- (void)clearCachedValues;	// 0x32e6397d
// declared property getter: - (BOOL)containsDictationSupportedInputMode;	// 0x32e637a9
// declared property getter: - (id)currentInputMode;	// 0x32b59a21
// declared property getter: - (id)currentLanguage;	// 0x32bdd6e5
// declared property getter: - (id)currentLocale;	// 0x32bdd6d1
- (void)dealloc;	// 0x32e63609
- (id)defaultEnabledInputModesForCurrentLocale:(BOOL)currentLocale;	// 0x32bbbd59
// declared property getter: - (id)defaultInputModes;	// 0x32bbc36d
// declared property getter: - (id)defaultKeyboardInputModes;	// 0x32bbe02d
// declared property getter: - (id)defaultNormalizedInputModes;	// 0x32bbdff9
// declared property getter: - (id)delegate;	// 0x32e63c21
// declared property getter: - (id)enabledInputModeIdentifiers;	// 0x32bbb7ed
- (id)enabledInputModeIdentifiers:(BOOL)identifiers;	// 0x32bbb801
// declared property getter: - (id)enabledInputModeLanguages;	// 0x32e63cd5
// declared property getter: - (id)enabledInputModes;	// 0x32bbe051
- (id)inputModeWithIdentifier:(id)identifier;	// 0x32b59db1
// declared property getter: - (id)inputModesWithoutHardwareSupport;	// 0x32e63c41
// declared property getter: - (id)keyboardInputModes;	// 0x32e63bf9
// declared property getter: - (id)normalizedEnabledInputModeIdentifiers;	// 0x32e63cc1
// declared property getter: - (id)normalizedInputModes;	// 0x32e63c0d
// declared property setter: - (void)setCurrentInputMode:(id)mode;	// 0x32e638a1
// declared property setter: - (void)setCurrentLanguage:(id)language;	// 0x32bbc391
// declared property setter: - (void)setCurrentLocale:(id)locale;	// 0x32bbc381
// declared property setter: - (void)setDefaultInputModes:(id)modes;	// 0x32bbdfe9
// declared property setter: - (void)setDefaultKeyboardInputModes:(id)modes;	// 0x32bbdfc9
// declared property setter: - (void)setDefaultNormalizedInputModes:(id)modes;	// 0x32bbdfd9
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x32e63c31
// declared property setter: - (void)setEnabledInputModes:(id)modes;	// 0x32bbe00d
// declared property setter: - (void)setKeyboardInputModes:(id)modes;	// 0x32bbe041
// declared property setter: - (void)setNormalizedInputModes:(id)modes;	// 0x32bbe01d
- (void)startConnectionForFileAtURL:(id)url forInputModeIdentifier:(id)inputModeIdentifier;	// 0x32e63be9
- (void)startDictationConnectionForFileAtURL:(id)url forInputModeIdentifier:(id)inputModeIdentifier;	// 0x32e63ac9
// declared property getter: - (id)supportedInputModeIdentifiers;	// 0x32bbd271
- (void)updateCurrentInputMode:(id)mode;	// 0x32b5a3c9
@end
