/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <ImageIO/NSObject.h>
#import "UIKit-Structs.h"

@class NSMutableArray;
@protocol UITextInput;

__attribute__((visibility("hidden")))
@interface UIDictationTestOps : NSObject {
	double _timeAfterInsertion;	// 4 = 0x4
	double _timeAfterSelectRange;	// 12 = 0xc
	id<UITextInput> _document;	// 20 = 0x14
	NSMutableArray *_operations;	// 24 = 0x18
}
@property(retain, nonatomic) NSMutableArray *operations;	// G=0x2f8351e1; S=0x2f8351f1; @synthesize=_operations
- (id)init;	// 0x2f834725
- (void)_performReplaceSelectedText:(id)text;	// 0x2f834e15
- (void)clearOperations;	// 0x2f834809
- (void)dealloc;	// 0x2f8347c5
- (double)delayAfterSelector:(SEL)selector;	// 0x2f83491d
- (void)dictationWillBeginInDocument:(id)dictation;	// 0x2f834c79
- (BOOL)hasOperations;	// 0x2f834869
- (BOOL)isEmpty;	// 0x2f835055
- (BOOL)isNotEmpty;	// 0x2f835085
// declared property getter: - (id)operations;	// 0x2f8351e1
- (void)performSelectRangeForSpeech:(id)speech;	// 0x2f834b99
- (id)pop;	// 0x2f834895
- (void)popAndInvoke;	// 0x2f8349b1
- (void)pushInsertTextForSpeech:(id)speech;	// 0x2f834d65
- (void)pushReplaceSelectionWithText:(id)text;	// 0x2f834edd
- (void)pushSelectRangeForSpeech:(NSRange)speech;	// 0x2f834c89
- (void)pushSpeechOperation:(id)operation;	// 0x2f834a9d
- (void)pushSpeechOperationWithTarget:(id)target selector:(SEL)selector object:(id)object;	// 0x2f834ac9
- (unsigned)selectionChangeDelta;	// 0x2f8350b1
- (void)setDocument:(id)document;	// 0x2f834c45
// declared property setter: - (void)setOperations:(id)operations;	// 0x2f8351f1
- (void)willEndEditingInInputDelegate:(id)inputDelegate;	// 0x2f834f99
@end
