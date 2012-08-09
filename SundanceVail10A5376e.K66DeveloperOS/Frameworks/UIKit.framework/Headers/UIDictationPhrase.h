/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library

@class NSString, NSArray;

@interface UIDictationPhrase : NSObject {
	NSString *_text;	// 4 = 0x4
	NSArray *_alternativeInterpretations;	// 8 = 0x8
}
@property(readonly, assign, nonatomic) NSArray *alternativeInterpretations;	// G=0x3051d355; @synthesize=_alternativeInterpretations
@property(readonly, assign, nonatomic) NSString *text;	// G=0x3051d345; @synthesize=_text
+ (id)phraseWithText:(id)text alternativeInterpretations:(id)interpretations;	// 0x3051d1b5
- (id)initWithText:(id)text alternativeInterpretations:(id)interpretations;	// 0x3051d0d9
// declared property getter: - (id)alternativeInterpretations;	// 0x3051d355
- (void)dealloc;	// 0x3051d151
- (id)description;	// 0x3051d201
// declared property getter: - (id)text;	// 0x3051d345
@end
