/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBook.framework/AddressBook
 */

#import <NSObject.h> // Unknown library


@interface ABTCC : NSObject {
	/*function-pointer*/ void *_accessChangeCallback;	// 4 = 0x4
	int _accessPreflightResult;	// 8 = 0x8
	int _simulateType;	// 12 = 0xc
	BOOL _simulateAccessPrompt;	// 16 = 0x10
	BOOL _simulateAccessPromptGranted;	// 17 = 0x11
	unsigned _simulateAccessPromptDelay;	// 20 = 0x14
}
@property(assign, nonatomic) /*function-pointer*/ void *accessChangeCallback;	// G=0x31b6aea9; S=0x31b6ab85; @synthesize=_accessChangeCallback
+ (id)sharedInstance;	// 0x31b6aa1d
- (id)init;	// 0x31b6ab09
- (void)_simulateAccessPrompt;	// 0x31b6adc9
- (id)_simulateQueue;	// 0x31b6ad79
// declared property getter: - (/*function-pointer*/ void *)accessChangeCallback;	// 0x31b6aea9
- (int)accessPreflight;	// 0x31b6ab9d
- (bool)accessRequest;	// 0x31b6abf9
- (void)dealloc;	// 0x31b6ab59
// declared property setter: - (void)setAccessChangeCallback:(/*function-pointer*/ void *)callback;	// 0x31b6ab85
- (void)simulate:(int)simulate;	// 0x31b6ad29
- (void)simulateAccessPromptGranted:(BOOL)granted withDelay:(unsigned)delay;	// 0x31b6ad49
@end
