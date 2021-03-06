/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library

@class UIDocument;

__attribute__((visibility("hidden")))
@interface UIDocumentErrorRecoveryAttempter : NSObject {
	UIDocument *_document;	// 4 = 0x4
	id _wrappedRecoveryAttempter;	// 8 = 0x8
	id _continuerOrNil;	// 12 = 0xc
	int _silentRecoveryOptionIndex;	// 16 = 0x10
	id _appModalRecoveryAttempter;	// 20 = 0x14
	id _recoveryCancelerOrNil;	// 24 = 0x18
	struct {
		unsigned hasAutomaticAnimationItems : 1;
	} _errorRecoveryAttempterFlags;	// 28 = 0x1c
}
- (id)initWithDocument:(id)document silentRecoveryOptionIndex:(unsigned)index appModalRecoveryAttempter:(id)attempter recoveryCanceler:(id)canceler;	// 0x32e81255
- (id)initWithDocument:(id)document wrappedRecoveryAttempter:(id)attempter;	// 0x32e811dd
- (BOOL)attemptRecoveryFromError:(id)error optionIndex:(unsigned)index;	// 0x32e813c5
- (BOOL)attemptSilentRecoveryFromError:(id)error error:(id *)error2;	// 0x32e81445
- (void)cancelRecovery;	// 0x32e81511
- (void)dealloc;	// 0x32e81301
@end

