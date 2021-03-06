/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

#import <NSObject.h> // Unknown library

@class NSString;

@interface TIKeyboardInputManagerConfig : NSObject {
	BOOL allowsSpaceCorrections;	// 4 = 0x4
	NSString *dynamicDictionaryPath;	// 8 = 0x8
	NSString *inputMode;	// 12 = 0xc
	NSString *ngramModelPath;	// 16 = 0x10
	NSString *staticDictionaryPath;	// 20 = 0x14
	BOOL testing;	// 24 = 0x18
	BOOL usesTextChecker;	// 25 = 0x19
	BOOL usesAutocorrectionLists;	// 26 = 0x1a
	BOOL usesExtendedLearning;	// 27 = 0x1b
	BOOL usesRetrocorrection;	// 28 = 0x1c
}
@property(assign, nonatomic) BOOL allowsSpaceCorrections;	// G=0x37224d69; S=0x37224d79; @synthesize
@property(copy, nonatomic) NSString *dynamicDictionaryPath;	// G=0x37224d89; S=0x37224d9d; @synthesize
@property(copy, nonatomic) NSString *inputMode;	// G=0x37224dad; S=0x37224dc1; @synthesize
@property(copy, nonatomic) NSString *ngramModelPath;	// G=0x37224dd1; S=0x37224de5; @synthesize
@property(copy, nonatomic) NSString *staticDictionaryPath;	// G=0x37224df5; S=0x37224e09; @synthesize
@property(assign, nonatomic, getter=isTesting) BOOL testing;	// G=0x37224e19; S=0x37224e29; @synthesize
@property(assign, nonatomic) BOOL usesAutocorrectionLists;	// G=0x37224e59; S=0x37224e69; @synthesize
@property(assign, nonatomic) BOOL usesExtendedLearning;	// G=0x37224e79; S=0x37224e89; @synthesize
@property(assign, nonatomic) BOOL usesRetrocorrection;	// G=0x37224e99; S=0x37224ea9; @synthesize
@property(assign, nonatomic) BOOL usesTextChecker;	// G=0x37224e39; S=0x37224e49; @synthesize
+ (id)configurationFromUIKit;	// 0x37224b91
// declared property getter: - (BOOL)allowsSpaceCorrections;	// 0x37224d69
- (void)dealloc;	// 0x37224ce9
// declared property getter: - (id)dynamicDictionaryPath;	// 0x37224d89
// declared property getter: - (id)inputMode;	// 0x37224dad
// declared property getter: - (BOOL)isTesting;	// 0x37224e19
// declared property getter: - (id)ngramModelPath;	// 0x37224dd1
// declared property setter: - (void)setAllowsSpaceCorrections:(BOOL)corrections;	// 0x37224d79
// declared property setter: - (void)setDynamicDictionaryPath:(id)path;	// 0x37224d9d
// declared property setter: - (void)setInputMode:(id)mode;	// 0x37224dc1
// declared property setter: - (void)setNgramModelPath:(id)path;	// 0x37224de5
// declared property setter: - (void)setStaticDictionaryPath:(id)path;	// 0x37224e09
// declared property setter: - (void)setTesting:(BOOL)testing;	// 0x37224e29
// declared property setter: - (void)setUsesAutocorrectionLists:(BOOL)lists;	// 0x37224e69
// declared property setter: - (void)setUsesExtendedLearning:(BOOL)learning;	// 0x37224e89
// declared property setter: - (void)setUsesRetrocorrection:(BOOL)retrocorrection;	// 0x37224ea9
// declared property setter: - (void)setUsesTextChecker:(BOOL)checker;	// 0x37224e49
// declared property getter: - (id)staticDictionaryPath;	// 0x37224df5
// declared property getter: - (BOOL)usesAutocorrectionLists;	// 0x37224e59
// declared property getter: - (BOOL)usesExtendedLearning;	// 0x37224e79
// declared property getter: - (BOOL)usesRetrocorrection;	// 0x37224e99
// declared property getter: - (BOOL)usesTextChecker;	// 0x37224e39
@end

