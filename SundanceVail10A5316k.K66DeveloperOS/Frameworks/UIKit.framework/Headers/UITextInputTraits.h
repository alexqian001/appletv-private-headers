/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UITextInputTraits_Private.h"
#import <NSObject.h> // Unknown library
#import "NSObject.h"
#import "UIKit-Structs.h"
#import "UITextInputTraits.h"
#import "NSCopying.h"

@class UIColor, UIImage;

@protocol UITextInputTraits <NSObject>
@optional
@property(assign, nonatomic) int autocapitalizationType;
@property(assign, nonatomic) int autocorrectionType;
@property(assign, nonatomic) BOOL enablesReturnKeyAutomatically;
@property(assign, nonatomic) int keyboardAppearance;
@property(assign, nonatomic) int keyboardType;
@property(assign, nonatomic) int returnKeyType;
@property(assign, nonatomic, getter=isSecureTextEntry) BOOL secureTextEntry;
@property(assign, nonatomic) int spellCheckingType;
// declared property getter: - (int)autocapitalizationType;
// declared property getter: - (int)autocorrectionType;
// declared property getter: - (BOOL)enablesReturnKeyAutomatically;
// declared property getter: - (BOOL)isSecureTextEntry;
// declared property getter: - (int)keyboardAppearance;
// declared property getter: - (int)keyboardType;
// declared property getter: - (int)returnKeyType;
// declared property setter: - (void)setAutocapitalizationType:(int)type;
// declared property setter: - (void)setAutocorrectionType:(int)type;
// declared property setter: - (void)setEnablesReturnKeyAutomatically:(BOOL)automatically;
// declared property setter: - (void)setKeyboardAppearance:(int)appearance;
// declared property setter: - (void)setKeyboardType:(int)type;
// declared property setter: - (void)setReturnKeyType:(int)type;
// declared property setter: - (void)setSecureTextEntry:(BOOL)entry;
// declared property setter: - (void)setSpellCheckingType:(int)type;
// declared property getter: - (int)spellCheckingType;
@end

@interface UITextInputTraits : NSObject <UITextInputTraits, UITextInputTraits_Private, NSCopying> {
	int autocapitalizationType;	// 4 = 0x4
	int autocorrectionType;	// 8 = 0x8
	int spellCheckingType;	// 12 = 0xc
	unsigned keyboardType : 8;	// 16 = 0x10
	unsigned keyboardAppearance : 8;	// 17 = 0x11
	int returnKeyType;	// 20 = 0x14
	BOOL enablesReturnKeyAutomatically;	// 24 = 0x18
	BOOL secureTextEntry;	// 25 = 0x19
	CFCharacterSetRef textTrimmingSet;	// 28 = 0x1c
	UIColor *insertionPointColor;	// 32 = 0x20
	UIColor *selectionBarColor;	// 36 = 0x24
	UIColor *selectionHighlightColor;	// 40 = 0x28
	UIImage *selectionDragDotImage;	// 44 = 0x2c
	unsigned insertionPointWidth;	// 48 = 0x30
	int textLoupeVisibility;	// 52 = 0x34
	int textSelectionBehavior;	// 56 = 0x38
	id textSuggestionDelegate;	// 60 = 0x3c
	BOOL contentsIsSingleValue;	// 64 = 0x40
	BOOL acceptsEmoji;	// 65 = 0x41
	BOOL returnKeyGoesToNextResponder;	// 66 = 0x42
	BOOL acceptsFloatingKeyboard;	// 67 = 0x43
	BOOL acceptsSplitKeyboard;	// 68 = 0x44
	BOOL displaySecureTextUsingPlainText;	// 69 = 0x45
	BOOL learnsCorrections;	// 70 = 0x46
	int emptyContentReturnKeyType;	// 72 = 0x48
	int shortcutConversionType;	// 76 = 0x4c
	BOOL suppressReturnKeyStyling;	// 80 = 0x50
	BOOL forceEnableDictation;	// 81 = 0x51
	BOOL useInterfaceLanguageForLocalization;	// 82 = 0x52
	BOOL deferBecomingResponder;	// 83 = 0x53
}
@property(assign, nonatomic) BOOL acceptsEmoji;	// G=0x300fc5dd; S=0x30110ca1; @synthesize
@property(assign, nonatomic) BOOL acceptsFloatingKeyboard;	// G=0x300fc60d; S=0x302db1b9; @synthesize
@property(assign, nonatomic) BOOL acceptsSplitKeyboard;	// G=0x300fc61d; S=0x302db1c9; @synthesize
@property(assign, nonatomic) int autocapitalizationType;	// G=0x300fc4ad; S=0x3010ed85; @synthesize
@property(assign, nonatomic) int autocorrectionType;	// G=0x300fc4bd; S=0x300d5955; @synthesize
@property(assign, nonatomic) BOOL contentsIsSingleValue;	// G=0x300fc5cd; S=0x301a6221; @synthesize
@property(assign, nonatomic) BOOL deferBecomingResponder;	// G=0x302db249; S=0x302db259; @synthesize
@property(assign, nonatomic) BOOL displaySecureTextUsingPlainText;	// G=0x300fc62d; S=0x302db1d9; @synthesize
@property(assign, nonatomic) int emptyContentReturnKeyType;	// G=0x300fc5fd; S=0x302db199; @synthesize
@property(assign, nonatomic) BOOL enablesReturnKeyAutomatically;	// G=0x300fc50d; S=0x300d5545; @synthesize
@property(assign, nonatomic) BOOL forceEnableDictation;	// G=0x302db209; S=0x302db219; @synthesize
@property(retain, nonatomic) UIColor *insertionPointColor;	// G=0x300fc54d; S=0x300d3881; @synthesize
@property(assign, nonatomic) unsigned insertionPointWidth;	// G=0x300fc58d; S=0x302db189; @synthesize
@property(assign, nonatomic) int keyboardAppearance;	// G=0x300fc4ed; S=0x302db179; @synthesize
@property(assign, nonatomic) int keyboardType;	// G=0x300fc4dd; S=0x3010eda5; @synthesize
@property(assign, nonatomic) BOOL learnsCorrections;	// G=0x300fc63d; S=0x302db1e9; @synthesize
@property(assign, nonatomic) BOOL returnKeyGoesToNextResponder;	// G=0x300fc5ed; S=0x302db1a9; @synthesize
@property(assign, nonatomic) int returnKeyType;	// G=0x300fc4fd; S=0x300d5535; @synthesize
@property(assign, nonatomic, getter=isSecureTextEntry) BOOL secureTextEntry;	// G=0x300a5ee1; S=0x302da749; @synthesize
@property(retain, nonatomic) UIColor *selectionBarColor;	// G=0x300fc55d; S=0x300d3891; @synthesize
@property(retain, nonatomic) UIImage *selectionDragDotImage;	// G=0x300fc57d; S=0x300d3979; @synthesize
@property(retain, nonatomic) UIColor *selectionHighlightColor;	// G=0x300fc56d; S=0x300d3969; @synthesize
@property(assign, nonatomic) int shortcutConversionType;	// G=0x300fc64d; S=0x302db1f9; @synthesize
@property(assign, nonatomic) int spellCheckingType;	// G=0x300fc4cd; S=0x3010ed95; @synthesize
@property(assign, nonatomic) BOOL suppressReturnKeyStyling;	// G=0x300fc65d; S=0x301ece31; @synthesize
@property(assign, nonatomic) int textLoupeVisibility;	// G=0x300fc59d; S=0x30148b09; @synthesize
@property(assign, nonatomic) int textSelectionBehavior;	// G=0x300fc5ad; S=0x30165581; @synthesize
@property(assign, nonatomic) id textSuggestionDelegate;	// G=0x300fc5bd; S=0x301a6231; @dynamic
@property(assign, nonatomic) CFCharacterSetRef textTrimmingSet;	// G=0x300a5c71; S=0x300fc51d; @dynamic
@property(assign, nonatomic) BOOL useInterfaceLanguageForLocalization;	// G=0x302db229; S=0x302db239; @synthesize
+ (id)defaultTextInputTraits;	// 0x301d0815
+ (BOOL)keyboardTypeRequiresASCIICapable:(int)capable;	// 0x301693b1
+ (id)traitsByAdoptingTraits:(id)traits;	// 0x30168561
- (id)init;	// 0x300d3549
// declared property getter: - (BOOL)acceptsEmoji;	// 0x300fc5dd
// declared property getter: - (BOOL)acceptsFloatingKeyboard;	// 0x300fc60d
// declared property getter: - (BOOL)acceptsSplitKeyboard;	// 0x300fc61d
// declared property getter: - (int)autocapitalizationType;	// 0x300fc4ad
// declared property getter: - (int)autocorrectionType;	// 0x300fc4bd
// declared property getter: - (BOOL)contentsIsSingleValue;	// 0x300fc5cd
- (id)copyWithZone:(NSZone *)zone;	// 0x300fba11
- (void)dealloc;	// 0x3010ca15
// declared property getter: - (BOOL)deferBecomingResponder;	// 0x302db249
- (id)description;	// 0x302da771
- (id)dictionaryRepresentation;	// 0x302da4f1
// declared property getter: - (BOOL)displaySecureTextUsingPlainText;	// 0x300fc62d
// declared property getter: - (int)emptyContentReturnKeyType;	// 0x300fc5fd
// declared property getter: - (BOOL)enablesReturnKeyAutomatically;	// 0x300fc50d
// declared property getter: - (BOOL)forceEnableDictation;	// 0x302db209
// declared property getter: - (id)insertionPointColor;	// 0x300fc54d
// declared property getter: - (unsigned)insertionPointWidth;	// 0x300fc58d
- (BOOL)isEqual:(id)equal;	// 0x302dad2d
// declared property getter: - (BOOL)isSecureTextEntry;	// 0x300a5ee1
// declared property getter: - (int)keyboardAppearance;	// 0x300fc4ed
// declared property getter: - (int)keyboardType;	// 0x300fc4dd
// declared property getter: - (BOOL)learnsCorrections;	// 0x300fc63d
// declared property getter: - (BOOL)returnKeyGoesToNextResponder;	// 0x300fc5ed
// declared property getter: - (int)returnKeyType;	// 0x300fc4fd
// declared property getter: - (id)selectionBarColor;	// 0x300fc55d
// declared property getter: - (id)selectionDragDotImage;	// 0x300fc57d
// declared property getter: - (id)selectionHighlightColor;	// 0x300fc56d
// declared property setter: - (void)setAcceptsEmoji:(BOOL)emoji;	// 0x30110ca1
// declared property setter: - (void)setAcceptsFloatingKeyboard:(BOOL)keyboard;	// 0x302db1b9
// declared property setter: - (void)setAcceptsSplitKeyboard:(BOOL)keyboard;	// 0x302db1c9
// declared property setter: - (void)setAutocapitalizationType:(int)type;	// 0x3010ed85
// declared property setter: - (void)setAutocorrectionType:(int)type;	// 0x300d5955
// declared property setter: - (void)setContentsIsSingleValue:(BOOL)value;	// 0x301a6221
// declared property setter: - (void)setDeferBecomingResponder:(BOOL)responder;	// 0x302db259
// declared property setter: - (void)setDisplaySecureTextUsingPlainText:(BOOL)text;	// 0x302db1d9
// declared property setter: - (void)setEmptyContentReturnKeyType:(int)type;	// 0x302db199
// declared property setter: - (void)setEnablesReturnKeyAutomatically:(BOOL)automatically;	// 0x300d5545
// declared property setter: - (void)setForceEnableDictation:(BOOL)dictation;	// 0x302db219
// declared property setter: - (void)setInsertionPointColor:(id)color;	// 0x300d3881
// declared property setter: - (void)setInsertionPointWidth:(unsigned)width;	// 0x302db189
// declared property setter: - (void)setKeyboardAppearance:(int)appearance;	// 0x302db179
// declared property setter: - (void)setKeyboardType:(int)type;	// 0x3010eda5
// declared property setter: - (void)setLearnsCorrections:(BOOL)corrections;	// 0x302db1e9
// declared property setter: - (void)setReturnKeyGoesToNextResponder:(BOOL)nextResponder;	// 0x302db1a9
// declared property setter: - (void)setReturnKeyType:(int)type;	// 0x300d5535
// declared property setter: - (void)setSecureTextEntry:(BOOL)entry;	// 0x302da749
// declared property setter: - (void)setSelectionBarColor:(id)color;	// 0x300d3891
// declared property setter: - (void)setSelectionDragDotImage:(id)image;	// 0x300d3979
// declared property setter: - (void)setSelectionHighlightColor:(id)color;	// 0x300d3969
// declared property setter: - (void)setShortcutConversionType:(int)type;	// 0x302db1f9
// declared property setter: - (void)setSpellCheckingType:(int)type;	// 0x3010ed95
// declared property setter: - (void)setSuppressReturnKeyStyling:(BOOL)styling;	// 0x301ece31
// declared property setter: - (void)setTextLoupeVisibility:(int)visibility;	// 0x30148b09
// declared property setter: - (void)setTextSelectionBehavior:(int)behavior;	// 0x30165581
// declared property setter: - (void)setTextSuggestionDelegate:(id)delegate;	// 0x301a6231
// declared property setter: - (void)setTextTrimmingSet:(CFCharacterSetRef)set;	// 0x300fc51d
- (void)setToDefaultValues;	// 0x300d3591
- (void)setToSecureValues;	// 0x302da47d
// declared property setter: - (void)setUseInterfaceLanguageForLocalization:(BOOL)localization;	// 0x302db239
// declared property getter: - (int)shortcutConversionType;	// 0x300fc64d
// declared property getter: - (int)spellCheckingType;	// 0x300fc4cd
// declared property getter: - (BOOL)suppressReturnKeyStyling;	// 0x300fc65d
- (void)takeTraitsFrom:(id)from;	// 0x300fba5d
// declared property getter: - (int)textLoupeVisibility;	// 0x300fc59d
// declared property getter: - (int)textSelectionBehavior;	// 0x300fc5ad
// declared property getter: - (id)textSuggestionDelegate;	// 0x300fc5bd
// declared property getter: - (CFCharacterSetRef)textTrimmingSet;	// 0x300a5c71
// declared property getter: - (BOOL)useInterfaceLanguageForLocalization;	// 0x302db229
@end
